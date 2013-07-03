/* $NetBSD: sunos_syscalls.c,v 1.85 2010/03/03 11:08:00 pooka Exp $ */

/*
 * System call names.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.75 2010/03/03 11:07:17 pooka Exp
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: sunos_syscalls.c,v 1.85 2010/03/03 11:08:00 pooka Exp $");

#if defined(_KERNEL_OPT)
#if defined(_KERNEL_OPT)
#include "opt_sysv.h"
#endif
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/mount.h>
#include <sys/poll.h>
#include <sys/sched.h>
#include <sys/syscallargs.h>
#include <compat/sunos/sunos.h>
#include <compat/sunos/sunos_syscallargs.h>
#endif /* _KERNEL_OPT */

const char *const sunos_syscallnames[] = {
	/*   0 */	"syscall",
	/*   1 */	"exit",
	/*   2 */	"fork",
	/*   3 */	"read",
	/*   4 */	"write",
	/*   5 */	"open",
	/*   6 */	"close",
	/*   7 */	"wait4",
	/*   8 */	"creat",
	/*   9 */	"link",
	/*  10 */	"unlink",
	/*  11 */	"execv",
	/*  12 */	"chdir",
	/*  13 */	"#13 (obsolete old_time)",
	/*  14 */	"mknod",
	/*  15 */	"chmod",
	/*  16 */	"chown",
	/*  17 */	"break",
	/*  18 */	"#18 (obsolete old_stat)",
	/*  19 */	"lseek",
	/*  20 */	"getpid_with_ppid",
	/*  21 */	"#21 (obsolete sunos_old_mount)",
	/*  22 */	"#22 (unimplemented System V umount)",
	/*  23 */	"setuid",
	/*  24 */	"getuid_with_euid",
	/*  25 */	"stime",
	/*  26 */	"ptrace",
	/*  27 */	"#27 (unimplemented old_sunos_alarm)",
	/*  28 */	"#28 (unimplemented old_sunos_fstat)",
	/*  29 */	"#29 (unimplemented old_sunos_pause)",
	/*  30 */	"#30 (unimplemented old_sunos_utime)",
	/*  31 */	"#31 (unimplemented old_sunos_stty)",
	/*  32 */	"#32 (unimplemented old_sunos_gtty)",
	/*  33 */	"access",
	/*  34 */	"#34 (unimplemented old_sunos_nice)",
	/*  35 */	"#35 (unimplemented old_sunos_ftime)",
	/*  36 */	"sync",
	/*  37 */	"kill",
	/*  38 */	"stat",
	/*  39 */	"#39 (unimplemented sunos_setpgrp)",
	/*  40 */	"lstat",
	/*  41 */	"dup",
	/*  42 */	"pipe",
	/*  43 */	"#43 (unimplemented sunos_times)",
	/*  44 */	"profil",
	/*  45 */	"#45 (unimplemented)",
	/*  46 */	"setgid",
	/*  47 */	"getgid_with_egid",
	/*  48 */	"#48 (unimplemented sunos_ssig)",
	/*  49 */	"#49 (unimplemented reserved for USG)",
	/*  50 */	"#50 (unimplemented reserved for USG)",
	/*  51 */	"acct",
	/*  52 */	"#52 (unimplemented)",
	/*  53 */	"mctl",
	/*  54 */	"ioctl",
	/*  55 */	"reboot",
	/*  56 */	"#56 (obsolete sunos_owait3)",
	/*  57 */	"symlink",
	/*  58 */	"readlink",
	/*  59 */	"execve",
	/*  60 */	"umask",
	/*  61 */	"chroot",
	/*  62 */	"fstat",
	/*  63 */	"#63 (unimplemented)",
	/*  64 */	"getpagesize",
	/*  65 */	"omsync",
	/*  66 */	"vfork",
	/*  67 */	"#67 (obsolete vread)",
	/*  68 */	"#68 (obsolete vwrite)",
	/*  69 */	"sbrk",
	/*  70 */	"sstk",
	/*  71 */	"mmap",
	/*  72 */	"vadvise",
	/*  73 */	"munmap",
	/*  74 */	"mprotect",
	/*  75 */	"madvise",
	/*  76 */	"vhangup",
	/*  77 */	"#77 (unimplemented vlimit)",
	/*  78 */	"mincore",
	/*  79 */	"getgroups",
	/*  80 */	"setgroups",
	/*  81 */	"getpgrp",
	/*  82 */	"setpgrp",
	/*  83 */	"setitimer",
	/*  84 */	"#84 (unimplemented sunos_sys_wait)",
	/*  85 */	"swapon",
	/*  86 */	"getitimer",
	/*  87 */	"gethostname",
	/*  88 */	"sethostname",
	/*  89 */	"getdtablesize",
	/*  90 */	"dup2",
	/*  91 */	"#91 (unimplemented getdopt)",
	/*  92 */	"fcntl",
	/*  93 */	"select",
	/*  94 */	"#94 (unimplemented setdopt)",
	/*  95 */	"fsync",
	/*  96 */	"setpriority",
	/*  97 */	"socket",
	/*  98 */	"connect",
	/*  99 */	"accept",
	/* 100 */	"getpriority",
	/* 101 */	"send",
	/* 102 */	"recv",
	/* 103 */	"#103 (unimplemented old socketaddr)",
	/* 104 */	"bind",
	/* 105 */	"setsockopt",
	/* 106 */	"listen",
	/* 107 */	"#107 (unimplemented vtimes)",
	/* 108 */	"sigvec",
	/* 109 */	"sigblock",
	/* 110 */	"sigsetmask",
	/* 111 */	"sigsuspend",
	/* 112 */	"sigstack",
	/* 113 */	"recvmsg",
	/* 114 */	"sendmsg",
	/* 115 */	"#115 (obsolete vtrace)",
	/* 116 */	"gettimeofday",
	/* 117 */	"getrusage",
	/* 118 */	"getsockopt",
	/* 119 */	"#119 (unimplemented)",
	/* 120 */	"readv",
	/* 121 */	"writev",
	/* 122 */	"settimeofday",
	/* 123 */	"fchown",
	/* 124 */	"fchmod",
	/* 125 */	"recvfrom",
	/* 126 */	"setreuid",
	/* 127 */	"setregid",
	/* 128 */	"rename",
	/* 129 */	"truncate",
	/* 130 */	"ftruncate",
	/* 131 */	"flock",
	/* 132 */	"#132 (unimplemented)",
	/* 133 */	"sendto",
	/* 134 */	"shutdown",
	/* 135 */	"socketpair",
	/* 136 */	"mkdir",
	/* 137 */	"rmdir",
	/* 138 */	"utimes",
	/* 139 */	"sigreturn",
	/* 140 */	"adjtime",
	/* 141 */	"getpeername",
	/* 142 */	"gethostid",
	/* 143 */	"#143 (unimplemented old sethostid)",
	/* 144 */	"getrlimit",
	/* 145 */	"setrlimit",
	/* 146 */	"killpg",
	/* 147 */	"#147 (unimplemented)",
	/* 148 */	"#148 (unimplemented)",
	/* 149 */	"#149 (unimplemented)",
	/* 150 */	"getsockname",
	/* 151 */	"#151 (unimplemented getmsg)",
	/* 152 */	"#152 (unimplemented putmsg)",
	/* 153 */	"poll",
	/* 154 */	"#154 (unimplemented)",
	/* 155 */	"#155 (unimplemented nfssvc)",
	/* 156 */	"getdirentries",
	/* 157 */	"statfs",
	/* 158 */	"fstatfs",
	/* 159 */	"unmount",
	/* 160 */	"async_daemon",
	/* 161 */	"getfh",
	/* 162 */	"getdomainname",
	/* 163 */	"setdomainname",
	/* 164 */	"#164 (unimplemented rtschedule)",
	/* 165 */	"quotactl",
	/* 166 */	"exportfs",
	/* 167 */	"mount",
	/* 168 */	"ustat",
#ifdef SYSVSEM
	/* 169 */	"semsys",
#else
	/* 169 */	"#169 (unimplemented semsys)",
#endif
#ifdef SYSVMSG
	/* 170 */	"msgsys",
#else
	/* 170 */	"#170 (unimplemented msgsys)",
#endif
#ifdef SYSVSHM
	/* 171 */	"shmsys",
#else
	/* 171 */	"#171 (unimplemented shmsys)",
#endif
	/* 172 */	"auditsys",
	/* 173 */	"#173 (unimplemented rfssys)",
	/* 174 */	"getdents",
	/* 175 */	"setsid",
	/* 176 */	"fchdir",
	/* 177 */	"fchroot",
	/* 178 */	"#178 (unimplemented vpixsys)",
	/* 179 */	"#179 (unimplemented aioread)",
	/* 180 */	"#180 (unimplemented aiowrite)",
	/* 181 */	"#181 (unimplemented aiowait)",
	/* 182 */	"#182 (unimplemented aiocancel)",
	/* 183 */	"sigpending",
	/* 184 */	"#184 (unimplemented)",
	/* 185 */	"setpgid",
	/* 186 */	"pathconf",
	/* 187 */	"fpathconf",
	/* 188 */	"sysconf",
	/* 189 */	"uname",
};
