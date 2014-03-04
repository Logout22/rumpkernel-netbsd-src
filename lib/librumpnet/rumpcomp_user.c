#include <inttypes.h>
#include <stdio.h>

#include "rumpcomp_user.h"
#include "swarm_client_ipc.c"

// TODO SO_REUSEPORT
int rumpcomp_librumpnet_hive_request_port(
        uint16_t port, int32_t *p_bind_result,
        int netbsd_kernel_protocol) {
	int err;
	if ((err = request_hive_bind_proc(netbsd_kernel_protocol, port, 0))) {
		//DPRINTF(("Failed to send bind request: %d\n", err));
		return EINVAL;
	}

	uint32_t ret_msg;
	if ((ret_msg = rcv_message_type_sock()) != HIVE_BIND_REPLY) {
		//DPRINTF(("Received wrong message header from Hive: %d\n", ret_msg));
		return EINVAL;
	}

	if ((err = rcv_reply_hive_bind(p_bind_result))) {
		//DPRINTF(("Failed to receive bind result: %d\n", err));
		return EINVAL;
	}
	return 0;
}

