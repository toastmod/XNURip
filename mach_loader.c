typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;
typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
typedef int __darwin_ct_rune_t;
typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;
typedef __mbstate_t __darwin_mbstate_t;
typedef long int __darwin_ptrdiff_t;
typedef long unsigned int __darwin_size_t;
typedef __builtin_va_list __darwin_va_list;
typedef int __darwin_wchar_t;
typedef __darwin_wchar_t __darwin_rune_t;
typedef int __darwin_wint_t;
typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;
typedef __uint32_t __darwin_ino_t;
typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;
typedef int64_t register_t;

typedef __darwin_intptr_t intptr_t;
typedef unsigned long uintptr_t;
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;
typedef __uint64_t user64_addr_t __attribute__((aligned(8)));
typedef __uint64_t user64_size_t __attribute__((aligned(8)));
typedef __int64_t user64_ssize_t __attribute__((aligned(8)));
typedef __int64_t user64_long_t __attribute__((aligned(8)));
typedef __uint64_t user64_ulong_t __attribute__((aligned(8)));
typedef __int64_t user64_time_t __attribute__((aligned(8)));
typedef __int64_t user64_off_t __attribute__((aligned(8)));
typedef __uint32_t user32_addr_t;
typedef __uint32_t user32_size_t;
typedef __int32_t user32_ssize_t;
typedef __int32_t user32_long_t;
typedef __uint32_t user32_ulong_t;
typedef __int32_t user32_time_t;
typedef __int64_t user32_off_t __attribute__((aligned(4)));
typedef u_int64_t syscall_arg_t;
static inline
__uint16_t
_OSSwapInt16(
 __uint16_t _data
 )
{
 return (__uint16_t)((_data << 8) | (_data >> 8));
}
static inline
__uint32_t
_OSSwapInt32(
 __uint32_t _data
 )
{
 return __builtin_bswap32(_data);
}
static inline
__uint64_t
_OSSwapInt64(
 __uint64_t _data
 )
{
 return __builtin_bswap64(_data);
}
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;
typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
typedef long int intmax_t;
typedef long unsigned int uintmax_t;
static inline
uint16_t
_OSSwapInt16(
 uint16_t _data
 )
{
 return (uint16_t)(_data << 8 | _data >> 8);
}
static inline
uint32_t
_OSSwapInt32(
 uint32_t _data
 )
{
 _data = __builtin_bswap32(_data);
 return _data;
}
static inline
uint64_t
_OSSwapInt64(
 uint64_t _data
 )
{
 return __builtin_bswap64(_data);
}
struct _OSUnalignedU16 {
 volatile uint16_t __val;
} __attribute__((__packed__));
struct _OSUnalignedU32 {
 volatile uint32_t __val;
} __attribute__((__packed__));
struct _OSUnalignedU64 {
 volatile uint64_t __val;
} __attribute__((__packed__));
static inline
uint16_t
OSReadSwapInt16(
 const volatile void * _base,
 uintptr_t _offset
 )
{
 return _OSSwapInt16(((struct _OSUnalignedU16 *)((uintptr_t)_base + _offset))->__val);
}
static inline
uint32_t
OSReadSwapInt32(
 const volatile void * _base,
 uintptr_t _offset
 )
{
 return _OSSwapInt32(((struct _OSUnalignedU32 *)((uintptr_t)_base + _offset))->__val);
}
static inline
uint64_t
OSReadSwapInt64(
 const volatile void * _base,
 uintptr_t _offset
 )
{
 return _OSSwapInt64(((struct _OSUnalignedU64 *)((uintptr_t)_base + _offset))->__val);
}
static inline
void
OSWriteSwapInt16(
 volatile void * _base,
 uintptr_t _offset,
 uint16_t _data
 )
{
 ((struct _OSUnalignedU16 *)((uintptr_t)_base + _offset))->__val = _OSSwapInt16(_data);
}
static inline
void
OSWriteSwapInt32(
 volatile void * _base,
 uintptr_t _offset,
 uint32_t _data
 )
{
 ((struct _OSUnalignedU32 *)((uintptr_t)_base + _offset))->__val = _OSSwapInt32(_data);
}
static inline
void
OSWriteSwapInt64(
 volatile void * _base,
 uintptr_t _offset,
 uint64_t _data
 )
{
 ((struct _OSUnalignedU64 *)((uintptr_t)_base + _offset))->__val = _OSSwapInt64(_data);
}
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;

typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;
typedef char * caddr_t;

typedef int32_t daddr_t;
typedef __darwin_dev_t dev_t;

typedef u_int32_t fixpt_t;
typedef __darwin_blkcnt_t blkcnt_t;
typedef __darwin_blksize_t blksize_t;
typedef __darwin_gid_t gid_t;
typedef __uint32_t in_addr_t;
typedef __uint16_t in_port_t;
typedef __darwin_ino_t ino_t;
typedef __darwin_ino64_t ino64_t;
typedef __int32_t key_t;
typedef __darwin_mode_t mode_t;
typedef __uint16_t nlink_t;
typedef __darwin_id_t id_t;
typedef __darwin_pid_t pid_t;
typedef __darwin_off_t off_t;

typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef __darwin_uid_t uid_t;
typedef __darwin_clock_t clock_t;
typedef __darwin_size_t size_t;
typedef __darwin_ssize_t ssize_t;
typedef __darwin_time_t time_t;

typedef __darwin_useconds_t useconds_t;
typedef __darwin_suseconds_t suseconds_t;
typedef __darwin_size_t rsize_t;
typedef int errno_t;
typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;
inline __attribute__ ((__always_inline__)) int
__darwin_fd_isset(int _fd, const struct fd_set *_p)
{
 return _p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] & ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8))));
}
inline __attribute__ ((__always_inline__)) void
__darwin_fd_set(int _fd, struct fd_set *const _p)
{
 (_p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] |= ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8)))));
}
inline __attribute__ ((__always_inline__)) void
__darwin_fd_clr(int _fd, struct fd_set *const _p)
{
 (_p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] &= ~((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8)))));
}
typedef __int32_t fd_mask;
struct proc;
struct pgrp;
struct ucred;
struct rusage;
struct file;
struct buf;
struct tty;
struct uio;
typedef __darwin_fsblkcnt_t fsblkcnt_t;
typedef __darwin_fsfilcnt_t fsfilcnt_t;

struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
struct timeval64 {
 __int64_t tv_sec;
 __int64_t tv_usec;
};
struct user_timespec
{
 user_time_t tv_sec;
 user_long_t tv_nsec;
};
struct user32_timespec
{
 user32_time_t tv_sec;
 user32_long_t tv_nsec;
};
struct user64_timespec
{
 user64_time_t tv_sec;
 user64_long_t tv_nsec;
};
struct user_timeval
{
 user_time_t tv_sec;
 __int32_t tv_usec;
};
struct user32_timeval
{
 user32_time_t tv_sec;
 __int32_t tv_usec;
};
struct user64_timeval
{
 user64_time_t tv_sec;
 __int32_t tv_usec;
};
struct user32_itimerval
{
 struct user32_timeval it_interval;
 struct user32_timeval it_value;
};
struct user64_itimerval
{
 struct user64_timeval it_interval;
 struct user64_timeval it_value;
};
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};
void microtime(struct timeval *tv);
void microtime_with_abstime(struct timeval *tv, uint64_t *abstime);
void microuptime(struct timeval *tv);
void nanotime(struct timespec *ts);
void nanouptime(struct timespec *ts);
void timevaladd(struct timeval *t1, struct timeval *t2);
void timevalsub(struct timeval *t1, struct timeval *t2);
void timevalfix(struct timeval *t1);
typedef __uint64_t rlim_t;
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;
 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;
};
typedef void *rusage_info_t;
struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};
struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};
struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};
struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};
struct rusage_info_v4 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
};
struct rusage_info_v5 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
 uint64_t ri_flags;
};
typedef struct rusage_info_v5 rusage_info_current;
struct rusage_superset {
 struct rusage ru;
 rusage_info_current ri;
};
struct rusage_info_child {
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};
struct user64_rusage {
 struct user64_timeval ru_utime;
 struct user64_timeval ru_stime;
 user64_long_t ru_maxrss;
 user64_long_t ru_ixrss;
 user64_long_t ru_idrss;
 user64_long_t ru_isrss;
 user64_long_t ru_minflt;
 user64_long_t ru_majflt;
 user64_long_t ru_nswap;
 user64_long_t ru_inblock;
 user64_long_t ru_oublock;
 user64_long_t ru_msgsnd;
 user64_long_t ru_msgrcv;
 user64_long_t ru_nsignals;
 user64_long_t ru_nvcsw;
 user64_long_t ru_nivcsw;
};
struct user32_rusage {
 struct user32_timeval ru_utime;
 struct user32_timeval ru_stime;
 user32_long_t ru_maxrss;
 user32_long_t ru_ixrss;
 user32_long_t ru_idrss;
 user32_long_t ru_isrss;
 user32_long_t ru_minflt;
 user32_long_t ru_majflt;
 user32_long_t ru_nswap;
 user32_long_t ru_inblock;
 user32_long_t ru_oublock;
 user32_long_t ru_msgsnd;
 user32_long_t ru_msgrcv;
 user32_long_t ru_nsignals;
 user32_long_t ru_nvcsw;
 user32_long_t ru_nivcsw;
};
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
typedef uid_t au_id_t;
typedef pid_t au_asid_t;
typedef u_int16_t au_event_t;
typedef u_int16_t au_emod_t;
typedef u_int32_t au_class_t;
typedef u_int64_t au_asflgs_t __attribute__ ((aligned(8)));
typedef unsigned char au_ctlmode_t;
struct au_tid {
 dev_t port;
 u_int32_t machine;
};
typedef struct au_tid au_tid_t;
struct au_tid_addr {
 dev_t at_port;
 u_int32_t at_type;
 u_int32_t at_addr[4];
};
typedef struct au_tid_addr au_tid_addr_t;
struct au_mask {
 unsigned int am_success;
 unsigned int am_failure;
};
typedef struct au_mask au_mask_t;
struct auditinfo {
 au_id_t ai_auid;
 au_mask_t ai_mask;
 au_tid_t ai_termid;
 au_asid_t ai_asid;
};
typedef struct auditinfo auditinfo_t;
struct auditinfo_addr {
 au_id_t ai_auid;
 au_mask_t ai_mask;
 au_tid_addr_t ai_termid;
 au_asid_t ai_asid;
 au_asflgs_t ai_flags;
};
typedef struct auditinfo_addr auditinfo_addr_t;
struct auditpinfo {
 pid_t ap_pid;
 au_id_t ap_auid;
 au_mask_t ap_mask;
 au_tid_t ap_termid;
 au_asid_t ap_asid;
};
typedef struct auditpinfo auditpinfo_t;
struct auditpinfo_addr {
 pid_t ap_pid;
 au_id_t ap_auid;
 au_mask_t ap_mask;
 au_tid_addr_t ap_termid;
 au_asid_t ap_asid;
 au_asflgs_t ap_flags;
};
typedef struct auditpinfo_addr auditpinfo_addr_t;
struct au_session {
 auditinfo_addr_t *as_aia_p;
 au_mask_t as_mask;
};
typedef struct au_session au_session_t;
struct au_expire_after {
 time_t age;
 size_t size;
 unsigned char op_type;
};
typedef struct au_expire_after au_expire_after_t;
typedef struct au_token token_t;
struct au_qctrl {
 int aq_hiwater;
 int aq_lowater;
 int aq_bufsz;
 int aq_delay;
 int aq_minfree;
};
typedef struct au_qctrl au_qctrl_t;
struct audit_stat {
 unsigned int as_version;
 unsigned int as_numevent;
 int as_generated;
 int as_nonattrib;
 int as_kernel;
 int as_audit;
 int as_auditctl;
 int as_enqueue;
 int as_written;
 int as_wblocked;
 int as_rblocked;
 int as_dropped;
 int as_totalsize;
 unsigned int as_memused;
};
typedef struct audit_stat au_stat_t;
struct audit_fstat {
 u_int64_t af_filesz;
 u_int64_t af_currsz;
};
typedef struct audit_fstat au_fstat_t;
struct au_evclass_map {
 au_event_t ec_number;
 au_class_t ec_class;
};
typedef struct au_evclass_map au_evclass_map_t;

struct label;
typedef void (*os_function_t)(void *_Nullable);
typedef void (^os_block_t)(void);
struct ucred {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct ucred *le_next; struct ucred **le_prev; }
#pragma clang diagnostic pop
                         cr_link;
 _Atomic u_long cr_ref;
 struct posix_cred {
  uid_t cr_uid;
  uid_t cr_ruid;
  uid_t cr_svuid;
  u_short cr_ngroups;
  gid_t cr_groups[16];
  gid_t cr_rgid;
  gid_t cr_svgid;
  uid_t cr_gmuid;
  int cr_flags;
 } cr_posix;
 struct label * cr_label;
 struct au_session cr_audit;
};
typedef struct ucred *kauth_cred_t;
typedef struct posix_cred *posix_cred_t;
struct xucred {
 u_int cr_version;
 uid_t cr_uid;
 short cr_ngroups;
 gid_t cr_groups[16];
};
int crcmp(kauth_cred_t cr1, kauth_cred_t cr2);
int suser(kauth_cred_t cred, u_short *acflag);
int set_security_token(struct proc * p);
int set_security_token_task_internal(struct proc *p, void *task);
void cru2x(kauth_cred_t cr, struct xucred *xcr);
struct iovec {
 void * iov_base;
 size_t iov_len;
};
enum uio_rw { UIO_READ, UIO_WRITE };
typedef int64_t daddr64_t;
struct buf;
typedef struct buf * buf_t;
struct file;
typedef struct file * file_t;
struct mount;
typedef struct mount * mount_t;
struct vnode;
typedef struct vnode * vnode_t;
struct proc;
typedef struct proc * proc_t;
struct proc_ident;
typedef struct proc_ident * proc_ident_t;
struct uio;
typedef struct uio * uio_t;
struct vfs_context;
typedef struct vfs_context * vfs_context_t;
struct vfstable;
typedef struct vfstable * vfstable_t;
struct __ifnet;
struct __mbuf;
struct __pkthdr;
struct __socket;
struct __sockopt;
struct __ifaddr;
struct __ifmultiaddr;
struct __ifnet_filter;
struct __rtentry;
struct __if_clone;
struct __bufattr;
typedef struct __ifnet* ifnet_t;
typedef struct __mbuf* mbuf_t;
typedef struct __pkthdr* pkthdr_t;
typedef struct __socket* socket_t;
typedef struct __sockopt* sockopt_t;
typedef struct __ifaddr* ifaddr_t;
typedef struct __ifmultiaddr* ifmultiaddr_t;
typedef struct __ifnet_filter* interface_filter_t;
typedef struct __rtentry* route_t;
typedef struct __if_clone* if_clone_t;
typedef struct __bufattr* bufattr_t;
typedef union {
 unsigned char g_guid[16];
 unsigned int g_guid_asint[16 / sizeof(unsigned int)];
} guid_t;
struct kauth_ace;
typedef struct kauth_ace * kauth_ace_t;
struct kauth_acl;
typedef struct kauth_acl * kauth_acl_t;
struct kauth_filesec;
typedef struct kauth_filesec * kauth_filesec_t;
typedef int kauth_action_t;
enum uio_seg {
 UIO_USERSPACE = 0,
 UIO_SYSSPACE = 2,
 UIO_USERSPACE32 = 5,
 UIO_USERSPACE64 = 8,
 UIO_SYSSPACE32 = 11
};
uio_t uio_create( int a_iovcount,
    off_t a_offset,
    int a_spacetype,
    int a_iodirection );
void uio_reset( uio_t a_uio,
    off_t a_offset,
    int a_spacetype,
    int a_iodirection );
uio_t uio_duplicate( uio_t a_uio );
void uio_free( uio_t a_uio );
int uio_addiov( uio_t a_uio, user_addr_t a_baseaddr, user_size_t a_length );
int uio_getiov( uio_t a_uio,
    int a_index,
    user_addr_t * a_baseaddr_p,
    user_size_t * a_length_p );
void uio_update( uio_t a_uio, user_size_t a_count );
user_ssize_t uio_resid( uio_t a_uio );
void uio_setresid( uio_t a_uio, user_ssize_t a_value );
int uio_iovcnt( uio_t a_uio );
off_t uio_offset( uio_t a_uio );
void uio_setoffset( uio_t a_uio, off_t a_offset );
int uio_rw( uio_t a_uio );
void uio_setrw( uio_t a_uio, int a_value );
int uio_isuserspace( uio_t a_uio );
user_addr_t uio_curriovbase( uio_t a_uio );
user_size_t uio_curriovlen( uio_t a_uio );
extern int uiomove(const char * cp, int n, struct uio *uio);
extern int uiomove64(const __uint64_t cp, int n, struct uio *uio);
typedef int sig_atomic_t;
struct i386_thread_state
{
    unsigned int eax;
    unsigned int ebx;
    unsigned int ecx;
    unsigned int edx;
    unsigned int edi;
    unsigned int esi;
    unsigned int ebp;
    unsigned int esp;
    unsigned int ss;
    unsigned int eflags;
    unsigned int eip;
    unsigned int cs;
    unsigned int ds;
    unsigned int es;
    unsigned int fs;
    unsigned int gs;
};
struct fp_control
{
    unsigned short invalid :1,
        denorm :1,
    zdiv :1,
    ovrfl :1,
    undfl :1,
    precis :1,
     :2,
    pc :2,
    rc :2,
            :1,
     :3;
};
typedef struct fp_control fp_control_t;
struct fp_status
{
    unsigned short invalid :1,
        denorm :1,
    zdiv :1,
    ovrfl :1,
    undfl :1,
    precis :1,
    stkflt :1,
    errsumm :1,
    c0 :1,
    c1 :1,
    c2 :1,
    tos :3,
    c3 :1,
    busy :1;
};
typedef struct fp_status fp_status_t;
struct mmst_reg
{
 char mmst_reg[10];
 char mmst_rsrv[6];
};
struct xmm_reg
{
 char xmm_reg[16];
};
struct ymm_reg
{
 char ymm_reg[32];
};
struct zmm_reg
{
 char zmm_reg[64];
};
struct opmask_reg
{
 char opmask_reg[8];
};
struct i386_float_state
{
 int fpu_reserved[2];
 struct fp_control fpu_fcw;
 struct fp_status fpu_fsw;
 __uint8_t fpu_ftw;
 __uint8_t fpu_rsrv1;
 __uint16_t fpu_fop;
 __uint32_t fpu_ip;
 __uint16_t fpu_cs;
 __uint16_t fpu_rsrv2;
 __uint32_t fpu_dp;
 __uint16_t fpu_ds;
 __uint16_t fpu_rsrv3;
 __uint32_t fpu_mxcsr;
 __uint32_t fpu_mxcsrmask;
 struct mmst_reg fpu_stmm0;
 struct mmst_reg fpu_stmm1;
 struct mmst_reg fpu_stmm2;
 struct mmst_reg fpu_stmm3;
 struct mmst_reg fpu_stmm4;
 struct mmst_reg fpu_stmm5;
 struct mmst_reg fpu_stmm6;
 struct mmst_reg fpu_stmm7;
 struct xmm_reg fpu_xmm0;
 struct xmm_reg fpu_xmm1;
 struct xmm_reg fpu_xmm2;
 struct xmm_reg fpu_xmm3;
 struct xmm_reg fpu_xmm4;
 struct xmm_reg fpu_xmm5;
 struct xmm_reg fpu_xmm6;
 struct xmm_reg fpu_xmm7;
 char fpu_rsrv4[14*16];
 int fpu_reserved1;
};
struct i386_avx_state
{
 int fpu_reserved[2];
 struct fp_control fpu_fcw;
 struct fp_status fpu_fsw;
 __uint8_t fpu_ftw;
 __uint8_t fpu_rsrv1;
 __uint16_t fpu_fop;
 __uint32_t fpu_ip;
 __uint16_t fpu_cs;
 __uint16_t fpu_rsrv2;
 __uint32_t fpu_dp;
 __uint16_t fpu_ds;
 __uint16_t fpu_rsrv3;
 __uint32_t fpu_mxcsr;
 __uint32_t fpu_mxcsrmask;
 struct mmst_reg fpu_stmm0;
 struct mmst_reg fpu_stmm1;
 struct mmst_reg fpu_stmm2;
 struct mmst_reg fpu_stmm3;
 struct mmst_reg fpu_stmm4;
 struct mmst_reg fpu_stmm5;
 struct mmst_reg fpu_stmm6;
 struct mmst_reg fpu_stmm7;
 struct xmm_reg fpu_xmm0;
 struct xmm_reg fpu_xmm1;
 struct xmm_reg fpu_xmm2;
 struct xmm_reg fpu_xmm3;
 struct xmm_reg fpu_xmm4;
 struct xmm_reg fpu_xmm5;
 struct xmm_reg fpu_xmm6;
 struct xmm_reg fpu_xmm7;
 char fpu_rsrv4[14*16];
 int fpu_reserved1;
 char avx_reserved1[64];
 struct xmm_reg fpu_ymmh0;
 struct xmm_reg fpu_ymmh1;
 struct xmm_reg fpu_ymmh2;
 struct xmm_reg fpu_ymmh3;
 struct xmm_reg fpu_ymmh4;
 struct xmm_reg fpu_ymmh5;
 struct xmm_reg fpu_ymmh6;
 struct xmm_reg fpu_ymmh7;
};
struct i386_avx512_state
{
 int fpu_reserved[2];
 struct fp_control fpu_fcw;
 struct fp_status fpu_fsw;
 __uint8_t fpu_ftw;
 __uint8_t fpu_rsrv1;
 __uint16_t fpu_fop;
 __uint32_t fpu_ip;
 __uint16_t fpu_cs;
 __uint16_t fpu_rsrv2;
 __uint32_t fpu_dp;
 __uint16_t fpu_ds;
 __uint16_t fpu_rsrv3;
 __uint32_t fpu_mxcsr;
 __uint32_t fpu_mxcsrmask;
 struct mmst_reg fpu_stmm0;
 struct mmst_reg fpu_stmm1;
 struct mmst_reg fpu_stmm2;
 struct mmst_reg fpu_stmm3;
 struct mmst_reg fpu_stmm4;
 struct mmst_reg fpu_stmm5;
 struct mmst_reg fpu_stmm6;
 struct mmst_reg fpu_stmm7;
 struct xmm_reg fpu_xmm0;
 struct xmm_reg fpu_xmm1;
 struct xmm_reg fpu_xmm2;
 struct xmm_reg fpu_xmm3;
 struct xmm_reg fpu_xmm4;
 struct xmm_reg fpu_xmm5;
 struct xmm_reg fpu_xmm6;
 struct xmm_reg fpu_xmm7;
 char fpu_rsrv4[14*16];
 int fpu_reserved1;
 char avx_reserved1[64];
 struct xmm_reg fpu_ymmh0;
 struct xmm_reg fpu_ymmh1;
 struct xmm_reg fpu_ymmh2;
 struct xmm_reg fpu_ymmh3;
 struct xmm_reg fpu_ymmh4;
 struct xmm_reg fpu_ymmh5;
 struct xmm_reg fpu_ymmh6;
 struct xmm_reg fpu_ymmh7;
 struct opmask_reg fpu_k0;
 struct opmask_reg fpu_k1;
 struct opmask_reg fpu_k2;
 struct opmask_reg fpu_k3;
 struct opmask_reg fpu_k4;
 struct opmask_reg fpu_k5;
 struct opmask_reg fpu_k6;
 struct opmask_reg fpu_k7;
 struct ymm_reg fpu_zmmh0;
 struct ymm_reg fpu_zmmh1;
 struct ymm_reg fpu_zmmh2;
 struct ymm_reg fpu_zmmh3;
 struct ymm_reg fpu_zmmh4;
 struct ymm_reg fpu_zmmh5;
 struct ymm_reg fpu_zmmh6;
 struct ymm_reg fpu_zmmh7;
};
struct i386_exception_state
{
 __uint16_t trapno;
 __uint16_t cpu;
 __uint32_t err;
 __uint32_t faultvaddr;
};
struct x86_debug_state32
{
 unsigned int dr0;
 unsigned int dr1;
 unsigned int dr2;
 unsigned int dr3;
 unsigned int dr4;
 unsigned int dr5;
 unsigned int dr6;
 unsigned int dr7;
};
struct __x86_instruction_state
{
        int insn_stream_valid_bytes;
        int insn_offset;
 int out_of_synch;
        __uint8_t insn_bytes[(2448 - 64 - 4)];
 __uint8_t insn_cacheline[64];
};
struct __last_branch_record
{
 __uint64_t from_ip;
 __uint64_t to_ip;
 __uint32_t mispredict : 1,
   tsx_abort : 1,
   in_tsx : 1,
   cycle_count: 16,
   reserved : 13;
};
struct __last_branch_state
{
        int lbr_count;
 __uint32_t lbr_supported_tsx : 1,
     lbr_supported_cycle_count : 1,
     reserved : 30;
 struct __last_branch_record lbrs[32];
};
struct __x86_pagein_state
{
 int __pagein_error;
};
struct x86_thread_state64
{
 __uint64_t rax;
 __uint64_t rbx;
 __uint64_t rcx;
 __uint64_t rdx;
 __uint64_t rdi;
 __uint64_t rsi;
 __uint64_t rbp;
 __uint64_t rsp;
 __uint64_t r8;
 __uint64_t r9;
 __uint64_t r10;
 __uint64_t r11;
 __uint64_t r12;
 __uint64_t r13;
 __uint64_t r14;
 __uint64_t r15;
 __uint64_t rip;
 __uint64_t rflags;
 __uint64_t cs;
 __uint64_t fs;
 __uint64_t gs;
};
struct x86_thread_full_state64
{
 struct x86_thread_state64 ss64;
 __uint64_t ds;
 __uint64_t es;
 __uint64_t ss;
 __uint64_t gsbase;
};
struct x86_float_state64
{
 int fpu_reserved[2];
 struct fp_control fpu_fcw;
 struct fp_status fpu_fsw;
 __uint8_t fpu_ftw;
 __uint8_t fpu_rsrv1;
 __uint16_t fpu_fop;
 __uint32_t fpu_ip;
 __uint16_t fpu_cs;
 __uint16_t fpu_rsrv2;
 __uint32_t fpu_dp;
 __uint16_t fpu_ds;
 __uint16_t fpu_rsrv3;
 __uint32_t fpu_mxcsr;
 __uint32_t fpu_mxcsrmask;
 struct mmst_reg fpu_stmm0;
 struct mmst_reg fpu_stmm1;
 struct mmst_reg fpu_stmm2;
 struct mmst_reg fpu_stmm3;
 struct mmst_reg fpu_stmm4;
 struct mmst_reg fpu_stmm5;
 struct mmst_reg fpu_stmm6;
 struct mmst_reg fpu_stmm7;
 struct xmm_reg fpu_xmm0;
 struct xmm_reg fpu_xmm1;
 struct xmm_reg fpu_xmm2;
 struct xmm_reg fpu_xmm3;
 struct xmm_reg fpu_xmm4;
 struct xmm_reg fpu_xmm5;
 struct xmm_reg fpu_xmm6;
 struct xmm_reg fpu_xmm7;
 struct xmm_reg fpu_xmm8;
 struct xmm_reg fpu_xmm9;
 struct xmm_reg fpu_xmm10;
 struct xmm_reg fpu_xmm11;
 struct xmm_reg fpu_xmm12;
 struct xmm_reg fpu_xmm13;
 struct xmm_reg fpu_xmm14;
 struct xmm_reg fpu_xmm15;
 char fpu_rsrv4[6*16];
 int fpu_reserved1;
};
struct x86_avx_state64
{
 int fpu_reserved[2];
 struct fp_control fpu_fcw;
 struct fp_status fpu_fsw;
 __uint8_t fpu_ftw;
 __uint8_t fpu_rsrv1;
 __uint16_t fpu_fop;
 __uint32_t fpu_ip;
 __uint16_t fpu_cs;
 __uint16_t fpu_rsrv2;
 __uint32_t fpu_dp;
 __uint16_t fpu_ds;
 __uint16_t fpu_rsrv3;
 __uint32_t fpu_mxcsr;
 __uint32_t fpu_mxcsrmask;
 struct mmst_reg fpu_stmm0;
 struct mmst_reg fpu_stmm1;
 struct mmst_reg fpu_stmm2;
 struct mmst_reg fpu_stmm3;
 struct mmst_reg fpu_stmm4;
 struct mmst_reg fpu_stmm5;
 struct mmst_reg fpu_stmm6;
 struct mmst_reg fpu_stmm7;
 struct xmm_reg fpu_xmm0;
 struct xmm_reg fpu_xmm1;
 struct xmm_reg fpu_xmm2;
 struct xmm_reg fpu_xmm3;
 struct xmm_reg fpu_xmm4;
 struct xmm_reg fpu_xmm5;
 struct xmm_reg fpu_xmm6;
 struct xmm_reg fpu_xmm7;
 struct xmm_reg fpu_xmm8;
 struct xmm_reg fpu_xmm9;
 struct xmm_reg fpu_xmm10;
 struct xmm_reg fpu_xmm11;
 struct xmm_reg fpu_xmm12;
 struct xmm_reg fpu_xmm13;
 struct xmm_reg fpu_xmm14;
 struct xmm_reg fpu_xmm15;
 char fpu_rsrv4[6*16];
 int fpu_reserved1;
 char avx_reserved1[64];
 struct xmm_reg fpu_ymmh0;
 struct xmm_reg fpu_ymmh1;
 struct xmm_reg fpu_ymmh2;
 struct xmm_reg fpu_ymmh3;
 struct xmm_reg fpu_ymmh4;
 struct xmm_reg fpu_ymmh5;
 struct xmm_reg fpu_ymmh6;
 struct xmm_reg fpu_ymmh7;
 struct xmm_reg fpu_ymmh8;
 struct xmm_reg fpu_ymmh9;
 struct xmm_reg fpu_ymmh10;
 struct xmm_reg fpu_ymmh11;
 struct xmm_reg fpu_ymmh12;
 struct xmm_reg fpu_ymmh13;
 struct xmm_reg fpu_ymmh14;
 struct xmm_reg fpu_ymmh15;
};
struct x86_avx512_state64
{
 int fpu_reserved[2];
 struct fp_control fpu_fcw;
 struct fp_status fpu_fsw;
 __uint8_t fpu_ftw;
 __uint8_t fpu_rsrv1;
 __uint16_t fpu_fop;
 __uint32_t fpu_ip;
 __uint16_t fpu_cs;
 __uint16_t fpu_rsrv2;
 __uint32_t fpu_dp;
 __uint16_t fpu_ds;
 __uint16_t fpu_rsrv3;
 __uint32_t fpu_mxcsr;
 __uint32_t fpu_mxcsrmask;
 struct mmst_reg fpu_stmm0;
 struct mmst_reg fpu_stmm1;
 struct mmst_reg fpu_stmm2;
 struct mmst_reg fpu_stmm3;
 struct mmst_reg fpu_stmm4;
 struct mmst_reg fpu_stmm5;
 struct mmst_reg fpu_stmm6;
 struct mmst_reg fpu_stmm7;
 struct xmm_reg fpu_xmm0;
 struct xmm_reg fpu_xmm1;
 struct xmm_reg fpu_xmm2;
 struct xmm_reg fpu_xmm3;
 struct xmm_reg fpu_xmm4;
 struct xmm_reg fpu_xmm5;
 struct xmm_reg fpu_xmm6;
 struct xmm_reg fpu_xmm7;
 struct xmm_reg fpu_xmm8;
 struct xmm_reg fpu_xmm9;
 struct xmm_reg fpu_xmm10;
 struct xmm_reg fpu_xmm11;
 struct xmm_reg fpu_xmm12;
 struct xmm_reg fpu_xmm13;
 struct xmm_reg fpu_xmm14;
 struct xmm_reg fpu_xmm15;
 char fpu_rsrv4[6*16];
 int fpu_reserved1;
 char avx_reserved1[64];
 struct xmm_reg fpu_ymmh0;
 struct xmm_reg fpu_ymmh1;
 struct xmm_reg fpu_ymmh2;
 struct xmm_reg fpu_ymmh3;
 struct xmm_reg fpu_ymmh4;
 struct xmm_reg fpu_ymmh5;
 struct xmm_reg fpu_ymmh6;
 struct xmm_reg fpu_ymmh7;
 struct xmm_reg fpu_ymmh8;
 struct xmm_reg fpu_ymmh9;
 struct xmm_reg fpu_ymmh10;
 struct xmm_reg fpu_ymmh11;
 struct xmm_reg fpu_ymmh12;
 struct xmm_reg fpu_ymmh13;
 struct xmm_reg fpu_ymmh14;
 struct xmm_reg fpu_ymmh15;
 struct opmask_reg fpu_k0;
 struct opmask_reg fpu_k1;
 struct opmask_reg fpu_k2;
 struct opmask_reg fpu_k3;
 struct opmask_reg fpu_k4;
 struct opmask_reg fpu_k5;
 struct opmask_reg fpu_k6;
 struct opmask_reg fpu_k7;
 struct ymm_reg fpu_zmmh0;
 struct ymm_reg fpu_zmmh1;
 struct ymm_reg fpu_zmmh2;
 struct ymm_reg fpu_zmmh3;
 struct ymm_reg fpu_zmmh4;
 struct ymm_reg fpu_zmmh5;
 struct ymm_reg fpu_zmmh6;
 struct ymm_reg fpu_zmmh7;
 struct ymm_reg fpu_zmmh8;
 struct ymm_reg fpu_zmmh9;
 struct ymm_reg fpu_zmmh10;
 struct ymm_reg fpu_zmmh11;
 struct ymm_reg fpu_zmmh12;
 struct ymm_reg fpu_zmmh13;
 struct ymm_reg fpu_zmmh14;
 struct ymm_reg fpu_zmmh15;
 struct zmm_reg fpu_zmm16;
 struct zmm_reg fpu_zmm17;
 struct zmm_reg fpu_zmm18;
 struct zmm_reg fpu_zmm19;
 struct zmm_reg fpu_zmm20;
 struct zmm_reg fpu_zmm21;
 struct zmm_reg fpu_zmm22;
 struct zmm_reg fpu_zmm23;
 struct zmm_reg fpu_zmm24;
 struct zmm_reg fpu_zmm25;
 struct zmm_reg fpu_zmm26;
 struct zmm_reg fpu_zmm27;
 struct zmm_reg fpu_zmm28;
 struct zmm_reg fpu_zmm29;
 struct zmm_reg fpu_zmm30;
 struct zmm_reg fpu_zmm31;
};
struct x86_exception_state64
{
    __uint16_t trapno;
    __uint16_t cpu;
    __uint32_t err;
    __uint64_t faultvaddr;
};
struct x86_debug_state64
{
 __uint64_t dr0;
 __uint64_t dr1;
 __uint64_t dr2;
 __uint64_t dr3;
 __uint64_t dr4;
 __uint64_t dr5;
 __uint64_t dr6;
 __uint64_t dr7;
};
struct x86_cpmu_state64
{
 __uint64_t ctrs[16];
};
struct mcontext32
{
 struct i386_exception_state es;
 struct i386_thread_state ss;
 struct i386_float_state fs;
};
struct mcontext_avx32
{
 struct i386_exception_state es;
 struct i386_thread_state ss;
 struct i386_avx_state fs;
};
struct mcontext_avx512_32
{
 struct i386_exception_state es;
 struct i386_thread_state ss;
 struct i386_avx512_state fs;
};
struct mcontext64
{
 struct x86_exception_state64 es;
 struct x86_thread_state64 ss;
 struct x86_float_state64 fs;
};
struct mcontext64_full
{
 struct x86_exception_state64 es;
 struct x86_thread_full_state64 ss;
 struct x86_float_state64 fs;
};
struct mcontext_avx64
{
 struct x86_exception_state64 es;
 struct x86_thread_state64 ss;
 struct x86_avx_state64 fs;
};
struct mcontext_avx64_full
{
 struct x86_exception_state64 es;
 struct x86_thread_full_state64 ss;
 struct x86_avx_state64 fs;
};
struct mcontext_avx512_64
{
 struct x86_exception_state64 es;
 struct x86_thread_state64 ss;
 struct x86_avx512_state64 fs;
};
struct mcontext_avx512_64_full
{
 struct x86_exception_state64 es;
 struct x86_thread_full_state64 ss;
 struct x86_avx512_state64 fs;
};
typedef struct mcontext64 *mcontext_t;
struct sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct sigaltstack stack_t;
struct ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct sigaltstack uc_stack;
 struct ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct mcontext64 *uc_mcontext;
};
typedef struct ucontext ucontext_t;
typedef __darwin_sigset_t sigset_t;
union sigval {
 int sival_int;
 void *sival_ptr;
};
typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
     void *);
};
struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};
struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
typedef void (*sig_t)(int);
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
    void(*signal(int, void (*)(int)))(int);
typedef int boolean_t;
typedef __darwin_natural_t natural_t;
typedef int integer_t;
typedef uintptr_t vm_offset_t;
typedef uintptr_t vm_size_t;
typedef uint64_t mach_vm_address_t;
typedef uint64_t mach_vm_offset_t;
typedef uint64_t mach_vm_size_t;
typedef uint64_t vm_map_offset_t;
typedef uint64_t vm_map_address_t;
typedef uint64_t vm_map_size_t;
typedef mach_vm_address_t mach_port_context_t;
typedef natural_t mach_port_name_t;
typedef mach_port_name_t *mach_port_name_array_t;
struct ipc_port;
typedef struct ipc_port *ipc_port_t;
static inline boolean_t
ipc_port_valid(ipc_port_t port)
{
 return port != ((ipc_port_t)~0UL) && port;
}
typedef ipc_port_t mach_port_t;
typedef mach_port_t *mach_port_array_t;
typedef natural_t mach_port_right_t;
typedef natural_t mach_port_type_t;
typedef mach_port_type_t *mach_port_type_array_t;
typedef natural_t mach_port_urefs_t;
typedef integer_t mach_port_delta_t;
typedef natural_t mach_port_seqno_t;
typedef natural_t mach_port_mscount_t;
typedef natural_t mach_port_msgcount_t;
typedef natural_t mach_port_rights_t;
typedef unsigned int mach_port_srights_t;
typedef struct mach_port_status {
 mach_port_rights_t mps_pset;
 mach_port_seqno_t mps_seqno;
 mach_port_mscount_t mps_mscount;
 mach_port_msgcount_t mps_qlimit;
 mach_port_msgcount_t mps_msgcount;
 mach_port_rights_t mps_sorights;
 boolean_t mps_srights;
 boolean_t mps_pdrequest;
 boolean_t mps_nsrequest;
 natural_t mps_flags;
} mach_port_status_t;
typedef struct mach_port_limits {
 mach_port_msgcount_t mpl_qlimit;
} mach_port_limits_t;
typedef struct mach_port_info_ext {
 mach_port_status_t mpie_status;
 mach_port_msgcount_t mpie_boost_cnt;
 uint32_t reserved[6];
} mach_port_info_ext_t;
typedef integer_t *mach_port_info_t;
typedef int mach_port_flavor_t;
typedef struct mach_port_qos {
 unsigned int name:1;
 unsigned int prealloc:1;
 boolean_t pad1:30;
 natural_t len;
} mach_port_qos_t;
typedef struct mach_port_options {
 uint32_t flags;
 mach_port_limits_t mpl;
 union {
  uint64_t reserved[2];
  mach_port_name_t work_interval_port;
 };
}mach_port_options_t;
typedef mach_port_options_t *mach_port_options_ptr_t;
enum mach_port_guard_exception_codes {
 kGUARD_EXC_DESTROY = 1u << 0,
 kGUARD_EXC_MOD_REFS = 1u << 1,
 kGUARD_EXC_SET_CONTEXT = 1u << 2,
 kGUARD_EXC_UNGUARDED = 1u << 3,
 kGUARD_EXC_INCORRECT_GUARD = 1u << 4,
 kGUARD_EXC_IMMOVABLE = 1u << 5,
 kGUARD_EXC_STRICT_REPLY = 1u << 6,
 kGUARD_EXC_MSG_FILTERED = 1u << 7,
 kGUARD_EXC_INVALID_RIGHT = 1u << 8,
 kGUARD_EXC_INVALID_NAME = 1u << 9,
 kGUARD_EXC_INVALID_VALUE = 1u << 10,
 kGUARD_EXC_INVALID_ARGUMENT = 1u << 11,
 kGUARD_EXC_RIGHT_EXISTS = 1u << 12,
 kGUARD_EXC_KERN_NO_SPACE = 1u << 13,
 kGUARD_EXC_KERN_FAILURE = 1u << 14,
 kGUARD_EXC_KERN_RESOURCE = 1u << 15,
 kGUARD_EXC_SEND_INVALID_REPLY = 1u << 16,
 kGUARD_EXC_SEND_INVALID_VOUCHER = 1u << 17,
 kGUARD_EXC_SEND_INVALID_RIGHT = 1u << 18,
 kGUARD_EXC_RCV_INVALID_NAME = 1u << 19,
 kGUARD_EXC_RCV_GUARDED_DESC = 1u << 20,
 kGUARD_EXC_MOD_REFS_NON_FATAL = 1u << 21,
 kGUARD_EXC_IMMOVABLE_NON_FATAL = 1u << 22,
};
typedef mach_port_t port_t;
typedef mach_port_name_t port_name_t;
typedef mach_port_name_t *port_name_array_t;

typedef int kern_return_t;
typedef natural_t mach_msg_timeout_t;
typedef unsigned int mach_msg_bits_t;
typedef natural_t mach_msg_size_t;
typedef integer_t mach_msg_id_t;
typedef unsigned int mach_msg_priority_t;
typedef unsigned int mach_msg_type_name_t;
typedef unsigned int mach_msg_copy_options_t;
typedef unsigned int mach_msg_guard_flags_t;
typedef unsigned int mach_msg_descriptor_type_t;
#pragma pack(push, 4)
typedef struct{
 natural_t pad1;
 mach_msg_size_t pad2;
 unsigned int pad3 : 24;
 mach_msg_descriptor_type_t type : 8;
} mach_msg_type_descriptor_t;
typedef struct{
 mach_port_t name;
 unsigned int pad2 : 16;
 mach_msg_type_name_t disposition : 8;
 mach_msg_descriptor_type_t type : 8;
 uint32_t pad_end;
} mach_msg_port_descriptor_t;
typedef struct{
 uint32_t address;
 mach_msg_size_t size;
 boolean_t deallocate: 8;
 mach_msg_copy_options_t copy: 8;
 unsigned int pad1: 8;
 mach_msg_descriptor_type_t type: 8;
} mach_msg_ool_descriptor32_t;
typedef struct{
 uint64_t address;
 boolean_t deallocate: 8;
 mach_msg_copy_options_t copy: 8;
 unsigned int pad1: 8;
 mach_msg_descriptor_type_t type: 8;
 mach_msg_size_t size;
} mach_msg_ool_descriptor64_t;
typedef struct{
 void* address;
 boolean_t deallocate: 8;
 mach_msg_copy_options_t copy: 8;
 unsigned int pad1: 8;
 mach_msg_descriptor_type_t type: 8;
 mach_msg_size_t size;
} mach_msg_ool_descriptor_t;
typedef struct{
 uint32_t address;
 mach_msg_size_t count;
 boolean_t deallocate: 8;
 mach_msg_copy_options_t copy: 8;
 mach_msg_type_name_t disposition : 8;
 mach_msg_descriptor_type_t type : 8;
} mach_msg_ool_ports_descriptor32_t;
typedef struct{
 uint64_t address;
 boolean_t deallocate: 8;
 mach_msg_copy_options_t copy: 8;
 mach_msg_type_name_t disposition : 8;
 mach_msg_descriptor_type_t type : 8;
 mach_msg_size_t count;
} mach_msg_ool_ports_descriptor64_t;
typedef struct{
 void* address;
 boolean_t deallocate: 8;
 mach_msg_copy_options_t copy: 8;
 mach_msg_type_name_t disposition : 8;
 mach_msg_descriptor_type_t type : 8;
 mach_msg_size_t count;
} mach_msg_ool_ports_descriptor_t;
typedef struct{
 uint32_t context;
 mach_port_name_t name;
 mach_msg_guard_flags_t flags : 16;
 mach_msg_type_name_t disposition : 8;
 mach_msg_descriptor_type_t type : 8;
} mach_msg_guarded_port_descriptor32_t;
typedef struct{
 uint64_t context;
 mach_msg_guard_flags_t flags : 16;
 mach_msg_type_name_t disposition : 8;
 mach_msg_descriptor_type_t type : 8;
 mach_port_name_t name;
} mach_msg_guarded_port_descriptor64_t;
typedef struct{
 mach_port_t name;
 mach_msg_guard_flags_t flags : 16;
 mach_msg_type_name_t disposition : 8;
 mach_msg_descriptor_type_t type : 8;
 uint32_t pad_end;
} mach_msg_guarded_port_descriptor_t;
typedef union{
 mach_msg_port_descriptor_t port;
 mach_msg_ool_descriptor32_t out_of_line;
 mach_msg_ool_ports_descriptor32_t ool_ports;
 mach_msg_type_descriptor_t type;
 mach_msg_guarded_port_descriptor32_t guarded_port;
} mach_msg_descriptor_t;
typedef struct{
 mach_msg_size_t msgh_descriptor_count;
} mach_msg_body_t;
typedef struct{
 mach_msg_bits_t msgh_bits;
 mach_msg_size_t msgh_size;
 mach_port_t msgh_remote_port;
 mach_port_t msgh_local_port;
 mach_port_name_t msgh_voucher_port;
 mach_msg_id_t msgh_id;
} mach_msg_header_t;
typedef struct{
 mach_msg_header_t header;
 mach_msg_body_t body;
} mach_msg_base_t;
typedef unsigned int mach_msg_trailer_type_t;
typedef unsigned int mach_msg_trailer_size_t;
typedef char *mach_msg_trailer_info_t;
typedef struct{
 mach_msg_trailer_type_t msgh_trailer_type;
 mach_msg_trailer_size_t msgh_trailer_size;
} mach_msg_trailer_t;
typedef struct{
 mach_msg_trailer_type_t msgh_trailer_type;
 mach_msg_trailer_size_t msgh_trailer_size;
 mach_port_seqno_t msgh_seqno;
} mach_msg_seqno_trailer_t;
typedef struct{
 unsigned int val[2];
} security_token_t;
typedef struct{
 mach_msg_trailer_type_t msgh_trailer_type;
 mach_msg_trailer_size_t msgh_trailer_size;
 mach_port_seqno_t msgh_seqno;
 security_token_t msgh_sender;
} mach_msg_security_trailer_t;
typedef struct{
 unsigned int val[8];
} audit_token_t;
typedef struct{
 mach_msg_trailer_type_t msgh_trailer_type;
 mach_msg_trailer_size_t msgh_trailer_size;
 mach_port_seqno_t msgh_seqno;
 security_token_t msgh_sender;
 audit_token_t msgh_audit;
} mach_msg_audit_trailer_t;
typedef struct{
 mach_msg_trailer_type_t msgh_trailer_type;
 mach_msg_trailer_size_t msgh_trailer_size;
 mach_port_seqno_t msgh_seqno;
 security_token_t msgh_sender;
 audit_token_t msgh_audit;
 mach_port_context_t msgh_context;
} mach_msg_context_trailer_t;
typedef struct{
 mach_port_name_t sender;
} msg_labels_t;
typedef int mach_msg_filter_id;
typedef struct{
 mach_msg_trailer_type_t msgh_trailer_type;
 mach_msg_trailer_size_t msgh_trailer_size;
 mach_port_seqno_t msgh_seqno;
 security_token_t msgh_sender;
 audit_token_t msgh_audit;
 mach_port_context_t msgh_context;
 mach_msg_filter_id msgh_ad;
 msg_labels_t msgh_labels;
} mach_msg_mac_trailer_t;
typedef mach_msg_mac_trailer_t mach_msg_max_trailer_t;
typedef mach_msg_security_trailer_t mach_msg_format_0_trailer_t;
extern const security_token_t KERNEL_SECURITY_TOKEN;
extern const audit_token_t KERNEL_AUDIT_TOKEN;
typedef integer_t mach_msg_options_t;
typedef struct{
 mach_msg_header_t header;
} mach_msg_empty_send_t;
typedef struct{
 mach_msg_header_t header;
 mach_msg_trailer_t trailer;
} mach_msg_empty_rcv_t;
typedef union{
 mach_msg_empty_send_t send;
 mach_msg_empty_rcv_t rcv;
} mach_msg_empty_t;
#pragma pack(pop)
typedef natural_t mach_msg_type_size_t;
typedef natural_t mach_msg_type_number_t;
typedef integer_t mach_msg_option_t;
typedef kern_return_t mach_msg_return_t;
__attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))
extern mach_msg_return_t mach_msg_overwrite(
 mach_msg_header_t *msg,
 mach_msg_option_t option,
 mach_msg_size_t send_size,
 mach_msg_size_t rcv_size,
 mach_port_name_t rcv_name,
 mach_msg_timeout_t timeout,
 mach_port_name_t notify,
 mach_msg_header_t *rcv_msg,
 mach_msg_size_t rcv_limit);
struct vm_statistics {
 natural_t free_count;
 natural_t active_count;
 natural_t inactive_count;
 natural_t wire_count;
 natural_t zero_fill_count;
 natural_t reactivations;
 natural_t pageins;
 natural_t pageouts;
 natural_t faults;
 natural_t cow_faults;
 natural_t lookups;
 natural_t hits;
 natural_t purgeable_count;
 natural_t purges;
 natural_t speculative_count;
};
typedef struct vm_statistics *vm_statistics_t;
typedef struct vm_statistics vm_statistics_data_t;
struct vm_statistics64 {
 natural_t free_count;
 natural_t active_count;
 natural_t inactive_count;
 natural_t wire_count;
 uint64_t zero_fill_count;
 uint64_t reactivations;
 uint64_t pageins;
 uint64_t pageouts;
 uint64_t faults;
 uint64_t cow_faults;
 uint64_t lookups;
 uint64_t hits;
 uint64_t purges;
 natural_t purgeable_count;
 natural_t speculative_count;
 uint64_t decompressions;
 uint64_t compressions;
 uint64_t swapins;
 uint64_t swapouts;
 natural_t compressor_page_count;
 natural_t throttled_count;
 natural_t external_page_count;
 natural_t internal_page_count;
 uint64_t total_uncompressed_pages_in_compressor;
} __attribute__((aligned(8)));
typedef struct vm_statistics64 *vm_statistics64_t;
typedef struct vm_statistics64 vm_statistics64_data_t;
kern_return_t vm_stats(void *info, unsigned int *count);
struct vm_extmod_statistics {
 int64_t task_for_pid_count;
 int64_t task_for_pid_caller_count;
 int64_t thread_creation_count;
 int64_t thread_creation_caller_count;
 int64_t thread_set_state_count;
 int64_t thread_set_state_caller_count;
} __attribute__((aligned(8)));
typedef struct vm_extmod_statistics *vm_extmod_statistics_t;
typedef struct vm_extmod_statistics vm_extmod_statistics_data_t;
typedef struct vm_purgeable_stat {
 uint64_t count;
 uint64_t size;
}vm_purgeable_stat_t;
struct vm_purgeable_info {
 vm_purgeable_stat_t fifo_data[8];
 vm_purgeable_stat_t obsolete_data;
 vm_purgeable_stat_t lifo_data[8];
};
typedef struct vm_purgeable_info *vm_purgeable_info_t;
enum virtual_memory_guard_exception_codes {
 kGUARD_EXC_DEALLOC_GAP = 1u << 0
};
typedef integer_t cpu_type_t;
typedef integer_t cpu_subtype_t;
typedef integer_t cpu_threadtype_t;

struct time_value {
 integer_t seconds;
 integer_t microseconds;
};
typedef struct time_value time_value_t;
typedef integer_t *host_info_t;
typedef integer_t *host_info64_t;
typedef integer_t host_info_data_t[(1024)];
typedef char kernel_version_t[(512)];
typedef char kernel_boot_info_t[(4096)];
typedef integer_t host_flavor_t;
struct host_can_has_debugger_info {
 boolean_t can_has_debugger;
};
typedef struct host_can_has_debugger_info host_can_has_debugger_info_data_t;
typedef struct host_can_has_debugger_info *host_can_has_debugger_info_t;
#pragma pack(push, 4)
struct host_basic_info {
 integer_t max_cpus;
 integer_t avail_cpus;
 natural_t memory_size;
 cpu_type_t cpu_type;
 cpu_subtype_t cpu_subtype;
 cpu_threadtype_t cpu_threadtype;
 integer_t physical_cpu;
 integer_t physical_cpu_max;
 integer_t logical_cpu;
 integer_t logical_cpu_max;
 uint64_t max_mem;
};
#pragma pack(pop)
typedef struct host_basic_info host_basic_info_data_t;
typedef struct host_basic_info *host_basic_info_t;
struct host_sched_info {
 integer_t min_timeout;
 integer_t min_quantum;
};
typedef struct host_sched_info host_sched_info_data_t;
typedef struct host_sched_info *host_sched_info_t;
struct kernel_resource_sizes {
 natural_t task;
 natural_t thread;
 natural_t port;
 natural_t memory_region;
 natural_t memory_object;
};
typedef struct kernel_resource_sizes kernel_resource_sizes_data_t;
typedef struct kernel_resource_sizes *kernel_resource_sizes_t;
struct host_priority_info {
 integer_t kernel_priority;
 integer_t system_priority;
 integer_t server_priority;
 integer_t user_priority;
 integer_t depress_priority;
 integer_t idle_priority;
 integer_t minimum_priority;
 integer_t maximum_priority;
};
typedef struct host_priority_info host_priority_info_data_t;
typedef struct host_priority_info *host_priority_info_t;
struct host_load_info {
 integer_t avenrun[3];
 integer_t mach_factor[3];
};
typedef struct host_load_info host_load_info_data_t;
typedef struct host_load_info *host_load_info_t;
typedef struct vm_purgeable_info host_purgable_info_data_t;
typedef struct vm_purgeable_info *host_purgable_info_t;
struct host_cpu_load_info {
 natural_t cpu_ticks[4];
};
typedef struct host_cpu_load_info host_cpu_load_info_data_t;
typedef struct host_cpu_load_info *host_cpu_load_info_t;
struct host_preferred_user_arch {
 cpu_type_t cpu_type;
 cpu_subtype_t cpu_subtype;
};
typedef struct host_preferred_user_arch host_preferred_user_arch_data_t;
typedef struct host_preferred_user_arch *host_preferred_user_arch_t;
typedef int vm_prot_t;
typedef unsigned vm_sync_t;
typedef vm_offset_t pointer_t;
typedef vm_offset_t vm_address_t;
typedef uint64_t addr64_t;
typedef uint32_t reg64_t;
typedef uint32_t ppnum_t;
typedef mach_port_t vm_map_t, vm_map_read_t, vm_map_inspect_t;
typedef uint64_t vm_object_offset_t;
typedef uint64_t vm_object_size_t;
typedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
typedef unsigned long long memory_object_offset_t;
typedef unsigned long long memory_object_size_t;
typedef natural_t memory_object_cluster_size_t;
typedef natural_t * memory_object_fault_info_t;
typedef unsigned long long vm_object_id_t;
typedef mach_port_t memory_object_t;
typedef mach_port_t memory_object_control_t;
typedef memory_object_t *memory_object_array_t;
typedef mach_port_t memory_object_name_t;
typedef mach_port_t memory_object_default_t;
typedef int memory_object_copy_strategy_t;
typedef int memory_object_return_t;
typedef int *memory_object_info_t;
typedef int memory_object_flavor_t;
typedef int memory_object_info_data_t[(1024)];
struct memory_object_perf_info {
 memory_object_cluster_size_t cluster_size;
 boolean_t may_cache;
};
struct memory_object_attr_info {
 memory_object_copy_strategy_t copy_strategy;
 memory_object_cluster_size_t cluster_size;
 boolean_t may_cache_object;
 boolean_t temporary;
};
struct memory_object_behave_info {
 memory_object_copy_strategy_t copy_strategy;
 boolean_t temporary;
 boolean_t invalidate;
 boolean_t silent_overwrite;
 boolean_t advisory_pageout;
};
typedef struct memory_object_behave_info *memory_object_behave_info_t;
typedef struct memory_object_behave_info memory_object_behave_info_data_t;
typedef struct memory_object_perf_info *memory_object_perf_info_t;
typedef struct memory_object_perf_info memory_object_perf_info_data_t;
typedef struct memory_object_attr_info *memory_object_attr_info_t;
typedef struct memory_object_attr_info memory_object_attr_info_data_t;
struct upl_page_info {
 unsigned int opaque[2];
};
typedef struct upl_page_info upl_page_info_t;
typedef upl_page_info_t *upl_page_info_array_t;
typedef upl_page_info_array_t upl_page_list_ptr_t;
typedef uint32_t upl_offset_t;
typedef uint32_t upl_size_t;
typedef uint64_t upl_control_flags_t;
extern boolean_t upl_page_present(upl_page_info_t *upl, int index);
extern boolean_t upl_dirty_page(upl_page_info_t *upl, int index);
extern boolean_t upl_valid_page(upl_page_info_t *upl, int index);
extern void upl_deallocate(upl_t upl);
extern void upl_mark_decmp(upl_t upl);
extern void upl_unmark_decmp(upl_t upl);

struct x86_state_hdr {
 uint32_t flavor;
 uint32_t count;
};
typedef struct x86_state_hdr x86_state_hdr_t;
typedef struct i386_thread_state i386_thread_state_t;
typedef struct i386_thread_state x86_thread_state32_t;
typedef struct i386_float_state i386_float_state_t;
typedef struct i386_float_state x86_float_state32_t;
typedef struct i386_avx_state x86_avx_state32_t;
typedef struct i386_avx512_state x86_avx512_state32_t;
typedef struct i386_exception_state i386_exception_state_t;
typedef struct i386_exception_state x86_exception_state32_t;
typedef struct x86_debug_state32 x86_debug_state32_t;
typedef struct x86_thread_state64 x86_thread_state64_t;
typedef struct x86_thread_full_state64 x86_thread_full_state64_t;
typedef struct x86_float_state64 x86_float_state64_t;
typedef struct x86_avx_state64 x86_avx_state64_t;
typedef struct x86_avx512_state64 x86_avx512_state64_t;
typedef struct x86_exception_state64 x86_exception_state64_t;
typedef struct x86_debug_state64 x86_debug_state64_t;
typedef struct __x86_pagein_state x86_pagein_state_t;
typedef struct __x86_instruction_state x86_instruction_state_t;
typedef struct __last_branch_state last_branch_state_t;
struct x86_thread_state {
 x86_state_hdr_t tsh;
 union {
  x86_thread_state32_t ts32;
  x86_thread_state64_t ts64;
 } uts;
};
struct x86_float_state {
 x86_state_hdr_t fsh;
 union {
  x86_float_state32_t fs32;
  x86_float_state64_t fs64;
 } ufs;
};
struct x86_exception_state {
 x86_state_hdr_t esh;
 union {
  x86_exception_state32_t es32;
  x86_exception_state64_t es64;
 } ues;
};
struct x86_debug_state {
 x86_state_hdr_t dsh;
 union {
  x86_debug_state32_t ds32;
  x86_debug_state64_t ds64;
 } uds;
};
struct x86_avx_state {
 x86_state_hdr_t ash;
 union {
  x86_avx_state32_t as32;
  x86_avx_state64_t as64;
 } ufs;
};
struct x86_avx512_state {
 x86_state_hdr_t ash;
 union {
  x86_avx512_state32_t as32;
  x86_avx512_state64_t as64;
 } ufs;
};
typedef struct x86_thread_state x86_thread_state_t;
typedef struct x86_float_state x86_float_state_t;
typedef struct x86_exception_state x86_exception_state_t;
typedef struct x86_debug_state x86_debug_state_t;
typedef struct x86_avx_state x86_avx_state_t;
typedef struct x86_avx512_state x86_avx512_state_t;
typedef natural_t *thread_state_t;
typedef natural_t thread_state_data_t[(614)];
typedef int thread_state_flavor_t;
typedef thread_state_flavor_t *thread_state_flavor_array_t;

typedef struct ipc_info_space {
 natural_t iis_genno_mask;
 natural_t iis_table_size;
 natural_t iis_table_next;
 natural_t iis_tree_size;
 natural_t iis_tree_small;
 natural_t iis_tree_hash;
} ipc_info_space_t;
typedef struct ipc_info_space_basic {
 natural_t iisb_genno_mask;
 natural_t iisb_table_size;
 natural_t iisb_table_next;
 natural_t iisb_table_inuse;
 natural_t iisb_reserved[2];
} ipc_info_space_basic_t;
typedef struct ipc_info_name {
 mach_port_name_t iin_name;
              integer_t iin_collision;
 mach_port_type_t iin_type;
 mach_port_urefs_t iin_urefs;
 natural_t iin_object;
 natural_t iin_next;
 natural_t iin_hash;
} ipc_info_name_t;
typedef ipc_info_name_t *ipc_info_name_array_t;
typedef struct ipc_info_tree_name {
 ipc_info_name_t iitn_name;
 mach_port_name_t iitn_lchild;
 mach_port_name_t iitn_rchild;
} ipc_info_tree_name_t;
typedef ipc_info_tree_name_t *ipc_info_tree_name_array_t;
typedef struct ipc_info_port {
 natural_t iip_port_object;
 natural_t iip_receiver_object;
} ipc_info_port_t;
typedef ipc_info_port_t *exception_handler_info_array_t;
typedef int exception_type_t;
typedef integer_t exception_data_type_t;
typedef int64_t mach_exception_data_type_t;
typedef int exception_behavior_t;
typedef exception_data_type_t *exception_data_t;
typedef mach_exception_data_type_t *mach_exception_data_t;
typedef unsigned int exception_mask_t;
typedef exception_mask_t *exception_mask_array_t;
typedef exception_behavior_t *exception_behavior_array_t;
typedef thread_state_flavor_t *exception_flavor_array_t;
typedef mach_port_t *exception_port_array_t;
typedef ipc_info_port_t *exception_port_info_array_t;
typedef mach_exception_data_type_t mach_exception_code_t;
typedef mach_exception_data_type_t mach_exception_subcode_t;

typedef __darwin_uuid_t uuid_t;
typedef mach_port_t mach_voucher_t;
typedef mach_port_name_t mach_voucher_name_t;
typedef mach_voucher_name_t *mach_voucher_name_array_t;
struct ipc_voucher;
typedef struct ipc_voucher *ipc_voucher_t;
typedef uint32_t mach_voucher_selector_t;
typedef uint32_t mach_voucher_attr_key_t;
typedef mach_voucher_attr_key_t *mach_voucher_attr_key_array_t;
typedef uint8_t *mach_voucher_attr_content_t;
typedef uint32_t mach_voucher_attr_content_size_t;
typedef uint32_t mach_voucher_attr_command_t;
typedef uint32_t mach_voucher_attr_recipe_command_t;
typedef mach_voucher_attr_recipe_command_t *mach_voucher_attr_recipe_command_array_t;
#pragma pack(push, 1)
typedef struct mach_voucher_attr_recipe_data {
 mach_voucher_attr_key_t key;
 mach_voucher_attr_recipe_command_t command;
 mach_voucher_name_t previous_voucher;
 mach_voucher_attr_content_size_t content_size;
 uint8_t content[];
} mach_voucher_attr_recipe_data_t;
typedef mach_voucher_attr_recipe_data_t *mach_voucher_attr_recipe_t;
typedef mach_msg_type_number_t mach_voucher_attr_recipe_size_t;
typedef uint8_t *mach_voucher_attr_raw_recipe_t;
typedef mach_voucher_attr_raw_recipe_t mach_voucher_attr_raw_recipe_array_t;
typedef mach_msg_type_number_t mach_voucher_attr_raw_recipe_size_t;
typedef mach_msg_type_number_t mach_voucher_attr_raw_recipe_array_size_t;
#pragma pack(pop)
typedef mach_port_t mach_voucher_attr_manager_t;
typedef mach_port_t mach_voucher_attr_control_t;
struct ipc_voucher_attr_manager;
struct ipc_voucher_attr_control;
typedef const struct ipc_voucher_attr_manager *ipc_voucher_attr_manager_t;
typedef struct ipc_voucher_attr_control *ipc_voucher_attr_control_t;
typedef uint64_t mach_voucher_attr_value_handle_t;
typedef mach_voucher_attr_value_handle_t *mach_voucher_attr_value_handle_array_t;
typedef mach_msg_type_number_t mach_voucher_attr_value_handle_array_size_t;
typedef uint32_t mach_voucher_attr_value_reference_t;
typedef uint32_t mach_voucher_attr_value_flags_t;
typedef uint32_t mach_voucher_attr_control_flags_t;
typedef uint32_t mach_voucher_attr_importance_refs;
typedef integer_t *processor_info_t;
typedef integer_t *processor_info_array_t;
typedef integer_t processor_info_data_t[(1024)];
typedef integer_t *processor_set_info_t;
typedef integer_t processor_set_info_data_t[(1024)];
typedef int processor_flavor_t;
struct processor_basic_info {
 cpu_type_t cpu_type;
 cpu_subtype_t cpu_subtype;
 boolean_t running;
 int slot_num;
 boolean_t is_master;
};
typedef struct processor_basic_info processor_basic_info_data_t;
typedef struct processor_basic_info *processor_basic_info_t;
struct processor_cpu_load_info {
 unsigned int cpu_ticks[4];
};
typedef struct processor_cpu_load_info processor_cpu_load_info_data_t;
typedef struct processor_cpu_load_info *processor_cpu_load_info_t;
typedef int processor_set_flavor_t;
struct processor_set_basic_info {
 int processor_count;
 int default_policy;
};
typedef struct processor_set_basic_info processor_set_basic_info_data_t;
typedef struct processor_set_basic_info *processor_set_basic_info_t;
struct processor_set_load_info {
 int task_count;
 int thread_count;
 integer_t load_average;
 integer_t mach_factor;
};
typedef struct processor_set_load_info processor_set_load_info_data_t;
typedef struct processor_set_load_info *processor_set_load_info_t;
typedef int policy_t;
typedef integer_t *policy_info_t;
typedef integer_t *policy_base_t;
typedef integer_t *policy_limit_t;
struct policy_timeshare_base {
 integer_t base_priority;
};
struct policy_timeshare_limit {
 integer_t max_priority;
};
struct policy_timeshare_info {
 integer_t max_priority;
 integer_t base_priority;
 integer_t cur_priority;
 boolean_t depressed;
 integer_t depress_priority;
};
typedef struct policy_timeshare_base *policy_timeshare_base_t;
typedef struct policy_timeshare_limit *policy_timeshare_limit_t;
typedef struct policy_timeshare_info *policy_timeshare_info_t;
typedef struct policy_timeshare_base policy_timeshare_base_data_t;
typedef struct policy_timeshare_limit policy_timeshare_limit_data_t;
typedef struct policy_timeshare_info policy_timeshare_info_data_t;
struct policy_rr_base {
 integer_t base_priority;
 integer_t quantum;
};
struct policy_rr_limit {
 integer_t max_priority;
};
struct policy_rr_info {
 integer_t max_priority;
 integer_t base_priority;
 integer_t quantum;
 boolean_t depressed;
 integer_t depress_priority;
};
typedef struct policy_rr_base *policy_rr_base_t;
typedef struct policy_rr_limit *policy_rr_limit_t;
typedef struct policy_rr_info *policy_rr_info_t;
typedef struct policy_rr_base policy_rr_base_data_t;
typedef struct policy_rr_limit policy_rr_limit_data_t;
typedef struct policy_rr_info policy_rr_info_data_t;
struct policy_fifo_base {
 integer_t base_priority;
};
struct policy_fifo_limit {
 integer_t max_priority;
};
struct policy_fifo_info {
 integer_t max_priority;
 integer_t base_priority;
 boolean_t depressed;
 integer_t depress_priority;
};
typedef struct policy_fifo_base *policy_fifo_base_t;
typedef struct policy_fifo_limit *policy_fifo_limit_t;
typedef struct policy_fifo_info *policy_fifo_info_t;
typedef struct policy_fifo_base policy_fifo_base_data_t;
typedef struct policy_fifo_limit policy_fifo_limit_data_t;
typedef struct policy_fifo_info policy_fifo_info_data_t;
struct policy_bases {
 policy_timeshare_base_data_t ts;
 policy_rr_base_data_t rr;
 policy_fifo_base_data_t fifo;
};
struct policy_limits {
 policy_timeshare_limit_data_t ts;
 policy_rr_limit_data_t rr;
 policy_fifo_limit_data_t fifo;
};
struct policy_infos {
 policy_timeshare_info_data_t ts;
 policy_rr_info_data_t rr;
 policy_fifo_info_data_t fifo;
};
typedef struct policy_bases policy_base_data_t;
typedef struct policy_limits policy_limit_data_t;
typedef struct policy_infos policy_info_data_t;
typedef natural_t task_flavor_t;
typedef integer_t *task_info_t;
typedef integer_t task_info_data_t[(1024)];
#pragma pack(push, 4)
struct task_basic_info_32 {
 integer_t suspend_count;
 natural_t virtual_size;
 natural_t resident_size;
 time_value_t user_time;
 time_value_t system_time;
 policy_t policy;
};
typedef struct task_basic_info_32 task_basic_info_32_data_t;
typedef struct task_basic_info_32 *task_basic_info_32_t;
struct task_basic_info_64 {
 integer_t suspend_count;
 natural_t virtual_size;
 natural_t resident_size;
 time_value_t user_time;
 time_value_t system_time;
 policy_t policy;
};
typedef struct task_basic_info_64 task_basic_info_64_data_t;
typedef struct task_basic_info_64 *task_basic_info_64_t;
struct task_basic_info {
 integer_t suspend_count;
 vm_size_t virtual_size;
 vm_size_t resident_size;
 time_value_t user_time;
 time_value_t system_time;
 policy_t policy;
};
typedef struct task_basic_info task_basic_info_data_t;
typedef struct task_basic_info *task_basic_info_t;
struct task_events_info {
 integer_t faults;
 integer_t pageins;
 integer_t cow_faults;
 integer_t messages_sent;
 integer_t messages_received;
 integer_t syscalls_mach;
 integer_t syscalls_unix;
 integer_t csw;
};
typedef struct task_events_info task_events_info_data_t;
typedef struct task_events_info *task_events_info_t;
struct task_thread_times_info {
 time_value_t user_time;
 time_value_t system_time;
};
typedef struct task_thread_times_info task_thread_times_info_data_t;
typedef struct task_thread_times_info *task_thread_times_info_t;
struct task_absolutetime_info {
 uint64_t total_user;
 uint64_t total_system;
 uint64_t threads_user;
 uint64_t threads_system;
};
typedef struct task_absolutetime_info task_absolutetime_info_data_t;
typedef struct task_absolutetime_info *task_absolutetime_info_t;
struct task_kernelmemory_info {
 uint64_t total_palloc;
 uint64_t total_pfree;
 uint64_t total_salloc;
 uint64_t total_sfree;
};
typedef struct task_kernelmemory_info task_kernelmemory_info_data_t;
typedef struct task_kernelmemory_info *task_kernelmemory_info_t;
struct task_affinity_tag_info {
 integer_t set_count;
 integer_t min;
 integer_t max;
 integer_t task_count;
};
typedef struct task_affinity_tag_info task_affinity_tag_info_data_t;
typedef struct task_affinity_tag_info *task_affinity_tag_info_t;
struct task_dyld_info {
 mach_vm_address_t all_image_info_addr;
 mach_vm_size_t all_image_info_size;
 integer_t all_image_info_format;
};
typedef struct task_dyld_info task_dyld_info_data_t;
typedef struct task_dyld_info *task_dyld_info_t;
struct task_basic_info_64_2 {
 integer_t suspend_count;
 mach_vm_size_t virtual_size;
 mach_vm_size_t resident_size;
 time_value_t user_time;
 time_value_t system_time;
 policy_t policy;
};
typedef struct task_basic_info_64_2 task_basic_info_64_2_data_t;
typedef struct task_basic_info_64_2 *task_basic_info_64_2_t;
struct task_extmod_info {
 unsigned char task_uuid[16];
 vm_extmod_statistics_data_t extmod_statistics;
};
typedef struct task_extmod_info task_extmod_info_data_t;
typedef struct task_extmod_info *task_extmod_info_t;
struct mach_task_basic_info {
 mach_vm_size_t virtual_size;
 mach_vm_size_t resident_size;
 mach_vm_size_t resident_size_max;
 time_value_t user_time;
 time_value_t system_time;
 policy_t policy;
 integer_t suspend_count;
};
typedef struct mach_task_basic_info mach_task_basic_info_data_t;
typedef struct mach_task_basic_info *mach_task_basic_info_t;
struct task_power_info {
 uint64_t total_user;
 uint64_t total_system;
 uint64_t task_interrupt_wakeups;
 uint64_t task_platform_idle_wakeups;
 uint64_t task_timer_wakeups_bin_1;
 uint64_t task_timer_wakeups_bin_2;
};
typedef struct task_power_info task_power_info_data_t;
typedef struct task_power_info *task_power_info_t;
struct task_vm_info {
 mach_vm_size_t virtual_size;
 integer_t region_count;
 integer_t page_size;
 mach_vm_size_t resident_size;
 mach_vm_size_t resident_size_peak;
 mach_vm_size_t device;
 mach_vm_size_t device_peak;
 mach_vm_size_t internal;
 mach_vm_size_t internal_peak;
 mach_vm_size_t external;
 mach_vm_size_t external_peak;
 mach_vm_size_t reusable;
 mach_vm_size_t reusable_peak;
 mach_vm_size_t purgeable_volatile_pmap;
 mach_vm_size_t purgeable_volatile_resident;
 mach_vm_size_t purgeable_volatile_virtual;
 mach_vm_size_t compressed;
 mach_vm_size_t compressed_peak;
 mach_vm_size_t compressed_lifetime;
 mach_vm_size_t phys_footprint;
 mach_vm_address_t min_address;
 mach_vm_address_t max_address;
 int64_t ledger_phys_footprint_peak;
 int64_t ledger_purgeable_nonvolatile;
 int64_t ledger_purgeable_novolatile_compressed;
 int64_t ledger_purgeable_volatile;
 int64_t ledger_purgeable_volatile_compressed;
 int64_t ledger_tag_network_nonvolatile;
 int64_t ledger_tag_network_nonvolatile_compressed;
 int64_t ledger_tag_network_volatile;
 int64_t ledger_tag_network_volatile_compressed;
 int64_t ledger_tag_media_footprint;
 int64_t ledger_tag_media_footprint_compressed;
 int64_t ledger_tag_media_nofootprint;
 int64_t ledger_tag_media_nofootprint_compressed;
 int64_t ledger_tag_graphics_footprint;
 int64_t ledger_tag_graphics_footprint_compressed;
 int64_t ledger_tag_graphics_nofootprint;
 int64_t ledger_tag_graphics_nofootprint_compressed;
 int64_t ledger_tag_neural_footprint;
 int64_t ledger_tag_neural_footprint_compressed;
 int64_t ledger_tag_neural_nofootprint;
 int64_t ledger_tag_neural_nofootprint_compressed;
 uint64_t limit_bytes_remaining;
 integer_t decompressions;
};
typedef struct task_vm_info task_vm_info_data_t;
typedef struct task_vm_info *task_vm_info_t;
typedef struct vm_purgeable_info task_purgable_info_t;
struct task_trace_memory_info {
 uint64_t user_memory_address;
 uint64_t buffer_size;
 uint64_t mailbox_array_size;
};
typedef struct task_trace_memory_info task_trace_memory_info_data_t;
typedef struct task_trace_memory_info * task_trace_memory_info_t;
struct task_wait_state_info {
 uint64_t total_wait_state_time;
 uint64_t total_wait_sfi_state_time;
 uint32_t _reserved[4];
};
typedef struct task_wait_state_info task_wait_state_info_data_t;
typedef struct task_wait_state_info * task_wait_state_info_t;
typedef struct {
 uint64_t task_gpu_utilisation;
 uint64_t task_gpu_stat_reserved0;
 uint64_t task_gpu_stat_reserved1;
 uint64_t task_gpu_stat_reserved2;
} gpu_energy_data;
typedef gpu_energy_data *gpu_energy_data_t;
struct task_power_info_v2 {
 task_power_info_data_t cpu_energy;
 gpu_energy_data gpu_energy;
 uint64_t task_energy;
 uint64_t task_ptime;
 uint64_t task_pset_switches;
};
typedef struct task_power_info_v2 task_power_info_v2_data_t;
typedef struct task_power_info_v2 *task_power_info_v2_t;
struct task_flags_info {
 uint32_t flags;
};
typedef struct task_flags_info task_flags_info_data_t;
typedef struct task_flags_info * task_flags_info_t;
typedef uint32_t task_exc_guard_behavior_t;
#pragma pack(pop)
typedef natural_t task_inspect_flavor_t;
enum task_inspect_flavor {
 TASK_INSPECT_BASIC_COUNTS = 1,
};
struct task_inspect_basic_counts {
 uint64_t instructions;
 uint64_t cycles;
};
typedef struct task_inspect_basic_counts task_inspect_basic_counts_data_t;
typedef struct task_inspect_basic_counts *task_inspect_basic_counts_t;
typedef integer_t *task_inspect_info_t;
typedef natural_t task_policy_flavor_t;
typedef integer_t *task_policy_t;
typedef enum task_role {
 TASK_RENICED = -1,
 TASK_UNSPECIFIED = 0,
 TASK_FOREGROUND_APPLICATION = 1,
 TASK_BACKGROUND_APPLICATION = 2,
 TASK_CONTROL_APPLICATION = 3,
 TASK_GRAPHICS_SERVER = 4,
 TASK_THROTTLE_APPLICATION = 5,
 TASK_NONUI_APPLICATION = 6,
 TASK_DEFAULT_APPLICATION = 7,
 TASK_DARWINBG_APPLICATION = 8,
} task_role_t;
struct task_category_policy {
 task_role_t role;
};
typedef struct task_category_policy task_category_policy_data_t;
typedef struct task_category_policy *task_category_policy_t;
enum task_latency_qos {
 LATENCY_QOS_TIER_UNSPECIFIED = 0x0,
 LATENCY_QOS_TIER_0 = ((0xFF << 16) | 1),
 LATENCY_QOS_TIER_1 = ((0xFF << 16) | 2),
 LATENCY_QOS_TIER_2 = ((0xFF << 16) | 3),
 LATENCY_QOS_TIER_3 = ((0xFF << 16) | 4),
 LATENCY_QOS_TIER_4 = ((0xFF << 16) | 5),
 LATENCY_QOS_TIER_5 = ((0xFF << 16) | 6)
};
typedef integer_t task_latency_qos_t;
enum task_throughput_qos {
 THROUGHPUT_QOS_TIER_UNSPECIFIED = 0x0,
 THROUGHPUT_QOS_TIER_0 = ((0xFE << 16) | 1),
 THROUGHPUT_QOS_TIER_1 = ((0xFE << 16) | 2),
 THROUGHPUT_QOS_TIER_2 = ((0xFE << 16) | 3),
 THROUGHPUT_QOS_TIER_3 = ((0xFE << 16) | 4),
 THROUGHPUT_QOS_TIER_4 = ((0xFE << 16) | 5),
 THROUGHPUT_QOS_TIER_5 = ((0xFE << 16) | 6),
};
typedef integer_t task_throughput_qos_t;
struct task_qos_policy {
 task_latency_qos_t task_latency_qos_tier;
 task_throughput_qos_t task_throughput_qos_tier;
};
typedef struct task_qos_policy *task_qos_policy_t;
typedef int task_special_port_t;
typedef natural_t thread_flavor_t;
typedef integer_t *thread_info_t;
typedef integer_t thread_info_data_t[(32)];
struct thread_basic_info {
 time_value_t user_time;
 time_value_t system_time;
 integer_t cpu_usage;
 policy_t policy;
 integer_t run_state;
 integer_t flags;
 integer_t suspend_count;
 integer_t sleep_time;
};
typedef struct thread_basic_info thread_basic_info_data_t;
typedef struct thread_basic_info *thread_basic_info_t;
struct thread_identifier_info {
 uint64_t thread_id;
 uint64_t thread_handle;
 uint64_t dispatch_qaddr;
};
typedef struct thread_identifier_info thread_identifier_info_data_t;
typedef struct thread_identifier_info *thread_identifier_info_t;
struct thread_extended_info {
 uint64_t pth_user_time;
 uint64_t pth_system_time;
 int32_t pth_cpu_usage;
 int32_t pth_policy;
 int32_t pth_run_state;
 int32_t pth_flags;
 int32_t pth_sleep_time;
 int32_t pth_curpri;
 int32_t pth_priority;
 int32_t pth_maxpriority;
 char pth_name[64];
};
typedef struct thread_extended_info thread_extended_info_data_t;
typedef struct thread_extended_info * thread_extended_info_t;
struct io_stat_entry {
 uint64_t count;
 uint64_t size;
};
struct io_stat_info {
 struct io_stat_entry disk_reads;
 struct io_stat_entry io_priority[4];
 struct io_stat_entry paging;
 struct io_stat_entry metadata;
 struct io_stat_entry total_io;
};
typedef struct io_stat_info *io_stat_info_t;
typedef natural_t thread_policy_flavor_t;
typedef integer_t *thread_policy_t;
struct thread_standard_policy {
 natural_t no_data;
};
typedef struct thread_standard_policy thread_standard_policy_data_t;
typedef struct thread_standard_policy *thread_standard_policy_t;
struct thread_extended_policy {
 boolean_t timeshare;
};
typedef struct thread_extended_policy thread_extended_policy_data_t;
typedef struct thread_extended_policy *thread_extended_policy_t;
struct thread_time_constraint_policy {
 uint32_t period;
 uint32_t computation;
 uint32_t constraint;
 boolean_t preemptible;
};
typedef struct thread_time_constraint_policy thread_time_constraint_policy_data_t;
typedef struct thread_time_constraint_policy *thread_time_constraint_policy_t;
struct thread_precedence_policy {
 integer_t importance;
};
typedef struct thread_precedence_policy thread_precedence_policy_data_t;
typedef struct thread_precedence_policy *thread_precedence_policy_t;
struct thread_affinity_policy {
 integer_t affinity_tag;
};
typedef struct thread_affinity_policy thread_affinity_policy_data_t;
typedef struct thread_affinity_policy *thread_affinity_policy_t;
struct thread_background_policy {
 integer_t priority;
};
typedef struct thread_background_policy thread_background_policy_data_t;
typedef struct thread_background_policy *thread_background_policy_t;
typedef integer_t thread_latency_qos_t;
struct thread_latency_qos_policy {
 thread_latency_qos_t thread_latency_qos_tier;
};
typedef struct thread_latency_qos_policy thread_latency_qos_policy_data_t;
typedef struct thread_latency_qos_policy *thread_latency_qos_policy_t;
typedef integer_t thread_throughput_qos_t;
struct thread_throughput_qos_policy {
 thread_throughput_qos_t thread_throughput_qos_tier;
};
typedef struct thread_throughput_qos_policy thread_throughput_qos_policy_data_t;
typedef struct thread_throughput_qos_policy *thread_throughput_qos_policy_t;
typedef int alarm_type_t;
typedef int sleep_type_t;
typedef int clock_id_t;
typedef int clock_flavor_t;
typedef int *clock_attr_t;
typedef int clock_res_t;
struct mach_timespec {
 unsigned int tv_sec;
 clock_res_t tv_nsec;
};
typedef struct mach_timespec mach_timespec_t;
typedef unsigned int vm_machine_attribute_t;
typedef int vm_machine_attribute_val_t;
typedef unsigned int vm_inherit_t;
typedef int vm_purgable_t;
typedef int vm_behavior_t;
#pragma pack(push, 4)
typedef uint32_t vm32_object_id_t;
typedef int *vm_region_info_t;
typedef int *vm_region_info_64_t;
typedef int *vm_region_recurse_info_t;
typedef int *vm_region_recurse_info_64_t;
typedef int vm_region_flavor_t;
typedef int vm_region_info_data_t[(1024)];
struct vm_region_basic_info_64 {
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 boolean_t shared;
 boolean_t reserved;
 memory_object_offset_t offset;
 vm_behavior_t behavior;
 unsigned short user_wired_count;
};
typedef struct vm_region_basic_info_64 *vm_region_basic_info_64_t;
typedef struct vm_region_basic_info_64 vm_region_basic_info_data_64_t;
struct vm_region_basic_info {
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 boolean_t shared;
 boolean_t reserved;
 uint32_t offset;
 vm_behavior_t behavior;
 unsigned short user_wired_count;
};
typedef struct vm_region_basic_info *vm_region_basic_info_t;
typedef struct vm_region_basic_info vm_region_basic_info_data_t;
struct vm_region_extended_info {
 vm_prot_t protection;
 unsigned int user_tag;
 unsigned int pages_resident;
 unsigned int pages_shared_now_private;
 unsigned int pages_swapped_out;
 unsigned int pages_dirtied;
 unsigned int ref_count;
 unsigned short shadow_depth;
 unsigned char external_pager;
 unsigned char share_mode;
 unsigned int pages_reusable;
};
typedef struct vm_region_extended_info *vm_region_extended_info_t;
typedef struct vm_region_extended_info vm_region_extended_info_data_t;
struct vm_region_top_info {
 unsigned int obj_id;
 unsigned int ref_count;
 unsigned int private_pages_resident;
 unsigned int shared_pages_resident;
 unsigned char share_mode;
};
typedef struct vm_region_top_info *vm_region_top_info_t;
typedef struct vm_region_top_info vm_region_top_info_data_t;
struct vm_region_submap_info {
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 uint32_t offset;
 unsigned int user_tag;
 unsigned int pages_resident;
 unsigned int pages_shared_now_private;
 unsigned int pages_swapped_out;
 unsigned int pages_dirtied;
 unsigned int ref_count;
 unsigned short shadow_depth;
 unsigned char external_pager;
 unsigned char share_mode;
 boolean_t is_submap;
 vm_behavior_t behavior;
 vm32_object_id_t object_id;
 unsigned short user_wired_count;
};
typedef struct vm_region_submap_info *vm_region_submap_info_t;
typedef struct vm_region_submap_info vm_region_submap_info_data_t;
struct vm_region_submap_info_64 {
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 memory_object_offset_t offset;
 unsigned int user_tag;
 unsigned int pages_resident;
 unsigned int pages_shared_now_private;
 unsigned int pages_swapped_out;
 unsigned int pages_dirtied;
 unsigned int ref_count;
 unsigned short shadow_depth;
 unsigned char external_pager;
 unsigned char share_mode;
 boolean_t is_submap;
 vm_behavior_t behavior;
 vm32_object_id_t object_id;
 unsigned short user_wired_count;
 unsigned int pages_reusable;
 vm_object_id_t object_id_full;
};
typedef struct vm_region_submap_info_64 *vm_region_submap_info_64_t;
typedef struct vm_region_submap_info_64 vm_region_submap_info_data_64_t;
struct vm_region_submap_short_info_64 {
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 memory_object_offset_t offset;
 unsigned int user_tag;
 unsigned int ref_count;
 unsigned short shadow_depth;
 unsigned char external_pager;
 unsigned char share_mode;
 boolean_t is_submap;
 vm_behavior_t behavior;
 vm32_object_id_t object_id;
 unsigned short user_wired_count;
};
typedef struct vm_region_submap_short_info_64 *vm_region_submap_short_info_64_t;
typedef struct vm_region_submap_short_info_64 vm_region_submap_short_info_data_64_t;
struct mach_vm_read_entry {
 mach_vm_address_t address;
 mach_vm_size_t size;
};
struct vm_read_entry {
 vm_address_t address;
 vm_size_t size;
};
typedef struct mach_vm_read_entry mach_vm_read_entry_t[(256)];
typedef struct vm_read_entry vm_read_entry_t[(256)];
#pragma pack(pop)
typedef int *vm_page_info_t;
typedef int vm_page_info_data_t[];
typedef int vm_page_info_flavor_t;
struct vm_page_info_basic {
 int disposition;
 int ref_count;
 vm_object_id_t object_id;
 memory_object_offset_t offset;
 int depth;
 int __pad;
};
typedef struct vm_page_info_basic *vm_page_info_basic_t;
typedef struct vm_page_info_basic vm_page_info_basic_data_t;
typedef int kmod_t;
struct kmod_info;
typedef kern_return_t kmod_start_func_t(struct kmod_info * ki, void * data);
typedef kern_return_t kmod_stop_func_t(struct kmod_info * ki, void * data);
#pragma pack(push, 4)
typedef struct kmod_reference {
 struct kmod_reference * next;
 struct kmod_info * info;
} kmod_reference_t;
typedef struct kmod_info {
 struct kmod_info * next;
 int32_t info_version;
 uint32_t id;
 char name[64];
 char version[64];
 int32_t reference_count;
 kmod_reference_t * reference_list;
 vm_address_t address;
 vm_size_t size;
 vm_size_t hdr_size;
 kmod_start_func_t * start;
 kmod_stop_func_t * stop;
} kmod_info_t;
typedef struct kmod_info_32_v1 {
 uint32_t next_addr;
 int32_t info_version;
 uint32_t id;
 uint8_t name[64];
 uint8_t version[64];
 int32_t reference_count;
 uint32_t reference_list_addr;
 uint32_t address;
 uint32_t size;
 uint32_t hdr_size;
 uint32_t start_addr;
 uint32_t stop_addr;
} kmod_info_32_v1_t;
typedef struct kmod_info_64_v1 {
 uint64_t next_addr;
 int32_t info_version;
 uint32_t id;
 uint8_t name[64];
 uint8_t version[64];
 int32_t reference_count;
 uint64_t reference_list_addr;
 uint64_t address;
 uint64_t size;
 uint64_t hdr_size;
 uint64_t start_addr;
 uint64_t stop_addr;
} kmod_info_64_v1_t;
#pragma pack(pop)
typedef void * kmod_args_t;
typedef int kmod_control_flavor_t;
typedef kmod_info_t * kmod_info_array_t;
typedef struct fsid { int32_t val[2]; } fsid_t;

typedef struct fsobj_id {
 u_int32_t fid_objno;
 u_int32_t fid_generation;
} fsobj_id_t;
struct dyld_kernel_image_info {
 uuid_t uuid;
 fsobj_id_t fsobjid;
 fsid_t fsid;
 uint64_t load_addr;
};
struct dyld_kernel_process_info {
 struct dyld_kernel_image_info cache_image_info;
 uint64_t timestamp;
 uint32_t imageCount;
 uint32_t initialImageCount;
 uint8_t dyldState;
 boolean_t no_cache;
 boolean_t private_cache;
};
typedef struct dyld_kernel_image_info dyld_kernel_image_info_t;
typedef struct dyld_kernel_process_info dyld_kernel_process_info_t;
typedef dyld_kernel_image_info_t *dyld_kernel_image_info_array_t;
_Bool inline __attribute__ ((__always_inline__)) __attribute__((__warn_unused_result__))
__os_warn_unused(const _Bool x)
{
 return x;
}
static inline int __attribute__((__warn_unused_result__))
mach_vm_round_page_overflow(mach_vm_offset_t in, mach_vm_offset_t *out)
{
 return __os_warn_unused(({ _Bool __ovr = __os_warn_unused(__builtin_add_overflow((in), ((__typeof__(*out))(4096 - 1)), (out))); *out &= ~((__typeof__(*out))(4096 - 1)); __ovr; }));
}
extern vm_size_t mem_size;
extern uint64_t max_mem;
extern vm_size_t page_size;
extern vm_size_t page_mask;
extern int page_shift;
typedef struct task *task_t, *task_name_t, *task_inspect_t, *task_read_t, *task_suspension_token_t, *task_policy_set_t, *task_policy_get_t;
typedef struct thread *thread_t, *thread_act_t, *thread_inspect_t, *thread_read_t;
typedef struct ipc_space *ipc_space_t, *ipc_space_read_t, *ipc_space_inspect_t;
typedef struct coalition *coalition_t;
typedef struct host *host_t;
typedef struct host *host_priv_t;
typedef struct host *host_security_t;
typedef struct processor *processor_t;
typedef struct processor_set *processor_set_t;
typedef struct processor_set *processor_set_control_t;
typedef struct semaphore *semaphore_t;
typedef struct ledger *ledger_t;
typedef struct alarm *alarm_t;
typedef struct clock *clock_serv_t;
typedef struct clock *clock_ctrl_t;
typedef struct arcade_register *arcade_register_t;
typedef struct ipc_eventlink *ipc_eventlink_t;
typedef struct ipc_port *eventlink_port_pair_t[2];
typedef struct suid_cred *suid_cred_t;
typedef struct task_id_token *task_id_token_t;
typedef struct lock_set *lock_set_t;
struct lock_set;
struct task;
struct thread;
struct host;
struct processor;
struct processor_set;
struct semaphore;
struct ledger;
struct alarm;
struct clock;
struct arcade_register;
struct ipc_eventlink;
struct ipc_port;
struct suid_cred;
typedef processor_set_t processor_set_name_t;
typedef mach_port_t clock_reply_t;
typedef mach_port_t bootstrap_t;
typedef mach_port_t mem_entry_name_port_t;
typedef mach_port_t exception_handler_t;
typedef exception_handler_t *exception_handler_array_t;
typedef mach_port_t vm_task_entry_t;
typedef mach_port_t io_master_t;
typedef mach_port_t UNDServerRef;
typedef mach_port_t mach_eventlink_t;
typedef ipc_info_port_t exception_handler_info_t;
typedef task_t *task_array_t;
typedef thread_t *thread_array_t;
typedef processor_set_t *processor_set_array_t;
typedef processor_set_t *processor_set_name_array_t;
typedef processor_t *processor_array_t;
typedef thread_act_t *thread_act_array_t;
typedef ledger_t *ledger_array_t;
typedef task_t task_port_t;
typedef task_array_t task_port_array_t;
typedef thread_t thread_port_t;
typedef thread_array_t thread_port_array_t;
typedef ipc_space_t ipc_space_port_t;
typedef host_t host_name_t;
typedef host_t host_name_port_t;
typedef processor_set_t processor_set_port_t;
typedef processor_set_t processor_set_name_port_t;
typedef processor_set_array_t processor_set_name_port_array_t;
typedef processor_set_t processor_set_control_port_t;
typedef processor_t processor_port_t;
typedef processor_array_t processor_port_array_t;
typedef thread_act_t thread_act_port_t;
typedef thread_act_array_t thread_act_port_array_t;
typedef semaphore_t semaphore_port_t;
typedef lock_set_t lock_set_port_t;
typedef ledger_t ledger_port_t;
typedef ledger_array_t ledger_port_array_t;
typedef alarm_t alarm_port_t;
typedef clock_serv_t clock_serv_port_t;
typedef clock_ctrl_t clock_ctrl_port_t;
typedef exception_handler_t exception_port_t;
typedef exception_handler_array_t exception_port_arrary_t;
typedef char vfs_path_t[4096];
typedef char nspace_path_t[1024];
typedef char suid_cred_path_t[1024];
typedef uint32_t suid_cred_uid_t;
typedef unsigned int mach_task_flavor_t;
typedef unsigned int mach_thread_flavor_t;
typedef natural_t ledger_item_t;
typedef int64_t ledger_amount_t;
typedef mach_vm_offset_t *emulation_vector_t;
typedef char *user_subsystem_t;
typedef char *labelstr_t;
typedef void *event_t;
typedef uint64_t event64_t;
typedef int wait_result_t;
typedef void (*thread_continue_t)(void *, wait_result_t);
typedef int wait_interrupt_t;
typedef int wait_timeout_urgency_t;
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;
typedef __uint32_t __darwin_wctype_t;
void *memchr(const void *__s, int __c, size_t __n);
int memcmp(const void *__s1, const void *__s2, size_t __n);
void *memcpy(void *__dst, const void *__src, size_t __n);
void *memmove(void *__dst, const void *__src, size_t __len);
void *memset(void *__b, int __c, size_t __len);
char *strcat(char *__s1, const char *__s2);
char *strchr(const char *__s, int __c);
int strcmp(const char *__s1, const char *__s2);
int strcoll(const char *__s1, const char *__s2);
char *strcpy(char *__dst, const char *__src);
size_t strcspn(const char *__s, const char *__charset);
char *strerror(int __errnum) __asm("_" "strerror" );
size_t strlen(const char *__s);
char *strncat(char *__s1, const char *__s2, size_t __n);
int strncmp(const char *__s1, const char *__s2, size_t __n);
char *strncpy(char *__dst, const char *__src, size_t __n);
char *strpbrk(const char *__s, const char *__charset);
char *strrchr(const char *__s, int __c);
size_t strspn(const char *__s, const char *__charset);
char *strstr(const char *__big, const char *__little);
char *strtok(char *__str, const char *__sep);
size_t strxfrm(char *__s1, const char *__s2, size_t __n);
char *strtok_r(char *__str, const char *__sep, char **__lasts);
int strerror_r(int __errnum, char *__strerrbuf, size_t __buflen);
char *strdup(const char *__s1);
void *memccpy(void *__dst, const void *__src, int __c, size_t __n);
char *stpcpy(char *__dst, const char *__src);
char *stpncpy(char *__dst, const char *__src, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int __sig);
errno_t memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n) __attribute__((availability(macosx,introduced=10.9)));
void *memmem(const void *__big, size_t __big_len, const void *__little, size_t __little_len) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *__b, const void *__pattern4, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *__b, const void *__pattern8, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *__b, const void *__pattern16, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
char *strcasestr(const char *__big, const char *__little);
char *strnstr(const char *__big, const char *__little, size_t __len);
size_t strlcat(char *__dst, const char *__source, size_t __size);
size_t strlcpy(char *__dst, const char *__source, size_t __size);
void strmode(int __mode, char *__bp);
char *strsep(char **__stringp, const char *__delim);
void swab(const void * restrict, void * restrict, ssize_t);
__attribute__((availability(macosx,introduced=10.12.1))) __attribute__((availability(ios,introduced=10.1)))
__attribute__((availability(tvos,introduced=10.0.1))) __attribute__((availability(watchos,introduced=3.1)))
int timingsafe_bcmp(const void *__b1, const void *__b2, size_t __len);
__attribute__((availability(macosx,introduced=11.0))) __attribute__((availability(ios,introduced=14.0)))
__attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)))
int strsignal_r(int __sig, char *__strsignalbuf, size_t __buflen);
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;
int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);
int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));
struct queue_entry {
 struct queue_entry *next;
 struct queue_entry *prev;
};
typedef struct queue_entry *queue_t;
typedef struct queue_entry queue_head_t;
typedef struct queue_entry queue_chain_t;
typedef struct queue_entry *queue_entry_t;
static __inline__ void
enqueue_head(
 queue_t que,
 queue_entry_t elt)
{
 queue_entry_t old_head;
 do { } while (0);
 old_head = que->next;
 elt->next = old_head;
 elt->prev = que;
 old_head->prev = elt;
 que->next = elt;
}
static __inline__ void
enqueue_tail(
 queue_t que,
 queue_entry_t elt)
{
 queue_entry_t old_tail;
 do { } while (0);
 old_tail = que->prev;
 elt->next = que;
 elt->prev = old_tail;
 old_tail->next = elt;
 que->prev = elt;
}
static __inline__ queue_entry_t
dequeue_head(
 queue_t que)
{
 queue_entry_t elt = (queue_entry_t)((void *)0);
 queue_entry_t new_head;
 if (que->next != que) {
  elt = que->next;
  do { } while (0);
  new_head = elt->next;
  new_head->prev = que;
  que->next = new_head;
  do { } while(0);
 }
 return elt;
}
static __inline__ queue_entry_t
dequeue_tail(
 queue_t que)
{
 queue_entry_t elt = (queue_entry_t)((void *)0);
 queue_entry_t new_tail;
 if (que->prev != que) {
  elt = que->prev;
  do { } while (0);
  new_tail = elt->prev;
  new_tail->next = que;
  que->prev = new_tail;
  do { } while(0);
 }
 return elt;
}
static __inline__ void
remqueue(
 queue_entry_t elt)
{
 queue_entry_t next_elt, prev_elt;
 do { } while (0);
 next_elt = elt->next;
 prev_elt = elt->prev;
 next_elt->prev = prev_elt;
 prev_elt->next = next_elt;
 do { } while(0);
}
static __inline__ void
insque(
 queue_entry_t entry,
 queue_entry_t pred)
{
 queue_entry_t successor;
 do { } while (0);
 successor = pred->next;
 entry->next = successor;
 entry->prev = pred;
 successor->prev = entry;
 pred->next = entry;
}
static __inline__ void
remque(
 queue_entry_t elt)
{
 remqueue(elt);
}
static __inline__ void
re_queue_head(queue_t que, queue_entry_t elt)
{
 queue_entry_t n_elt, p_elt;
 do { } while (0);
 do { } while (0);
 n_elt = elt->next;
 p_elt = elt->prev;
 n_elt->prev = p_elt;
 p_elt->next = n_elt;
 n_elt = que->next;
 elt->next = n_elt;
 elt->prev = que;
 n_elt->prev = elt;
 que->next = elt;
}
static __inline__ void
re_queue_tail(queue_t que, queue_entry_t elt)
{
 queue_entry_t n_elt, p_elt;
 do { } while (0);
 do { } while (0);
 n_elt = elt->next;
 p_elt = elt->prev;
 n_elt->prev = p_elt;
 p_elt->next = n_elt;
 p_elt = que->prev;
 elt->next = que;
 elt->prev = p_elt;
 p_elt->next = elt;
 que->prev = elt;
}
static __inline__ void
movqueue(queue_t _old, queue_t _new)
{
 queue_entry_t next_elt, prev_elt;
 do { } while (0);
 if ((((_old)) == (((_old)->next)))) {
  do { (_new)->next = (_new); (_new)->prev = (_new);} while (0);
  return;
 }
 next_elt = _old->next;
 prev_elt = _old->prev;
 _new->next = next_elt;
 _new->prev = prev_elt;
 next_elt->prev = _new;
 prev_elt->next = _new;
 do { (_old)->next = (_old); (_old)->prev = (_old);} while (0);
}
typedef enum lck_type {
 LCK_TYPE_SPIN,
 LCK_TYPE_MTX,
 LCK_TYPE_RW,
 LCK_TYPE_TICKET
} lck_type_t;
typedef struct _lck_grp_ lck_grp_t;
typedef struct __lck_grp_attr__ lck_grp_attr_t;
extern lck_grp_attr_t *lck_grp_attr_alloc_init(
 void);
extern void lck_grp_attr_setdefault(
 lck_grp_attr_t *attr);
extern void lck_grp_attr_setstat(
 lck_grp_attr_t *attr);
extern void lck_grp_attr_free(
 lck_grp_attr_t *attr);
extern lck_grp_t *lck_grp_alloc_init(
 const char* grp_name,
 lck_grp_attr_t *attr);
extern void lck_grp_free(
 lck_grp_t *grp);
__attribute__((__noreturn__)) __attribute__((__cold__)) __attribute__((__not_tail_called__))
extern void Assert(
 const char *file,
 int line,
 const char *expression) __attribute__((noinline));
extern int kext_assertions_enable;
typedef struct __lck_spin_t__ lck_spin_t;
typedef struct __lck_mtx_t__ lck_mtx_t;
typedef struct __lck_mtx_ext_t__ lck_mtx_ext_t;
typedef struct __lck_rw_t__ lck_rw_t;
typedef unsigned int lck_sleep_action_t;
typedef unsigned int lck_wake_action_t;
typedef struct __lck_attr__ lck_attr_t;
extern lck_attr_t *lck_attr_alloc_init(void);
extern void lck_attr_setdefault(
 lck_attr_t *attr);
extern void lck_attr_setdebug(
 lck_attr_t *attr);
extern void lck_attr_cleardebug(
 lck_attr_t *attr);
extern void lck_attr_free(
 lck_attr_t *attr);
extern lck_spin_t *lck_spin_alloc_init(
 lck_grp_t *grp,
 lck_attr_t *attr);
extern void lck_spin_init(
 lck_spin_t *lck,
 lck_grp_t *grp,
 lck_attr_t *attr);
extern void lck_spin_lock(
 lck_spin_t *lck);
extern void lck_spin_lock_grp(
 lck_spin_t *lck,
 lck_grp_t *grp);
extern void lck_spin_unlock(
 lck_spin_t *lck);
extern void lck_spin_destroy(
 lck_spin_t *lck,
 lck_grp_t *grp);
extern void lck_spin_free(
 lck_spin_t *lck,
 lck_grp_t *grp);
extern wait_result_t lck_spin_sleep(
 lck_spin_t *lck,
 lck_sleep_action_t lck_sleep_action,
 event_t event,
 wait_interrupt_t interruptible);
extern wait_result_t lck_spin_sleep_grp(
 lck_spin_t *lck,
 lck_sleep_action_t lck_sleep_action,
 event_t event,
 wait_interrupt_t interruptible,
 lck_grp_t *grp);
extern wait_result_t lck_spin_sleep_deadline(
 lck_spin_t *lck,
 lck_sleep_action_t lck_sleep_action,
 event_t event,
 wait_interrupt_t interruptible,
 uint64_t deadline);
extern lck_mtx_t *lck_mtx_alloc_init(
 lck_grp_t *grp,
 lck_attr_t *attr);
extern void lck_mtx_init(
 lck_mtx_t *lck,
 lck_grp_t *grp,
 lck_attr_t *attr);
extern void lck_mtx_lock(
 lck_mtx_t *lck);
extern void lck_mtx_unlock(
 lck_mtx_t *lck);
extern void lck_mtx_destroy(
 lck_mtx_t *lck,
 lck_grp_t *grp);
extern void lck_mtx_free(
 lck_mtx_t *lck,
 lck_grp_t *grp);
extern wait_result_t lck_mtx_sleep(
 lck_mtx_t *lck,
 lck_sleep_action_t lck_sleep_action,
 event_t event,
 wait_interrupt_t interruptible);
extern wait_result_t lck_mtx_sleep_deadline(
 lck_mtx_t *lck,
 lck_sleep_action_t lck_sleep_action,
 event_t event,
 wait_interrupt_t interruptible,
 uint64_t deadline);
extern void lck_mtx_assert(
 lck_mtx_t *lck,
 unsigned int type);
typedef unsigned int lck_rw_type_t;
extern lck_rw_t *lck_rw_alloc_init(
 lck_grp_t *grp,
 lck_attr_t *attr);
extern void lck_rw_init(
 lck_rw_t *lck,
 lck_grp_t *grp,
 lck_attr_t *attr);
extern void lck_rw_lock(
 lck_rw_t *lck,
 lck_rw_type_t lck_rw_type);
extern void lck_rw_unlock(
 lck_rw_t *lck,
 lck_rw_type_t lck_rw_type);
extern void lck_rw_lock_shared(
 lck_rw_t *lck);
extern void lck_rw_unlock_shared(
 lck_rw_t *lck);
extern boolean_t lck_rw_lock_yield_shared(
 lck_rw_t *lck,
 boolean_t force_yield);
extern void lck_rw_lock_exclusive(
 lck_rw_t *lck);
extern _Bool lck_rw_lock_exclusive_check_contended(
 lck_rw_t *lck);
extern void lck_rw_unlock_exclusive(
 lck_rw_t *lck);
extern void lck_rw_destroy(
 lck_rw_t *lck,
 lck_grp_t *grp);
extern void lck_rw_free(
 lck_rw_t *lck,
 lck_grp_t *grp);
extern wait_result_t lck_rw_sleep(
 lck_rw_t *lck,
 lck_sleep_action_t lck_sleep_action,
 event_t event,
 wait_interrupt_t interruptible);
extern wait_result_t lck_rw_sleep_deadline(
 lck_rw_t *lck,
 lck_sleep_action_t lck_sleep_action,
 event_t event,
 wait_interrupt_t interruptible,
 uint64_t deadline);
extern boolean_t lck_rw_lock_shared_to_exclusive(
 lck_rw_t *lck);
extern void lck_rw_lock_exclusive_to_shared(
 lck_rw_t *lck);
extern boolean_t lck_rw_try_lock(
 lck_rw_t *lck,
 lck_rw_type_t lck_rw_type);
struct vmspace {
 int32_t dummy;
 caddr_t dummy2;
 int32_t dummy3[5];
 caddr_t dummy4[3];
};
struct proc *current_proc(void);
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
struct ttysize {
 unsigned short ts_lines;
 unsigned short ts_cols;
 unsigned short ts_xxx;
 unsigned short ts_yyy;
};
extern void *_MALLOC(
 size_t size,
 int type,
 int flags);
extern void _FREE(
 void *addr,
 int type);
extern void *_MALLOC_ZONE(
 size_t size,
 int type,
 int flags);
extern void _FREE_ZONE(
 void *elem,
 size_t size,
 int type);
#pragma pack(4)
struct kevent {
 uintptr_t ident;
 int16_t filter;
 uint16_t flags;
 uint32_t fflags;
 intptr_t data;
 void *udata;
};
#pragma pack()
struct kevent64_s {
 uint64_t ident;
 int16_t filter;
 uint16_t flags;
 uint32_t fflags;
 int64_t data;
 uint64_t udata;
 uint64_t ext[2];
};
enum {
 eNoteReapDeprecated __attribute__((__deprecated__("This kqueue(2) EVFILT_PROC flag is deprecated"))) = 0x10000000
};
enum {
 eNoteExitReparentedDeprecated __attribute__((__deprecated__("This kqueue(2) EVFILT_PROC flag is no longer sent"))) = 0x00080000
};
struct selinfo;
extern int selwait;
void selrecord(proc_t selector, struct selinfo *, void *);
void selwakeup(struct selinfo *);
void selthreadclear(struct selinfo *);
typedef __darwin_uuid_string_t uuid_string_t;
static const uuid_t UUID_NULL __attribute__ ((unused)) = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
void uuid_clear(uuid_t uu);
int uuid_compare(const uuid_t uu1, const uuid_t uu2);
void uuid_copy(uuid_t dst, const uuid_t src);
void uuid_generate(uuid_t out);
void uuid_generate_random(uuid_t out);
void uuid_generate_time(uuid_t out);
void uuid_generate_early_random(uuid_t out);
int uuid_is_null(const uuid_t uu);
int uuid_parse(const uuid_string_t in, uuid_t uu);
void uuid_unparse(const uuid_t uu, uuid_string_t out);
void uuid_unparse_lower(const uuid_t uu, uuid_string_t out);
void uuid_unparse_upper(const uuid_t uu, uuid_string_t out);
extern proc_t kernproc;
extern int proc_is_classic(proc_t p);
extern _Bool proc_is_exotic(proc_t p);
extern _Bool proc_is_alien(proc_t p);
proc_t current_proc_EXTERNAL(void);
extern int msleep(void *chan, lck_mtx_t *mtx, int pri, const char *wmesg, struct timespec * ts );
extern void wakeup(void *chan);
extern void wakeup_one(caddr_t chan);
extern int proc_selfpid(void);
extern int proc_selfppid(void);
extern uint64_t proc_selfcsflags(void);
extern int proc_csflags(proc_t p, uint64_t* flags);
extern void proc_signal(int pid, int signum);
extern int proc_issignal(int pid, sigset_t mask);
extern int proc_isinferior(int pid1, int pid2);
void proc_name(int pid, char * buf, int size);
extern char *proc_best_name(proc_t p);
void proc_selfname(char * buf, int size);
extern proc_t proc_find(int pid);
extern proc_t proc_find_ident(struct proc_ident const *i);
extern proc_t proc_self(void);
extern int proc_rele(proc_t p);
extern int proc_pid(proc_t);
extern int proc_ppid(proc_t);
extern int proc_original_ppid(proc_t);
extern int proc_starttime(proc_t, struct timeval *);
extern uint32_t proc_platform(const proc_t);
extern uint32_t proc_min_sdk(proc_t);
extern uint32_t proc_sdk(proc_t);
extern int proc_noremotehang(proc_t);
extern int proc_forcequota(proc_t);
extern int proc_chrooted(proc_t);
extern boolean_t proc_send_synchronous_EXC_RESOURCE(proc_t p);
extern int proc_is64bit(proc_t);
extern int proc_is64bit_data(proc_t);
extern int proc_isinitproc(proc_t);
extern int proc_exiting(proc_t);
extern int proc_in_teardown(proc_t);
int proc_suser(proc_t p);
kauth_cred_t proc_ucred(proc_t p);
extern int proc_issetugid(proc_t p);
extern int proc_tbe(proc_t);
extern int proc_gettty(proc_t p, vnode_t *vp);
extern int proc_gettty_dev(proc_t p, dev_t *dev);
pid_t proc_selfpgrpid(void);
pid_t proc_pgrpid(proc_t p);
pid_t proc_sessionid(proc_t p);
typedef __builtin_va_list __gnuc_va_list;
typedef __builtin_va_list va_list;
uint16_t crc16(uint16_t crc, const void *bufp, size_t len);
uint32_t crc32(uint32_t crc, const void *bufp, size_t len);
struct kcdata_item {
 uint32_t type;
 uint32_t size;
 uint64_t flags;
 char data[];
};
typedef struct kcdata_item * kcdata_item_t;
enum KCDATA_SUBTYPE_TYPES { KC_ST_CHAR = 1, KC_ST_INT8, KC_ST_UINT8, KC_ST_INT16, KC_ST_UINT16, KC_ST_INT32, KC_ST_UINT32, KC_ST_INT64, KC_ST_UINT64 };
typedef enum KCDATA_SUBTYPE_TYPES kctype_subtype_t;
struct kcdata_subtype_descriptor {
 uint8_t kcs_flags;
 uint8_t kcs_elem_type;
 uint16_t kcs_elem_offset;
 uint32_t kcs_elem_size;
 char kcs_name[32];
};
typedef struct kcdata_subtype_descriptor * kcdata_subtype_descriptor_t;
static inline uint32_t
kcs_get_elem_size(kcdata_subtype_descriptor_t d)
{
 if (d->kcs_flags & 0x1) {
  return (uint32_t)((d->kcs_elem_size & 0xffff) * ((d->kcs_elem_size & 0xffff0000) >> 16));
 }
 return d->kcs_elem_size;
}
static inline uint32_t
kcs_get_elem_count(kcdata_subtype_descriptor_t d)
{
 if (d->kcs_flags & 0x1) {
  return (d->kcs_elem_size >> 16) & 0xffff;
 }
 return 1;
}
static inline int
kcs_set_elem_size(kcdata_subtype_descriptor_t d, uint32_t size, uint32_t count)
{
 if (count > 1) {
  if (size > 0xffff || count > 0xffff) {
   return -1;
  }
  d->kcs_elem_size = ((count & 0xffff) << 16 | (size & 0xffff));
 } else {
  d->kcs_elem_size = size;
 }
 return 0;
}
struct kcdata_type_definition {
 uint32_t kct_type_identifier;
 uint32_t kct_num_elements;
 char kct_name[32];
 struct kcdata_subtype_descriptor kct_elements[];
};
struct stack_snapshot_frame32 {
 uint32_t lr;
 uint32_t sp;
};
struct stack_snapshot_frame64 {
 uint64_t lr;
 uint64_t sp;
};
struct dyld_uuid_info_32 {
 uint32_t imageLoadAddress;
 uuid_t imageUUID;
};
struct dyld_uuid_info_64 {
 uint64_t imageLoadAddress;
 uuid_t imageUUID;
};
struct dyld_uuid_info_64_v2 {
 uint64_t imageLoadAddress;
 uuid_t imageUUID;
 uint64_t imageSlidBaseAddress;
};
struct dyld_shared_cache_loadinfo {
 uint64_t sharedCacheSlide;
 uuid_t sharedCacheUUID;
 uint64_t sharedCacheUnreliableSlidBaseAddress;
 uint64_t sharedCacheSlidFirstMapping;
};
struct dyld_aot_cache_uuid_info {
 uint64_t x86SlidBaseAddress;
 uuid_t x86UUID;
 uint64_t aotSlidBaseAddress;
 uuid_t aotUUID;
};
struct user32_dyld_uuid_info {
 uint32_t imageLoadAddress;
 uuid_t imageUUID;
};
struct user64_dyld_uuid_info {
 uint64_t imageLoadAddress;
 uuid_t imageUUID;
};
struct user64_dyld_aot_info {
 uint64_t x86LoadAddress;
 uint64_t aotLoadAddress;
 uint64_t aotImageSize;
 uint8_t aotImageKey[32];
};
enum task_snapshot_flags {
 kTaskRsrcFlagged = 0x4,
 kTerminatedSnapshot = 0x8,
 kPidSuspended = 0x10,
 kFrozen = 0x20,
 kTaskDarwinBG = 0x40,
 kTaskExtDarwinBG = 0x80,
 kTaskVisVisible = 0x100,
 kTaskVisNonvisible = 0x200,
 kTaskIsForeground = 0x400,
 kTaskIsBoosted = 0x800,
 kTaskIsSuppressed = 0x1000,
 kTaskIsTimerThrottled = 0x2000,
 kTaskIsImpDonor = 0x4000,
 kTaskIsLiveImpDonor = 0x8000,
 kTaskIsDirty = 0x10000,
 kTaskWqExceededConstrainedThreadLimit = 0x20000,
 kTaskWqExceededTotalThreadLimit = 0x40000,
 kTaskWqFlagsAvailable = 0x80000,
 kTaskUUIDInfoFaultedIn = 0x100000,
 kTaskUUIDInfoMissing = 0x200000,
 kTaskUUIDInfoTriedFault = 0x400000,
 kTaskSharedRegionInfoUnavailable = 0x800000,
 kTaskTALEngaged = 0x1000000,
 kTaskIsDirtyTracked = 0x4000000,
 kTaskAllowIdleExit = 0x8000000,
 kTaskIsTranslated = 0x10000000,
 kTaskSharedRegionNone = 0x20000000,
 kTaskSharedRegionSystem = 0x40000000,
 kTaskSharedRegionOther = 0x80000000,
};
enum thread_snapshot_flags {
 kHasDispatchSerial = 0x4,
 kStacksPCOnly = 0x8,
 kThreadDarwinBG = 0x10,
 kThreadIOPassive = 0x20,
 kThreadSuspended = 0x40,
 kThreadTruncatedBT = 0x80,
 kGlobalForcedIdle = 0x100,
 kThreadFaultedBT = 0x200,
 kThreadTriedFaultBT = 0x400,
 kThreadOnCore = 0x800,
 kThreadIdleWorker = 0x1000,
 kThreadMain = 0x2000,
};
struct mem_and_io_snapshot {
 uint32_t snapshot_magic;
 uint32_t free_pages;
 uint32_t active_pages;
 uint32_t inactive_pages;
 uint32_t purgeable_pages;
 uint32_t wired_pages;
 uint32_t speculative_pages;
 uint32_t throttled_pages;
 uint32_t filebacked_pages;
 uint32_t compressions;
 uint32_t decompressions;
 uint32_t compressor_size;
 int32_t busy_buffer_count;
 uint32_t pages_wanted;
 uint32_t pages_reclaimed;
 uint8_t pages_wanted_reclaimed_valid;
} __attribute__((packed));
struct thread_snapshot_v2 {
 uint64_t ths_thread_id;
 uint64_t ths_wait_event;
 uint64_t ths_continuation;
 uint64_t ths_total_syscalls;
 uint64_t ths_voucher_identifier;
 uint64_t ths_dqserialnum;
 uint64_t ths_user_time;
 uint64_t ths_sys_time;
 uint64_t ths_ss_flags;
 uint64_t ths_last_run_time;
 uint64_t ths_last_made_runnable_time;
 uint32_t ths_state;
 uint32_t ths_sched_flags;
 int16_t ths_base_priority;
 int16_t ths_sched_priority;
 uint8_t ths_eqos;
 uint8_t ths_rqos;
 uint8_t ths_rqos_override;
 uint8_t ths_io_tier;
} __attribute__((packed));
struct thread_snapshot_v3 {
 uint64_t ths_thread_id;
 uint64_t ths_wait_event;
 uint64_t ths_continuation;
 uint64_t ths_total_syscalls;
 uint64_t ths_voucher_identifier;
 uint64_t ths_dqserialnum;
 uint64_t ths_user_time;
 uint64_t ths_sys_time;
 uint64_t ths_ss_flags;
 uint64_t ths_last_run_time;
 uint64_t ths_last_made_runnable_time;
 uint32_t ths_state;
 uint32_t ths_sched_flags;
 int16_t ths_base_priority;
 int16_t ths_sched_priority;
 uint8_t ths_eqos;
 uint8_t ths_rqos;
 uint8_t ths_rqos_override;
 uint8_t ths_io_tier;
 uint64_t ths_thread_t;
} __attribute__((packed));
struct thread_snapshot_v4 {
 uint64_t ths_thread_id;
 uint64_t ths_wait_event;
 uint64_t ths_continuation;
 uint64_t ths_total_syscalls;
 uint64_t ths_voucher_identifier;
 uint64_t ths_dqserialnum;
 uint64_t ths_user_time;
 uint64_t ths_sys_time;
 uint64_t ths_ss_flags;
 uint64_t ths_last_run_time;
 uint64_t ths_last_made_runnable_time;
 uint32_t ths_state;
 uint32_t ths_sched_flags;
 int16_t ths_base_priority;
 int16_t ths_sched_priority;
 uint8_t ths_eqos;
 uint8_t ths_rqos;
 uint8_t ths_rqos_override;
 uint8_t ths_io_tier;
 uint64_t ths_thread_t;
 uint64_t ths_requested_policy;
 uint64_t ths_effective_policy;
} __attribute__((packed));
struct thread_group_snapshot {
 uint64_t tgs_id;
 char tgs_name[16];
} __attribute__((packed));
enum thread_group_flags {
 kThreadGroupEfficient = 0x1,
 kThreadGroupUIApp = 0x2
};
struct thread_group_snapshot_v2 {
 uint64_t tgs_id;
 char tgs_name[16];
 uint64_t tgs_flags;
} __attribute__((packed));
enum coalition_flags {
 kCoalitionTermRequested = 0x1,
 kCoalitionTerminated = 0x2,
 kCoalitionReaped = 0x4,
 kCoalitionPrivileged = 0x8,
};
struct jetsam_coalition_snapshot {
 uint64_t jcs_id;
 uint64_t jcs_flags;
 uint64_t jcs_thread_group;
 uint64_t jcs_leader_task_uniqueid;
} __attribute__((packed));
struct instrs_cycles_snapshot {
 uint64_t ics_instructions;
 uint64_t ics_cycles;
} __attribute__((packed));
struct thread_delta_snapshot_v2 {
 uint64_t tds_thread_id;
 uint64_t tds_voucher_identifier;
 uint64_t tds_ss_flags;
 uint64_t tds_last_made_runnable_time;
 uint32_t tds_state;
 uint32_t tds_sched_flags;
 int16_t tds_base_priority;
 int16_t tds_sched_priority;
 uint8_t tds_eqos;
 uint8_t tds_rqos;
 uint8_t tds_rqos_override;
 uint8_t tds_io_tier;
} __attribute__ ((packed));
struct thread_delta_snapshot_v3 {
 uint64_t tds_thread_id;
 uint64_t tds_voucher_identifier;
 uint64_t tds_ss_flags;
 uint64_t tds_last_made_runnable_time;
 uint32_t tds_state;
 uint32_t tds_sched_flags;
 int16_t tds_base_priority;
 int16_t tds_sched_priority;
 uint8_t tds_eqos;
 uint8_t tds_rqos;
 uint8_t tds_rqos_override;
 uint8_t tds_io_tier;
 uint64_t tds_requested_policy;
 uint64_t tds_effective_policy;
} __attribute__ ((packed));
struct io_stats_snapshot {
 uint64_t ss_disk_reads_count;
 uint64_t ss_disk_reads_size;
 uint64_t ss_disk_writes_count;
 uint64_t ss_disk_writes_size;
 uint64_t ss_io_priority_count[4];
 uint64_t ss_io_priority_size[4];
 uint64_t ss_paging_count;
 uint64_t ss_paging_size;
 uint64_t ss_non_paging_count;
 uint64_t ss_non_paging_size;
 uint64_t ss_data_count;
 uint64_t ss_data_size;
 uint64_t ss_metadata_count;
 uint64_t ss_metadata_size;
} __attribute__ ((packed));
struct task_snapshot_v2 {
 uint64_t ts_unique_pid;
 uint64_t ts_ss_flags;
 uint64_t ts_user_time_in_terminated_threads;
 uint64_t ts_system_time_in_terminated_threads;
 uint64_t ts_p_start_sec;
 uint64_t ts_task_size;
 uint64_t ts_max_resident_size;
 uint32_t ts_suspend_count;
 uint32_t ts_faults;
 uint32_t ts_pageins;
 uint32_t ts_cow_faults;
 uint32_t ts_was_throttled;
 uint32_t ts_did_throttle;
 uint32_t ts_latency_qos;
 int32_t ts_pid;
 char ts_p_comm[32];
} __attribute__ ((packed));
struct task_delta_snapshot_v2 {
 uint64_t tds_unique_pid;
 uint64_t tds_ss_flags;
 uint64_t tds_user_time_in_terminated_threads;
 uint64_t tds_system_time_in_terminated_threads;
 uint64_t tds_task_size;
 uint64_t tds_max_resident_size;
 uint32_t tds_suspend_count;
 uint32_t tds_faults;
 uint32_t tds_pageins;
 uint32_t tds_cow_faults;
 uint32_t tds_was_throttled;
 uint32_t tds_did_throttle;
 uint32_t tds_latency_qos;
} __attribute__ ((packed));
struct stackshot_cpu_times {
 uint64_t user_usec;
 uint64_t system_usec;
} __attribute__((packed));
struct stackshot_cpu_times_v2 {
 uint64_t user_usec;
 uint64_t system_usec;
 uint64_t runnable_usec;
} __attribute__((packed));
struct stackshot_duration {
 uint64_t stackshot_duration;
 uint64_t stackshot_duration_outer;
} __attribute__((packed));
struct stackshot_duration_v2 {
 uint64_t stackshot_duration;
 uint64_t stackshot_duration_outer;
 uint64_t stackshot_duration_prior;
} __attribute__((packed));
struct stackshot_fault_stats {
 uint32_t sfs_pages_faulted_in;
 uint64_t sfs_time_spent_faulting;
 uint64_t sfs_system_max_fault_time;
 uint8_t sfs_stopped_faulting;
} __attribute__((packed));
typedef struct stackshot_thread_waitinfo {
 uint64_t owner;
 uint64_t waiter;
 uint64_t context;
 uint8_t wait_type;
} __attribute__((packed)) thread_waitinfo_t;
typedef struct stackshot_thread_turnstileinfo {
 uint64_t waiter;
 uint64_t turnstile_context;
 uint8_t turnstile_priority;
 uint8_t number_of_hops;
 uint64_t turnstile_flags;
} __attribute__((packed)) thread_turnstileinfo_t;
struct stackshot_cpu_architecture {
 int32_t cputype;
 int32_t cpusubtype;
} __attribute__((packed));
struct stack_snapshot_stacktop {
 uint64_t sp;
 uint8_t stack_contents[8];
};
struct stackshot_latency_collection {
 uint64_t latency_version;
 uint64_t setup_latency;
 uint64_t total_task_iteration_latency;
 uint64_t total_terminated_task_iteration_latency;
} __attribute__((packed));
struct stackshot_latency_task {
 uint64_t task_uniqueid;
 uint64_t setup_latency;
 uint64_t task_thread_count_loop_latency;
 uint64_t task_thread_data_loop_latency;
 uint64_t cur_tsnap_latency;
 uint64_t pmap_latency;
 uint64_t bsd_proc_ids_latency;
 uint64_t misc_latency;
 uint64_t misc2_latency;
 uint64_t end_latency;
} __attribute__((packed));
struct stackshot_latency_thread {
 uint64_t thread_id;
 uint64_t cur_thsnap1_latency;
 uint64_t dispatch_serial_latency;
 uint64_t dispatch_label_latency;
 uint64_t cur_thsnap2_latency;
 uint64_t thread_name_latency;
 uint64_t sur_times_latency;
 uint64_t user_stack_latency;
 uint64_t kernel_stack_latency;
 uint64_t misc_latency;
} __attribute__((packed));
struct crashinfo_proc_uniqidentifierinfo {
 uint8_t p_uuid[16];
 uint64_t p_uniqueid;
 uint64_t p_puniqueid;
 uint64_t p_reserve2;
 uint64_t p_reserve3;
 uint64_t p_reserve4;
} __attribute__((packed));
struct exit_reason_snapshot {
 uint32_t ers_namespace;
 uint64_t ers_code;
 uint64_t ers_flags;
} __attribute__((packed));
struct codesigning_exit_reason_info {
 uint64_t ceri_virt_addr;
 uint64_t ceri_file_offset;
 char ceri_pathname[1024];
 char ceri_filename[1024];
 uint64_t ceri_codesig_modtime_secs;
 uint64_t ceri_codesig_modtime_nsecs;
 uint64_t ceri_page_modtime_secs;
 uint64_t ceri_page_modtime_nsecs;
 uint8_t ceri_path_truncated;
 uint8_t ceri_object_codesigned;
 uint8_t ceri_page_codesig_validated;
 uint8_t ceri_page_codesig_tainted;
 uint8_t ceri_page_codesig_nx;
 uint8_t ceri_page_wpmapped;
 uint8_t ceri_page_slid;
 uint8_t ceri_page_dirty;
 uint32_t ceri_page_shadow_depth;
} __attribute__((packed));
typedef struct kcdata_iter {
 kcdata_item_t item;
 void *end;
} kcdata_iter_t;
static inline
kcdata_iter_t
kcdata_iter(void *buffer, unsigned long size)
{
 kcdata_iter_t iter;
 iter.item = (kcdata_item_t) buffer;
 iter.end = (void*) (((uintptr_t)buffer) + size);
 return iter;
}
static inline
kcdata_iter_t kcdata_iter_unsafe(void *buffer) __attribute__((deprecated));
static inline
kcdata_iter_t
kcdata_iter_unsafe(void *buffer)
{
 kcdata_iter_t iter;
 iter.item = (kcdata_item_t) buffer;
 iter.end = (void*) (uintptr_t) ~0;
 return iter;
}
static const kcdata_iter_t kcdata_invalid_iter = { .item = ((void *)0), .end = ((void *)0) };
static inline
int
kcdata_iter_valid(kcdata_iter_t iter)
{
 return
         ((uintptr_t)iter.item + sizeof(struct kcdata_item) <= (uintptr_t)iter.end) &&
         ((uintptr_t)iter.item + sizeof(struct kcdata_item) + iter.item->size <= (uintptr_t)iter.end);
}
static inline
kcdata_iter_t
kcdata_iter_next(kcdata_iter_t iter)
{
 iter.item = (kcdata_item_t) (((uintptr_t)iter.item) + sizeof(struct kcdata_item) + (iter.item->size));
 return iter;
}
static inline uint32_t
kcdata_iter_type(kcdata_iter_t iter)
{
 if ((iter.item->type & ~0xfu) == 0x20u) {
  return 0x11u;
 } else {
  return iter.item->type;
 }
}
static inline uint32_t
kcdata_calc_padding(uint32_t size)
{
 return (-size) & 0xf;
}
static inline uint32_t
kcdata_flags_get_padding(uint64_t flags)
{
 return flags & 0xf;
}
static inline int
kcdata_iter_is_legacy_item(kcdata_iter_t iter, uint32_t legacy_size)
{
 uint32_t legacy_size_padded = legacy_size + kcdata_calc_padding(legacy_size);
 return iter.item->size == legacy_size_padded &&
        (iter.item->flags & (0xf | 0x80)) == 0;
}
static inline uint32_t
kcdata_iter_size(kcdata_iter_t iter)
{
 uint32_t legacy_size = 0;
 switch (kcdata_iter_type(iter)) {
 case 0x11u:
 case 0x13u:
  return iter.item->size;
 case 0x906u: {
  legacy_size = sizeof(struct thread_snapshot_v2);
  if (kcdata_iter_is_legacy_item(iter, legacy_size)) {
   return legacy_size;
  }
  goto not_legacy;
 }
 case 0x908u: {
  legacy_size = sizeof(struct dyld_uuid_info_64);
  if (kcdata_iter_is_legacy_item(iter, legacy_size)) {
   return legacy_size;
  }
  goto not_legacy;
 }
not_legacy:
 default:
  if (iter.item->size < kcdata_flags_get_padding(iter.item->flags)) {
   return 0;
  } else {
   return iter.item->size - kcdata_flags_get_padding(iter.item->flags);
  }
 }
}
static inline uint64_t
kcdata_iter_flags(kcdata_iter_t iter)
{
 return iter.item->flags;
}
static inline
void *
kcdata_iter_payload(kcdata_iter_t iter)
{
 return &iter.item->data;
}
static inline
uint32_t
kcdata_iter_array_elem_type(kcdata_iter_t iter)
{
 return (iter.item->flags >> 32) & 4294967295U;
}
static inline
uint32_t
kcdata_iter_array_elem_count(kcdata_iter_t iter)
{
 return (iter.item->flags) & 4294967295U;
}
static inline
uint32_t
kcdata_iter_array_size_switch(kcdata_iter_t iter)
{
 switch (kcdata_iter_array_elem_type(iter)) {
 case 0x30u:
  return sizeof(struct dyld_uuid_info_32);
 case 0x31u:
  return sizeof(struct dyld_uuid_info_64);
 case 0x90Au:
 case 0x90Cu:
  return sizeof(struct stack_snapshot_frame32);
 case 0x90Bu:
 case 0x90Du:
  return sizeof(struct stack_snapshot_frame64);
 case 0x907u:
  return sizeof(int32_t);
 case 0x941u:
  return sizeof(struct thread_delta_snapshot_v2);
 case 0x81A:
  return sizeof(uint64_t);
 default:
  return 0;
 }
}
static inline
int
kcdata_iter_array_valid(kcdata_iter_t iter)
{
 if (!kcdata_iter_valid(iter)) {
  return 0;
 }
 if (kcdata_iter_type(iter) != 0x11u) {
  return 0;
 }
 if (kcdata_iter_array_elem_count(iter) == 0) {
  return iter.item->size == 0;
 }
 if (iter.item->type == 0x11u) {
  uint32_t elem_size = kcdata_iter_array_size_switch(iter);
  if (elem_size == 0) {
   return 0;
  }
  return
          kcdata_iter_array_elem_count(iter) <= iter.item->size / elem_size &&
          iter.item->size % kcdata_iter_array_elem_count(iter) < 16;
 } else {
  return
          (iter.item->type & 0xf) <= iter.item->size &&
          kcdata_iter_array_elem_count(iter) <= iter.item->size - (iter.item->type & 0xf) &&
          (iter.item->size - (iter.item->type & 0xf)) % kcdata_iter_array_elem_count(iter) == 0;
 }
}
static inline
uint32_t
kcdata_iter_array_elem_size(kcdata_iter_t iter)
{
 if (iter.item->type == 0x11u) {
  return kcdata_iter_array_size_switch(iter);
 }
 if (kcdata_iter_array_elem_count(iter) == 0) {
  return 0;
 }
 return (iter.item->size - (iter.item->type & 0xf)) / kcdata_iter_array_elem_count(iter);
}
static inline
int
kcdata_iter_container_valid(kcdata_iter_t iter)
{
 return
         kcdata_iter_valid(iter) &&
         kcdata_iter_type(iter) == 0x13u &&
         iter.item->size >= sizeof(uint32_t);
}
static inline
uint32_t
kcdata_iter_container_type(kcdata_iter_t iter)
{
 return *(uint32_t *) kcdata_iter_payload(iter);
}
static inline
uint64_t
kcdata_iter_container_id(kcdata_iter_t iter)
{
 return iter.item->flags;
}
static inline
kcdata_iter_t
kcdata_iter_find_type(kcdata_iter_t iter, uint32_t type)
{
 for(; kcdata_iter_valid(iter) && iter.item->type != 0xF19158EDu; iter = kcdata_iter_next(iter))
 {
  if (kcdata_iter_type(iter) == type) {
   return iter;
  }
 }
 return kcdata_invalid_iter;
}
static inline
int
kcdata_iter_data_with_desc_valid(kcdata_iter_t iter, uint32_t minsize)
{
 return
         kcdata_iter_valid(iter) &&
         kcdata_iter_size(iter) >= 32 + minsize &&
         ((char*)kcdata_iter_payload(iter))[32 - 1] == 0;
}
static inline
char *
kcdata_iter_string(kcdata_iter_t iter, uint32_t offset)
{
 if (offset > kcdata_iter_size(iter)) {
  return ((void *)0);
 }
 uint32_t maxlen = kcdata_iter_size(iter) - offset;
 char *s = ((char*)kcdata_iter_payload(iter)) + offset;
 if (strnlen(s, maxlen) < maxlen) {
  return s;
 } else {
  return ((void *)0);
 }
}
static inline void
kcdata_iter_get_data_with_desc(kcdata_iter_t iter, char **desc_ptr, void **data_ptr, uint32_t *size_ptr)
{
 if (desc_ptr) {
  *desc_ptr = (char *)kcdata_iter_payload(iter);
 }
 if (data_ptr) {
  *data_ptr = (void *)((uintptr_t)kcdata_iter_payload(iter) + 32);
 }
 if (size_ptr) {
  *size_ptr = kcdata_iter_size(iter) - 32;
 }
}
struct thread_snapshot {
 uint32_t snapshot_magic;
 uint32_t nkern_frames;
 uint32_t nuser_frames;
 uint64_t wait_event;
 uint64_t continuation;
 uint64_t thread_id;
 uint64_t user_time;
 uint64_t system_time;
 int32_t state;
 int32_t priority;
 int32_t sched_pri;
 int32_t sched_flags;
 char ss_flags;
 char ts_qos;
 char ts_rqos;
 char ts_rqos_override;
 char io_tier;
 char _reserved[3];
 uint64_t disk_reads_count;
 uint64_t disk_reads_size;
 uint64_t disk_writes_count;
 uint64_t disk_writes_size;
 uint64_t io_priority_count[4];
 uint64_t io_priority_size[4];
 uint64_t paging_count;
 uint64_t paging_size;
 uint64_t non_paging_count;
 uint64_t non_paging_size;
 uint64_t data_count;
 uint64_t data_size;
 uint64_t metadata_count;
 uint64_t metadata_size;
 uint64_t voucher_identifier;
 uint64_t total_syscalls;
 char pth_name[64];
} __attribute__((packed));
struct task_snapshot {
 uint32_t snapshot_magic;
 int32_t pid;
 uint64_t uniqueid;
 uint64_t user_time_in_terminated_threads;
 uint64_t system_time_in_terminated_threads;
 uint8_t shared_cache_identifier[16];
 uint64_t shared_cache_slide;
 uint32_t nloadinfos;
 int suspend_count;
 int task_size;
 int faults;
 int pageins;
 int cow_faults;
 uint32_t ss_flags;
 uint64_t p_start_sec;
 uint64_t p_start_usec;
 char p_comm[17];
 uint32_t was_throttled;
 uint32_t did_throttle;
 uint32_t latency_qos;
 uint64_t disk_reads_count;
 uint64_t disk_reads_size;
 uint64_t disk_writes_count;
 uint64_t disk_writes_size;
 uint64_t io_priority_count[4];
 uint64_t io_priority_size[4];
 uint64_t paging_count;
 uint64_t paging_size;
 uint64_t non_paging_count;
 uint64_t non_paging_size;
 uint64_t data_count;
 uint64_t data_size;
 uint64_t metadata_count;
 uint64_t metadata_size;
 uint32_t donating_pid_count;
} __attribute__ ((packed));
struct micro_snapshot {
 uint32_t snapshot_magic;
 uint32_t ms_cpu;
 uint64_t ms_time;
 uint64_t ms_time_microsecs;
 uint8_t ms_flags;
 uint16_t ms_opaque_flags;
} __attribute__ ((packed));
struct _dyld_cache_header {
 char magic[16];
 uint32_t mappingOffset;
 uint32_t mappingCount;
 uint32_t imagesOffset;
 uint32_t imagesCount;
 uint64_t dyldBaseAddress;
 uint64_t codeSignatureOffset;
 uint64_t codeSignatureSize;
 uint64_t slideInfoOffset;
 uint64_t slideInfoSize;
 uint64_t localSymbolsOffset;
 uint64_t localSymbolsSize;
 uint8_t uuid[16];
 uint64_t cacheType;
 uint32_t branchPoolsOffset;
 uint32_t branchPoolsCount;
 uint64_t accelerateInfoAddr;
 uint64_t accelerateInfoSize;
 uint64_t imagesTextOffset;
 uint64_t imagesTextCount;
 uint64_t dylibsImageGroupAddr;
 uint64_t dylibsImageGroupSize;
 uint64_t otherImageGroupAddr;
 uint64_t otherImageGroupSize;
 uint64_t progClosuresAddr;
 uint64_t progClosuresSize;
 uint64_t progClosuresTrieAddr;
 uint64_t progClosuresTrieSize;
 uint32_t platform;
 uint32_t formatVersion : 8,
     dylibsExpectedOnDisk : 1,
     simulator : 1,
     locallyBuiltCache : 1,
     padding : 21;
};
struct _dyld_cache_image_text_info {
 uuid_t uuid;
 uint64_t loadAddress;
 uint32_t textSegmentSize;
 uint32_t pathOffset;
};
enum micro_snapshot_flags {
 kInterruptRecord = 0x1,
 kTimerArmingRecord = 0x2,
 kUserMode = 0x4,
 kIORecord = 0x8,
 kPMIRecord = 0x10,
};
enum generic_snapshot_flags {
 kUser64_p = 0x1,
 kKernel64_p = 0x2
};
typedef enum : uint64_t { STACKSHOT_GET_DQ = 0x01, STACKSHOT_SAVE_LOADINFO = 0x02, STACKSHOT_GET_GLOBAL_MEM_STATS = 0x04, STACKSHOT_SAVE_KEXT_LOADINFO = 0x08, STACKSHOT_ACTIVE_KERNEL_THREADS_ONLY = 0x100, STACKSHOT_GET_BOOT_PROFILE = 0x200, STACKSHOT_DO_COMPRESS = 0x400, STACKSHOT_SAVE_IMP_DONATION_PIDS = 0x2000, STACKSHOT_SAVE_IN_KERNEL_BUFFER = 0x4000, STACKSHOT_RETRIEVE_EXISTING_BUFFER = 0x8000, STACKSHOT_KCDATA_FORMAT = 0x10000, STACKSHOT_ENABLE_BT_FAULTING = 0x20000, STACKSHOT_COLLECT_DELTA_SNAPSHOT = 0x40000, STACKSHOT_COLLECT_SHAREDCACHE_LAYOUT = 0x80000, STACKSHOT_TRYLOCK = 0x100000, STACKSHOT_ENABLE_UUID_FAULTING = 0x200000, STACKSHOT_FROM_PANIC = 0x400000, STACKSHOT_NO_IO_STATS = 0x800000, STACKSHOT_THREAD_WAITINFO = 0x1000000, STACKSHOT_THREAD_GROUP = 0x2000000, STACKSHOT_SAVE_JETSAM_COALITIONS = 0x4000000, STACKSHOT_INSTRS_CYCLES = 0x8000000, STACKSHOT_ASID = 0x10000000, STACKSHOT_PAGE_TABLES = 0x20000000, STACKSHOT_DISABLE_LATENCY_INFO = 0x40000000,} __attribute__((__enum_extensibility__(open))) __attribute__((__flag_enum__)) stackshot_flags_t;
typedef enum : uint32_t { STACKSHOT_GET_MICROSTACKSHOT = 0x10, STACKSHOT_GLOBAL_MICROSTACKSHOT_ENABLE = 0x20, STACKSHOT_GLOBAL_MICROSTACKSHOT_DISABLE = 0x40, STACKSHOT_SET_MICROSTACKSHOT_MARK = 0x80,} __attribute__((__enum_extensibility__(open))) __attribute__((__flag_enum__)) microstackshot_flags_t;
boolean_t kern_feature_override(uint32_t fmask);
struct embedded_panic_header {
 uint32_t eph_magic;
 uint32_t eph_crc;
 uint32_t eph_version;
 uint64_t eph_panic_flags;
 uint32_t eph_panic_log_offset;
 uint32_t eph_panic_log_len;
 uint32_t eph_stackshot_offset;
 uint32_t eph_stackshot_len;
 uint32_t eph_other_log_offset;
 uint32_t eph_other_log_len;
 union {
  struct {
   uint64_t eph_x86_power_state:8,
       eph_x86_efi_boot_state:8,
       eph_x86_system_state:8,
       eph_x86_unused_bits:40;
  };
  uint64_t eph_x86_do_not_use;
 };
 char eph_os_version[32];
 char eph_macos_version[32];
} __attribute__((packed));
struct macos_panic_header {
 uint32_t mph_magic;
 uint32_t mph_crc;
 uint32_t mph_version;
 uint32_t mph_padding;
 uint64_t mph_panic_flags;
 uint32_t mph_panic_log_offset;
 uint32_t mph_panic_log_len;
 uint32_t mph_stackshot_offset;
 uint32_t mph_stackshot_len;
 uint32_t mph_other_log_offset;
 uint32_t mph_other_log_len;
 char mph_data[];
} __attribute__((packed));
struct efi_aurr_panic_header {
 uint32_t efi_aurr_magic;
 uint32_t efi_aurr_crc;
 uint32_t efi_aurr_version;
 uint32_t efi_aurr_reset_cause;
 uint32_t efi_aurr_reset_log_offset;
 uint32_t efi_aurr_reset_log_len;
 char efi_aurr_panic_data[];
} __attribute__((packed));
struct efi_aurr_extended_panic_log {
 char efi_aurr_extended_log_buf[(0x0013ff80 - sizeof(struct efi_aurr_panic_header) - 112)];
 uint32_t efi_aurr_log_tail;
 uint32_t efi_aurr_log_head;
} __attribute__((packed));
__attribute__((__noreturn__)) __attribute__((__cold__)) __attribute__((__not_tail_called__)) __attribute__((__format__ (__printf__, 1, 2)))
extern void panic(const char *string, ...);
int copyin(const user_addr_t uaddr, void *kaddr, size_t len) __attribute__((__warn_unused_result__));
int copyout(const void *kaddr, user_addr_t udaddr, size_t len);
__attribute__((__always_inline__)) __attribute__((__warn_unused_result__)) static inline int
__copyin_chk(const user_addr_t uaddr, void *kaddr, size_t len, size_t chk_size)
{
 if (chk_size < len) {
  panic("__copyin_chk object size check failed: uaddr %p, kaddr %p, (%zu < %zu)", (void*)uaddr, kaddr, len, chk_size);
 }
 return copyin(uaddr, kaddr, len);
}
__attribute__((__always_inline__)) static inline int
__copyout_chk(const void *kaddr, user_addr_t uaddr, size_t len, size_t chk_size)
{
 if (chk_size < len) {
  panic("__copyout_chk object size check failed: uaddr %p, kaddr %p, (%zu < %zu)", (void*)uaddr, kaddr, len, chk_size);
 }
 return copyout(kaddr, uaddr, len);
}
extern u_char const bcd2bin_data[];
extern u_char const bin2bcd_data[];
extern char const hex2ascii_data[];
static inline int
imax(int a, int b)
{
 return a > b ? a : b;
}
static inline int
imin(int a, int b)
{
 return a < b ? a : b;
}
static inline long
lmax(long a, long b)
{
 return a > b ? a : b;
}
static inline long
lmin(long a, long b)
{
 return a < b ? a : b;
}
static inline u_int
max(u_int a, u_int b)
{
 return a > b ? a : b;
}
static inline u_int
min(u_int a, u_int b)
{
 return a < b ? a : b;
}
static inline u_int32_t
ulmax(u_int32_t a, u_int32_t b)
{
 return a > b ? a : b;
}
static inline u_int32_t
ulmin(u_int32_t a, u_int32_t b)
{
 return a < b ? a : b;
}
extern int ffs(unsigned int);
extern int ffsll(unsigned long long);
extern int fls(unsigned int);
extern int flsll(unsigned long long);
extern u_int32_t random(void);
extern size_t scanc(size_t, u_char *, const u_char *, u_char);
extern long strtol(const char*, char **, int);
extern u_long strtoul(const char *, char **, int);
extern quad_t strtoq(const char *, char **, int);
extern u_quad_t strtouq(const char *, char **, int);
extern char *strsep(char **, const char *);
extern void *memchr(const void *, int, size_t);
extern void url_decode(char *str);
int snprintf(char *, size_t, const char *, ...) __attribute__((__format__ (__printf__, 3, 4)));
int scnprintf(char *, size_t, const char *, ...) __attribute__((__format__ (__printf__, 3, 4)));
int sprintf(char *bufp, const char *, ...) __attribute__((__deprecated__)) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char *, char const *, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int printf(const char *, ...) __attribute__((__format__ (__printf__, 1, 2)));
uint16_t crc16(uint16_t crc, const void *bufp, size_t len);
uint32_t crc32(uint32_t crc, const void *bufp, size_t len);
int copystr(const void *kfaddr, void *kdaddr, size_t len, size_t *done);
int copyinstr(const user_addr_t uaddr, void *kaddr, size_t len, size_t *done) __attribute__((__warn_unused_result__));
int copyoutstr(const void *kaddr, user_addr_t udaddr, size_t len, size_t *done);
int vsscanf(const char *, char const *, va_list);
extern int vprintf(const char *, va_list) __attribute__((__format__ (__printf__, 1, 0)));
extern int vsnprintf(char *, size_t, const char *, va_list) __attribute__((__format__ (__printf__, 3, 0)));
extern int vscnprintf(char *, size_t, const char *, va_list) __attribute__((__format__ (__printf__, 3, 0)));
extern int vsprintf(char *bufp, const char *, va_list) __attribute__((__deprecated__)) __attribute__((__format__ (__printf__, 2, 0)));
extern void invalidate_icache(vm_offset_t, unsigned, int);
extern void flush_dcache(vm_offset_t, unsigned, int);
extern void invalidate_icache64(addr64_t, unsigned, int);
extern void flush_dcache64(addr64_t, unsigned, int);
static inline int
clz(unsigned int num)
{
 return __builtin_clz(num);
}

extern vm_offset_t vm_kernel_addrhash(vm_offset_t addr);
extern void vm_kernel_addrhide(
 vm_offset_t addr,
 vm_offset_t *hide_addr);
extern vm_offset_t vm_kernel_addrperm_ext;
extern void vm_kernel_addrperm_external(
 vm_offset_t addr,
 vm_offset_t *perm_addr);
extern void vm_kernel_unslide_or_perm_external(
 vm_offset_t addr,
 vm_offset_t *up_addr);
extern void vm_init_before_launchd(void);
extern void thread_mtx_lock(thread_t thread);
extern void thread_mtx_unlock(thread_t thread);
extern thread_t current_thread(void) __attribute__((const));
extern void thread_reference(
 thread_t thread);
extern void thread_deallocate(
 thread_t thread);
extern uint64_t thread_tid(thread_t thread);
extern boolean_t thread_has_thread_name(thread_t th);
extern void thread_set_thread_name(thread_t th, const char* name);
extern kern_return_t kernel_thread_start(
 thread_continue_t continuation,
 void *parameter,
 thread_t *new_thread);
int nullop(void);
int nulldev(void);
int enoioctl(void);
int enosys(void);
int enxio(void);
int eopnotsupp(void);
void *hashinit(int count, int type, u_long *hashmask);
void hashdestroy(void *, int type, u_long hashmask);
void ovbcopy(const void *from, void *to, size_t len);
int fubyte(user_addr_t addr);
int fuibyte(user_addr_t addr);
int subyte(user_addr_t addr, int byte);
int suibyte(user_addr_t addr, int byte);
long fuword(user_addr_t addr);
long fuiword(user_addr_t addr);
int suword(user_addr_t addr, long word);
int suiword(user_addr_t addr, long word);
int useracc(user_addr_t addr, user_size_t len, int prot);
typedef void (*timeout_fcn_t)(void *);
void bsd_timeout(void (*)(void *), void *arg, struct timespec * ts);
void bsd_untimeout(void (*)(void *), void *arg);
void set_fsblocksize(struct vnode *);
uint64_t tvtoabstime(struct timeval *);
uint64_t tstoabstime(struct timespec *);
void *throttle_info_create(void);
void throttle_info_mount_ref(mount_t mp, void * throttle_info);
void throttle_info_mount_rel(mount_t mp);
void throttle_info_release(void *throttle_info);
void throttle_info_update(void *throttle_info, int flags);
uint32_t throttle_lowpri_io(int sleep_amount);
int throttle_lowpri_io_will_be_throttled(int sleep_amount);
void throttle_set_thread_io_policy(int policy);
int throttle_get_thread_effective_io_policy(void);
int throttle_thread_io_tier_above_metadata(void);
typedef struct __throttle_info_handle *throttle_info_handle_t;
int throttle_info_ref_by_mask(uint64_t throttle_mask, throttle_info_handle_t *throttle_info_handle);
void throttle_info_rel_by_mask(throttle_info_handle_t throttle_info_handle);
void throttle_info_update_by_mask(void *throttle_info_handle, int flags);
void throttle_info_disable_throttle(int devno, boolean_t isfusion);
int throttle_info_io_will_be_throttled(void *throttle_info_handle, int policy);
enum vtype {
 VNON,
 VREG, VDIR, VBLK, VCHR, VLNK,
 VSOCK, VFIFO, VBAD, VSTR, VCPLX
};
enum vtagtype {
 VT_NON,
 VT_UFS,
 VT_NFS, VT_MFS, VT_MSDOSFS, VT_LFS,
 VT_LOFS, VT_FDESC, VT_PORTAL, VT_NULL, VT_UMAP,
 VT_KERNFS, VT_PROCFS, VT_AFS, VT_ISOFS, VT_MOCKFS,
 VT_HFS, VT_ZFS, VT_DEVFS, VT_WEBDAV, VT_UDF,
 VT_AFP, VT_CDDA, VT_CIFS, VT_OTHER, VT_APFS,
 VT_LOCKERFS, VT_BINDFS,
};
struct componentname {
 uint32_t cn_nameiop;
 uint32_t cn_flags;
 void * cn_reserved1;
 void * cn_reserved2;
 char *cn_pnbuf;
 int cn_pnlen;
 char *cn_nameptr;
 int cn_namelen;
 uint32_t cn_hash;
 uint32_t cn_consume;
};
struct vnode_fsparam {
 struct mount * vnfs_mp;
 enum vtype vnfs_vtype;
 const char * vnfs_str;
 struct vnode * vnfs_dvp;
 void * vnfs_fsnode;
 int(**vnfs_vops)(void *);
 int vnfs_markroot;
 int vnfs_marksystem;
 dev_t vnfs_rdev;
 off_t vnfs_filesize;
 struct componentname * vnfs_cnp;
 uint32_t vnfs_flags;
};
struct vnode_attr {
 uint64_t va_supported;
 uint64_t va_active;
 int va_vaflags;
 dev_t va_rdev;
 uint64_t va_nlink;
 uint64_t va_total_size;
 uint64_t va_total_alloc;
 uint64_t va_data_size;
 uint64_t va_data_alloc;
 uint32_t va_iosize;
 uid_t va_uid;
 gid_t va_gid;
 mode_t va_mode;
 uint32_t va_flags;
 struct kauth_acl *va_acl;
 struct timespec va_create_time;
 struct timespec va_access_time;
 struct timespec va_modify_time;
 struct timespec va_change_time;
 struct timespec va_backup_time;
 uint64_t va_fileid;
 uint64_t va_linkid;
 uint64_t va_parentid;
 uint32_t va_fsid;
 uint64_t va_filerev;
 uint32_t va_gen;
 uint32_t va_encoding;
 enum vtype va_type;
 char * va_name;
 guid_t va_uuuid;
 guid_t va_guuid;
 uint64_t va_nchildren;
 uint64_t va_dirlinkcount;
 void * va_reserved1;
 struct timespec va_addedtime;
 uint32_t va_dataprotect_class;
 uint32_t va_dataprotect_flags;
 uint32_t va_document_id;
 uint32_t va_devid;
 uint32_t va_objtype;
 uint32_t va_objtag;
 uint32_t va_user_access;
 uint8_t va_finderinfo[32];
 uint64_t va_rsrc_length;
 uint64_t va_rsrc_alloc;
 fsid_t va_fsid64;
 uint32_t va_write_gencount;
 uint64_t va_private_size;
 uint64_t va_clone_id;
 uint64_t va_extflags;
 uint64_t va_recursive_gencount;
};
extern enum vtype iftovt_tab[];
extern int vttoif_tab[];
struct vnodeop_desc;
extern int desiredvnodes;
struct vnodeopv_entry_desc {
 struct vnodeop_desc *opve_op;
 int (*opve_impl)(void *);
};
struct vnodeopv_desc {
 int(***opv_desc_vector_p)(void *);
 const struct vnodeopv_entry_desc *opv_desc_ops;
};
int vn_default_error(void);
struct vnop_generic_args {
 struct vnodeop_desc *a_desc;
};
void buf_markaged(buf_t bp);
void buf_markinvalid(buf_t bp);
void buf_markdelayed(buf_t bp);
void buf_markclean(buf_t);
void buf_markeintr(buf_t bp);
void buf_markfua(buf_t bp);
int buf_fua(buf_t bp);
int buf_valid(buf_t bp);
int buf_fromcache(buf_t bp);
void * buf_upl(buf_t bp);
uint32_t buf_uploffset(buf_t bp);
kauth_cred_t buf_rcred(buf_t bp);
kauth_cred_t buf_wcred(buf_t bp);
proc_t buf_proc(buf_t bp);
uint32_t buf_dirtyoff(buf_t bp);
uint32_t buf_dirtyend(buf_t bp);
void buf_setdirtyoff(buf_t bp, uint32_t);
void buf_setdirtyend(buf_t bp, uint32_t);
errno_t buf_error(buf_t bp);
void buf_seterror(buf_t bp, errno_t);
void buf_setflags(buf_t bp, int32_t flags);
void buf_clearflags(buf_t bp, int32_t flags);
int32_t buf_flags(buf_t bp);
void buf_reset(buf_t bp, int32_t flags);
errno_t buf_map(buf_t bp, caddr_t *io_addr);
errno_t buf_unmap(buf_t bp);
void buf_setdrvdata(buf_t bp, void *drvdata);
void * buf_drvdata(buf_t bp);
void buf_setfsprivate(buf_t bp, void *fsprivate);
void * buf_fsprivate(buf_t bp);
daddr64_t buf_blkno(buf_t bp);
daddr64_t buf_lblkno(buf_t bp);
void buf_setblkno(buf_t bp, daddr64_t blkno);
void buf_setlblkno(buf_t bp, daddr64_t lblkno);
uint32_t buf_count(buf_t bp);
uint32_t buf_size(buf_t bp);
uint32_t buf_resid(buf_t bp);
void buf_setcount(buf_t bp, uint32_t bcount);
void buf_setsize(buf_t bp, uint32_t);
void buf_setresid(buf_t bp, uint32_t resid);
void buf_setdataptr(buf_t bp, uintptr_t data);
uintptr_t buf_dataptr(buf_t bp);
vnode_t buf_vnode(buf_t bp);
void buf_setvnode(buf_t bp, vnode_t vp);
dev_t buf_device(buf_t bp);
errno_t buf_setdevice(buf_t bp, vnode_t vp);
errno_t buf_strategy(vnode_t devvp, void *ap);
errno_t buf_invalblkno(vnode_t vp, daddr64_t lblkno, int flags);
void * buf_callback(buf_t bp);
errno_t buf_setcallback(buf_t bp, void (*callback)(buf_t, void *), void *transaction);
errno_t buf_setupl(buf_t bp, upl_t upl, uint32_t offset);
buf_t buf_clone(buf_t bp, int io_offset, int io_size, void (*iodone)(buf_t, void *), void *arg);
buf_t buf_create_shadow(buf_t bp, boolean_t force_copy, uintptr_t external_storage, void (*iodone)(buf_t, void *), void *arg);
int buf_shadow(buf_t bp);
buf_t buf_alloc(vnode_t vp);
void buf_free(buf_t bp);
int buf_invalidateblks(vnode_t vp, int flags, int slpflag, int slptimeo);
void buf_flushdirtyblks(vnode_t vp, int wait, int flags, const char *msg);
void buf_iterate(vnode_t vp, int (*callout)(buf_t, void *), int flags, void *arg);
void buf_clear(buf_t bp);
errno_t buf_bawrite(buf_t bp);
errno_t buf_bdwrite(buf_t bp);
errno_t buf_bwrite(buf_t bp);
void buf_biodone(buf_t bp);
errno_t buf_biowait(buf_t bp);
void buf_brelse(buf_t bp);
errno_t buf_bread(vnode_t vp, daddr64_t blkno, int size, kauth_cred_t cred, buf_t *bpp);
errno_t buf_breadn(vnode_t vp, daddr64_t blkno, int size, daddr64_t *rablks, int *rasizes, int nrablks, kauth_cred_t cred, buf_t *bpp);
errno_t buf_meta_bread(vnode_t vp, daddr64_t blkno, int size, kauth_cred_t cred, buf_t *bpp);
errno_t buf_meta_breadn(vnode_t vp, daddr64_t blkno, int size, daddr64_t *rablks, int *rasizes, int nrablks, kauth_cred_t cred, buf_t *bpp);
u_int minphys(buf_t bp);
int physio(void (*f_strategy)(buf_t), buf_t bp, dev_t dev, int flags, u_int (*f_minphys)(buf_t), struct uio *uio, int blocksize);
buf_t buf_getblk(vnode_t vp, daddr64_t blkno, int size, int slpflag, int slptimeo, int operation);
buf_t buf_geteblk(int size);
void buf_clear_redundancy_flags(buf_t bp, uint32_t flags);
uint32_t buf_redundancy_flags(buf_t bp);
void buf_set_redundancy_flags(buf_t bp, uint32_t flags);
bufattr_t buf_attr(buf_t bp);
void buf_markstatic(buf_t bp);
int buf_static(buf_t bp);
void bufattr_markioscheduled(bufattr_t bap);
int bufattr_ioscheduled(bufattr_t bap);
void bufattr_markexpeditedmeta(bufattr_t bap);
int bufattr_expeditedmeta(bufattr_t bap);
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"
extern struct vnodeop_desc vnop_default_desc;
extern struct vnodeop_desc vnop_lookup_desc;
extern struct vnodeop_desc vnop_create_desc;
extern struct vnodeop_desc vnop_whiteout_desc;
extern struct vnodeop_desc vnop_mknod_desc;
extern struct vnodeop_desc vnop_open_desc;
extern struct vnodeop_desc vnop_close_desc;
extern struct vnodeop_desc vnop_access_desc;
extern struct vnodeop_desc vnop_getattr_desc;
extern struct vnodeop_desc vnop_setattr_desc;
extern struct vnodeop_desc vnop_read_desc;
extern struct vnodeop_desc vnop_write_desc;
extern struct vnodeop_desc vnop_ioctl_desc;
extern struct vnodeop_desc vnop_select_desc;
extern struct vnodeop_desc vnop_exchange_desc;
extern struct vnodeop_desc vnop_revoke_desc;
extern struct vnodeop_desc vnop_mmap_check_desc;
extern struct vnodeop_desc vnop_mmap_desc;
extern struct vnodeop_desc vnop_mnomap_desc;
extern struct vnodeop_desc vnop_fsync_desc;
extern struct vnodeop_desc vnop_remove_desc;
extern struct vnodeop_desc vnop_link_desc;
extern struct vnodeop_desc vnop_rename_desc;
extern struct vnodeop_desc vnop_renamex_desc;
extern struct vnodeop_desc vnop_mkdir_desc;
extern struct vnodeop_desc vnop_rmdir_desc;
extern struct vnodeop_desc vnop_symlink_desc;
extern struct vnodeop_desc vnop_readdir_desc;
extern struct vnodeop_desc vnop_readdirattr_desc;
extern struct vnodeop_desc vnop_getattrlistbulk_desc;
extern struct vnodeop_desc vnop_readlink_desc;
extern struct vnodeop_desc vnop_inactive_desc;
extern struct vnodeop_desc vnop_reclaim_desc;
extern struct vnodeop_desc vnop_print_desc;
extern struct vnodeop_desc vnop_pathconf_desc;
extern struct vnodeop_desc vnop_advlock_desc;
extern struct vnodeop_desc vnop_truncate_desc;
extern struct vnodeop_desc vnop_allocate_desc;
extern struct vnodeop_desc vnop_pagein_desc;
extern struct vnodeop_desc vnop_pageout_desc;
extern struct vnodeop_desc vnop_searchfs_desc;
extern struct vnodeop_desc vnop_copyfile_desc;
extern struct vnodeop_desc vnop_clonefile_desc;
extern struct vnodeop_desc vnop_blktooff_desc;
extern struct vnodeop_desc vnop_offtoblk_desc;
extern struct vnodeop_desc vnop_blockmap_desc;
extern struct vnodeop_desc vnop_strategy_desc;
extern struct vnodeop_desc vnop_bwrite_desc;
struct vnop_lookup_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_dvp;
 vnode_t *a_vpp;
 struct componentname *a_cnp;
 vfs_context_t a_context;
};
struct vnop_create_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_dvp;
 vnode_t *a_vpp;
 struct componentname *a_cnp;
 struct vnode_attr *a_vap;
 vfs_context_t a_context;
};
struct vnop_whiteout_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_dvp;
 struct componentname *a_cnp;
 int a_flags;
 vfs_context_t a_context;
};
struct vnop_mknod_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_dvp;
 vnode_t *a_vpp;
 struct componentname *a_cnp;
 struct vnode_attr *a_vap;
 vfs_context_t a_context;
};
struct vnop_open_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 int a_mode;
 vfs_context_t a_context;
};
struct vnop_close_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 int a_fflag;
 vfs_context_t a_context;
};
struct vnop_access_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 int a_action;
 vfs_context_t a_context;
};
struct vnop_getattr_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 struct vnode_attr *a_vap;
 vfs_context_t a_context;
};
struct vnop_setattr_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 struct vnode_attr *a_vap;
 vfs_context_t a_context;
};
struct vnop_read_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 struct uio *a_uio;
 int a_ioflag;
 vfs_context_t a_context;
};
extern errno_t VNOP_READ(vnode_t vp, struct uio *uio, int ioflag, vfs_context_t ctx);
struct vnop_write_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 struct uio *a_uio;
 int a_ioflag;
 vfs_context_t a_context;
};
extern errno_t VNOP_WRITE(vnode_t vp, struct uio *uio, int ioflag, vfs_context_t ctx);
struct vnop_ioctl_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 u_long a_command;
 caddr_t a_data;
 int a_fflag;
 vfs_context_t a_context;
};
extern errno_t VNOP_IOCTL(vnode_t vp, u_long command, caddr_t data, int fflag, vfs_context_t ctx);
struct vnop_select_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 int a_which;
 int a_fflags;
 void *a_wql;
 vfs_context_t a_context;
};
struct vnop_exchange_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_fvp;
 vnode_t a_tvp;
 int a_options;
 vfs_context_t a_context;
};
struct vnop_revoke_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 int a_flags;
 vfs_context_t a_context;
};
struct vnop_mmap_check_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 int a_flags;
 vfs_context_t a_context;
};
struct vnop_mmap_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 int a_fflags;
 vfs_context_t a_context;
};
struct vnop_mnomap_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 vfs_context_t a_context;
};
struct vnop_fsync_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 int a_waitfor;
 vfs_context_t a_context;
};
extern errno_t VNOP_FSYNC(vnode_t vp, int waitfor, vfs_context_t ctx);
struct vnop_remove_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_dvp;
 vnode_t a_vp;
 struct componentname *a_cnp;
 int a_flags;
 vfs_context_t a_context;
};
struct vnop_link_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 vnode_t a_tdvp;
 struct componentname *a_cnp;
 vfs_context_t a_context;
};
struct vnop_rename_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_fdvp;
 vnode_t a_fvp;
 struct componentname *a_fcnp;
 vnode_t a_tdvp;
 vnode_t a_tvp;
 struct componentname *a_tcnp;
 vfs_context_t a_context;
};
typedef unsigned int vfs_rename_flags_t;
enum {
 VFS_RENAME_SECLUDE = 0x00000001,
 VFS_RENAME_SWAP = 0x00000002,
 VFS_RENAME_EXCL = 0x00000004,
 VFS_RENAME_DATALESS = 0x00000008,
 VFS_RENAME_FLAGS_MASK = (VFS_RENAME_SECLUDE | VFS_RENAME_SWAP
     | VFS_RENAME_EXCL),
};
struct vnop_renamex_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_fdvp;
 vnode_t a_fvp;
 struct componentname *a_fcnp;
 vnode_t a_tdvp;
 vnode_t a_tvp;
 struct componentname *a_tcnp;
 struct vnode_attr *a_vap;
 vfs_rename_flags_t a_flags;
 vfs_context_t a_context;
};
struct vnop_mkdir_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_dvp;
 vnode_t *a_vpp;
 struct componentname *a_cnp;
 struct vnode_attr *a_vap;
 vfs_context_t a_context;
};
struct vnop_rmdir_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_dvp;
 vnode_t a_vp;
 struct componentname *a_cnp;
 vfs_context_t a_context;
};
struct vnop_symlink_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_dvp;
 vnode_t *a_vpp;
 struct componentname *a_cnp;
 struct vnode_attr *a_vap;
 char *a_target;
 vfs_context_t a_context;
};
struct vnop_readdir_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 struct uio *a_uio;
 int a_flags;
 int *a_eofflag;
 int *a_numdirent;
 vfs_context_t a_context;
};
struct vnop_readdirattr_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 struct attrlist *a_alist;
 struct uio *a_uio;
 uint32_t a_maxcount;
 uint32_t a_options;
 uint32_t *a_newstate;
 int *a_eofflag;
 uint32_t *a_actualcount;
 vfs_context_t a_context;
};
struct vnop_getattrlistbulk_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 struct attrlist *a_alist;
 struct vnode_attr *a_vap;
 struct uio *a_uio;
 void *a_private;
 uint64_t a_options;
 int32_t *a_eofflag;
 int32_t *a_actualcount;
 vfs_context_t a_context;
};
struct vnop_readlink_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 struct uio *a_uio;
 vfs_context_t a_context;
};
struct vnop_inactive_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 vfs_context_t a_context;
};
struct vnop_reclaim_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 vfs_context_t a_context;
};
struct vnop_pathconf_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 int a_name;
 int32_t *a_retval;
 vfs_context_t a_context;
};
struct vnop_advlock_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 caddr_t a_id;
 int a_op;
 struct flock *a_fl;
 int a_flags;
 vfs_context_t a_context;
 struct timespec *a_timeout;
};
struct vnop_allocate_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 off_t a_length;
 u_int32_t a_flags;
 off_t *a_bytesallocated;
 off_t a_offset;
 vfs_context_t a_context;
};
struct vnop_pagein_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 upl_t a_pl;
 upl_offset_t a_pl_offset;
 off_t a_f_offset;
 size_t a_size;
 int a_flags;
 vfs_context_t a_context;
};
struct vnop_pageout_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 upl_t a_pl;
 upl_offset_t a_pl_offset;
 off_t a_f_offset;
 size_t a_size;
 int a_flags;
 vfs_context_t a_context;
};
struct vnop_searchfs_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 void *a_searchparams1;
 void *a_searchparams2;
 struct attrlist *a_searchattrs;
 uint32_t a_maxmatches;
 struct timeval *a_timelimit;
 struct attrlist *a_returnattrs;
 uint32_t *a_nummatches;
 uint32_t a_scriptcode;
 uint32_t a_options;
 struct uio *a_uio;
 struct searchstate *a_searchstate;
 vfs_context_t a_context;
};
struct vnop_copyfile_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_fvp;
 vnode_t a_tdvp;
 vnode_t a_tvp;
 struct componentname *a_tcnp;
 int a_mode;
 int a_flags;
 vfs_context_t a_context;
};
typedef enum dir_clone_authorizer_op {
 OP_AUTHORIZE = 0,
 OP_VATTR_SETUP = 1,
 OP_VATTR_CLEANUP = 2
} dir_clone_authorizer_op_t;
struct vnop_clonefile_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_fvp;
 vnode_t a_dvp;
 vnode_t *a_vpp;
 struct componentname *a_cnp;
 struct vnode_attr *a_vap;
 uint32_t a_flags;
 vfs_context_t a_context;
 int (*a_dir_clone_authorizer)(
  struct vnode_attr *vap,
  kauth_action_t action,
  struct vnode_attr *dvap,
  vnode_t sdvp,
  mount_t mp,
  dir_clone_authorizer_op_t vattr_op,
  uint32_t flags,
  vfs_context_t ctx,
  void *reserved);
 void *a_reserved;
};
struct vnop_getxattr_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 const char * a_name;
 uio_t a_uio;
 size_t *a_size;
 int a_options;
 vfs_context_t a_context;
};
extern struct vnodeop_desc vnop_getxattr_desc;
extern errno_t VNOP_GETXATTR(vnode_t vp, const char *name, uio_t uio, size_t *size, int options, vfs_context_t ctx);
struct vnop_setxattr_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 const char * a_name;
 uio_t a_uio;
 int a_options;
 vfs_context_t a_context;
};
extern struct vnodeop_desc vnop_setxattr_desc;
extern errno_t VNOP_SETXATTR(vnode_t vp, const char *name, uio_t uio, int options, vfs_context_t ctx);
struct vnop_removexattr_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 const char * a_name;
 int a_options;
 vfs_context_t a_context;
};
extern struct vnodeop_desc vnop_removexattr_desc;
struct vnop_listxattr_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 uio_t a_uio;
 size_t *a_size;
 int a_options;
 vfs_context_t a_context;
};
extern struct vnodeop_desc vnop_listxattr_desc;
struct vnop_blktooff_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 daddr64_t a_lblkno;
 off_t *a_offset;
};
struct vnop_offtoblk_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 off_t a_offset;
 daddr64_t *a_lblkno;
};
struct vnop_blockmap_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 off_t a_foffset;
 size_t a_size;
 daddr64_t *a_bpn;
 size_t *a_run;
 void *a_poff;
 int a_flags;
 vfs_context_t a_context;
};
struct vnop_strategy_args {
 struct vnodeop_desc *a_desc;
 struct buf *a_bp;
};
extern errno_t VNOP_STRATEGY(struct buf *bp);
struct vnop_bwrite_args {
 struct vnodeop_desc *a_desc;
 buf_t a_bp;
};
extern errno_t VNOP_BWRITE(buf_t bp);
struct vnop_kqfilt_add_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct knote *a_kn;
 vfs_context_t a_context;
};
extern struct vnodeop_desc vnop_kqfilt_add_desc;
struct vnop_kqfilt_remove_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 uintptr_t a_ident;
 vfs_context_t a_context;
};
extern struct vnodeop_desc vnop_kqfilt_remove_desc;
struct label;
struct vnop_setlabel_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct label *a_vl;
 vfs_context_t a_context;
};
extern struct vnodeop_desc vnop_setlabel_desc;
typedef enum : uint32_t { VNODE_VERIFY_DEFAULT = 0,} __attribute__((__enum_extensibility__(open))) __attribute__((__flag_enum__)) vnode_verify_flags_t;
struct vnop_verify_args {
 struct vnodeop_desc *a_desc;
 vnode_t a_vp;
 off_t a_foffset;
 uint8_t *a_buf;
 size_t a_bufsize;
 size_t *a_verifyblksize;
 vnode_verify_flags_t a_flags;
 vfs_context_t a_context;
};
#pragma clang diagnostic pop
errno_t vnode_create(uint32_t flavor, uint32_t size, void *data, vnode_t *vpp);
int vnode_addfsref(vnode_t vp);
int vnode_removefsref(vnode_t vp);
int vnode_hasdirtyblks(vnode_t vp);
int vnode_hascleanblks(vnode_t vp);
int vnode_waitforwrites(vnode_t vp, int output_target, int slpflag, int slptimeout, const char *msg);
void vnode_startwrite(vnode_t vp);
void vnode_writedone(vnode_t vp);
enum vtype vnode_vtype(vnode_t vp);
uint32_t vnode_vid(vnode_t vp);
boolean_t vnode_isonexternalstorage(vnode_t vp);
mount_t vnode_mountedhere(vnode_t vp);
mount_t vnode_mount(vnode_t vp);
dev_t vnode_specrdev(vnode_t vp);
void * vnode_fsnode(vnode_t vp);
void vnode_clearfsnode(vnode_t vp);
int vnode_isvroot(vnode_t vp);
int vnode_issystem(vnode_t vp);
int vnode_ismount(vnode_t vp);
int vnode_isreg(vnode_t vp);
int vnode_isdir(vnode_t vp);
int vnode_islnk(vnode_t vp);
int vnode_isfifo(vnode_t vp);
int vnode_isblk(vnode_t vp);
int vnode_ischr(vnode_t vp);
int vnode_isswap(vnode_t vp);
int vnode_isnamedstream(vnode_t vp);
int vnode_ismountedon(vnode_t vp);
void vnode_setmountedon(vnode_t vp);
void vnode_clearmountedon(vnode_t vp);
int vnode_isrecycled(vnode_t vp);
int vnode_willberecycled(vnode_t vp);
int vnode_isnocache(vnode_t vp);
int vnode_israge(vnode_t vp);
int vnode_needssnapshots(vnode_t vp);
void vnode_setnocache(vnode_t vp);
void vnode_clearnocache(vnode_t vp);
int vnode_isnoreadahead(vnode_t vp);
void vnode_setnoreadahead(vnode_t vp);
void vnode_clearnoreadahead(vnode_t vp);
int vnode_isfastdevicecandidate(vnode_t vp);
void vnode_setfastdevicecandidate(vnode_t vp);
void vnode_clearfastdevicecandidate(vnode_t vp);
int vnode_isautocandidate(vnode_t vp);
void vnode_setautocandidate(vnode_t vp);
void vnode_clearautocandidate(vnode_t vp);
void vnode_settag(vnode_t vp, int tag);
int vnode_tag(vnode_t vp);
int vnode_getattr(vnode_t vp, struct vnode_attr *vap, vfs_context_t ctx);
extern uint64_t vnode_get_va_fsid(struct vnode_attr *vap);
int vnode_setattr(vnode_t vp, struct vnode_attr *vap, vfs_context_t ctx);
vnode_t vfs_rootvnode(void);
void vnode_uncache_credentials(vnode_t vp);
void vnode_setmultipath(vnode_t vp);
uint32_t vnode_vfsmaxsymlen(vnode_t vp);
int vnode_vfsisrdonly(vnode_t vp);
int vnode_vfstypenum(vnode_t vp);
void vnode_vfsname(vnode_t vp, char *buf);
int vnode_vfs64bitready(vnode_t vp);
int vfs_context_get_special_port(vfs_context_t, int, ipc_port_t *);
int vfs_context_set_special_port(vfs_context_t, int, ipc_port_t);
proc_t vfs_context_proc(vfs_context_t ctx);
kauth_cred_t vfs_context_ucred(vfs_context_t ctx);
int vfs_context_pid(vfs_context_t ctx);
int vfs_context_issignal(vfs_context_t ctx, sigset_t mask);
int vfs_context_suser(vfs_context_t ctx);
int vfs_context_is64bit(vfs_context_t ctx);
vfs_context_t vfs_context_create(vfs_context_t ctx);
int vfs_context_rele(vfs_context_t ctx);
vfs_context_t vfs_context_current(void);
int vfs_set_thread_fs_private(uint8_t tag, uint64_t fs_private);
int vfs_get_thread_fs_private(uint8_t tag, uint64_t *fs_private);
int vflush(struct mount *mp, struct vnode *skipvp, int flags);
int vnode_get(vnode_t);
int vnode_getwithvid(vnode_t, uint32_t);
int vnode_getwithref(vnode_t vp);
int vnode_put(vnode_t vp);
int vnode_ref(vnode_t vp);
void vnode_rele(vnode_t vp);
int vnode_isinuse(vnode_t vp, int refcnt);
int vnode_recycle(vnode_t vp);
void vnode_update_identity(vnode_t vp, vnode_t dvp, const char *name, int name_len, uint32_t name_hashval, int flags);
int vn_bwrite(struct vnop_bwrite_args *ap);
int vnode_authorize(vnode_t vp, vnode_t dvp, kauth_action_t action, vfs_context_t ctx);
int vnode_authattr(vnode_t vp, struct vnode_attr *vap, kauth_action_t *actionp, vfs_context_t ctx);
int vnode_authattr_new(vnode_t dvp, struct vnode_attr *vap, int noauth, vfs_context_t ctx);
errno_t vnode_close(vnode_t vp, int flags, vfs_context_t ctx);
int vn_getpath(struct vnode *vp, char *pathbuf, int *len);
int vnode_notify(vnode_t vp, uint32_t events, struct vnode_attr *vap);
int vfs_get_notify_attributes(struct vnode_attr *vap);
errno_t vnode_lookup(const char *path, int flags, vnode_t *vpp, vfs_context_t ctx);
errno_t vnode_open(const char *path, int fmode, int cmode, int flags, vnode_t *vpp, vfs_context_t ctx);
int vnode_iterate(struct mount *mp, int flags, int (*callout)(struct vnode *, void *), void *arg);
int vn_revoke(vnode_t vp, int flags, vfs_context_t ctx);
int cache_lookup(vnode_t dvp, vnode_t *vpp, struct componentname *cnp);
void cache_enter(vnode_t dvp, vnode_t vp, struct componentname *cnp);
void cache_purge(vnode_t vp);
void cache_purge_negatives(vnode_t vp);
const char *vfs_addname(const char *name, uint32_t len, uint32_t nc_hash, uint32_t flags);
int vfs_removename(const char *name);
int vcount(vnode_t vp);
int vn_path_package_check(vnode_t vp, char *path, int pathlen, int *component);
int vn_rdwr(enum uio_rw rw, struct vnode *vp, caddr_t base, int len, off_t offset, enum uio_seg segflg, int ioflg, kauth_cred_t cred, int *aresid, proc_t p);
const char *vnode_getname(vnode_t vp);
void vnode_putname(const char *name);
vnode_t vnode_getparent(vnode_t vp);
int vnode_setdirty(vnode_t vp);
int vnode_cleardirty(vnode_t vp);
int vnode_isdirty(vnode_t vp);
int vnode_getbackingvnode(vnode_t in_vp, vnode_t* out_vpp);
errno_t vfs_setup_vattr_from_attrlist(struct attrlist *alp, struct vnode_attr *vap, enum vtype obj_vtype, ssize_t *attr_fixed_sizep, vfs_context_t ctx);
errno_t vfs_attr_pack(vnode_t vp, uio_t uio, struct attrlist *alp, uint64_t options, struct vnode_attr *vap, void *fndesc, vfs_context_t ctx);
errno_t vfs_attr_pack_ext(mount_t mp, vnode_t vp, uio_t uio, struct attrlist *alp, uint64_t options, struct vnode_attr *vap, void *fndesc, vfs_context_t ctx);
struct io_compression_stats {
 uint64_t uncompressed_size;
 uint64_t compressed_size;
 uint32_t buffer_size_compression_dist[10][7];
 uint32_t block_compressed_size_dist[16];
};
typedef struct io_compression_stats *io_compression_stats_t;
struct iocs_store_buffer_entry {
 char path_name[128];
 struct io_compression_stats iocs;
};
int sysctlbyname(const char *, void *, size_t *, void *, size_t);
struct ctlname {
 char *ctl_name;
 int ctl_type;
};
struct sysctl_req {
 struct proc *p;
 int lock;
 user_addr_t oldptr;
 size_t oldlen;
 size_t oldidx;
 int (*oldfunc)(struct sysctl_req *, const void *, size_t);
 user_addr_t newptr;
 size_t newlen;
 size_t newidx;
 int (*newfunc)(struct sysctl_req *, void *, size_t);
};
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct sysctl_oid_list { struct sysctl_oid *slh_first; }
#pragma clang diagnostic pop
                                       ;
struct sysctl_oid {
 struct sysctl_oid_list * oid_parent;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct sysctl_oid *sle_next; }
#pragma clang diagnostic pop
                         oid_link;
 int oid_number;
 int oid_kind;
 void *oid_arg1;
 int oid_arg2;
 const char *oid_name;
 int (*oid_handler)(struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req);
 const char *oid_fmt;
 const char *oid_descr;
 int oid_version;
 int oid_refcnt;
};
typedef int (* sysctl_handler_t) (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req);
int sysctl_handle_int (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req);
int sysctl_handle_long (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req);
int sysctl_handle_quad (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req);
int sysctl_handle_int2quad (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req);
int sysctl_handle_string (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req);
int sysctl_handle_opaque (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req);
int sysctl_io_number(struct sysctl_req *req, long long bigValue, size_t valueSize, void *pValue, int *changed);
int sysctl_io_string(struct sysctl_req *req, char *pValue, size_t valueSize, int trunc, int *changed);
int sysctl_io_opaque(struct sysctl_req *req, void *pValue, size_t valueSize, int *changed);
void sysctl_register_oid(struct sysctl_oid *oidp);
void sysctl_unregister_oid(struct sysctl_oid *oidp);
void sysctl_set_osenvironment(unsigned int size, const void* value);
void sysctl_unblock_osenvironment(void);
void sysctl_register_fixed(void) __attribute__((__deprecated__));
struct experiment_spec {
 void *ptr;
 uint64_t min_value;
 uint64_t max_value;
 uint64_t original_value;
 _Atomic _Bool modified;
};
int experiment_factor_uint_handler (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req); int experiment_factor_int_handler (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req); int experiment_factor_ulong_handler (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req); int experiment_factor_long_handler (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req); int experiment_factor_uint64_handler (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req); int experiment_factor_int64_handler (struct sysctl_oid *oidp __attribute__((__unused__)), void *arg1 __attribute__((__unused__)), int arg2 __attribute__((__unused__)), struct sysctl_req *req);
extern struct sysctl_oid_list sysctl__children;
extern struct sysctl_oid_list sysctl__kern_children;
extern struct sysctl_oid_list sysctl__sysctl_children;
extern struct sysctl_oid_list sysctl__vm_children;
extern struct sysctl_oid_list sysctl__vfs_children;
extern struct sysctl_oid_list sysctl__net_children;
extern struct sysctl_oid_list sysctl__debug_children;
extern struct sysctl_oid_list sysctl__hw_children;
extern struct sysctl_oid_list sysctl__machdep_children;
extern struct sysctl_oid_list sysctl__user_children;
struct lockf;
struct label;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct buflists { struct buf *lh_first; }
#pragma clang diagnostic pop
                        ;
struct vnode {
 lck_mtx_t v_lock;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct vnode *tqe_next; struct vnode **tqe_prev; }
#pragma clang diagnostic pop
                    v_freelist;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct vnode *tqe_next; struct vnode **tqe_prev; }
#pragma clang diagnostic pop
                    v_mntvnodes;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct namecache *tqh_first; struct namecache **tqh_last; }
#pragma clang diagnostic pop
                         v_ncchildren;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct namecache *lh_first; }
#pragma clang diagnostic pop
                        v_nclinks;
 vnode_t v_defer_reclaimlist;
 uint32_t v_listflag;
 uint32_t v_flag;
 uint16_t v_lflag;
 uint8_t v_iterblkflags;
 uint8_t v_references;
 int32_t v_kusecount;
 int32_t v_usecount;
 int32_t v_iocount;
 void * XNU_PTRAUTH_SIGNED_PTR("vnode.v_owner") v_owner;
 uint16_t v_type;
 uint16_t v_tag;
 uint32_t v_id;
 union {
  struct mount * XNU_PTRAUTH_SIGNED_PTR("vnode.v_data") vu_mountedhere;
  struct socket * XNU_PTRAUTH_SIGNED_PTR("vnode.vu_socket") vu_socket;
  struct specinfo * XNU_PTRAUTH_SIGNED_PTR("vnode.vu_specinfo") vu_specinfo;
  struct fifoinfo * XNU_PTRAUTH_SIGNED_PTR("vnode.vu_fifoinfo") vu_fifoinfo;
  struct ubc_info * XNU_PTRAUTH_SIGNED_PTR("vnode.vu_ubcinfo") vu_ubcinfo;
 } v_un;
 struct buflists v_cleanblkhd;
 struct buflists v_dirtyblkhd;
 struct klist v_knotes;
 kauth_cred_t XNU_PTRAUTH_SIGNED_PTR("vnode.v_cred") v_cred;
 kauth_action_t v_authorized_actions;
 int v_cred_timestamp;
 int v_nc_generation;
 int32_t v_numoutput;
 int32_t v_writecount;
 const char *v_name;
 vnode_t XNU_PTRAUTH_SIGNED_PTR("vnode.v_parent") v_parent;
 struct lockf *v_lockf;
 int(**v_op)(void *);
 mount_t XNU_PTRAUTH_SIGNED_PTR("vnode.v_mount") v_mount;
 void * v_data;
};
struct fd_vn_data {
 lck_mtx_t fv_lock;
 off_t fv_offset;
 void *fv_dircookie;
 caddr_t fv_buf;
 size_t fv_bufsiz;
 size_t fv_bufdone;
 size_t fv_bufallocsiz;
 off_t fv_soff;
 off_t fv_eoff;
 int fv_eofflag;
};
extern struct vnode *rootvnode;
struct vnodeop_desc {
 int vdesc_offset;
 const char *vdesc_name;
 int vdesc_flags;
 int *vdesc_vp_offsets;
 int vdesc_vpp_offset;
 int vdesc_cred_offset;
 int vdesc_proc_offset;
 int vdesc_componentname_offset;
 int vdesc_context_offset;
 caddr_t *vdesc_transports;
};
extern struct vnodeop_desc *vnodeop_descs[];
struct ostat;
void cvtstat(struct stat *st, struct ostat *ost);
void vprint(const char *label, struct vnode *vp);
__private_extern__ int set_package_extensions_table(user_addr_t data, int nentries, int maxwidth);
int vn_rdwr_64(enum uio_rw rw, struct vnode *vp, uint64_t base,
    int64_t len, off_t offset, enum uio_seg segflg,
    int ioflg, kauth_cred_t cred, int64_t *aresid,
    struct proc *p);
void fifo_printinfo(struct vnode *vp);
int vn_open(struct nameidata *ndp, int fmode, int cmode);
int vn_open_modflags(struct nameidata *ndp, int *fmode, int cmode);
int vn_open_auth(struct nameidata *ndp, int *fmode, struct vnode_attr *);
int vn_close(vnode_t, int flags, vfs_context_t ctx);
errno_t vn_remove(vnode_t dvp, vnode_t *vpp, struct nameidata *ndp, int32_t flags, struct vnode_attr *vap, vfs_context_t ctx);
errno_t vn_rename(struct vnode *fdvp, struct vnode **fvpp, struct componentname *fcnp, struct vnode_attr *fvap,
    struct vnode *tdvp, struct vnode **tvpp, struct componentname *tcnp, struct vnode_attr *tvap,
    uint32_t flags, vfs_context_t ctx);
void lock_vnode_and_post(vnode_t, int);
int vn_authorize_open_existing(vnode_t vp, struct componentname *cnp, int fmode, vfs_context_t ctx, void *reserved);
int vn_authorize_create(vnode_t, struct componentname *, struct vnode_attr *, vfs_context_t, void*);
int vn_attribute_prepare(vnode_t dvp, struct vnode_attr *vap, uint32_t *defaulted_fieldsp, vfs_context_t ctx);
void vn_attribute_cleanup(struct vnode_attr *vap, uint32_t defaulted_fields);
int vn_authorize_rename(struct vnode *fdvp, struct vnode *fvp, struct componentname *fcnp,
    struct vnode *tdvp, struct vnode *tvp, struct componentname *tcnp,
    vfs_context_t ctx, void *reserved);
int vn_authorize_renamex(struct vnode *fdvp, struct vnode *fvp, struct componentname *fcnp,
    struct vnode *tdvp, struct vnode *tvp, struct componentname *tcnp,
    vfs_context_t ctx, vfs_rename_flags_t flags, void *reserved);
int vn_authorize_renamex_with_paths(struct vnode *fdvp, struct vnode *fvp, struct componentname *fcnp, const char *from_path,
    struct vnode *tdvp, struct vnode *tvp, struct componentname *tcnp, const char *to_path,
    vfs_context_t ctx, vfs_rename_flags_t flags, void *reserved);
typedef int (*vn_create_authorizer_t)(vnode_t, struct componentname *, struct vnode_attr *, vfs_context_t, void*);
int vn_authorize_mkdir(vnode_t, struct componentname *, struct vnode_attr *, vfs_context_t, void*);
int vn_authorize_null(vnode_t, struct componentname *, struct vnode_attr *, vfs_context_t, void*);
int vnode_attr_authorize_dir_clone(struct vnode_attr *vap, kauth_action_t action,
    struct vnode_attr *dvap, vnode_t sdvp, mount_t mp, dir_clone_authorizer_op_t vattr_op,
    uint32_t flags, vfs_context_t ctx, void *reserved);
void vnode_attr_handle_mnt_ignore_ownership(struct vnode_attr *vap, mount_t mp, vfs_context_t ctx);
errno_t vn_create(vnode_t, vnode_t *, struct nameidata *, struct vnode_attr *, uint32_t, int, uint32_t*, vfs_context_t);
int vn_mkdir(vnode_t dvp, vnode_t *vpp, struct nameidata *ndp, struct vnode_attr *vap, vfs_context_t ctx);
int vn_rmdir(vnode_t dvp, vnode_t *vpp, struct nameidata *ndp, struct vnode_attr *vap, vfs_context_t ctx);
int vn_getxattr(vnode_t, const char *, uio_t, size_t *, int, vfs_context_t);
int vn_setxattr(vnode_t, const char *, uio_t, int, vfs_context_t);
int vn_removexattr(vnode_t, const char *, int, vfs_context_t);
int vn_listxattr(vnode_t, uio_t, size_t *, int, vfs_context_t);
void nchinit(void);
int resize_namecache(int newsize);
void name_cache_lock_shared(void);
void name_cache_lock(void);
void name_cache_unlock(void);
void cache_enter_with_gen(vnode_t dvp, vnode_t vp, struct componentname *cnp, int gen);
const char *cache_enter_create(vnode_t dvp, vnode_t vp, struct componentname *cnp);
extern int nc_disabled;
void vnode_lock_spin(vnode_t);
void vnode_list_lock(void);
void vnode_list_unlock(void);
int vnode_ref_ext(vnode_t, int, int);
void vnode_rele_internal(vnode_t, int, int, int);
int vnode_get_locked(vnode_t);
int vnode_put_locked(vnode_t);
int vnode_issock(vnode_t);
int vnode_isaliased(vnode_t);
void unlock_fsnode(vnode_t, int *);
int lock_fsnode(vnode_t, int *);
errno_t vnode_resume(vnode_t);
errno_t vnode_suspend(vnode_t);
errno_t vnode_mtime(vnode_t, struct timespec *, vfs_context_t);
errno_t vnode_flags(vnode_t, uint32_t *, vfs_context_t);
errno_t vnode_size(vnode_t, off_t *, vfs_context_t);
errno_t vnode_setsize(vnode_t, off_t, int ioflag, vfs_context_t);
int vnode_setattr_fallback(vnode_t vp, struct vnode_attr *vap, vfs_context_t ctx);
int vnode_isspec(vnode_t vp);
void vn_setunionwait(vnode_t);
void vn_checkunionwait(vnode_t);
void vn_clearunionwait(vnode_t, int);
void SPECHASH_LOCK(void);
void SPECHASH_UNLOCK(void);
void vnode_authorize_init(void);
void vfsinit(void);
void vnode_lock(vnode_t);
void vnode_unlock(vnode_t);
void vn_print_state(vnode_t , const char * , ...)
__attribute__((__format__ (__printf__, 2, 3)));
void vfs_op_init(void);
void vfs_opv_init(void);
extern _Bool rootvp_is_ssd;
typedef unsigned int UInt;
typedef signed int SInt;
typedef unsigned char UInt8;
typedef unsigned short UInt16;
typedef unsigned int UInt32;
typedef unsigned long long UInt64;
typedef struct __attribute__((deprecated)) UnsignedWide {
 UInt32 lo;
 UInt32 hi;
} UnsignedWide __attribute__((deprecated));
typedef signed char SInt8;
typedef signed short SInt16;
typedef signed int SInt32;
typedef signed long long SInt64;
typedef SInt32 OSStatus;
typedef UInt64 AbsoluteTime;
typedef UInt32 OptionBits __attribute__((deprecated));
typedef _Bool Boolean;
extern Boolean OSCompareAndSwap64(
 UInt64 oldValue,
 UInt64 newValue,
 volatile UInt64 * address);
extern SInt64 OSAddAtomic64(
 SInt64 theAmount,
 volatile SInt64 * address);
inline static SInt64
OSIncrementAtomic64(volatile SInt64 * address)
{
 return (OSAddAtomic64(1LL, ((volatile SInt64*)(address))));
}
inline static SInt64
OSDecrementAtomic64(volatile SInt64 * address)
{
 return (OSAddAtomic64(-1LL, ((volatile SInt64*)(address))));
}
extern Boolean OSCompareAndSwap(
 UInt32 oldValue,
 UInt32 newValue,
 volatile UInt32 * address);
extern Boolean OSCompareAndSwapPtr(
 void * oldValue,
 void * newValue,
 void * volatile * address);
extern SInt32 OSAddAtomic(
 SInt32 amount,
 volatile SInt32 * address);
extern SInt16 OSAddAtomic16(
 SInt32 amount,
 volatile SInt16 * address);
extern SInt8 OSAddAtomic8(
 SInt32 amount,
 volatile SInt8 * address);
extern SInt32 OSIncrementAtomic(volatile SInt32 * address);
extern SInt16 OSIncrementAtomic16(volatile SInt16 * address);
extern SInt8 OSIncrementAtomic8(volatile SInt8 * address);
extern SInt32 OSDecrementAtomic(volatile SInt32 * address);
extern SInt16 OSDecrementAtomic16(volatile SInt16 * address);
extern SInt8 OSDecrementAtomic8(volatile SInt8 * address);
extern UInt32 OSBitAndAtomic(
 UInt32 mask,
 volatile UInt32 * address);
extern UInt16 OSBitAndAtomic16(
 UInt32 mask,
 volatile UInt16 * address);
extern UInt8 OSBitAndAtomic8(
 UInt32 mask,
 volatile UInt8 * address);
extern UInt32 OSBitOrAtomic(
 UInt32 mask,
 volatile UInt32 * address);
extern UInt16 OSBitOrAtomic16(
 UInt32 mask,
 volatile UInt16 * address);
extern UInt8 OSBitOrAtomic8(
 UInt32 mask,
 volatile UInt8 * address);
extern UInt32 OSBitXorAtomic(
 UInt32 mask,
 volatile UInt32 * address);
extern UInt16 OSBitXorAtomic16(
 UInt32 mask,
 volatile UInt16 * address);
extern UInt8 OSBitXorAtomic8(
 UInt32 mask,
 volatile UInt8 * address);
extern Boolean OSTestAndSet(
 UInt32 bit,
 volatile UInt8 * startAddress);
extern Boolean OSTestAndClear(
 UInt32 bit,
 volatile UInt8 * startAddress);
typedef SInt32 OSSpinLock;
extern void OSSynchronizeIO(void);

typedef uint64_t resource_notify_flags_t;
typedef char command_t[16 + 1];
typedef char proc_name_t[2*16 + 1];
typedef char posix_path_t[1024];
struct label;
struct session {
 int s_count;
 struct proc * s_leader;
 struct vnode * s_ttyvp;
 int s_ttyvid;
 struct tty * s_ttyp;
 pid_t s_ttypgrpid;
 pid_t s_sid;
 char s_login[255];
 int s_flags;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct session *le_next; struct session **le_prev; }
#pragma clang diagnostic pop
                         s_hash;
 lck_mtx_t s_mlock;
 int s_listflags;
};
struct pgrp {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct pgrp *le_next; struct pgrp **le_prev; }
#pragma clang diagnostic pop
                         pg_hash;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct proc *lh_first; }
#pragma clang diagnostic pop
                         pg_members;
 struct session * pg_session;
 pid_t pg_id;
 int pg_jobc;
 int pg_membercnt;
 int pg_refcount;
 unsigned int pg_listflags;
 lck_mtx_t pg_mlock;
};
struct proc;
struct proc {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct proc *le_next; struct proc **le_prev; }
#pragma clang diagnostic pop
                  p_list;
 void * XNU_PTRAUTH_SIGNED_PTR("proc.task") task;
 struct proc * XNU_PTRAUTH_SIGNED_PTR("proc.p_pptr") p_pptr;
 pid_t p_ppid;
 pid_t p_original_ppid;
 pid_t p_pgrpid;
 uid_t p_uid;
 gid_t p_gid;
 uid_t p_ruid;
 gid_t p_rgid;
 uid_t p_svuid;
 gid_t p_svgid;
 uint64_t p_uniqueid;
 uint64_t p_puniqueid;
 lck_mtx_t p_mlock;
 pid_t p_pid;
 char p_stat;
 char p_shutdownstate;
 char p_kdebug;
 char p_btrace;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct proc *le_next; struct proc **le_prev; }
#pragma clang diagnostic pop
                  p_pglist;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct proc *le_next; struct proc **le_prev; }
#pragma clang diagnostic pop
                  p_sibling;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct proc *lh_first; }
#pragma clang diagnostic pop
                   p_children;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct uthread *tqh_first; struct uthread **tqh_last; }
#pragma clang diagnostic pop
                       p_uthlist;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct proc *le_next; struct proc **le_prev; }
#pragma clang diagnostic pop
                  p_hash;
 lck_mtx_t p_fdmlock;
 lck_mtx_t p_ucred_mlock;
 kauth_cred_t XNU_PTRAUTH_SIGNED_PTR("proc.p_ucred") p_ucred;
 struct filedesc *p_fd;
 struct pstats *p_stats;
 struct plimit *p_limit;
 struct sigacts *p_sigacts;
 lck_spin_t p_slock;
 int p_siglist;
 unsigned int p_flag;
 unsigned int p_lflag;
 unsigned int p_listflag;
 unsigned int p_ladvflag;
 int p_refcount;
 int p_childrencnt;
 int p_parentref;
 pid_t p_oppid;
 u_int p_xstat;
 struct itimerval p_realtimer;
 struct timeval p_rtime;
 struct itimerval p_vtimer_user;
 struct itimerval p_vtimer_prof;
 struct timeval p_rlim_cpu;
 int p_debugger;
 boolean_t sigwait;
 void *sigwait_thread;
 void *exit_thread;
 void * p_vforkact;
 int p_vforkcnt;
 int p_fpdrainwait;
 pid_t si_pid;
 u_int si_status;
 u_int si_code;
 uid_t si_uid;
 void * vm_shm;
 u_int p_argslen;
 int p_argc;
 user_addr_t user_stack;
 struct vnode * XNU_PTRAUTH_SIGNED_PTR("proc.p_textvp") p_textvp;
 off_t p_textoff;
 sigset_t p_sigmask;
 sigset_t p_sigignore;
 sigset_t p_sigcatch;
 u_char p_priority;
 u_char p_resv0;
 char p_nice;
 u_char p_resv1;
 command_t p_comm;
 proc_name_t p_name;
 uint8_t p_xhighbits;
 pid_t p_contproc;
 struct pgrp * XNU_PTRAUTH_SIGNED_PTR("proc.p_pgrp") p_pgrp;
 uint32_t p_csflags;
 uint32_t p_pcaction;
 uint8_t p_uuid[16];
 cpu_type_t p_cputype;
 cpu_subtype_t p_cpusubtype;
 uint8_t *syscall_filter_mask;
 uint32_t p_platform;
 uint32_t p_min_sdk;
 uint32_t p_sdk;
 int p_aio_total_count;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct aio_workq_entry *tqh_first; struct aio_workq_entry **tqh_last; }
#pragma clang diagnostic pop
                                p_aio_activeq;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct aio_workq_entry *tqh_first; struct aio_workq_entry **tqh_last; }
#pragma clang diagnostic pop
                                p_aio_doneq;
 struct klist p_klist;
 struct rusage_superset *p_ru;
 thread_t p_signalholder;
 thread_t p_transholder;
 int p_sigwaitcnt;
 u_short p_acflag;
 volatile u_short p_vfs_iopolicy;
 user_addr_t p_threadstart;
 user_addr_t p_wqthread;
 int p_pthsize;
 uint32_t p_pth_tsd_offset;
 user_addr_t p_stack_addr_hint;
 struct workqueue *_Atomic p_wqptr;
 struct timeval p_start;
 void * p_rcall;
 int p_ractive;
 int p_idversion;
 void * p_pthhash;
 volatile uint64_t was_throttled __attribute__((aligned(8)));
 volatile uint64_t did_throttle __attribute__((aligned(8)));
 uint64_t p_dispatchqueue_offset;
 uint64_t p_dispatchqueue_serialno_offset;
 uint64_t p_dispatchqueue_label_offset;
 uint64_t p_return_to_kernel_offset;
 uint64_t p_mach_thread_self_offset;
 pid_t p_responsible_pid;
 _Atomic uint32_t p_user_faults;
 uint32_t p_memlimit_increase;
 struct os_reason *p_exit_reason;
 char * p_subsystem_root_path;
 lck_rw_t p_dirs_lock;
 pid_t p_sessionid;
};
struct proc_ident {
 uint64_t p_uniqueid;
 pid_t p_pid;
 int p_idversion;
};
#pragma pack(4)
struct user32_extern_proc {
 union {
  struct {
   uint32_t __p_forw;
   uint32_t __p_back;
  } p_st1;
  struct user32_timeval __p_starttime;
 } p_un;
 uint32_t p_vmspace;
 uint32_t p_sigacts;
 int p_flag;
 char p_stat;
 pid_t p_pid;
 pid_t p_oppid;
 int p_dupfd;
 uint32_t user_stack;
 uint32_t exit_thread;
 int p_debugger;
 boolean_t sigwait;
 u_int p_estcpu;
 int p_cpticks;
 fixpt_t p_pctcpu;
 uint32_t p_wchan;
 uint32_t p_wmesg;
 u_int p_swtime;
 u_int p_slptime;
 struct user32_itimerval p_realtimer;
 struct user32_timeval p_rtime;
 u_quad_t p_uticks;
 u_quad_t p_sticks;
 u_quad_t p_iticks;
 int p_traceflag;
 uint32_t p_tracep;
 int p_siglist;
 uint32_t p_textvp;
 int p_holdcnt;
 sigset_t p_sigmask;
 sigset_t p_sigignore;
 sigset_t p_sigcatch;
 u_char p_priority;
 u_char p_usrpri;
 char p_nice;
 char p_comm[16 + 1];
 uint32_t p_pgrp;
 uint32_t p_addr;
 u_short p_xstat;
 u_short p_acflag;
 uint32_t p_ru;
};
#pragma pack()
struct user64_extern_proc {
 union {
  struct {
   user_addr_t __p_forw;
   user_addr_t __p_back;
  } p_st1;
  struct user64_timeval __p_starttime;
 } p_un;
 user_addr_t p_vmspace;
 user_addr_t p_sigacts;
 int p_flag;
 char p_stat;
 pid_t p_pid;
 pid_t p_oppid;
 int p_dupfd;
 user_addr_t user_stack __attribute((aligned(8)));
 user_addr_t exit_thread;
 int p_debugger;
 boolean_t sigwait;
 u_int p_estcpu;
 int p_cpticks;
 fixpt_t p_pctcpu;
 user_addr_t p_wchan __attribute((aligned(8)));
 user_addr_t p_wmesg;
 u_int p_swtime;
 u_int p_slptime;
 struct user64_itimerval p_realtimer;
 struct user64_timeval p_rtime;
 u_quad_t p_uticks;
 u_quad_t p_sticks;
 u_quad_t p_iticks;
 int p_traceflag;
 user_addr_t p_tracep __attribute((aligned(8)));
 int p_siglist;
 user_addr_t p_textvp __attribute((aligned(8)));
 int p_holdcnt;
 sigset_t p_sigmask;
 sigset_t p_sigignore;
 sigset_t p_sigcatch;
 u_char p_priority;
 u_char p_usrpri;
 char p_nice;
 char p_comm[16 + 1];
 user_addr_t p_pgrp __attribute((aligned(8)));
 user_addr_t p_addr;
 u_short p_xstat;
 u_short p_acflag;
 user_addr_t p_ru __attribute((aligned(8)));
};
extern int nprocs, maxproc;
extern int maxprocperuid;
extern int hard_maxproc;
extern unsigned int proc_shutdown_exitcount;
extern lck_mtx_t proc_list_mlock;
extern int execargs_cache_size;
extern int execargs_free_count;
extern vm_offset_t * execargs_cache;
extern
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
       struct pidhashhead { struct proc *lh_first; }
#pragma clang diagnostic pop
                                    * pidhashtbl;
extern u_long pidhash;
extern
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
       struct pgrphashhead { struct pgrp *lh_first; }
#pragma clang diagnostic pop
                                     * pgrphashtbl;
extern u_long pgrphash;
extern
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
       struct sesshashhead { struct session *lh_first; }
#pragma clang diagnostic pop
                                        * sesshashtbl;
extern u_long sesshash;
extern lck_attr_t proc_lck_attr;
extern lck_grp_t proc_fdmlock_grp;
extern lck_grp_t proc_lck_grp;
extern lck_grp_t proc_kqhashlock_grp;
extern lck_grp_t proc_knhashlock_grp;
extern lck_grp_t proc_slock_grp;
extern lck_grp_t proc_mlock_grp;
extern lck_grp_t proc_ucred_mlock_grp;
extern lck_grp_t proc_dirslock_grp;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct proclist { struct proc *lh_first; }
#pragma clang diagnostic pop
                         ;
extern struct proclist allproc;
extern struct proclist zombproc;
extern struct proc * XNU_PTRAUTH_SIGNED_PTR("initproc") initproc;
extern void procinit(void);
extern void proc_lock(struct proc *);
extern void proc_unlock(struct proc *);
extern void proc_spinlock(struct proc *);
extern void proc_spinunlock(struct proc *);
extern void proc_list_lock(void);
extern void proc_list_unlock(void);
extern void proc_klist_lock(void);
extern void proc_klist_unlock(void);
extern void proc_fdlock(struct proc *);
extern void proc_fdlock_spin(struct proc *);
extern void proc_fdunlock(struct proc *);
extern void proc_fdlock_assert(proc_t p, int assertflags);
extern void proc_dirs_lock_shared(struct proc *);
extern void proc_dirs_unlock_shared(struct proc *);
extern void proc_dirs_lock_exclusive(struct proc *);
extern void proc_dirs_unlock_exclusive(struct proc *);
extern void proc_ucred_lock(struct proc *);
extern void proc_ucred_unlock(struct proc *);
__private_extern__ int proc_core_name(const char *name, uid_t uid, pid_t pid,
    char *cr_name, size_t cr_name_len);
extern int isinferior(struct proc *, struct proc *);
__private_extern__ struct proc *pzfind(pid_t);
__private_extern__ struct proc *proc_find_zombref(pid_t);
__private_extern__ void proc_drop_zombref(struct proc * p);
extern size_t chgproccnt(uid_t uid, int diff);
extern void pinsertchild(struct proc *parent, struct proc *child);
extern int setsid_internal(struct proc *p);
extern void setlogin_internal(proc_t p, const char login[static 255]);
extern int setgroups_internal(proc_t p, u_int gidsetsize, gid_t *gidset, uid_t gmuid);
extern int enterpgrp(struct proc *p, pid_t pgid, int mksess);
extern void fixjobc(struct proc *p, struct pgrp *pgrp, int entering);
extern int inferior(struct proc *p);
extern int leavepgrp(struct proc *p);
extern void resetpriority(struct proc *);
extern void setrunnable(struct proc *);
extern void setrunqueue(struct proc *);
extern int sleep(void *chan, int pri);
extern int tsleep0(void *chan, int pri, const char *wmesg, int timo, int (*continuation)(int));
extern int tsleep1(void *chan, int pri, const char *wmesg, u_int64_t abstime, int (*continuation)(int));
extern int msleep0(void *chan, lck_mtx_t *mtx, int pri, const char *wmesg, int timo, int (*continuation)(int));
extern void vfork_return(struct proc *child, int32_t *retval, int rval);
extern int exit1(struct proc *, int, int *);
extern int exit1_internal(struct proc *, int, int *, boolean_t, boolean_t, int);
extern int exit_with_reason(struct proc *, int, int *, boolean_t, boolean_t, int, struct os_reason *);
extern int fork1(proc_t, thread_t *, int, coalition_t *);
extern void vfork_exit_internal(struct proc *p, int rv, int forced);
extern void proc_reparentlocked(struct proc *child, struct proc * newparent, int cansignal, int locked);
extern proc_t proc_findinternal(int pid, int locked);
extern proc_t proc_findthread(thread_t thread);
extern void proc_refdrain(proc_t);
extern proc_t proc_refdrain_with_refwait(proc_t p, boolean_t get_ref_and_allow_wait);
extern void proc_refwake(proc_t p);
extern void proc_childdrainlocked(proc_t);
extern void proc_childdrainstart(proc_t);
extern void proc_childdrainend(proc_t);
extern void proc_checkdeadrefs(proc_t);
struct proc *pfind_locked(pid_t);
extern struct pgrp *pgfind(pid_t);
extern void pg_rele(struct pgrp * pgrp);
extern struct session * session_find_internal(pid_t sessid);
extern struct pgrp * proc_pgrp(proc_t);
extern struct pgrp * tty_pgrp(struct tty * tp);
extern struct pgrp * pgfind_internal(pid_t);
extern struct session * proc_session(proc_t);
extern void pgrp_lock(struct pgrp * pgrp);
extern void pgrp_unlock(struct pgrp * pgrp);
extern void session_lock(struct session * sess);
extern void session_unlock(struct session * sess);
extern struct session * pgrp_session(struct pgrp * pgrp);
extern void session_rele(struct session *sess);
extern int isbackground(proc_t p, struct tty *tp);
extern proc_t proc_parentholdref(proc_t);
extern int proc_parentdropref(proc_t, int);
int itimerfix(struct timeval *tv);
int itimerdecr(struct proc * p, struct itimerval *itp, int usec);
void proc_free_realitimer(proc_t proc);
int timespec_is_valid(const struct timespec *);
void proc_signalstart(struct proc *, int locked);
void proc_signalend(struct proc *, int locked);
int proc_transstart(struct proc *, int locked, int non_blocking);
void proc_transcommit(struct proc *, int locked);
void proc_transend(struct proc *, int locked);
int proc_transwait(struct proc *, int locked);
void proc_rele_locked(struct proc * p);
struct proc *proc_ref_locked(struct proc * p);
void proc_knote(struct proc * p, long hint);
void proc_knote_drain(struct proc *p);
void proc_setregister(proc_t p);
void proc_resetregister(proc_t p);
_Bool proc_get_pthread_jit_allowlist(proc_t p);
void proc_set_pthread_jit_allowlist(proc_t p);
thread_t proc_thread(proc_t);
extern int proc_pendingsignals(proc_t, sigset_t);
int proc_getpcontrol(int pid, int * pcontrolp);
int proc_dopcontrol(proc_t p);
int proc_resetpcontrol(int pid);
struct uthread * current_uthread(void);
typedef int (*proc_iterate_fn_t)(proc_t, void *);
extern void pgrp_iterate(struct pgrp *pgrp, unsigned int flags, proc_iterate_fn_t callout, void *arg, proc_iterate_fn_t filterfn, void *filterarg);
extern void proc_iterate(unsigned int flags, proc_iterate_fn_t callout, void *arg, proc_iterate_fn_t filterfn, void *filterarg);
extern void proc_childrenwalk(proc_t p, proc_iterate_fn_t callout, void *arg);
extern void proc_rebootscan(proc_iterate_fn_t callout, void *arg, proc_iterate_fn_t filterfn, void *filterarg);
pid_t dtrace_proc_selfpid(void);
pid_t dtrace_proc_selfppid(void);
uid_t dtrace_proc_selfruid(void);
extern zone_t proc_zone;
extern zone_t proc_stats_zone;
extern zone_t proc_sigacts_zone;
extern struct proc_ident proc_ident(proc_t p);
_Bool proc_ignores_node_permissions(proc_t proc);
#pragma pack(1)
typedef struct {
 u_int8_t sid_kind;
 u_int8_t sid_authcount;
 u_int8_t sid_authority[6];
 u_int32_t sid_authorities[16];
} ntsid_t;
#pragma pack()
struct kauth_identity_extlookup {
 u_int32_t el_seqno;
 u_int32_t el_result;
 u_int32_t el_flags;
 __darwin_pid_t el_info_pid;
 u_int64_t el_extend;
 u_int32_t el_info_reserved_1;
 uid_t el_uid;
 guid_t el_uguid;
 u_int32_t el_uguid_valid;
 ntsid_t el_usid;
 u_int32_t el_usid_valid;
 gid_t el_gid;
 guid_t el_gguid;
 u_int32_t el_gguid_valid;
 ntsid_t el_gsid;
 u_int32_t el_gsid_valid;
 u_int32_t el_member_valid;
 u_int32_t el_sup_grp_cnt;
 gid_t el_sup_groups[16];
};
struct kauth_cache_sizes {
 u_int32_t kcs_group_size;
 u_int32_t kcs_id_size;
};
extern kauth_cred_t posix_cred_create(posix_cred_t pcred);
extern posix_cred_t posix_cred_get(kauth_cred_t cred);
extern void posix_cred_label(kauth_cred_t cred, posix_cred_t pcred);
extern int posix_cred_access(kauth_cred_t cred, id_t object_uid, id_t object_gid, mode_t object_mode, mode_t mode_req);
extern uid_t kauth_getuid(void);
extern uid_t kauth_getruid(void);
extern gid_t kauth_getgid(void);
extern kauth_cred_t kauth_cred_get(void);
extern kauth_cred_t kauth_cred_get_with_ref(void);
extern kauth_cred_t kauth_cred_proc_ref(proc_t procp);
extern kauth_cred_t kauth_cred_create(kauth_cred_t cred);
extern void kauth_cred_ref(kauth_cred_t _cred);
extern void kauth_cred_unref(kauth_cred_t *_cred);
extern kauth_cred_t kauth_cred_label_update(kauth_cred_t cred, void *label);
extern int kauth_proc_label_update(struct proc *p, void *label);
__attribute__((__deprecated__("Unsafe interface: requires lock holds that aren't exposed")))
extern kauth_cred_t kauth_cred_find(kauth_cred_t cred);
extern uid_t kauth_cred_getuid(kauth_cred_t _cred);
extern uid_t kauth_cred_getruid(kauth_cred_t _cred);
extern uid_t kauth_cred_getsvuid(kauth_cred_t _cred);
extern gid_t kauth_cred_getgid(kauth_cred_t _cred);
extern gid_t kauth_cred_getrgid(kauth_cred_t _cred);
extern gid_t kauth_cred_getsvgid(kauth_cred_t _cred);
extern int kauth_cred_pwnam2guid(char *pwnam, guid_t *guidp);
extern int kauth_cred_grnam2guid(char *grnam, guid_t *guidp);
extern int kauth_cred_guid2pwnam(guid_t *guidp, char *pwnam);
extern int kauth_cred_guid2grnam(guid_t *guidp, char *grnam);
extern int kauth_cred_guid2uid(guid_t *_guid, uid_t *_uidp);
extern int kauth_cred_guid2gid(guid_t *_guid, gid_t *_gidp);
extern int kauth_cred_ntsid2uid(ntsid_t *_sid, uid_t *_uidp);
extern int kauth_cred_ntsid2gid(ntsid_t *_sid, gid_t *_gidp);
extern int kauth_cred_ntsid2guid(ntsid_t *_sid, guid_t *_guidp);
extern int kauth_cred_uid2guid(uid_t _uid, guid_t *_guidp);
extern int kauth_cred_getguid(kauth_cred_t _cred, guid_t *_guidp);
extern int kauth_cred_gid2guid(gid_t _gid, guid_t *_guidp);
extern int kauth_cred_uid2ntsid(uid_t _uid, ntsid_t *_sidp);
extern int kauth_cred_getntsid(kauth_cred_t _cred, ntsid_t *_sidp);
extern int kauth_cred_gid2ntsid(gid_t _gid, ntsid_t *_sidp);
extern int kauth_cred_guid2ntsid(guid_t *_guid, ntsid_t *_sidp);
extern int kauth_cred_ismember_gid(kauth_cred_t _cred, gid_t _gid, int *_resultp);
extern int kauth_cred_ismember_guid(kauth_cred_t _cred, guid_t *_guidp, int *_resultp);
extern int kauth_cred_nfs4domain2dsnode(char *nfs4domain, char *dsnode);
extern int kauth_cred_dsnode2nfs4domain(char *dsnode, char *nfs4domain);
extern int groupmember(gid_t gid, kauth_cred_t cred);
extern int kauth_cred_issuser(kauth_cred_t _cred);
extern guid_t kauth_null_guid;
extern int kauth_guid_equal(guid_t *_guid1, guid_t *_guid2);
typedef u_int32_t kauth_ace_rights_t;
struct kauth_ace {
 guid_t ace_applicable;
 u_int32_t ace_flags;
 kauth_ace_rights_t ace_rights;
};
struct kauth_acl {
 u_int32_t acl_entrycount;
 u_int32_t acl_flags;
 struct kauth_ace acl_ace[1];
};
kauth_acl_t kauth_acl_alloc(int size);
void kauth_acl_free(kauth_acl_t fsp);
struct kauth_filesec {
 u_int32_t fsec_magic;
 guid_t fsec_owner;
 guid_t fsec_group;
 struct kauth_acl fsec_acl;
};
struct kauth_scope;
typedef struct kauth_scope *kauth_scope_t;
struct kauth_listener;
typedef struct kauth_listener *kauth_listener_t;
typedef int (* kauth_scope_callback_t)(kauth_cred_t _credential,
    void *_idata,
    kauth_action_t _action,
    uintptr_t _arg0,
    uintptr_t _arg1,
    uintptr_t _arg2,
    uintptr_t _arg3);
struct kauth_acl_eval {
 kauth_ace_t ae_acl;
 int ae_count;
 kauth_ace_rights_t ae_requested;
 kauth_ace_rights_t ae_residual;
 int ae_result;
 boolean_t ae_found_deny;
 int ae_options;
 kauth_ace_rights_t ae_exp_gall;
 kauth_ace_rights_t ae_exp_gread;
 kauth_ace_rights_t ae_exp_gwrite;
 kauth_ace_rights_t ae_exp_gexec;
};
typedef struct kauth_acl_eval *kauth_acl_eval_t;
kauth_filesec_t kauth_filesec_alloc(int size);
void kauth_filesec_free(kauth_filesec_t fsp);
extern kauth_scope_t kauth_register_scope(const char *_identifier, kauth_scope_callback_t _callback, void *_idata);
extern void kauth_deregister_scope(kauth_scope_t _scope);
__attribute__((__deprecated__("Use EndpointSecurity instead")))
extern kauth_listener_t kauth_listen_scope(const char *_identifier, kauth_scope_callback_t _callback, void *_idata);
__attribute__((__deprecated__("Use EndpointSecurity instead")))
extern void kauth_unlisten_scope(kauth_listener_t _scope);
extern int kauth_authorize_action(kauth_scope_t _scope, kauth_cred_t _credential, kauth_action_t _action,
    uintptr_t _arg0, uintptr_t _arg1, uintptr_t _arg2, uintptr_t _arg3);
extern int kauth_authorize_allow(kauth_cred_t _credential, void *_idata, kauth_action_t _action,
    uintptr_t _arg0, uintptr_t _arg1, uintptr_t _arg2, uintptr_t _arg3);
extern int kauth_authorize_process(kauth_cred_t _credential, kauth_action_t _action,
    struct proc *_process, uintptr_t _arg1, uintptr_t _arg2, uintptr_t _arg3);
extern int kauth_authorize_fileop(kauth_cred_t _credential, kauth_action_t _action,
    uintptr_t _arg0, uintptr_t _arg1);
struct ostat {
 __uint16_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 __uint16_t st_uid;
 __uint16_t st_gid;
 __uint16_t st_rdev;
 __int32_t st_size;
 struct timespec st_atimespec;
 struct timespec st_mtimespec;
 struct timespec st_ctimespec;
 __int32_t st_blksize;
 __int32_t st_blocks;
 __uint32_t st_flags;
 __uint32_t st_gen;
};
struct stat {
 dev_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 uid_t st_uid;
 gid_t st_gid;
 dev_t st_rdev;
 struct timespec st_atimespec;
 struct timespec st_mtimespec;
 struct timespec st_ctimespec;
 off_t st_size;
 blkcnt_t st_blocks;
 blksize_t st_blksize;
 __uint32_t st_flags;
 __uint32_t st_gen;
 __int32_t st_lspare;
 __int64_t st_qspare[2];
};
struct stat64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };

typedef __uint8_t sa_family_t;
typedef __darwin_socklen_t socklen_t;
typedef __uint32_t sae_associd_t;
typedef __uint32_t sae_connid_t;
typedef struct sa_endpoints {
 unsigned int sae_srcif;
 const struct sockaddr *sae_srcaddr;
 socklen_t sae_srcaddrlen;
 const struct sockaddr *sae_dstaddr;
 socklen_t sae_dstaddrlen;
} sa_endpoints_t;
struct linger {
 int l_onoff;
 int l_linger;
};
struct so_np_extensions {
 u_int32_t npx_flags;
 u_int32_t npx_mask;
};
struct sockaddr {
 __uint8_t sa_len;
 sa_family_t sa_family;
 char sa_data[14];
};
struct sockproto {
 __uint16_t sp_family;
 __uint16_t sp_protocol;
};
struct sockaddr_storage {
 __uint8_t ss_len;
 sa_family_t ss_family;
 char __ss_pad1[((sizeof(__int64_t)) - sizeof(__uint8_t) - sizeof(sa_family_t))];
 __int64_t __ss_align;
 char __ss_pad2[(128 - sizeof(__uint8_t) - sizeof(sa_family_t) - ((sizeof(__int64_t)) - sizeof(__uint8_t) - sizeof(sa_family_t)) - (sizeof(__int64_t)))];
};
struct msghdr {
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};
struct cmsghdr {
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;
};
struct sf_hdtr {
 struct iovec *headers;
 int hdr_cnt;
 struct iovec *trailers;
 int trl_cnt;
};
struct user_sf_hdtr {
 user_addr_t headers;
 int hdr_cnt;
 user_addr_t trailers;
 int trl_cnt;
};
struct user64_sf_hdtr {
 user64_addr_t headers;
 int hdr_cnt;
 user64_addr_t trailers;
 int trl_cnt;
};
struct user32_sf_hdtr {
 user32_addr_t headers;
 int hdr_cnt;
 user32_addr_t trailers;
 int trl_cnt;
};
struct timeval;
typedef void (*sock_upcall)(socket_t so, void *cookie, int waitf);
extern errno_t sock_accept(socket_t so, struct sockaddr *from, int fromlen,
    int flags, sock_upcall callback, void *cookie, socket_t *new_so)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_bind(socket_t so, const struct sockaddr *to)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_connect(socket_t so, const struct sockaddr *to, int flags)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_getpeername(socket_t so, struct sockaddr *peername,
    int peernamelen)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_getsockname(socket_t so, struct sockaddr *sockname,
    int socknamelen)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_getsockopt(socket_t so, int level, int optname,
    void *optval, int *optlen)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_ioctl(socket_t so, unsigned long request, void *argp)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_setsockopt(socket_t so, int level, int optname,
    const void *optval, int optlen)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_listen(socket_t so, int backlog)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_receive(socket_t so, struct msghdr *msg, int flags,
    size_t *recvdlen)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_receivembuf(socket_t so, struct msghdr *msg, mbuf_t *data,
    int flags, size_t *recvlen)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_send(socket_t so, const struct msghdr *msg, int flags,
    size_t *sentlen)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_sendmbuf(socket_t so, const struct msghdr *msg, mbuf_t data,
    int flags, size_t *sentlen)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_shutdown(socket_t so, int how)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_socket(int domain, int type, int protocol,
    sock_upcall callback, void *cookie, socket_t *new_so)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern void sock_close(socket_t so)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern void sock_retain(socket_t so)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern void sock_release(socket_t so)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_setpriv(socket_t so, int on)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern int sock_isconnected(socket_t so)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern int sock_isnonblocking(socket_t so)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));
extern errno_t sock_gettype(socket_t so, int *domain, int *type, int *protocol)
__attribute__((availability(macos,introduced=10.4,deprecated=10.15,message="Network Kernel Extension KPI is deprecated")));

typedef u_int32_t text_encoding_t;
typedef u_int32_t fsobj_type_t;
typedef u_int32_t fsobj_tag_t;
typedef u_int32_t fsfile_type_t;
typedef u_int32_t fsvolid_t;
typedef u_int32_t attrgroup_t;
struct attrlist {
 u_short bitmapcount;
 u_int16_t reserved;
 attrgroup_t commonattr;
 attrgroup_t volattr;
 attrgroup_t dirattr;
 attrgroup_t fileattr;
 attrgroup_t forkattr;
};
typedef struct attribute_set {
 attrgroup_t commonattr;
 attrgroup_t volattr;
 attrgroup_t dirattr;
 attrgroup_t fileattr;
 attrgroup_t forkattr;
} attribute_set_t;
typedef struct attrreference {
 int32_t attr_dataoffset;
 u_int32_t attr_length;
} attrreference_t;
struct diskextent {
 u_int32_t startblock;
 u_int32_t blockcount;
};
typedef struct diskextent extentrecord[8];
typedef u_int32_t vol_capabilities_set_t[4];
typedef struct vol_capabilities_attr {
 vol_capabilities_set_t capabilities;
 vol_capabilities_set_t valid;
} vol_capabilities_attr_t;
typedef struct vol_attributes_attr {
 attribute_set_t validattr;
 attribute_set_t nativeattr;
} vol_attributes_attr_t;
struct fssearchblock {
 struct attrlist *returnattrs;
 void *returnbuffer;
 size_t returnbuffersize;
 u_long maxmatches;
 struct timeval timelimit;
 void *searchparams1;
 size_t sizeofsearchparams1;
 void *searchparams2;
 size_t sizeofsearchparams2;
 struct attrlist searchattrs;
};
struct user64_fssearchblock {
 user64_addr_t returnattrs;
 user64_addr_t returnbuffer;
 user64_size_t returnbuffersize;
 user64_ulong_t maxmatches;
 struct user64_timeval timelimit;
 user64_addr_t searchparams1;
 user64_size_t sizeofsearchparams1;
 user64_addr_t searchparams2;
 user64_size_t sizeofsearchparams2;
 struct attrlist searchattrs;
};
struct user32_fssearchblock {
 user32_addr_t returnattrs;
 user32_addr_t returnbuffer;
 user32_size_t returnbuffersize;
 user32_ulong_t maxmatches;
 struct user32_timeval timelimit;
 user32_addr_t searchparams1;
 user32_size_t sizeofsearchparams1;
 user32_addr_t searchparams2;
 user32_size_t sizeofsearchparams2;
 struct attrlist searchattrs;
};
struct searchstate {
 uint32_t ss_union_flags;
 uint32_t ss_union_layer;
 u_char ss_fsstate[548];
} __attribute__((packed));
struct statfs64 { uint32_t f_bsize; int32_t f_iosize; uint64_t f_blocks; uint64_t f_bfree; uint64_t f_bavail; uint64_t f_files; uint64_t f_ffree; fsid_t f_fsid; uid_t f_owner; uint32_t f_type; uint32_t f_flags; uint32_t f_fssubtype; char f_fstypename[16]; char f_mntonname[1024]; char f_mntfromname[1024]; uint32_t f_flags_ext; uint32_t f_reserved[7]; };
struct statfs {
 short f_otype;
 short f_oflags;
 long f_bsize;
 long f_iosize;
 long f_blocks;
 long f_bfree;
 long f_bavail;
 long f_files;
 long f_ffree;
 fsid_t f_fsid;
 uid_t f_owner;
 short f_reserved1;
 short f_type;
 long f_flags;
 long f_reserved2[2];
 char f_fstypename[15];
 char f_mntonname[90];
 char f_mntfromname[90];
 char f_reserved3;
 long f_reserved4[4];
};
#pragma pack(4)
struct vfsstatfs {
 uint32_t f_bsize;
 size_t f_iosize;
 uint64_t f_blocks;
 uint64_t f_bfree;
 uint64_t f_bavail;
 uint64_t f_bused;
 uint64_t f_files;
 uint64_t f_ffree;
 fsid_t f_fsid;
 uid_t f_owner;
 uint64_t f_flags;
 char f_fstypename[16];
 char f_mntonname[1024];
 char f_mntfromname[1024];
 uint32_t f_fssubtype;
 void *f_reserved[2];
};
#pragma pack()
#pragma pack(4)
struct vfs_attr {
 uint64_t f_supported;
 uint64_t f_active;
 uint64_t f_objcount;
 uint64_t f_filecount;
 uint64_t f_dircount;
 uint64_t f_maxobjcount;
 uint32_t f_bsize;
 size_t f_iosize;
 uint64_t f_blocks;
 uint64_t f_bfree;
 uint64_t f_bavail;
 uint64_t f_bused;
 uint64_t f_files;
 uint64_t f_ffree;
 fsid_t f_fsid;
 uid_t f_owner;
 vol_capabilities_attr_t f_capabilities;
 vol_attributes_attr_t f_attributes;
 struct timespec f_create_time;
 struct timespec f_modify_time;
 struct timespec f_access_time;
 struct timespec f_backup_time;
 uint32_t f_fssubtype;
 char *f_vol_name;
 uint16_t f_signature;
 uint16_t f_carbon_fsid;
 uuid_t f_uuid;
 uint64_t f_quota;
 uint64_t f_reserved;
};
#pragma pack()
struct vfsconf {
 uint32_t vfc_reserved1;
 char vfc_name[15];
 int vfc_typenum;
 int vfc_refcount;
 int vfc_flags;
 uint32_t vfc_reserved2;
 uint32_t vfc_reserved3;
};
struct vfsidctl {
 int vc_vers;
 fsid_t vc_fsid;
 void *vc_ptr;
 size_t vc_len;
 u_int32_t vc_spare[12];
};
struct user_vfsidctl {
 int vc_vers;
 fsid_t vc_fsid;
 user_addr_t vc_ptr __attribute((aligned(8)));
 user_size_t vc_len;
 u_int32_t vc_spare[12];
};
struct user32_vfsidctl {
 int vc_vers;
 fsid_t vc_fsid;
 user32_addr_t vc_ptr;
 user32_size_t vc_len;
 u_int32_t vc_spare[12];
};
union union_vfsidctl {
 struct user32_vfsidctl vc32;
 struct user_vfsidctl vc64;
};
struct vfsquery {
 u_int32_t vq_flags;
 u_int32_t vq_spare[31];
};
struct vfs_server {
 int32_t vs_minutes;
 u_int8_t vs_server_name[256 * 3];
};
struct netfs_status {
 u_int32_t ns_status;
 char ns_mountopts[512];
 uint32_t ns_waittime;
 uint32_t ns_threadcount;
 uint64_t ns_threadids[0];
};
struct vfsioattr {
 u_int32_t io_maxreadcnt;
 u_int32_t io_maxwritecnt;
 u_int32_t io_segreadcnt;
 u_int32_t io_segwritecnt;
 u_int32_t io_maxsegreadsize;
 u_int32_t io_maxsegwritesize;
 u_int32_t io_devblocksize;
 u_int32_t io_flags;
 union {
  int64_t io_max_swappin_available;
  void *io_reserved[2];
 };
};
struct vfs_fsentry {
 struct vfsops * vfe_vfsops;
 int vfe_vopcnt;
 struct vnodeopv_desc ** vfe_opvdescs;
 int vfe_fstypenum;
 char vfe_fsname[15];
 uint32_t vfe_flags;
 void * vfe_reserv[2];
};
struct vfsops {
 int (*vfs_mount)(struct mount *mp, vnode_t devvp, user_addr_t data, vfs_context_t context);
 int (*vfs_start)(struct mount *mp, int flags, vfs_context_t context);
 int (*vfs_unmount)(struct mount *mp, int mntflags, vfs_context_t context);
 int (*vfs_root)(struct mount *mp, struct vnode **vpp, vfs_context_t context);
 int (*vfs_quotactl)(struct mount *mp, int cmds, uid_t uid, caddr_t arg, vfs_context_t context);
 int (*vfs_getattr)(struct mount *mp, struct vfs_attr *, vfs_context_t context);
 int (*vfs_sync)(struct mount *mp, int waitfor, vfs_context_t context);
 int (*vfs_vget)(struct mount *mp, ino64_t ino, struct vnode **vpp, vfs_context_t context);
 int (*vfs_fhtovp)(struct mount *mp, int fhlen, unsigned char *fhp, struct vnode **vpp,
     vfs_context_t context);
 int (*vfs_vptofh)(struct vnode *vp, int *fhlen, unsigned char *fhp, vfs_context_t context);
 int (*vfs_init)(struct vfsconf *);
 int (*vfs_sysctl)(int *, u_int, user_addr_t, size_t *, user_addr_t, size_t, vfs_context_t context);
 int (*vfs_setattr)(struct mount *mp, struct vfs_attr *, vfs_context_t context);
 int (*vfs_ioctl)(struct mount *mp, u_long command, caddr_t data,
     int flags, vfs_context_t context);
 int (*vfs_vget_snapdir)(struct mount *mp, struct vnode **vpp, vfs_context_t context);
 void *vfs_reserved5;
 void *vfs_reserved4;
 void *vfs_reserved3;
 void *vfs_reserved2;
 void *vfs_reserved1;
};
struct fs_snapshot_mount_args {
 mount_t sm_mp;
 struct componentname *sm_cnp;
};
struct fs_snapshot_revert_args {
 struct componentname *sr_cnp;
};
struct fs_snapshot_root_args {
 struct componentname *sr_cnp;
};
typedef struct fs_role_mount_args {
 mount_t root_mp;
 uint32_t mount_role;
} fs_role_mount_args_t;
typedef enum : uint32_t { VFS_SYSTEM_ROLE = 1, VFS_RECOVERY_ROLE = 4, VFS_VM_ROLE = 8, VFS_PREBOOT_ROLE = 16, VFS_DATA_ROLE = 64 } vfs_roles_t;
int vfs_fsadd(struct vfs_fsentry *vfe, vfstable_t *handle);
int vfs_fsremove(vfstable_t handle);
int vfs_iterate(int flags, int (*callout)(struct mount *, void *), void *arg);
int vfs_init_io_attributes(vnode_t devvp, mount_t mp);
uint64_t vfs_flags(mount_t mp);
void vfs_setflags(mount_t mp, uint64_t flags);
void vfs_clearflags(mount_t mp, uint64_t flags);
int vfs_issynchronous(mount_t mp);
int vfs_iswriteupgrade(mount_t mp);
int vfs_isupdate(mount_t mp);
int vfs_isreload(mount_t mp);
int vfs_isforce(mount_t mp);
int vfs_isunmount(mount_t mp);
int vfs_isrdonly(mount_t mp);
int vfs_isrdwr(mount_t mp);
int vfs_authopaque(mount_t mp);
int vfs_authopaqueaccess(mount_t mp);
void vfs_setauthopaque(mount_t mp);
void vfs_setauthopaqueaccess(mount_t mp);
void vfs_clearauthopaque(mount_t mp);
void vfs_clearauthopaqueaccess(mount_t mp);
void vfs_setextendedsecurity(mount_t mp);
void vfs_clearextendedsecurity(mount_t mp);
void vfs_setlocklocal(mount_t mp);
int vfs_authcache_ttl(mount_t mp);
void vfs_setauthcache_ttl(mount_t mp, int ttl);
void vfs_clearauthcache_ttl(mount_t mp);
uint32_t vfs_maxsymlen(mount_t mp);
void vfs_setmaxsymlen(mount_t mp, uint32_t symlen);
void * vfs_fsprivate(mount_t mp);
void vfs_setfsprivate(mount_t mp, void *mntdata);
struct vfsstatfs * vfs_statfs(mount_t mp);
int vfs_update_vfsstat(mount_t mp, vfs_context_t ctx, int eventtype);
int vfs_typenum(mount_t mp);
void vfs_name(mount_t mp, char *buffer);
int vfs_devblocksize(mount_t mp);
void vfs_ioattr(mount_t mp, struct vfsioattr *ioattrp);
void vfs_setioattr(mount_t mp, struct vfsioattr *ioattrp);
int vfs_64bitready(mount_t mp);
int vfs_busy(mount_t mp, int flags);
void vfs_unbusy(mount_t mp);
void vfs_getnewfsid(struct mount *mp);
mount_t vfs_getvfs(fsid_t *fsid);
int vfs_mountedon(struct vnode *vp);
int vfs_unmountbyfsid(fsid_t *fsid, int flags, vfs_context_t ctx);
void vfs_event_signal(fsid_t *fsid, u_int32_t event, intptr_t data);
void vfs_event_init(void);
void vfs_set_root_unmounted_cleanly(void);
struct label;
typedef uint64_t pending_io_t;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct vnodelst { struct vnode *tqh_first; struct vnode **tqh_last; }
#pragma clang diagnostic pop
                           ;
struct mount {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
 struct { struct mount *tqe_next; struct mount **tqe_prev; }
#pragma clang diagnostic pop
                         mnt_list;
 int32_t mnt_count;
 lck_mtx_t mnt_mlock;
 const struct vfsops * XNU_PTRAUTH_SIGNED_PTR("mount.vfsops") mnt_op;
 struct vfstable * XNU_PTRAUTH_SIGNED_PTR("mount.mnt_vtable") mnt_vtable;
 struct vnode * XNU_PTRAUTH_SIGNED_PTR("mount.mnt_vnodecovered") mnt_vnodecovered;
 struct vnodelst mnt_vnodelist;
 struct vnodelst mnt_workerqueue;
 struct vnodelst mnt_newvnodes;
 uint32_t mnt_flag;
 uint32_t mnt_kern_flag;
 uint32_t mnt_compound_ops;
 uint32_t mnt_lflag;
 uint32_t mnt_maxsymlinklen;
 struct vfsstatfs mnt_vfsstat;
 qaddr_t mnt_data;
 uint32_t mnt_maxreadcnt;
 uint32_t mnt_maxwritecnt;
 uint32_t mnt_segreadcnt;
 uint32_t mnt_segwritecnt;
 uint32_t mnt_maxsegreadsize;
 uint32_t mnt_maxsegwritesize;
 uint32_t mnt_alignmentmask;
 uint32_t mnt_devblocksize;
 uint32_t mnt_ioqueue_depth;
 uint32_t mnt_ioscale;
 uint32_t mnt_ioflags;
 uint32_t mnt_minsaturationbytecount;
 pending_io_t mnt_pending_write_size __attribute__((aligned(sizeof(pending_io_t))));
 pending_io_t mnt_pending_read_size __attribute__((aligned(sizeof(pending_io_t))));
 struct timeval mnt_last_write_issued_timestamp;
 struct timeval mnt_last_write_completed_timestamp;
 int64_t mnt_max_swappin_available;
 lck_rw_t mnt_rwlock;
 lck_mtx_t mnt_renamelock;
 vnode_t mnt_devvp;
 uint32_t mnt_devbsdunit;
 uint64_t mnt_throttle_mask;
 void *mnt_throttle_info;
 int32_t mnt_crossref;
 int32_t mnt_iterref;
 uid_t mnt_fsowner;
 gid_t mnt_fsgroup;
 struct label * XNU_PTRAUTH_SIGNED_PTR("mount.mnt_mntlabel") mnt_mntlabel;
 struct label * XNU_PTRAUTH_SIGNED_PTR("mount.mnt_fslabel") mnt_fslabel;
 vnode_t mnt_realrootvp;
 uint32_t mnt_realrootvp_vid;
 uint32_t mnt_generation;
 int mnt_authcache_ttl;
 char fstypename_override[16];
 uint32_t mnt_iobufinuse;
 void *mnt_disk_conditioner_info;
 lck_mtx_t mnt_iter_lock;
 uint64_t mnt_mount_id;
 uint32_t mnt_supl_kern_flag;
};
extern struct mount * dead_mountp;
struct fhandle {
 unsigned int fh_len;
 unsigned char fh_data[128];
};
typedef struct fhandle fhandle_t;
struct vfstable {
 const struct vfsops *vfc_vfsops;
 char vfc_name[15];
 int vfc_typenum;
 int vfc_refcount;
 int vfc_flags;
 int (*vfc_mountroot)(mount_t, vnode_t, vfs_context_t);
 struct vfstable *vfc_next;
 int32_t vfc_reserved1;
 int32_t vfc_reserved2;
 int vfc_vfsflags;
 void * vfc_descptr;
 int vfc_descsize;
 struct sysctl_oid *vfc_sysctl;
};
extern int maxvfstypenum;
extern struct vfstable *vfsconf;
extern const int maxvfsslots;
extern int numused_vfsslots;
extern int numregistered_fses;
struct vfstable * vfstable_add(struct vfstable *);
int vfstable_del(struct vfstable *);
struct vfsmount_args {
 union {
  struct {
   char * mnt_fspec;
   void * mnt_fsdata;
  } mnt_localfs_args;
  struct {
   void * mnt_fsdata;
  } mnt_remotefs_args;
 } mountfs_args;
};
struct user64_statfs {
 short f_otype;
 short f_oflags;
 user64_long_t f_bsize;
 user64_long_t f_iosize;
 user64_long_t f_blocks;
 user64_long_t f_bfree;
 user64_long_t f_bavail;
 user64_long_t f_files;
 user64_long_t f_ffree;
 fsid_t f_fsid;
 uid_t f_owner;
 short f_reserved1;
 short f_type;
 user64_long_t f_flags;
 user64_long_t f_reserved2[2];
 char f_fstypename[15];
 char f_mntonname[90];
 char f_mntfromname[90];
 char f_reserved3;
 user64_long_t f_reserved4[4];
};
struct user32_statfs {
 short f_otype;
 short f_oflags;
 user32_long_t f_bsize;
 user32_long_t f_iosize;
 user32_long_t f_blocks;
 user32_long_t f_bfree;
 user32_long_t f_bavail;
 user32_long_t f_files;
 user32_long_t f_ffree;
 fsid_t f_fsid;
 uid_t f_owner;
 short f_reserved1;
 short f_type;
 user32_long_t f_flags;
 user32_long_t f_reserved2[2];
 char f_fstypename[15];
 char f_mntonname[90];
 char f_mntfromname[90];
 char f_reserved3;
 user32_long_t f_reserved4[4];
};
extern uint32_t mount_generation;
extern
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
       struct mntlist { struct mount *tqh_first; struct mount **tqh_last; }
#pragma clang diagnostic pop
                                  mountlist;
void mount_list_lock(void);
void mount_list_unlock(void);
void mount_lock_init(mount_t);
void mount_lock_destroy(mount_t);
void mount_lock(mount_t);
void mount_lock_spin(mount_t);
void mount_unlock(mount_t);
void mount_iterate_lock(mount_t);
void mount_iterate_unlock(mount_t);
void mount_lock_renames(mount_t);
void mount_unlock_renames(mount_t);
void mount_ref(mount_t, int);
void mount_drop(mount_t, int);
int mount_refdrain(mount_t);
errno_t vfs_rootmountalloc(const char *, const char *, mount_t *mpp);
int vfs_mount_recovery(void);
typedef uint32_t vfs_switch_root_flags_t;
int vfs_switch_root(const char *, const char *, vfs_switch_root_flags_t);
int vfs_mountroot(void);
void vfs_unmountall(int only_non_system);
int safedounmount(struct mount *, int, vfs_context_t);
int dounmount(struct mount *, int, int, vfs_context_t);
void dounmount_submounts(struct mount *, int, vfs_context_t);
void mount_dropcrossref(mount_t, vnode_t, int);
mount_t mount_lookupby_volfsid(int, int);
mount_t mount_list_lookupby_fsid(fsid_t *, int, int);
int mount_list_add(mount_t);
void mount_list_remove(mount_t);
int mount_iterref(mount_t, int);
int mount_isdrained(mount_t, int);
void mount_iterdrop(mount_t);
void mount_iterdrain(mount_t);
void mount_iterreset(mount_t);
int throttle_get_io_policy(struct uthread **ut);
int throttle_get_passive_io_policy(struct uthread **ut);
void *throttle_info_update_by_mount(mount_t mp);
void rethrottle_thread(uthread_t ut);
extern int num_trailing_0(uint64_t n);
extern int sync_timeout_seconds;
extern zone_t mount_zone;
struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};
struct flocktimeout {
 struct flock fl;
 struct timespec timeout;
};
#pragma pack(4)
struct radvisory {
 off_t ra_offset;
 int ra_count;
};
#pragma pack()
typedef struct fsignatures {
 off_t fs_file_start;
 void *fs_blob_start;
 size_t fs_blob_size;
 size_t fs_fsignatures_size;
 char fs_cdhash[20];
 int fs_hash_type;
} fsignatures_t;
typedef struct user32_fsignatures {
 off_t fs_file_start;
 user32_addr_t fs_blob_start;
 user32_size_t fs_blob_size;
} user32_fsignatures_t;
typedef struct user_fsignatures {
 off_t fs_file_start;
 user_addr_t fs_blob_start;
 user_size_t fs_blob_size;
 user_size_t fs_fsignatures_size;
 char fs_cdhash[20];
 int fs_hash_type;
} user_fsignatures_t;
typedef struct fsupplement {
 off_t fs_file_start;
 off_t fs_blob_start;
 size_t fs_blob_size;
 int fs_orig_fd;
} fsupplement_t;
typedef struct user_fsupplement {
 off_t fs_file_start;
 off_t fs_blob_start;
 size_t fs_blob_size;
 int fs_orig_fd;
} user_fsupplement_t;
typedef struct fchecklv {
 off_t lv_file_start;
 size_t lv_error_message_size;
 void *lv_error_message;
} fchecklv_t;
typedef struct user32_fchecklv {
 user32_off_t lv_file_start;
 user32_size_t lv_error_message_size;
 user32_addr_t lv_error_message;
} user32_fchecklv_t;
typedef struct user_fchecklv {
 off_t lv_file_start;
 user_size_t lv_error_message_size;
 user_addr_t lv_error_message;
} user_fchecklv_t;
typedef struct fgetsigsinfo {
 off_t fg_file_start;
 int fg_info_request;
 int fg_sig_is_platform;
} fgetsigsinfo_t;
typedef struct fstore {
 unsigned int fst_flags;
 int fst_posmode;
 off_t fst_offset;
 off_t fst_length;
 off_t fst_bytesalloc;
} fstore_t;
typedef struct fpunchhole {
 unsigned int fp_flags;
 unsigned int reserved;
 off_t fp_offset;
 off_t fp_length;
} fpunchhole_t;
typedef struct ftrimactivefile {
 off_t fta_offset;
 off_t fta_length;
} ftrimactivefile_t;
typedef struct fspecread {
 unsigned int fsr_flags;
 unsigned int reserved;
 off_t fsr_offset;
 off_t fsr_length;
} fspecread_t;
typedef struct fbootstraptransfer {
 off_t fbt_offset;
 size_t fbt_length;
 void *fbt_buffer;
} fbootstraptransfer_t;
typedef struct user32_fbootstraptransfer {
 off_t fbt_offset;
 user32_size_t fbt_length;
 user32_addr_t fbt_buffer;
} user32_fbootstraptransfer_t;
typedef struct user_fbootstraptransfer {
 off_t fbt_offset;
 user_size_t fbt_length;
 user_addr_t fbt_buffer;
} user_fbootstraptransfer_t;
#pragma pack(4)
struct log2phys {
 unsigned int l2p_flags;
 off_t l2p_contigbytes;
 off_t l2p_devoffset;
};
#pragma pack()
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
off_t ubc_blktooff(struct vnode *, daddr64_t);
daddr64_t ubc_offtoblk(struct vnode *, off_t);
off_t ubc_getsize(struct vnode *);
int ubc_setsize(struct vnode *, off_t);
kauth_cred_t ubc_getcred(struct vnode *);
struct thread;
int ubc_setthreadcred(struct vnode *, struct proc *, struct thread *);
errno_t ubc_msync(vnode_t, off_t, off_t, off_t *, int);
int ubc_pages_resident(vnode_t);
int ubc_page_op(vnode_t, off_t, int, ppnum_t *, int *);
int ubc_range_op(vnode_t, off_t, off_t, int, int *);
void cluster_update_state(vnode_t, vm_object_offset_t, vm_object_offset_t, boolean_t);
int advisory_read(vnode_t, off_t, off_t, int);
int advisory_read_ext(vnode_t, off_t, off_t, int, int (*)(buf_t, void *), void *, int);
int cluster_read(vnode_t, struct uio *, off_t, int);
int cluster_read_ext(vnode_t, struct uio *, off_t, int, int (*)(buf_t, void *), void *);
int cluster_write(vnode_t, struct uio *, off_t, off_t, off_t, off_t, int);
int cluster_write_ext(vnode_t, struct uio *, off_t, off_t, off_t, off_t, int, int (*)(buf_t, void *), void *);
int cluster_pageout(vnode_t, upl_t, upl_offset_t, off_t, int, off_t, int);
int cluster_pageout_ext(vnode_t, upl_t, upl_offset_t, off_t, int, off_t, int, int (*)(buf_t, void *), void *);
int cluster_pagein(vnode_t, upl_t, upl_offset_t, off_t, int, off_t, int);
int cluster_pagein_ext(vnode_t, upl_t, upl_offset_t, off_t, int, off_t, int, int (*)(buf_t, void *), void *);
int cluster_push(vnode_t, int);
int cluster_push_ext(vnode_t, int, int (*)(buf_t, void *), void *);
int cluster_push_err(vnode_t, int, int (*)(buf_t, void *), void *, int *);
int cluster_bp(buf_t);
int cluster_bp_ext(buf_t, int (*)(buf_t, void *), void *);
void cluster_zero(upl_t, upl_offset_t, int, buf_t);
int cluster_copy_upl_data(uio_t, upl_t, int, int *);
int cluster_copy_ubc_data(vnode_t, uio_t, int *, int);
typedef struct cl_direct_read_lock cl_direct_read_lock_t;
cl_direct_read_lock_t *cluster_lock_direct_read(vnode_t vp, lck_rw_type_t exclusive);
void cluster_unlock_direct_read(cl_direct_read_lock_t *lck);
int ubc_create_upl(vnode_t, off_t, int, upl_t *, upl_page_info_t **, int);
int ubc_upl_map(upl_t, vm_offset_t *);
int ubc_upl_unmap(upl_t);
int ubc_upl_commit(upl_t);
int ubc_upl_commit_range(upl_t, upl_offset_t, upl_size_t, int);
int ubc_upl_abort(upl_t, int);
int ubc_upl_abort_range(upl_t, upl_offset_t, upl_size_t, int);
void ubc_upl_range_needed(upl_t, int, int);
upl_page_info_t *ubc_upl_pageinfo(upl_t);
upl_size_t ubc_upl_maxbufsize(void);
int is_file_clean(vnode_t, off_t);
errno_t mach_to_bsd_errno(kern_return_t mach_err);
enum {
 CSMAGIC_REQUIREMENT = 0xfade0c00,
 CSMAGIC_REQUIREMENTS = 0xfade0c01,
 CSMAGIC_CODEDIRECTORY = 0xfade0c02,
 CSMAGIC_EMBEDDED_SIGNATURE = 0xfade0cc0,
 CSMAGIC_EMBEDDED_SIGNATURE_OLD = 0xfade0b02,
 CSMAGIC_EMBEDDED_ENTITLEMENTS = 0xfade7171,
 CSMAGIC_DETACHED_SIGNATURE = 0xfade0cc1,
 CSMAGIC_BLOBWRAPPER = 0xfade0b01,
 CS_SUPPORTSSCATTER = 0x20100,
 CS_SUPPORTSTEAMID = 0x20200,
 CS_SUPPORTSCODELIMIT64 = 0x20300,
 CS_SUPPORTSEXECSEG = 0x20400,
 CS_SUPPORTSRUNTIME = 0x20500,
 CS_SUPPORTSLINKAGE = 0x20600,
 CSSLOT_CODEDIRECTORY = 0,
 CSSLOT_INFOSLOT = 1,
 CSSLOT_REQUIREMENTS = 2,
 CSSLOT_RESOURCEDIR = 3,
 CSSLOT_APPLICATION = 4,
 CSSLOT_ENTITLEMENTS = 5,
 CSSLOT_ALTERNATE_CODEDIRECTORIES = 0x1000,
 CSSLOT_ALTERNATE_CODEDIRECTORY_MAX = 5,
 CSSLOT_ALTERNATE_CODEDIRECTORY_LIMIT = CSSLOT_ALTERNATE_CODEDIRECTORIES + CSSLOT_ALTERNATE_CODEDIRECTORY_MAX,
 CSSLOT_SIGNATURESLOT = 0x10000,
 CSSLOT_IDENTIFICATIONSLOT = 0x10001,
 CSSLOT_TICKETSLOT = 0x10002,
 CSTYPE_INDEX_REQUIREMENTS = 0x00000002,
 CSTYPE_INDEX_ENTITLEMENTS = 0x00000005,
 CS_HASHTYPE_SHA1 = 1,
 CS_HASHTYPE_SHA256 = 2,
 CS_HASHTYPE_SHA256_TRUNCATED = 3,
 CS_HASHTYPE_SHA384 = 4,
 CS_SHA1_LEN = 20,
 CS_SHA256_LEN = 32,
 CS_SHA256_TRUNCATED_LEN = 20,
 CS_CDHASH_LEN = 20,
 CS_HASH_MAX_SIZE = 48,
 CS_SIGNER_TYPE_UNKNOWN = 0,
 CS_SIGNER_TYPE_LEGACYVPN = 5,
 CS_SIGNER_TYPE_MAC_APP_STORE = 6,
 CS_SUPPL_SIGNER_TYPE_UNKNOWN = 0,
 CS_SUPPL_SIGNER_TYPE_TRUSTCACHE = 7,
 CS_SUPPL_SIGNER_TYPE_LOCAL = 8,
};
typedef struct __CodeDirectory {
 uint32_t magic;
 uint32_t length;
 uint32_t version;
 uint32_t flags;
 uint32_t hashOffset;
 uint32_t identOffset;
 uint32_t nSpecialSlots;
 uint32_t nCodeSlots;
 uint32_t codeLimit;
 uint8_t hashSize;
 uint8_t hashType;
 uint8_t platform;
 uint8_t pageSize;
 uint32_t spare2;
 char end_earliest[0];
 uint32_t scatterOffset;
 char end_withScatter[0];
 uint32_t teamOffset;
 char end_withTeam[0];
 uint32_t spare3;
 uint64_t codeLimit64;
 char end_withCodeLimit64[0];
 uint64_t execSegBase;
 uint64_t execSegLimit;
 uint64_t execSegFlags;
 char end_withExecSeg[0];
 uint32_t runtime;
 uint32_t preEncryptOffset;
 char end_withPreEncryptOffset[0];
 uint8_t linkageHashType;
 uint8_t linkageTruncated;
 uint16_t spare4;
 uint32_t linkageOffset;
 uint32_t linkageSize;
 char end_withLinkage[0];
} CS_CodeDirectory
__attribute__ ((aligned(1)));
typedef struct __BlobIndex {
 uint32_t type;
 uint32_t offset;
} CS_BlobIndex
__attribute__ ((aligned(1)));
typedef struct __SC_SuperBlob {
 uint32_t magic;
 uint32_t length;
 uint32_t count;
 CS_BlobIndex index[];
} CS_SuperBlob
__attribute__ ((aligned(1)));
typedef struct __SC_GenericBlob {
 uint32_t magic;
 uint32_t length;
 char data[];
} CS_GenericBlob
__attribute__ ((aligned(1)));
typedef struct __SC_Scatter {
 uint32_t count;
 uint32_t base;
 uint64_t targetOffset;
 uint64_t spare;
} SC_Scatter
__attribute__ ((aligned(1)));
struct vnode;
struct cs_blob;
struct fileglob;
int cs_valid(struct proc *);
int cs_process_enforcement(struct proc *);
int cs_process_global_enforcement(void);
int cs_system_enforcement(void);
int cs_vm_supports_4k_translations(void);
int cs_require_lv(struct proc *);
int csproc_forced_lv(struct proc* p);
int cs_system_require_lv(void);
uint32_t cs_entitlement_flags(struct proc *p);
int cs_entitlements_blob_get_vnode(struct vnode *, off_t, void **, size_t *);
int cs_entitlements_blob_get(struct proc *, void **, size_t *);
int cs_restricted(struct proc *);
uint8_t * cs_get_cdhash(struct proc *);
struct cs_blob * csproc_get_blob(struct proc *);
struct cs_blob * csvnode_get_blob(struct vnode *, off_t);
void csvnode_print_debug(struct vnode *);
off_t csblob_get_base_offset(struct cs_blob *);
vm_size_t csblob_get_size(struct cs_blob *);
vm_address_t csblob_get_addr(struct cs_blob *);
const char * csblob_get_teamid(struct cs_blob *);
const char * csblob_get_identity(struct cs_blob *);
const uint8_t * csblob_get_cdhash(struct cs_blob *);
int csblob_get_platform_binary(struct cs_blob *);
unsigned int csblob_get_flags(struct cs_blob *);
uint8_t csblob_get_hashtype(struct cs_blob const *);
unsigned int csblob_get_signer_type(struct cs_blob *);
void csproc_disable_enforcement(struct proc* p);
void csproc_mark_invalid_allowed(struct proc* p);
int csproc_check_invalid_allowed(struct proc* p);
int csproc_hardened_runtime(struct proc* p);
int csblob_get_entitlements(struct cs_blob *, void **, size_t *);
const CS_GenericBlob *
    csblob_find_blob(struct cs_blob *, uint32_t, uint32_t);
const CS_GenericBlob *
    csblob_find_blob_bytes(const uint8_t *, size_t, uint32_t, uint32_t);
void * csblob_entitlements_dictionary_copy(struct cs_blob *csblob);
void csblob_entitlements_dictionary_set(struct cs_blob *csblob, void * entitlements);
const char * csproc_get_teamid(struct proc *);
const char * csproc_get_identity(struct proc *);
const char * csvnode_get_teamid(struct vnode *, off_t);
int csproc_get_platform_binary(struct proc *);
int csproc_get_prod_signed(struct proc *);
const char * csfg_get_teamid(struct fileglob *);
const char * csfg_get_supplement_teamid(struct fileglob *);
int csfg_get_path(struct fileglob *, char *, int *);
int csfg_get_platform_binary(struct fileglob *);
int csfg_get_supplement_platform_binary(struct fileglob *);
uint8_t * csfg_get_cdhash(struct fileglob *, uint64_t, size_t *);
uint8_t * csfg_get_supplement_cdhash(struct fileglob *, uint64_t, size_t *);
const uint8_t * csfg_get_supplement_linkage_cdhash(struct fileglob *, uint64_t, size_t *);
int csfg_get_prod_signed(struct fileglob *);
int csfg_get_supplement_prod_signed(struct fileglob *fg);
unsigned int csfg_get_signer_type(struct fileglob *);
unsigned int csfg_get_supplement_signer_type(struct fileglob *);
const char *csfg_get_identity(struct fileglob *fg, off_t offset);
unsigned int csproc_get_signer_type(struct proc *);
uint8_t csfg_get_platform_identifier(struct fileglob *, off_t);
uint8_t csvnode_get_platform_identifier(struct vnode *, off_t);
uint8_t csproc_get_platform_identifier(struct proc *);
extern int cs_debug;
extern int cs_debug_fail_on_unsigned_code;
extern unsigned int cs_debug_unsigned_exec_failures;
extern unsigned int cs_debug_unsigned_mmap_failures;
int cs_blob_create_validated(vm_address_t* addr, vm_size_t size,
    struct cs_blob ** ret_blob, CS_CodeDirectory const **ret_cd);
void cs_blob_free(struct cs_blob *blob);
typedef enum {
  ptrauth_key_none = -1,
  ptrauth_key_asia = 0,
  ptrauth_key_asib = 1,
  ptrauth_key_asda = 2,
  ptrauth_key_asdb = 3,
  ptrauth_key_process_independent_code = ptrauth_key_asia,
  ptrauth_key_process_dependent_code = ptrauth_key_asib,
  ptrauth_key_process_independent_data = ptrauth_key_asda,
  ptrauth_key_process_dependent_data = ptrauth_key_asdb,
  ptrauth_key_function_pointer = ptrauth_key_process_independent_code,
  ptrauth_key_return_address = ptrauth_key_process_dependent_code,
  ptrauth_key_frame_pointer = ptrauth_key_process_dependent_data,
  ptrauth_key_block_function = ptrauth_key_asia,
  ptrauth_key_cxx_vtable_pointer = ptrauth_key_asda,
  ptrauth_key_method_list_pointer = ptrauth_key_asda,
  ptrauth_key_objc_isa_pointer = ptrauth_key_process_independent_data,
  ptrauth_key_objc_super_pointer = ptrauth_key_process_independent_data,
  ptrauth_key_block_descriptor_pointer = ptrauth_key_asda,
  ptrauth_key_objc_sel_pointer = ptrauth_key_process_dependent_data,
  ptrauth_key_objc_class_ro_pointer = ptrauth_key_process_independent_data,
} ptrauth_key;
typedef long unsigned int ptrauth_extra_data_t;
typedef long unsigned int ptrauth_generic_signature_t;
static inline ptrauth_generic_signature_t
ptrauth_utils_sign_blob_generic(__attribute__((__unused__)) const void * ptr, __attribute__((__unused__)) size_t len_bytes, __attribute__((__unused__)) uint64_t data, __attribute__((__unused__)) int flags)
{
 return 0;
}
static inline void
ptrauth_utils_auth_blob_generic(__attribute__((__unused__)) const void * ptr, __attribute__((__unused__)) size_t len_bytes, __attribute__((__unused__)) uint64_t data, __attribute__((__unused__)) int flags, __attribute__((__unused__)) ptrauth_generic_signature_t signature)
{
 return;
}
extern struct zone *ubc_info_zone;
struct cl_extent {
 daddr64_t b_addr;
 daddr64_t e_addr;
};
struct cl_wextent {
 daddr64_t b_addr;
 daddr64_t e_addr;
 int io_flags;
};
struct cl_readahead {
 lck_mtx_t cl_lockr;
 daddr64_t cl_lastr;
 daddr64_t cl_maxra;
 int cl_ralen;
};
struct cl_writebehind {
 lck_mtx_t cl_lockw;
 void * cl_scmap;
 off_t cl_last_write;
 off_t cl_seq_written;
 int cl_sparse_pushes;
 int cl_sparse_wait;
 int cl_number;
 struct cl_wextent cl_clusters[CONFIG_MAX_CLUSTERS];
};
struct cs_hash;
uint8_t cs_hash_type(struct cs_hash const *);
struct cs_blob {
 struct cs_blob * XNU_PTRAUTH_SIGNED_PTR("cs_blob.csb_next") csb_next;
 cpu_type_t csb_cpu_type;
 cpu_subtype_t csb_cpu_subtype;
 unsigned int csb_flags;
 off_t csb_base_offset;
 off_t csb_start_offset;
 off_t csb_end_offset;
 vm_size_t csb_mem_size;
 vm_offset_t csb_mem_offset;
 void * XNU_PTRAUTH_SIGNED_PTR("cs_blob.csb_mem_kaddr") csb_mem_kaddr;
 unsigned char csb_cdhash[CS_CDHASH_LEN];
 ptrauth_generic_signature_t csb_cdhash_signature;
 const struct cs_hash *csb_hashtype;
 int csb_hash_pageshift;
 int csb_hash_firstlevel_pageshift;
 const CS_CodeDirectory * XNU_PTRAUTH_SIGNED_PTR("cs_blob.csb_cd") csb_cd;
 const char * XNU_PTRAUTH_SIGNED_PTR("cs_blob.csb_teamid") csb_teamid;
 const CS_GenericBlob * XNU_PTRAUTH_SIGNED_PTR("cs_blob.csb_entitlements_blob") csb_entitlements_blob;
 ptrauth_generic_signature_t csb_entitlements_blob_signature;
 void * XNU_PTRAUTH_SIGNED_PTR("cs_blob.csb_entitlements") csb_entitlements;
 unsigned int csb_signer_type;
 unsigned int csb_reconstituted;
 unsigned int csb_platform_binary:1;
 unsigned int csb_platform_path:1;
};
struct ubc_info {
 memory_object_t ui_pager;
 memory_object_control_t ui_control;
 vnode_t XNU_PTRAUTH_SIGNED_PTR("ubc_info.ui_vnode") ui_vnode;
 kauth_cred_t ui_ucred;
 off_t ui_size;
 uint32_t ui_flags;
 uint32_t cs_add_gen;
 struct cl_readahead *cl_rahead;
 struct cl_writebehind *cl_wbehind;
 struct timespec cs_mtime;
 struct cs_blob * XNU_PTRAUTH_SIGNED_PTR("ubc_info.cs_blobs") cs_blobs;
};
__private_extern__ int ubc_umount(mount_t mp);
__private_extern__ void ubc_unmountall(void);
__private_extern__ memory_object_t ubc_getpager(vnode_t);
__private_extern__ void ubc_destroy_named(vnode_t);
__private_extern__ void cluster_release(struct ubc_info *);
__private_extern__ uint32_t cluster_throttle_io_limit(vnode_t, uint32_t *);
memory_object_control_t ubc_getobject(vnode_t, int);
int ubc_info_init(vnode_t);
int ubc_info_init_withsize(vnode_t, off_t);
void ubc_info_deallocate(struct ubc_info *);
int ubc_isinuse(vnode_t, int);
int ubc_isinuse_locked(vnode_t, int, int);
int ubc_getcdhash(vnode_t, off_t, unsigned char *);
struct cs_blob;
int ubc_cs_blob_add(vnode_t, uint32_t, cpu_type_t, cpu_subtype_t, off_t, vm_address_t *, vm_size_t, struct image_params *, int, struct cs_blob **);
struct cs_blob *ubc_get_cs_blobs(vnode_t);
void ubc_get_cs_mtime(vnode_t, struct timespec *);
int ubc_cs_getcdhash(vnode_t, off_t, unsigned char *);
kern_return_t ubc_cs_blob_allocate(vm_offset_t *, vm_size_t *);
void ubc_cs_blob_deallocate(vm_offset_t, vm_size_t);
boolean_t ubc_cs_is_range_codesigned(vnode_t, mach_vm_offset_t, mach_vm_size_t);
kern_return_t ubc_cs_validation_bitmap_allocate( vnode_t );
void ubc_cs_validation_bitmap_deallocate( vnode_t );
struct label;
struct proc;
struct nameidata;
struct image_params {
 user_addr_t ip_user_fname;
 user_addr_t ip_user_argv;
 user_addr_t ip_user_envv;
 int ip_seg;
 struct vnode *ip_vp;
 struct vnode_attr *ip_vattr;
 struct vnode_attr *ip_origvattr;
 cpu_type_t ip_origcputype;
 cpu_subtype_t ip_origcpusubtype;
 char *ip_vdata;
 int ip_flags;
 int ip_argc;
 int ip_envc;
 int ip_applec;
 char *ip_startargv;
 char *ip_endargv;
 char *ip_endenvv;
 char *ip_strings;
 char *ip_strendp;
 char *ip_subsystem_root_path;
 int ip_argspace;
 int ip_strspace;
 user_size_t ip_arch_offset;
 user_size_t ip_arch_size;
 char ip_interp_buffer[512];
 int ip_interp_sugid_fd;
 struct vfs_context *ip_vfs_context;
 struct nameidata *ip_ndp;
 thread_t ip_new_thread;
 struct label *ip_execlabelp;
 struct label *ip_scriptlabelp;
 struct vnode *ip_scriptvp;
 unsigned int ip_csflags;
 int ip_mac_return;
 void *ip_px_sa;
 void *ip_px_sfa;
 void *ip_px_spa;
 void *ip_px_smpx;
 void *ip_px_persona;
 void *ip_px_pcred_info;
 void *ip_cs_error;
 char *ip_inherited_shared_region_id;
 uint64_t ip_dyld_fsid;
 uint64_t ip_dyld_fsobjid;
 uint64_t ip_inherited_jop_pid;
 unsigned int ip_simulator_binary;
 ipc_port_t ip_sc_port;
};

_Bool kdebug_using_continuous_time(void);
_Bool kdebug_debugid_enabled(uint32_t debugid);
_Bool kdebug_debugid_explicitly_enabled(uint32_t debugid);
uint32_t kdebug_commpage_state(void);
typedef enum {
 KD_CALLBACK_KDEBUG_ENABLED,
 KD_CALLBACK_KDEBUG_DISABLED,
 KD_CALLBACK_SYNC_FLUSH,
 KD_CALLBACK_TYPEFILTER_CHANGED,
} kd_callback_type;
typedef void (*kd_callback_fn) (void *context, kd_callback_type reason,
    void *arg);
struct kd_callback {
 kd_callback_fn func;
 void *context;
 char iop_name[8];
};
typedef struct kd_callback kd_callback_t;
int kernel_debug_register_callback(kd_callback_t callback);
void kernel_debug_enter(uint32_t coreid, uint32_t debugid, uint64_t timestamp,
    uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t arg4,
    uintptr_t threadid);
extern unsigned int kdebug_enable;
void kernel_debug(uint32_t debugid, uintptr_t arg1, uintptr_t arg2,
    uintptr_t arg3, uintptr_t arg4, uintptr_t arg5);
void kernel_debug1(uint32_t debugid, uintptr_t arg1, uintptr_t arg2,
    uintptr_t arg3, uintptr_t arg4, uintptr_t arg5);
void kernel_debug_flags(uint32_t debugid, uintptr_t arg1, uintptr_t arg2,
    uintptr_t arg3, uintptr_t arg4, uint64_t flags);
void kernel_debug_filtered(uint32_t debugid, uintptr_t arg1, uintptr_t arg2,
    uintptr_t arg3, uintptr_t arg4);
static const char *coalition_efficiency_names[] = {
 "Efficient",
};
static const uint64_t coalition_efficiency_flags[] = {
 (0x1),
};
struct coalition_resource_usage {
 uint64_t tasks_started;
 uint64_t tasks_exited;
 uint64_t time_nonempty;
 uint64_t cpu_time;
 uint64_t interrupt_wakeups;
 uint64_t platform_idle_wakeups;
 uint64_t bytesread;
 uint64_t byteswritten;
 uint64_t gpu_time;
 uint64_t cpu_time_billed_to_me;
 uint64_t cpu_time_billed_to_others;
 uint64_t energy;
 uint64_t logical_immediate_writes;
 uint64_t logical_deferred_writes;
 uint64_t logical_invalidated_writes;
 uint64_t logical_metadata_writes;
 uint64_t logical_immediate_writes_to_external;
 uint64_t logical_deferred_writes_to_external;
 uint64_t logical_invalidated_writes_to_external;
 uint64_t logical_metadata_writes_to_external;
 uint64_t energy_billed_to_me;
 uint64_t energy_billed_to_others;
 uint64_t cpu_ptime;
 uint64_t cpu_time_eqos_len;
 uint64_t cpu_time_eqos[7];
 uint64_t cpu_instructions;
 uint64_t cpu_cycles;
 uint64_t fs_metadata_writes;
 uint64_t pm_writes;
};
typedef enum {
 PSPA_SPECIAL = 0,
 PSPA_EXCEPTION = 1,
 PSPA_AU_SESSION = 2,
 PSPA_IMP_WATCHPORTS = 3,
 PSPA_REGISTERED_PORTS = 4,
 PSPA_PTRAUTH_TASK_PORT = 5,
 PSPA_SUID_CRED = 6,
} pspa_t;
typedef struct _ps_port_action {
 pspa_t port_type;
 exception_mask_t mask;
 mach_port_name_t new_port;
 exception_behavior_t behavior;
 thread_state_flavor_t flavor;
 int which;
} _ps_port_action_t;
typedef struct _posix_spawn_port_actions {
 int pspa_alloc;
 int pspa_count;
 _ps_port_action_t pspa_actions[];
} *_posix_spawn_port_actions_t;
typedef struct _ps_mac_policy_extension {
 char policyname[128];
 union {
  uint64_t data;
  void *datap;
 };
 uint64_t datalen;
} _ps_mac_policy_extension_t;
typedef struct _posix_spawn_mac_policy_extensions {
 int psmx_alloc;
 int psmx_count;
 _ps_mac_policy_extension_t psmx_extensions[];
} *_posix_spawn_mac_policy_extensions_t;
struct _posix_spawn_coalition_info {
 struct {
  uint64_t psci_id;
  uint32_t psci_role;
  uint32_t psci_reserved1;
  uint64_t psci_reserved2;
 } psci_info[((1) + 1)];
};
struct _posix_spawn_posix_cred_info {
 uint32_t pspci_flags;
 uid_t pspci_uid;
 gid_t pspci_gid;
 uint32_t pspci_ngroups;
 gid_t pspci_groups[16];
 uid_t pspci_gmuid;
 char pspci_login[255 + 1];
};
struct _posix_spawn_persona_info {
 uid_t pspi_id;
 uint32_t pspi_flags;
 uid_t pspi_uid;
 gid_t pspi_gid;
 uint32_t pspi_ngroups;
 gid_t pspi_groups[16];
 uid_t pspi_gmuid;
};
typedef struct _posix_spawnattr {
 short psa_flags;
 short flags_padding;
 sigset_t psa_sigdefault;
 sigset_t psa_sigmask;
 pid_t psa_pgroup;
 cpu_type_t psa_binprefs[4];
 int psa_pcontrol;
 int psa_apptype;
 uint64_t psa_cpumonitor_percent;
 uint64_t psa_cpumonitor_interval;
 uint64_t psa_reserved;
 short psa_jetsam_flags;
 short short_padding;
 int psa_priority;
 int psa_memlimit_active;
 int psa_memlimit_inactive;
 uint64_t psa_qos_clamp;
 task_role_t psa_darwin_role;
 int psa_thread_limit;
 uint64_t psa_max_addr;
 _Bool psa_no_smt;
 _Bool psa_tecs;
 int psa_platform;
 cpu_subtype_t psa_subcpuprefs[4];
 uint32_t psa_options;
 _posix_spawn_port_actions_t psa_ports;
 _posix_spawn_mac_policy_extensions_t psa_mac_extensions;
 struct _posix_spawn_coalition_info *psa_coalition_info;
 struct _posix_spawn_persona_info *psa_persona_info;
 struct _posix_spawn_posix_cred_info *psa_posix_cred_info;
 char *psa_subsystem_root_path;
} *_posix_spawnattr_t;
typedef enum : uint32_t { PSA_OPTION_NONE = 0, PSA_OPTION_PLUGIN_HOST_DISABLE_A_KEYS = 0x1,} __attribute__((__enum_extensibility__(open))) __attribute__((__flag_enum__)) posix_spawn_options;
typedef enum {
 PSFA_OPEN = 0,
 PSFA_CLOSE = 1,
 PSFA_DUP2 = 2,
 PSFA_INHERIT = 3,
 PSFA_FILEPORT_DUP2 = 4,
 PSFA_CHDIR = 5,
 PSFA_FCHDIR = 6
} psfa_t;
typedef struct _psfa_action {
 psfa_t psfaa_type;
 union {
  int psfaa_filedes;
  mach_port_name_t psfaa_fileport;
 };
 union {
  struct {
   int psfao_oflag;
   mode_t psfao_mode;
   char psfao_path[1024];
  } psfaa_openargs;
  struct {
   int psfad_newfiledes;
  } psfaa_dup2args;
  struct {
   char psfac_path[1024];
  } psfaa_chdirargs;
 };
} _psfa_action_t;
typedef struct _posix_spawn_file_actions {
 int psfa_act_alloc;
 int psfa_act_count;
 _psfa_action_t psfa_act_acts[];
} *_posix_spawn_file_actions_t;
struct _posix_spawn_args_desc {
 __darwin_size_t attr_size;
 _posix_spawnattr_t attrp;
 __darwin_size_t file_actions_size;
 _posix_spawn_file_actions_t
     file_actions;
 __darwin_size_t port_actions_size;
 _posix_spawn_port_actions_t
     port_actions;
 __darwin_size_t mac_extensions_size;
 _posix_spawn_mac_policy_extensions_t
     mac_extensions;
 __darwin_size_t coal_info_size;
 struct _posix_spawn_coalition_info *coal_info;
 __darwin_size_t persona_info_size;
 struct _posix_spawn_persona_info *persona_info;
 __darwin_size_t posix_cred_info_size;
 struct _posix_spawn_posix_cred_info *posix_cred_info;
 __darwin_size_t subsystem_root_path_size;
 char *subsystem_root_path;
};
struct user32__posix_spawn_args_desc {
 uint32_t attr_size;
 uint32_t attrp;
 uint32_t file_actions_size;
 uint32_t file_actions;
 uint32_t port_actions_size;
 uint32_t port_actions;
 uint32_t mac_extensions_size;
 uint32_t mac_extensions;
 uint32_t coal_info_size;
 uint32_t coal_info;
 uint32_t persona_info_size;
 uint32_t persona_info;
 uint32_t posix_cred_info_size;
 uint32_t posix_cred_info;
 uint32_t subsystem_root_path_size;
 uint32_t subsystem_root_path;
};
struct user__posix_spawn_args_desc {
 user_size_t attr_size;
 user_addr_t attrp;
 user_size_t file_actions_size;
 user_addr_t file_actions;
 user_size_t port_actions_size;
 user_addr_t port_actions;
 user_size_t mac_extensions_size;
 user_addr_t mac_extensions;
 user_size_t coal_info_size;
 user_addr_t coal_info;
 user_size_t persona_info_size;
 user_addr_t persona_info;
 user_size_t posix_cred_info_size;
 user_addr_t posix_cred_info;
 user_size_t subsystem_root_path_size;
 user_addr_t subsystem_root_path;
};
static __inline__
uint16_t
OSReadSwapInt16(
 const volatile void * base,
 uintptr_t byteOffset
 )
{
 uint16_t result;
 result = *(volatile uint16_t *)((uintptr_t)base + byteOffset);
 return _OSSwapInt16(result);
}
static __inline__
uint32_t
OSReadSwapInt32(
 const volatile void * base,
 uintptr_t byteOffset
 )
{
 uint32_t result;
 result = *(volatile uint32_t *)((uintptr_t)base + byteOffset);
 return _OSSwapInt32(result);
}
static __inline__
uint64_t
OSReadSwapInt64(
 const volatile void * base,
 uintptr_t byteOffset
 )
{
 uint64_t result;
 result = *(volatile uint64_t *)((uintptr_t)base + byteOffset);
 return _OSSwapInt64(result);
}
static __inline__
void
OSWriteSwapInt16(
 volatile void * base,
 uintptr_t byteOffset,
 uint16_t data
 )
{
 *(volatile uint16_t *)((uintptr_t)base + byteOffset) = _OSSwapInt16(data);
}
static __inline__
void
OSWriteSwapInt32(
 volatile void * base,
 uintptr_t byteOffset,
 uint32_t data
 )
{
 *(volatile uint32_t *)((uintptr_t)base + byteOffset) = _OSSwapInt32(data);
}
static __inline__
void
OSWriteSwapInt64(
 volatile void * base,
 uintptr_t byteOffset,
 uint64_t data
 )
{
 *(volatile uint64_t *)((uintptr_t)base + byteOffset) = _OSSwapInt64(data);
}
enum {
 OSUnknownByteOrder,
 OSLittleEndian,
 OSBigEndian
};
static inline
int32_t
OSHostByteOrder(void)
{
 return OSLittleEndian;
}
static inline
uint16_t
_OSReadInt16(
 const volatile void * base,
 uintptr_t byteOffset
 )
{
 return *(volatile uint16_t *)((uintptr_t)base + byteOffset);
}
static inline
uint32_t
_OSReadInt32(
 const volatile void * base,
 uintptr_t byteOffset
 )
{
 return *(volatile uint32_t *)((uintptr_t)base + byteOffset);
}
static inline
uint64_t
_OSReadInt64(
 const volatile void * base,
 uintptr_t byteOffset
 )
{
 return *(volatile uint64_t *)((uintptr_t)base + byteOffset);
}
static inline
void
_OSWriteInt16(
 volatile void * base,
 uintptr_t byteOffset,
 uint16_t data
 )
{
 *(volatile uint16_t *)((uintptr_t)base + byteOffset) = data;
}
static inline
void
_OSWriteInt32(
 volatile void * base,
 uintptr_t byteOffset,
 uint32_t data
 )
{
 *(volatile uint32_t *)((uintptr_t)base + byteOffset) = data;
}
static inline
void
_OSWriteInt64(
 volatile void * base,
 uintptr_t byteOffset,
 uint64_t data
 )
{
 *(volatile uint64_t *)((uintptr_t)base + byteOffset) = data;
}
typedef struct {
 unsigned char mig_vers;
 unsigned char if_vers;
 unsigned char reserved1;
 unsigned char mig_encoding;
 unsigned char int_rep;
 unsigned char char_rep;
 unsigned char float_rep;
 unsigned char reserved2;
} NDR_record_t;
extern NDR_record_t NDR_record;
typedef mach_port_t notify_port_t;
typedef struct {
 mach_msg_header_t not_header;
 NDR_record_t NDR;
 mach_port_name_t not_port;
 mach_msg_format_0_trailer_t trailer;
} mach_port_deleted_notification_t;
typedef struct {
 mach_msg_header_t not_header;
 NDR_record_t NDR;
 mach_port_name_t not_port;
 mach_msg_format_0_trailer_t trailer;
} mach_send_possible_notification_t;
typedef struct {
 mach_msg_header_t not_header;
 mach_msg_body_t not_body;
 mach_msg_port_descriptor_t not_port;
 mach_msg_format_0_trailer_t trailer;
} mach_port_destroyed_notification_t;
typedef struct {
 mach_msg_header_t not_header;
 NDR_record_t NDR;
 mach_msg_type_number_t not_count;
 mach_msg_format_0_trailer_t trailer;
} mach_no_senders_notification_t;
typedef struct {
 mach_msg_header_t not_header;
 mach_msg_format_0_trailer_t trailer;
} mach_send_once_notification_t;
typedef struct {
 mach_msg_header_t not_header;
 NDR_record_t NDR;
 mach_port_name_t not_port;
 mach_msg_format_0_trailer_t trailer;
} mach_dead_name_notification_t;
typedef void (*mig_stub_routine_t) (mach_msg_header_t *InHeadP,
    mach_msg_header_t *OutHeadP);
typedef mig_stub_routine_t mig_routine_t;
typedef mig_routine_t (*mig_server_routine_t) (mach_msg_header_t *InHeadP);
typedef kern_return_t (*mig_impl_routine_t)(void);
typedef mach_msg_type_descriptor_t routine_arg_descriptor;
typedef mach_msg_type_descriptor_t *routine_arg_descriptor_t;
typedef mach_msg_type_descriptor_t *mig_routine_arg_descriptor_t;
struct routine_descriptor {
 mig_impl_routine_t impl_routine;
 mig_stub_routine_t stub_routine;
 unsigned int argc;
 unsigned int descr_count;
 routine_arg_descriptor_t
     arg_descr;
 unsigned int max_reply_msg;
};
typedef struct routine_descriptor *routine_descriptor_t;
typedef struct routine_descriptor mig_routine_descriptor;
typedef mig_routine_descriptor *mig_routine_descriptor_t;
typedef struct mig_subsystem {
 mig_server_routine_t server;
 mach_msg_id_t start;
 mach_msg_id_t end;
 mach_msg_size_t maxsize;
 vm_address_t reserved;
 mig_routine_descriptor
     routine[1];
} *mig_subsystem_t;
typedef struct mig_symtab {
 char *ms_routine_name;
 int ms_routine_number;
 void (*ms_routine)(void);
} mig_symtab_t;
extern mach_port_t mig_get_reply_port(void);
extern void mig_dealloc_reply_port(mach_port_t reply_port);
extern void mig_put_reply_port(mach_port_t reply_port);
extern int mig_strncpy(char *dest, const char *src, int len);
extern int mig_strncpy_zerofill(char *dest, const char *src, int len);
extern void mig_allocate(vm_address_t *, vm_size_t);
extern void mig_deallocate(vm_address_t, vm_size_t);
#pragma pack(4)
typedef struct {
 mach_msg_header_t Head;
 NDR_record_t NDR;
 kern_return_t RetCode;
} mig_reply_error_t;
#pragma pack()
static __inline__ void
__NDR_convert__mig_reply_error_t(__attribute__((__unused__)) mig_reply_error_t *x)
{
}
 extern int mig_strncpy_zerofill(char * dest, const char * src, int len) __attribute__((weak_import));
#pragma pack(4)
typedef struct mach_vm_info_region {
 mach_vm_offset_t vir_start;
 mach_vm_offset_t vir_end;
 mach_vm_offset_t vir_object;
 memory_object_offset_t vir_offset;
 boolean_t vir_needs_copy;
 vm_prot_t vir_protection;
 vm_prot_t vir_max_protection;
 vm_inherit_t vir_inheritance;
 natural_t vir_wired_count;
 natural_t vir_user_wired_count;
} mach_vm_info_region_t;
typedef struct vm_info_region_64 {
 natural_t vir_start;
 natural_t vir_end;
 natural_t vir_object;
 memory_object_offset_t vir_offset;
 boolean_t vir_needs_copy;
 vm_prot_t vir_protection;
 vm_prot_t vir_max_protection;
 vm_inherit_t vir_inheritance;
 natural_t vir_wired_count;
 natural_t vir_user_wired_count;
} vm_info_region_64_t;
typedef struct vm_info_region {
 natural_t vir_start;
 natural_t vir_end;
 natural_t vir_object;
 natural_t vir_offset;
 boolean_t vir_needs_copy;
 vm_prot_t vir_protection;
 vm_prot_t vir_max_protection;
 vm_inherit_t vir_inheritance;
 natural_t vir_wired_count;
 natural_t vir_user_wired_count;
} vm_info_region_t;
typedef struct vm_info_object {
 natural_t vio_object;
 natural_t vio_size;
 unsigned int vio_ref_count;
 unsigned int vio_resident_page_count;
 unsigned int vio_absent_count;
 natural_t vio_copy;
 natural_t vio_shadow;
 natural_t vio_shadow_offset;
 natural_t vio_paging_offset;
 memory_object_copy_strategy_t vio_copy_strategy;
 vm_offset_t vio_last_alloc;
 unsigned int vio_paging_in_progress;
 boolean_t vio_pager_created;
 boolean_t vio_pager_initialized;
 boolean_t vio_pager_ready;
 boolean_t vio_can_persist;
 boolean_t vio_internal;
 boolean_t vio_temporary;
 boolean_t vio_alive;
 boolean_t vio_purgable;
 boolean_t vio_purgable_volatile;
} vm_info_object_t;
typedef vm_info_object_t *vm_info_object_array_t;
#pragma pack()
typedef struct zone_name {
 char zn_name[80];
} zone_name_t;
typedef zone_name_t *zone_name_array_t;
typedef struct zone_info {
 integer_t zi_count;
 vm_size_t zi_cur_size;
 vm_size_t zi_max_size;
 vm_size_t zi_elem_size;
 vm_size_t zi_alloc_size;
 integer_t zi_pageable;
 integer_t zi_sleepable;
 integer_t zi_exhaustible;
 integer_t zi_collectable;
} zone_info_t;
typedef zone_info_t *zone_info_array_t;
typedef struct mach_zone_name {
 char mzn_name[80];
} mach_zone_name_t;
typedef mach_zone_name_t *mach_zone_name_array_t;
typedef struct mach_zone_info_data {
 uint64_t mzi_count;
 uint64_t mzi_cur_size;
 uint64_t mzi_max_size;
 uint64_t mzi_elem_size;
 uint64_t mzi_alloc_size;
 uint64_t mzi_sum_size;
 uint64_t mzi_exhaustible;
 uint64_t mzi_collectable;
} mach_zone_info_t;
typedef mach_zone_info_t *mach_zone_info_array_t;
typedef struct task_zone_info_data {
 uint64_t tzi_count;
 uint64_t tzi_cur_size;
 uint64_t tzi_max_size;
 uint64_t tzi_elem_size;
 uint64_t tzi_alloc_size;
 uint64_t tzi_sum_size;
 uint64_t tzi_exhaustible;
 uint64_t tzi_collectable;
 uint64_t tzi_caller_acct;
 uint64_t tzi_task_alloc;
 uint64_t tzi_task_free;
} task_zone_info_t;
typedef task_zone_info_t *task_zone_info_array_t;
typedef struct mach_memory_info {
 uint64_t flags;
 uint64_t site;
 uint64_t size;
 uint64_t free;
 uint64_t largest;
 uint64_t collectable_bytes;
 uint64_t mapped;
 uint64_t peak;
 uint16_t tag;
 uint16_t zone;
 uint16_t _resvA[2];
 uint64_t _resv[3];
 char name[80];
} mach_memory_info_t;
typedef mach_memory_info_t *mach_memory_info_array_t;
typedef struct zone_btrecord {
 uint32_t ref_count;
 uint32_t operation_type;
 uint64_t bt[15];
} zone_btrecord_t;
typedef zone_btrecord_t *zone_btrecord_array_t;
typedef vm_offset_t *page_address_array_t;
typedef struct hash_info_bucket {
 natural_t hib_count;
} hash_info_bucket_t;
typedef hash_info_bucket_t *hash_info_bucket_array_t;
typedef struct lockgroup_info {
 char lockgroup_name[64];
 uint64_t lockgroup_attr;
 uint64_t lock_spin_cnt;
 uint64_t lock_spin_util_cnt;
 uint64_t lock_spin_held_cnt;
 uint64_t lock_spin_miss_cnt;
 uint64_t lock_spin_held_max;
 uint64_t lock_spin_held_cum;
 uint64_t lock_mtx_cnt;
 uint64_t lock_mtx_util_cnt;
 uint64_t lock_mtx_held_cnt;
 uint64_t lock_mtx_miss_cnt;
 uint64_t lock_mtx_wait_cnt;
 uint64_t lock_mtx_held_max;
 uint64_t lock_mtx_held_cum;
 uint64_t lock_mtx_wait_max;
 uint64_t lock_mtx_wait_cum;
 uint64_t lock_rw_cnt;
 uint64_t lock_rw_util_cnt;
 uint64_t lock_rw_held_cnt;
 uint64_t lock_rw_miss_cnt;
 uint64_t lock_rw_wait_cnt;
 uint64_t lock_rw_held_max;
 uint64_t lock_rw_held_cum;
 uint64_t lock_rw_wait_max;
 uint64_t lock_rw_wait_cum;
} lockgroup_info_t;
typedef lockgroup_info_t *lockgroup_info_array_t;
typedef char symtab_name_t[32];
struct mach_core_details {
 uint64_t gzip_offset;
 uint64_t gzip_length;
 char core_name[16];
};
struct mach_core_fileheader {
 uint64_t signature;
 uint64_t log_offset;
 uint64_t log_length;
 uint64_t num_files;
 struct mach_core_details files[16];
};
typedef char kobject_description_t[512];
extern
kern_return_t vm_region
(
 vm_map_read_t target_task,
 vm_address_t *address,
 vm_size_t *size,
 vm_region_flavor_t flavor,
 vm_region_info_t info,
 mach_msg_type_number_t *infoCnt,
 mach_port_t *object_name
);
extern
kern_return_t vm_allocate
(
 vm_map_t target_task,
 vm_address_t *address,
 vm_size_t size,
 int flags
);
extern
kern_return_t vm_deallocate
(
 vm_map_t target_task,
 vm_address_t address,
 vm_size_t size
);
extern
kern_return_t vm_protect
(
 vm_map_t target_task,
 vm_address_t address,
 vm_size_t size,
 boolean_t set_maximum,
 vm_prot_t new_protection
);
extern
kern_return_t vm_inherit
(
 vm_map_t target_task,
 vm_address_t address,
 vm_size_t size,
 vm_inherit_t new_inheritance
);
extern
kern_return_t vm_read
(
 vm_map_read_t target_task,
 vm_address_t address,
 vm_size_t size,
 vm_offset_t *data,
 mach_msg_type_number_t *dataCnt
);
extern
kern_return_t vm_read_list
(
 vm_map_read_t target_task,
 vm_read_entry_t data_list,
 natural_t count
);
extern
kern_return_t vm_write
(
 vm_map_t target_task,
 vm_address_t address,
 vm_offset_t data,
 mach_msg_type_number_t dataCnt
);
extern
kern_return_t vm_copy
(
 vm_map_t target_task,
 vm_address_t source_address,
 vm_size_t size,
 vm_address_t dest_address
);
extern
kern_return_t vm_read_overwrite
(
 vm_map_read_t target_task,
 vm_address_t address,
 vm_size_t size,
 vm_address_t data,
 vm_size_t *outsize
);
extern
kern_return_t vm_msync
(
 vm_map_t target_task,
 vm_address_t address,
 vm_size_t size,
 vm_sync_t sync_flags
);
extern
kern_return_t vm_behavior_set
(
 vm_map_t target_task,
 vm_address_t address,
 vm_size_t size,
 vm_behavior_t new_behavior
);
extern
kern_return_t vm_map
(
 vm_map_t target_task,
 vm_address_t *address,
 vm_size_t size,
 vm_address_t mask,
 int flags,
 mem_entry_name_port_t object,
 vm_offset_t offset,
 boolean_t copy,
 vm_prot_t cur_protection,
 vm_prot_t max_protection,
 vm_inherit_t inheritance
);
extern
kern_return_t vm_machine_attribute
(
 vm_map_t target_task,
 vm_address_t address,
 vm_size_t size,
 vm_machine_attribute_t attribute,
 vm_machine_attribute_val_t *value
);
extern
kern_return_t vm_remap
(
 vm_map_t target_task,
 vm_address_t *target_address,
 vm_size_t size,
 vm_address_t mask,
 int flags,
 vm_map_t src_task,
 vm_address_t src_address,
 boolean_t copy,
 vm_prot_t *cur_protection,
 vm_prot_t *max_protection,
 vm_inherit_t inheritance
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_wire
(
 vm_map_t target_task,
 boolean_t must_wire
);
extern
kern_return_t mach_make_memory_entry
(
 vm_map_t target_task,
 vm_size_t *size,
 vm_offset_t offset,
 vm_prot_t permission,
 mem_entry_name_port_t *object_handle,
 mem_entry_name_port_t parent_entry
);
extern
kern_return_t vm_map_page_query
(
 vm_map_read_t target_map,
 vm_offset_t offset,
 integer_t *disposition,
 integer_t *ref_count
);
extern
kern_return_t mach_vm_region_info
(
 vm_map_read_t task,
 vm_address_t address,
 vm_info_region_t *region,
 vm_info_object_array_t *objects,
 mach_msg_type_number_t *objectsCnt
);
extern
kern_return_t vm_mapped_pages_info
(
 vm_map_read_t task,
 page_address_array_t *pages,
 mach_msg_type_number_t *pagesCnt
);
extern
kern_return_t vm_region_recurse
(
 vm_map_read_t target_task,
 vm_address_t *address,
 vm_size_t *size,
 natural_t *nesting_depth,
 vm_region_recurse_info_t info,
 mach_msg_type_number_t *infoCnt
);
extern
kern_return_t vm_region_recurse_64
(
 vm_map_read_t target_task,
 vm_address_t *address,
 vm_size_t *size,
 natural_t *nesting_depth,
 vm_region_recurse_info_t info,
 mach_msg_type_number_t *infoCnt
);
extern
kern_return_t mach_vm_region_info_64
(
 vm_map_read_t task,
 vm_address_t address,
 vm_info_region_64_t *region,
 vm_info_object_array_t *objects,
 mach_msg_type_number_t *objectsCnt
);
extern
kern_return_t vm_region_64
(
 vm_map_read_t target_task,
 vm_address_t *address,
 vm_size_t *size,
 vm_region_flavor_t flavor,
 vm_region_info_t info,
 mach_msg_type_number_t *infoCnt,
 mach_port_t *object_name
);
extern
kern_return_t mach_make_memory_entry_64
(
 vm_map_t target_task,
 memory_object_size_t *size,
 memory_object_offset_t offset,
 vm_prot_t permission,
 mach_port_t *object_handle,
 mem_entry_name_port_t parent_entry
);
extern
kern_return_t vm_map_64
(
 vm_map_t target_task,
 vm_address_t *address,
 vm_size_t size,
 vm_address_t mask,
 int flags,
 mem_entry_name_port_t object,
 memory_object_offset_t offset,
 boolean_t copy,
 vm_prot_t cur_protection,
 vm_prot_t max_protection,
 vm_inherit_t inheritance
);
extern
kern_return_t vm_purgable_control
(
 vm_map_t target_task,
 vm_address_t address,
 vm_purgable_t control,
 int *state
);
extern
kern_return_t vm_map_exec_lockdown
(
 vm_map_t target_task
);
extern
kern_return_t vm_remap_new
(
 vm_map_t target_task,
 vm_address_t *target_address,
 vm_size_t size,
 vm_address_t mask,
 int flags,
 vm_map_read_t src_task,
 vm_address_t src_address,
 boolean_t copy,
 vm_prot_t *cur_protection,
 vm_prot_t *max_protection,
 vm_inherit_t inheritance
);
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  vm_region_flavor_t flavor;
  mach_msg_type_number_t infoCnt;
 } __Request__vm_region_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
  int flags;
 } __Request__vm_allocate_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
 } __Request__vm_deallocate_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
  boolean_t set_maximum;
  vm_prot_t new_protection;
 } __Request__vm_protect_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
  vm_inherit_t new_inheritance;
 } __Request__vm_inherit_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
 } __Request__vm_read_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_read_entry_t data_list;
  natural_t count;
 } __Request__vm_read_list_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t data;
  NDR_record_t NDR;
  vm_address_t address;
  mach_msg_type_number_t dataCnt;
 } __Request__vm_write_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t source_address;
  vm_size_t size;
  vm_address_t dest_address;
 } __Request__vm_copy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
  vm_address_t data;
 } __Request__vm_read_overwrite_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
  vm_sync_t sync_flags;
 } __Request__vm_msync_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
  vm_behavior_t new_behavior;
 } __Request__vm_behavior_set_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t object;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
  vm_address_t mask;
  int flags;
  vm_offset_t offset;
  boolean_t copy;
  vm_prot_t cur_protection;
  vm_prot_t max_protection;
  vm_inherit_t inheritance;
 } __Request__vm_map_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
  vm_machine_attribute_t attribute;
  vm_machine_attribute_val_t value;
 } __Request__vm_machine_attribute_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t src_task;
  NDR_record_t NDR;
  vm_address_t target_address;
  vm_size_t size;
  vm_address_t mask;
  int flags;
  vm_address_t src_address;
  boolean_t copy;
  vm_inherit_t inheritance;
 } __Request__vm_remap_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  boolean_t must_wire;
 } __Request__task_wire_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t parent_entry;
  NDR_record_t NDR;
  vm_size_t size;
  vm_offset_t offset;
  vm_prot_t permission;
 } __Request__mach_make_memory_entry_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_offset_t offset;
 } __Request__vm_map_page_query_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
 } __Request__mach_vm_region_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__vm_mapped_pages_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  natural_t nesting_depth;
  mach_msg_type_number_t infoCnt;
 } __Request__vm_region_recurse_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  natural_t nesting_depth;
  mach_msg_type_number_t infoCnt;
 } __Request__vm_region_recurse_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
 } __Request__mach_vm_region_info_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  vm_region_flavor_t flavor;
  mach_msg_type_number_t infoCnt;
 } __Request__vm_region_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t parent_entry;
  NDR_record_t NDR;
  memory_object_size_t size;
  memory_object_offset_t offset;
  vm_prot_t permission;
 } __Request__mach_make_memory_entry_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t object;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
  vm_address_t mask;
  int flags;
  memory_object_offset_t offset;
  boolean_t copy;
  vm_prot_t cur_protection;
  vm_prot_t max_protection;
  vm_inherit_t inheritance;
 } __Request__vm_map_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t address;
  vm_purgable_t control;
  int state;
 } __Request__vm_purgable_control_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__vm_map_exec_lockdown_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t src_task;
  NDR_record_t NDR;
  vm_address_t target_address;
  vm_size_t size;
  vm_address_t mask;
  int flags;
  vm_address_t src_address;
  boolean_t copy;
  vm_prot_t cur_protection;
  vm_prot_t max_protection;
  vm_inherit_t inheritance;
 } __Request__vm_remap_new_t __attribute__((unused));
#pragma pack(pop)
union __RequestUnion__vm_map_subsystem {
 __Request__vm_region_t Request_vm_region;
 __Request__vm_allocate_t Request_vm_allocate;
 __Request__vm_deallocate_t Request_vm_deallocate;
 __Request__vm_protect_t Request_vm_protect;
 __Request__vm_inherit_t Request_vm_inherit;
 __Request__vm_read_t Request_vm_read;
 __Request__vm_read_list_t Request_vm_read_list;
 __Request__vm_write_t Request_vm_write;
 __Request__vm_copy_t Request_vm_copy;
 __Request__vm_read_overwrite_t Request_vm_read_overwrite;
 __Request__vm_msync_t Request_vm_msync;
 __Request__vm_behavior_set_t Request_vm_behavior_set;
 __Request__vm_map_t Request_vm_map;
 __Request__vm_machine_attribute_t Request_vm_machine_attribute;
 __Request__vm_remap_t Request_vm_remap;
 __Request__task_wire_t Request_task_wire;
 __Request__mach_make_memory_entry_t Request_mach_make_memory_entry;
 __Request__vm_map_page_query_t Request_vm_map_page_query;
 __Request__mach_vm_region_info_t Request_mach_vm_region_info;
 __Request__vm_mapped_pages_info_t Request_vm_mapped_pages_info;
 __Request__vm_region_recurse_t Request_vm_region_recurse;
 __Request__vm_region_recurse_64_t Request_vm_region_recurse_64;
 __Request__mach_vm_region_info_64_t Request_mach_vm_region_info_64;
 __Request__vm_region_64_t Request_vm_region_64;
 __Request__mach_make_memory_entry_64_t Request_mach_make_memory_entry_64;
 __Request__vm_map_64_t Request_vm_map_64;
 __Request__vm_purgable_control_t Request_vm_purgable_control;
 __Request__vm_map_exec_lockdown_t Request_vm_map_exec_lockdown;
 __Request__vm_remap_new_t Request_vm_remap_new;
};
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t object_name;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
  mach_msg_type_number_t infoCnt;
  int info[10];
 } __Reply__vm_region_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  vm_address_t address;
 } __Reply__vm_allocate_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__vm_deallocate_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__vm_protect_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__vm_inherit_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t data;
  NDR_record_t NDR;
  mach_msg_type_number_t dataCnt;
 } __Reply__vm_read_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  vm_read_entry_t data_list;
 } __Reply__vm_read_list_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__vm_write_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__vm_copy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  vm_size_t outsize;
 } __Reply__vm_read_overwrite_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__vm_msync_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__vm_behavior_set_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  vm_address_t address;
 } __Reply__vm_map_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  vm_machine_attribute_val_t value;
 } __Reply__vm_machine_attribute_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  vm_address_t target_address;
  vm_prot_t cur_protection;
  vm_prot_t max_protection;
 } __Reply__vm_remap_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_wire_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t object_handle;
  NDR_record_t NDR;
  vm_size_t size;
 } __Reply__mach_make_memory_entry_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  integer_t disposition;
  integer_t ref_count;
 } __Reply__vm_map_page_query_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t objects;
  NDR_record_t NDR;
  vm_info_region_t region;
  mach_msg_type_number_t objectsCnt;
 } __Reply__mach_vm_region_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t pages;
  NDR_record_t NDR;
  mach_msg_type_number_t pagesCnt;
 } __Reply__vm_mapped_pages_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  vm_address_t address;
  vm_size_t size;
  natural_t nesting_depth;
  mach_msg_type_number_t infoCnt;
  int info[19];
 } __Reply__vm_region_recurse_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  vm_address_t address;
  vm_size_t size;
  natural_t nesting_depth;
  mach_msg_type_number_t infoCnt;
  int info[19];
 } __Reply__vm_region_recurse_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t objects;
  NDR_record_t NDR;
  vm_info_region_64_t region;
  mach_msg_type_number_t objectsCnt;
 } __Reply__mach_vm_region_info_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t object_name;
  NDR_record_t NDR;
  vm_address_t address;
  vm_size_t size;
  mach_msg_type_number_t infoCnt;
  int info[10];
 } __Reply__vm_region_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t object_handle;
  NDR_record_t NDR;
  memory_object_size_t size;
 } __Reply__mach_make_memory_entry_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  vm_address_t address;
 } __Reply__vm_map_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  int state;
 } __Reply__vm_purgable_control_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__vm_map_exec_lockdown_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  vm_address_t target_address;
  vm_prot_t cur_protection;
  vm_prot_t max_protection;
 } __Reply__vm_remap_new_t __attribute__((unused));
#pragma pack(pop)
union __ReplyUnion__vm_map_subsystem {
 __Reply__vm_region_t Reply_vm_region;
 __Reply__vm_allocate_t Reply_vm_allocate;
 __Reply__vm_deallocate_t Reply_vm_deallocate;
 __Reply__vm_protect_t Reply_vm_protect;
 __Reply__vm_inherit_t Reply_vm_inherit;
 __Reply__vm_read_t Reply_vm_read;
 __Reply__vm_read_list_t Reply_vm_read_list;
 __Reply__vm_write_t Reply_vm_write;
 __Reply__vm_copy_t Reply_vm_copy;
 __Reply__vm_read_overwrite_t Reply_vm_read_overwrite;
 __Reply__vm_msync_t Reply_vm_msync;
 __Reply__vm_behavior_set_t Reply_vm_behavior_set;
 __Reply__vm_map_t Reply_vm_map;
 __Reply__vm_machine_attribute_t Reply_vm_machine_attribute;
 __Reply__vm_remap_t Reply_vm_remap;
 __Reply__task_wire_t Reply_task_wire;
 __Reply__mach_make_memory_entry_t Reply_mach_make_memory_entry;
 __Reply__vm_map_page_query_t Reply_vm_map_page_query;
 __Reply__mach_vm_region_info_t Reply_mach_vm_region_info;
 __Reply__vm_mapped_pages_info_t Reply_vm_mapped_pages_info;
 __Reply__vm_region_recurse_t Reply_vm_region_recurse;
 __Reply__vm_region_recurse_64_t Reply_vm_region_recurse_64;
 __Reply__mach_vm_region_info_64_t Reply_mach_vm_region_info_64;
 __Reply__vm_region_64_t Reply_vm_region_64;
 __Reply__mach_make_memory_entry_64_t Reply_mach_make_memory_entry_64;
 __Reply__vm_map_64_t Reply_vm_map_64;
 __Reply__vm_purgable_control_t Reply_vm_purgable_control;
 __Reply__vm_map_exec_lockdown_t Reply_vm_map_exec_lockdown;
 __Reply__vm_remap_new_t Reply_vm_remap_new;
};
extern
kern_return_t mach_vm_allocate
(
 vm_map_t target,
 mach_vm_address_t *address,
 mach_vm_size_t size,
 int flags
);
extern
kern_return_t mach_vm_deallocate
(
 vm_map_t target,
 mach_vm_address_t address,
 mach_vm_size_t size
);
extern
kern_return_t mach_vm_protect
(
 vm_map_t target_task,
 mach_vm_address_t address,
 mach_vm_size_t size,
 boolean_t set_maximum,
 vm_prot_t new_protection
);
extern
kern_return_t mach_vm_inherit
(
 vm_map_t target_task,
 mach_vm_address_t address,
 mach_vm_size_t size,
 vm_inherit_t new_inheritance
);
extern
kern_return_t mach_vm_read
(
 vm_map_read_t target_task,
 mach_vm_address_t address,
 mach_vm_size_t size,
 vm_offset_t *data,
 mach_msg_type_number_t *dataCnt
);
extern
kern_return_t mach_vm_read_list
(
 vm_map_read_t target_task,
 mach_vm_read_entry_t data_list,
 natural_t count
);
extern
kern_return_t mach_vm_write
(
 vm_map_t target_task,
 mach_vm_address_t address,
 vm_offset_t data,
 mach_msg_type_number_t dataCnt
);
extern
kern_return_t mach_vm_copy
(
 vm_map_t target_task,
 mach_vm_address_t source_address,
 mach_vm_size_t size,
 mach_vm_address_t dest_address
);
extern
kern_return_t mach_vm_read_overwrite
(
 vm_map_read_t target_task,
 mach_vm_address_t address,
 mach_vm_size_t size,
 mach_vm_address_t data,
 mach_vm_size_t *outsize
);
extern
kern_return_t mach_vm_msync
(
 vm_map_t target_task,
 mach_vm_address_t address,
 mach_vm_size_t size,
 vm_sync_t sync_flags
);
extern
kern_return_t mach_vm_behavior_set
(
 vm_map_t target_task,
 mach_vm_address_t address,
 mach_vm_size_t size,
 vm_behavior_t new_behavior
);
extern
kern_return_t mach_vm_map
(
 vm_map_t target_task,
 mach_vm_address_t *address,
 mach_vm_size_t size,
 mach_vm_offset_t mask,
 int flags,
 mem_entry_name_port_t object,
 memory_object_offset_t offset,
 boolean_t copy,
 vm_prot_t cur_protection,
 vm_prot_t max_protection,
 vm_inherit_t inheritance
);
extern
kern_return_t mach_vm_machine_attribute
(
 vm_map_t target_task,
 mach_vm_address_t address,
 mach_vm_size_t size,
 vm_machine_attribute_t attribute,
 vm_machine_attribute_val_t *value
);
extern
kern_return_t mach_vm_remap
(
 vm_map_t target_task,
 mach_vm_address_t *target_address,
 mach_vm_size_t size,
 mach_vm_offset_t mask,
 int flags,
 vm_map_t src_task,
 mach_vm_address_t src_address,
 boolean_t copy,
 vm_prot_t *cur_protection,
 vm_prot_t *max_protection,
 vm_inherit_t inheritance
);
extern
kern_return_t mach_vm_page_query
(
 vm_map_read_t target_map,
 mach_vm_offset_t offset,
 integer_t *disposition,
 integer_t *ref_count
);
extern
kern_return_t mach_vm_region_recurse
(
 vm_map_read_t target_task,
 mach_vm_address_t *address,
 mach_vm_size_t *size,
 natural_t *nesting_depth,
 vm_region_recurse_info_t info,
 mach_msg_type_number_t *infoCnt
);
extern
kern_return_t mach_vm_region
(
 vm_map_read_t target_task,
 mach_vm_address_t *address,
 mach_vm_size_t *size,
 vm_region_flavor_t flavor,
 vm_region_info_t info,
 mach_msg_type_number_t *infoCnt,
 mach_port_t *object_name
);
extern
kern_return_t _mach_make_memory_entry
(
 vm_map_t target_task,
 memory_object_size_t *size,
 memory_object_offset_t offset,
 vm_prot_t permission,
 mem_entry_name_port_t *object_handle,
 mem_entry_name_port_t parent_handle
);
extern
kern_return_t mach_vm_purgable_control
(
 vm_map_t target_task,
 mach_vm_address_t address,
 vm_purgable_t control,
 int *state
);
extern
kern_return_t mach_vm_page_info
(
 vm_map_read_t target_task,
 mach_vm_address_t address,
 vm_page_info_flavor_t flavor,
 vm_page_info_t info,
 mach_msg_type_number_t *infoCnt
);
extern
kern_return_t mach_vm_page_range_query
(
 vm_map_read_t target_map,
 mach_vm_offset_t address,
 mach_vm_size_t size,
 mach_vm_address_t dispositions,
 mach_vm_size_t *dispositions_count
);
extern
kern_return_t mach_vm_remap_new
(
 vm_map_t target_task,
 mach_vm_address_t *target_address,
 mach_vm_size_t size,
 mach_vm_offset_t mask,
 int flags,
 vm_map_read_t src_task,
 mach_vm_address_t src_address,
 boolean_t copy,
 vm_prot_t *cur_protection,
 vm_prot_t *max_protection,
 vm_inherit_t inheritance
);
extern
kern_return_t mach_vm_range_create
(
 vm_map_t target_task,
 mach_vm_range_flavor_t flavor,
 mach_vm_range_recipes_raw_t recipes,
 mach_msg_type_number_t recipesCnt
);
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  mach_vm_size_t size;
  int flags;
 } __Request__mach_vm_allocate_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  mach_vm_size_t size;
 } __Request__mach_vm_deallocate_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  mach_vm_size_t size;
  boolean_t set_maximum;
  vm_prot_t new_protection;
 } __Request__mach_vm_protect_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  mach_vm_size_t size;
  vm_inherit_t new_inheritance;
 } __Request__mach_vm_inherit_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  mach_vm_size_t size;
 } __Request__mach_vm_read_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_read_entry_t data_list;
  natural_t count;
 } __Request__mach_vm_read_list_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t data;
  NDR_record_t NDR;
  mach_vm_address_t address;
  mach_msg_type_number_t dataCnt;
 } __Request__mach_vm_write_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t source_address;
  mach_vm_size_t size;
  mach_vm_address_t dest_address;
 } __Request__mach_vm_copy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  mach_vm_size_t size;
  mach_vm_address_t data;
 } __Request__mach_vm_read_overwrite_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  mach_vm_size_t size;
  vm_sync_t sync_flags;
 } __Request__mach_vm_msync_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  mach_vm_size_t size;
  vm_behavior_t new_behavior;
 } __Request__mach_vm_behavior_set_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t object;
  NDR_record_t NDR;
  mach_vm_address_t address;
  mach_vm_size_t size;
  mach_vm_offset_t mask;
  int flags;
  memory_object_offset_t offset;
  boolean_t copy;
  vm_prot_t cur_protection;
  vm_prot_t max_protection;
  vm_inherit_t inheritance;
 } __Request__mach_vm_map_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  mach_vm_size_t size;
  vm_machine_attribute_t attribute;
  vm_machine_attribute_val_t value;
 } __Request__mach_vm_machine_attribute_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t src_task;
  NDR_record_t NDR;
  mach_vm_address_t target_address;
  mach_vm_size_t size;
  mach_vm_offset_t mask;
  int flags;
  mach_vm_address_t src_address;
  boolean_t copy;
  vm_inherit_t inheritance;
 } __Request__mach_vm_remap_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_offset_t offset;
 } __Request__mach_vm_page_query_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  natural_t nesting_depth;
  mach_msg_type_number_t infoCnt;
 } __Request__mach_vm_region_recurse_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  vm_region_flavor_t flavor;
  mach_msg_type_number_t infoCnt;
 } __Request__mach_vm_region_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t parent_handle;
  NDR_record_t NDR;
  memory_object_size_t size;
  memory_object_offset_t offset;
  vm_prot_t permission;
 } __Request___mach_make_memory_entry_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  vm_purgable_t control;
  int state;
 } __Request__mach_vm_purgable_control_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_address_t address;
  vm_page_info_flavor_t flavor;
  mach_msg_type_number_t infoCnt;
 } __Request__mach_vm_page_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_offset_t address;
  mach_vm_size_t size;
  mach_vm_address_t dispositions;
  mach_vm_size_t dispositions_count;
 } __Request__mach_vm_page_range_query_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t src_task;
  NDR_record_t NDR;
  mach_vm_address_t target_address;
  mach_vm_size_t size;
  mach_vm_offset_t mask;
  int flags;
  mach_vm_address_t src_address;
  boolean_t copy;
  vm_prot_t cur_protection;
  vm_prot_t max_protection;
  vm_inherit_t inheritance;
 } __Request__mach_vm_remap_new_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_vm_range_flavor_t flavor;
  mach_msg_type_number_t recipesCnt;
  uint8_t recipes[1024];
 } __Request__mach_vm_range_create_t __attribute__((unused));
#pragma pack(pop)
union __RequestUnion__mach_vm_subsystem {
 __Request__mach_vm_allocate_t Request_mach_vm_allocate;
 __Request__mach_vm_deallocate_t Request_mach_vm_deallocate;
 __Request__mach_vm_protect_t Request_mach_vm_protect;
 __Request__mach_vm_inherit_t Request_mach_vm_inherit;
 __Request__mach_vm_read_t Request_mach_vm_read;
 __Request__mach_vm_read_list_t Request_mach_vm_read_list;
 __Request__mach_vm_write_t Request_mach_vm_write;
 __Request__mach_vm_copy_t Request_mach_vm_copy;
 __Request__mach_vm_read_overwrite_t Request_mach_vm_read_overwrite;
 __Request__mach_vm_msync_t Request_mach_vm_msync;
 __Request__mach_vm_behavior_set_t Request_mach_vm_behavior_set;
 __Request__mach_vm_map_t Request_mach_vm_map;
 __Request__mach_vm_machine_attribute_t Request_mach_vm_machine_attribute;
 __Request__mach_vm_remap_t Request_mach_vm_remap;
 __Request__mach_vm_page_query_t Request_mach_vm_page_query;
 __Request__mach_vm_region_recurse_t Request_mach_vm_region_recurse;
 __Request__mach_vm_region_t Request_mach_vm_region;
 __Request___mach_make_memory_entry_t Request__mach_make_memory_entry;
 __Request__mach_vm_purgable_control_t Request_mach_vm_purgable_control;
 __Request__mach_vm_page_info_t Request_mach_vm_page_info;
 __Request__mach_vm_page_range_query_t Request_mach_vm_page_range_query;
 __Request__mach_vm_remap_new_t Request_mach_vm_remap_new;
 __Request__mach_vm_range_create_t Request_mach_vm_range_create;
};
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_vm_address_t address;
 } __Reply__mach_vm_allocate_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__mach_vm_deallocate_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__mach_vm_protect_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__mach_vm_inherit_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t data;
  NDR_record_t NDR;
  mach_msg_type_number_t dataCnt;
 } __Reply__mach_vm_read_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_vm_read_entry_t data_list;
 } __Reply__mach_vm_read_list_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__mach_vm_write_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__mach_vm_copy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_vm_size_t outsize;
 } __Reply__mach_vm_read_overwrite_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__mach_vm_msync_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__mach_vm_behavior_set_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_vm_address_t address;
 } __Reply__mach_vm_map_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  vm_machine_attribute_val_t value;
 } __Reply__mach_vm_machine_attribute_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_vm_address_t target_address;
  vm_prot_t cur_protection;
  vm_prot_t max_protection;
 } __Reply__mach_vm_remap_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  integer_t disposition;
  integer_t ref_count;
 } __Reply__mach_vm_page_query_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_vm_address_t address;
  mach_vm_size_t size;
  natural_t nesting_depth;
  mach_msg_type_number_t infoCnt;
  int info[19];
 } __Reply__mach_vm_region_recurse_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t object_name;
  NDR_record_t NDR;
  mach_vm_address_t address;
  mach_vm_size_t size;
  mach_msg_type_number_t infoCnt;
  int info[10];
 } __Reply__mach_vm_region_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t object_handle;
  NDR_record_t NDR;
  memory_object_size_t size;
 } __Reply___mach_make_memory_entry_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  int state;
 } __Reply__mach_vm_purgable_control_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t infoCnt;
  int info[32];
 } __Reply__mach_vm_page_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_vm_size_t dispositions_count;
 } __Reply__mach_vm_page_range_query_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_vm_address_t target_address;
  vm_prot_t cur_protection;
  vm_prot_t max_protection;
 } __Reply__mach_vm_remap_new_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__mach_vm_range_create_t __attribute__((unused));
#pragma pack(pop)
union __ReplyUnion__mach_vm_subsystem {
 __Reply__mach_vm_allocate_t Reply_mach_vm_allocate;
 __Reply__mach_vm_deallocate_t Reply_mach_vm_deallocate;
 __Reply__mach_vm_protect_t Reply_mach_vm_protect;
 __Reply__mach_vm_inherit_t Reply_mach_vm_inherit;
 __Reply__mach_vm_read_t Reply_mach_vm_read;
 __Reply__mach_vm_read_list_t Reply_mach_vm_read_list;
 __Reply__mach_vm_write_t Reply_mach_vm_write;
 __Reply__mach_vm_copy_t Reply_mach_vm_copy;
 __Reply__mach_vm_read_overwrite_t Reply_mach_vm_read_overwrite;
 __Reply__mach_vm_msync_t Reply_mach_vm_msync;
 __Reply__mach_vm_behavior_set_t Reply_mach_vm_behavior_set;
 __Reply__mach_vm_map_t Reply_mach_vm_map;
 __Reply__mach_vm_machine_attribute_t Reply_mach_vm_machine_attribute;
 __Reply__mach_vm_remap_t Reply_mach_vm_remap;
 __Reply__mach_vm_page_query_t Reply_mach_vm_page_query;
 __Reply__mach_vm_region_recurse_t Reply_mach_vm_region_recurse;
 __Reply__mach_vm_region_t Reply_mach_vm_region;
 __Reply___mach_make_memory_entry_t Reply__mach_make_memory_entry;
 __Reply__mach_vm_purgable_control_t Reply_mach_vm_purgable_control;
 __Reply__mach_vm_page_info_t Reply_mach_vm_page_info;
 __Reply__mach_vm_page_range_query_t Reply_mach_vm_page_range_query;
 __Reply__mach_vm_remap_new_t Reply_mach_vm_remap_new;
 __Reply__mach_vm_range_create_t Reply_mach_vm_range_create;
};

extern
kern_return_t task_create
(
 task_t target_task,
 ledger_array_t ledgers,
 mach_msg_type_number_t ledgersCnt,
 boolean_t inherit_memory,
 task_t *child_task
);
extern
kern_return_t task_terminate
(
 task_t target_task
);
extern
kern_return_t task_threads
(
 task_inspect_t target_task,
 thread_act_array_t *act_list,
 mach_msg_type_number_t *act_listCnt
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t mach_ports_register
(
 task_t target_task,
 mach_port_array_t init_port_set,
 mach_msg_type_number_t init_port_setCnt
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t mach_ports_lookup
(
 task_t target_task,
 mach_port_array_t *init_port_set,
 mach_msg_type_number_t *init_port_setCnt
);
extern
kern_return_t task_info
(
 task_name_t target_task,
 task_flavor_t flavor,
 task_info_t task_info_out,
 mach_msg_type_number_t *task_info_outCnt
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_set_info
(
 task_t target_task,
 task_flavor_t flavor,
 task_info_t task_info_in,
 mach_msg_type_number_t task_info_inCnt
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_suspend
(
 task_read_t target_task
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_resume
(
 task_read_t target_task
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_get_special_port
(
 task_inspect_t task,
 int which_port,
 mach_port_t *special_port
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_set_special_port
(
 task_t task,
 int which_port,
 mach_port_t special_port
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_create
(
 task_t parent_task,
 thread_act_t *child_act
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_create_running
(
 task_t parent_task,
 thread_state_flavor_t flavor,
 thread_state_t new_state,
 mach_msg_type_number_t new_stateCnt,
 thread_act_t *child_act
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_set_exception_ports
(
 task_t task,
 exception_mask_t exception_mask,
 mach_port_t new_port,
 exception_behavior_t behavior,
 thread_state_flavor_t new_flavor
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_get_exception_ports
(
 task_t task,
 exception_mask_t exception_mask,
 exception_mask_array_t masks,
 mach_msg_type_number_t *masksCnt,
 exception_handler_array_t old_handlers,
 exception_behavior_array_t old_behaviors,
 exception_flavor_array_t old_flavors
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_swap_exception_ports
(
 task_t task,
 exception_mask_t exception_mask,
 mach_port_t new_port,
 exception_behavior_t behavior,
 thread_state_flavor_t new_flavor,
 exception_mask_array_t masks,
 mach_msg_type_number_t *masksCnt,
 exception_handler_array_t old_handlers,
 exception_behavior_array_t old_behaviors,
 exception_flavor_array_t old_flavors
);
extern
kern_return_t lock_set_create
(
 task_t task,
 lock_set_t *new_lock_set,
 int n_ulocks,
 int policy
);
extern
kern_return_t lock_set_destroy
(
 task_t task,
 lock_set_t lock_set
);
extern
kern_return_t semaphore_create
(
 task_t task,
 semaphore_t *semaphore,
 int policy,
 int value
);
extern
kern_return_t semaphore_destroy
(
 task_t task,
 semaphore_t semaphore
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_policy_set
(
 task_policy_set_t task,
 task_policy_flavor_t flavor,
 task_policy_t policy_info,
 mach_msg_type_number_t policy_infoCnt
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_policy_get
(
 task_policy_get_t task,
 task_policy_flavor_t flavor,
 task_policy_t policy_info,
 mach_msg_type_number_t *policy_infoCnt,
 boolean_t *get_default
);
extern
kern_return_t task_sample
(
 task_t task,
 mach_port_t reply
);
extern
kern_return_t task_policy
(
 task_t task,
 policy_t policy,
 policy_base_t base,
 mach_msg_type_number_t baseCnt,
 boolean_t set_limit,
 boolean_t change
);
extern
kern_return_t task_set_emulation
(
 task_t target_port,
 vm_address_t routine_entry_pt,
 int routine_number
);
extern
kern_return_t task_get_emulation_vector
(
 task_t task,
 int *vector_start,
 emulation_vector_t *emulation_vector,
 mach_msg_type_number_t *emulation_vectorCnt
);
extern
kern_return_t task_set_emulation_vector
(
 task_t task,
 int vector_start,
 emulation_vector_t emulation_vector,
 mach_msg_type_number_t emulation_vectorCnt
);
extern
kern_return_t task_set_ras_pc
(
 task_t target_task,
 vm_address_t basepc,
 vm_address_t boundspc
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_zone_info
(
 task_inspect_t target_task,
 mach_zone_name_array_t *names,
 mach_msg_type_number_t *namesCnt,
 task_zone_info_array_t *info,
 mach_msg_type_number_t *infoCnt
);
extern
kern_return_t task_assign
(
 task_t task,
 processor_set_t new_set,
 boolean_t assign_threads
);
extern
kern_return_t task_assign_default
(
 task_t task,
 boolean_t assign_threads
);
extern
kern_return_t task_get_assignment
(
 task_inspect_t task,
 processor_set_name_t *assigned_set
);
extern
kern_return_t task_set_policy
(
 task_t task,
 processor_set_t pset,
 policy_t policy,
 policy_base_t base,
 mach_msg_type_number_t baseCnt,
 policy_limit_t limit,
 mach_msg_type_number_t limitCnt,
 boolean_t change
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_get_state
(
 task_read_t task,
 thread_state_flavor_t flavor,
 thread_state_t old_state,
 mach_msg_type_number_t *old_stateCnt
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_set_state
(
 task_t task,
 thread_state_flavor_t flavor,
 thread_state_t new_state,
 mach_msg_type_number_t new_stateCnt
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_set_phys_footprint_limit
(
 task_t task,
 int new_limit,
 int *old_limit
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_suspend2
(
 task_read_t target_task,
 task_suspension_token_t *suspend_token
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_resume2
(
 task_suspension_token_t suspend_token
);
extern
kern_return_t task_purgable_info
(
 task_inspect_t task,
 task_purgable_info_t *stats
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_get_mach_voucher
(
 task_read_t task,
 mach_voucher_selector_t which,
 ipc_voucher_t *voucher
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_set_mach_voucher
(
 task_t task,
 ipc_voucher_t voucher
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_swap_mach_voucher
(
 task_t task,
 ipc_voucher_t new_voucher,
 ipc_voucher_t *old_voucher
);
extern
kern_return_t task_generate_corpse
(
 task_read_t task,
 mach_port_t *corpse_task_port
);
extern
kern_return_t task_map_corpse_info
(
 task_t task,
 task_read_t corspe_task,
 vm_address_t *kcd_addr_begin,
 uint32_t *kcd_size
);
extern
kern_return_t task_register_dyld_image_infos
(
 task_t task,
 dyld_kernel_image_info_array_t dyld_images,
 mach_msg_type_number_t dyld_imagesCnt
);
extern
kern_return_t task_unregister_dyld_image_infos
(
 task_t task,
 dyld_kernel_image_info_array_t dyld_images,
 mach_msg_type_number_t dyld_imagesCnt
);
extern
kern_return_t task_get_dyld_image_infos
(
 task_read_t task,
 dyld_kernel_image_info_array_t *dyld_images,
 mach_msg_type_number_t *dyld_imagesCnt
);
extern
kern_return_t task_register_dyld_shared_cache_image_info
(
 task_t task,
 dyld_kernel_image_info_t dyld_cache_image,
 boolean_t no_cache,
 boolean_t private_cache
);
extern
kern_return_t task_register_dyld_set_dyld_state
(
 task_t task,
 uint8_t dyld_state
);
extern
kern_return_t task_register_dyld_get_process_state
(
 task_t task,
 dyld_kernel_process_info_t *dyld_process_state
);
extern
kern_return_t task_map_corpse_info_64
(
 task_t task,
 task_read_t corspe_task,
 mach_vm_address_t *kcd_addr_begin,
 mach_vm_size_t *kcd_size
);
extern
kern_return_t task_inspect
(
 task_inspect_t task,
 task_inspect_flavor_t flavor,
 task_inspect_info_t info_out,
 mach_msg_type_number_t *info_outCnt
);
extern
kern_return_t task_get_exc_guard_behavior
(
 task_inspect_t task,
 task_exc_guard_behavior_t *behavior
);
extern
kern_return_t task_set_exc_guard_behavior
(
 task_t task,
 task_exc_guard_behavior_t behavior
);
extern
kern_return_t task_dyld_process_info_notify_register
(
 task_read_t target_task,
 mach_port_t notify
);
extern
kern_return_t task_create_identity_token
(
 task_t task,
 task_id_token_t *token
);
extern
kern_return_t task_identity_token_get_task_port
(
 task_id_token_t token,
 task_flavor_t flavor,
 mach_port_t *task_port
);
extern
kern_return_t task_dyld_process_info_notify_deregister
(
 task_read_t target_task,
 mach_port_name_t notify
);
extern
kern_return_t task_get_exception_ports_info
(
 mach_port_t port,
 exception_mask_t exception_mask,
 exception_mask_array_t masks,
 mach_msg_type_number_t *masksCnt,
 exception_handler_info_array_t old_handlers_info,
 exception_behavior_array_t old_behaviors,
 exception_flavor_array_t old_flavors
);
extern
kern_return_t task_test_sync_upcall
(
 task_t task,
 mach_port_t port
);
extern
kern_return_t task_set_corpse_forking_behavior
(
 task_t task,
 task_corpse_forking_behavior_t behavior
);
extern
kern_return_t task_test_async_upcall_propagation
(
 task_t task,
 mach_port_t port,
 int qos,
 int iotier
);
extern
kern_return_t task_map_kcdata_object_64
(
 task_t task,
 kcdata_object_t kcdata_object,
 mach_vm_address_t *kcd_addr_begin,
 mach_vm_size_t *kcd_size
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t task_register_hardened_exception_handler
(
 task_t task,
 uint32_t signed_pc_key,
 exception_mask_t exceptions_allowed,
 exception_behavior_t behaviors_allowed,
 thread_state_flavor_t flavors_allowed,
 mach_port_t new_exception_port
);
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_ports_descriptor_t ledgers;
  NDR_record_t NDR;
  mach_msg_type_number_t ledgersCnt;
  boolean_t inherit_memory;
 } __Request__task_create_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_terminate_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_threads_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_ports_descriptor_t init_port_set;
  NDR_record_t NDR;
  mach_msg_type_number_t init_port_setCnt;
 } __Request__mach_ports_register_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__mach_ports_lookup_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  task_flavor_t flavor;
  mach_msg_type_number_t task_info_outCnt;
 } __Request__task_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  task_flavor_t flavor;
  mach_msg_type_number_t task_info_inCnt;
  integer_t task_info_in[94];
 } __Request__task_set_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_suspend_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_resume_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  int which_port;
 } __Request__task_get_special_port_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t special_port;
  NDR_record_t NDR;
  int which_port;
 } __Request__task_set_special_port_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__thread_create_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  thread_state_flavor_t flavor;
  mach_msg_type_number_t new_stateCnt;
  natural_t new_state[1296];
 } __Request__thread_create_running_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_port;
  NDR_record_t NDR;
  exception_mask_t exception_mask;
  exception_behavior_t behavior;
  thread_state_flavor_t new_flavor;
 } __Request__task_set_exception_ports_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  exception_mask_t exception_mask;
 } __Request__task_get_exception_ports_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_port;
  NDR_record_t NDR;
  exception_mask_t exception_mask;
  exception_behavior_t behavior;
  thread_state_flavor_t new_flavor;
 } __Request__task_swap_exception_ports_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  int n_ulocks;
  int policy;
 } __Request__lock_set_create_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t lock_set;
 } __Request__lock_set_destroy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  int policy;
  int value;
 } __Request__semaphore_create_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t semaphore;
 } __Request__semaphore_destroy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  task_policy_flavor_t flavor;
  mach_msg_type_number_t policy_infoCnt;
  integer_t policy_info[16];
 } __Request__task_policy_set_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  task_policy_flavor_t flavor;
  mach_msg_type_number_t policy_infoCnt;
  boolean_t get_default;
 } __Request__task_policy_get_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t reply;
 } __Request__task_sample_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  policy_t policy;
  mach_msg_type_number_t baseCnt;
  integer_t base[5];
  boolean_t set_limit;
  boolean_t change;
 } __Request__task_policy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t routine_entry_pt;
  int routine_number;
 } __Request__task_set_emulation_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_get_emulation_vector_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t emulation_vector;
  NDR_record_t NDR;
  int vector_start;
  mach_msg_type_number_t emulation_vectorCnt;
 } __Request__task_set_emulation_vector_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t basepc;
  vm_address_t boundspc;
 } __Request__task_set_ras_pc_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_zone_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_set;
  NDR_record_t NDR;
  boolean_t assign_threads;
 } __Request__task_assign_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  boolean_t assign_threads;
 } __Request__task_assign_default_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_get_assignment_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t pset;
  NDR_record_t NDR;
  policy_t policy;
  mach_msg_type_number_t baseCnt;
  integer_t base[5];
  mach_msg_type_number_t limitCnt;
  integer_t limit[1];
  boolean_t change;
 } __Request__task_set_policy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  thread_state_flavor_t flavor;
  mach_msg_type_number_t old_stateCnt;
 } __Request__task_get_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  thread_state_flavor_t flavor;
  mach_msg_type_number_t new_stateCnt;
  natural_t new_state[1296];
 } __Request__task_set_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  int new_limit;
 } __Request__task_set_phys_footprint_limit_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_suspend2_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_resume2_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_purgable_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_voucher_selector_t which;
 } __Request__task_get_mach_voucher_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t voucher;
 } __Request__task_set_mach_voucher_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_voucher;
  mach_msg_port_descriptor_t old_voucher;
 } __Request__task_swap_mach_voucher_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_generate_corpse_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t corspe_task;
 } __Request__task_map_corpse_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t dyld_images;
  NDR_record_t NDR;
  mach_msg_type_number_t dyld_imagesCnt;
 } __Request__task_register_dyld_image_infos_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t dyld_images;
  NDR_record_t NDR;
  mach_msg_type_number_t dyld_imagesCnt;
 } __Request__task_unregister_dyld_image_infos_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_get_dyld_image_infos_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  dyld_kernel_image_info_t dyld_cache_image;
  boolean_t no_cache;
  boolean_t private_cache;
 } __Request__task_register_dyld_shared_cache_image_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  uint8_t dyld_state;
  char dyld_statePad[3];
 } __Request__task_register_dyld_set_dyld_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_register_dyld_get_process_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t corspe_task;
 } __Request__task_map_corpse_info_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  task_inspect_flavor_t flavor;
  mach_msg_type_number_t info_outCnt;
 } __Request__task_inspect_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_get_exc_guard_behavior_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  task_exc_guard_behavior_t behavior;
 } __Request__task_set_exc_guard_behavior_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t notify;
 } __Request__task_dyld_process_info_notify_register_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_create_identity_token_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  task_flavor_t flavor;
 } __Request__task_identity_token_get_task_port_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_port_name_t notify;
 } __Request__task_dyld_process_info_notify_deregister_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  exception_mask_t exception_mask;
 } __Request__task_get_exception_ports_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t port;
 } __Request__task_test_sync_upcall_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  task_corpse_forking_behavior_t behavior;
 } __Request__task_set_corpse_forking_behavior_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t port;
  NDR_record_t NDR;
  int qos;
  int iotier;
 } __Request__task_test_async_upcall_propagation_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t kcdata_object;
 } __Request__task_map_kcdata_object_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_exception_port;
  NDR_record_t NDR;
  uint32_t signed_pc_key;
  exception_mask_t exceptions_allowed;
  exception_behavior_t behaviors_allowed;
  thread_state_flavor_t flavors_allowed;
 } __Request__task_register_hardened_exception_handler_t __attribute__((unused));
#pragma pack(pop)
union __RequestUnion__task_subsystem {
 __Request__task_create_t Request_task_create;
 __Request__task_terminate_t Request_task_terminate;
 __Request__task_threads_t Request_task_threads;
 __Request__mach_ports_register_t Request_mach_ports_register;
 __Request__mach_ports_lookup_t Request_mach_ports_lookup;
 __Request__task_info_t Request_task_info;
 __Request__task_set_info_t Request_task_set_info;
 __Request__task_suspend_t Request_task_suspend;
 __Request__task_resume_t Request_task_resume;
 __Request__task_get_special_port_t Request_task_get_special_port;
 __Request__task_set_special_port_t Request_task_set_special_port;
 __Request__thread_create_t Request_thread_create;
 __Request__thread_create_running_t Request_thread_create_running;
 __Request__task_set_exception_ports_t Request_task_set_exception_ports;
 __Request__task_get_exception_ports_t Request_task_get_exception_ports;
 __Request__task_swap_exception_ports_t Request_task_swap_exception_ports;
 __Request__lock_set_create_t Request_lock_set_create;
 __Request__lock_set_destroy_t Request_lock_set_destroy;
 __Request__semaphore_create_t Request_semaphore_create;
 __Request__semaphore_destroy_t Request_semaphore_destroy;
 __Request__task_policy_set_t Request_task_policy_set;
 __Request__task_policy_get_t Request_task_policy_get;
 __Request__task_sample_t Request_task_sample;
 __Request__task_policy_t Request_task_policy;
 __Request__task_set_emulation_t Request_task_set_emulation;
 __Request__task_get_emulation_vector_t Request_task_get_emulation_vector;
 __Request__task_set_emulation_vector_t Request_task_set_emulation_vector;
 __Request__task_set_ras_pc_t Request_task_set_ras_pc;
 __Request__task_zone_info_t Request_task_zone_info;
 __Request__task_assign_t Request_task_assign;
 __Request__task_assign_default_t Request_task_assign_default;
 __Request__task_get_assignment_t Request_task_get_assignment;
 __Request__task_set_policy_t Request_task_set_policy;
 __Request__task_get_state_t Request_task_get_state;
 __Request__task_set_state_t Request_task_set_state;
 __Request__task_set_phys_footprint_limit_t Request_task_set_phys_footprint_limit;
 __Request__task_suspend2_t Request_task_suspend2;
 __Request__task_resume2_t Request_task_resume2;
 __Request__task_purgable_info_t Request_task_purgable_info;
 __Request__task_get_mach_voucher_t Request_task_get_mach_voucher;
 __Request__task_set_mach_voucher_t Request_task_set_mach_voucher;
 __Request__task_swap_mach_voucher_t Request_task_swap_mach_voucher;
 __Request__task_generate_corpse_t Request_task_generate_corpse;
 __Request__task_map_corpse_info_t Request_task_map_corpse_info;
 __Request__task_register_dyld_image_infos_t Request_task_register_dyld_image_infos;
 __Request__task_unregister_dyld_image_infos_t Request_task_unregister_dyld_image_infos;
 __Request__task_get_dyld_image_infos_t Request_task_get_dyld_image_infos;
 __Request__task_register_dyld_shared_cache_image_info_t Request_task_register_dyld_shared_cache_image_info;
 __Request__task_register_dyld_set_dyld_state_t Request_task_register_dyld_set_dyld_state;
 __Request__task_register_dyld_get_process_state_t Request_task_register_dyld_get_process_state;
 __Request__task_map_corpse_info_64_t Request_task_map_corpse_info_64;
 __Request__task_inspect_t Request_task_inspect;
 __Request__task_get_exc_guard_behavior_t Request_task_get_exc_guard_behavior;
 __Request__task_set_exc_guard_behavior_t Request_task_set_exc_guard_behavior;
 __Request__task_dyld_process_info_notify_register_t Request_task_dyld_process_info_notify_register;
 __Request__task_create_identity_token_t Request_task_create_identity_token;
 __Request__task_identity_token_get_task_port_t Request_task_identity_token_get_task_port;
 __Request__task_dyld_process_info_notify_deregister_t Request_task_dyld_process_info_notify_deregister;
 __Request__task_get_exception_ports_info_t Request_task_get_exception_ports_info;
 __Request__task_test_sync_upcall_t Request_task_test_sync_upcall;
 __Request__task_set_corpse_forking_behavior_t Request_task_set_corpse_forking_behavior;
 __Request__task_test_async_upcall_propagation_t Request_task_test_async_upcall_propagation;
 __Request__task_map_kcdata_object_64_t Request_task_map_kcdata_object_64;
 __Request__task_register_hardened_exception_handler_t Request_task_register_hardened_exception_handler;
};
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t child_task;
 } __Reply__task_create_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_terminate_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_ports_descriptor_t act_list;
  NDR_record_t NDR;
  mach_msg_type_number_t act_listCnt;
 } __Reply__task_threads_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__mach_ports_register_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_ports_descriptor_t init_port_set;
  NDR_record_t NDR;
  mach_msg_type_number_t init_port_setCnt;
 } __Reply__mach_ports_lookup_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t task_info_outCnt;
  integer_t task_info_out[94];
 } __Reply__task_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_suspend_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_resume_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t special_port;
 } __Reply__task_get_special_port_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_special_port_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t child_act;
 } __Reply__thread_create_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t child_act;
 } __Reply__thread_create_running_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_exception_ports_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t old_handlers[32];
  NDR_record_t NDR;
  mach_msg_type_number_t masksCnt;
  exception_mask_t masks[32];
  exception_behavior_t old_behaviors[32];
  thread_state_flavor_t old_flavors[32];
 } __Reply__task_get_exception_ports_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t old_handlers[32];
  NDR_record_t NDR;
  mach_msg_type_number_t masksCnt;
  exception_mask_t masks[32];
  exception_behavior_t old_behaviors[32];
  thread_state_flavor_t old_flavors[32];
 } __Reply__task_swap_exception_ports_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_lock_set;
 } __Reply__lock_set_create_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__lock_set_destroy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t semaphore;
 } __Reply__semaphore_create_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__semaphore_destroy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_policy_set_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t policy_infoCnt;
  integer_t policy_info[16];
  boolean_t get_default;
 } __Reply__task_policy_get_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_sample_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_policy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_emulation_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t emulation_vector;
  NDR_record_t NDR;
  int vector_start;
  mach_msg_type_number_t emulation_vectorCnt;
 } __Reply__task_get_emulation_vector_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_emulation_vector_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_ras_pc_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t names;
  mach_msg_ool_descriptor_t info;
  NDR_record_t NDR;
  mach_msg_type_number_t namesCnt;
  mach_msg_type_number_t infoCnt;
 } __Reply__task_zone_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_assign_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_assign_default_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t assigned_set;
 } __Reply__task_get_assignment_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_policy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t old_stateCnt;
  natural_t old_state[1296];
 } __Reply__task_get_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  int old_limit;
 } __Reply__task_set_phys_footprint_limit_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t suspend_token;
 } __Reply__task_suspend2_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_resume2_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  task_purgable_info_t stats;
 } __Reply__task_purgable_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t voucher;
 } __Reply__task_get_mach_voucher_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_mach_voucher_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t old_voucher;
 } __Reply__task_swap_mach_voucher_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t corpse_task_port;
 } __Reply__task_generate_corpse_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  vm_address_t kcd_addr_begin;
  uint32_t kcd_size;
 } __Reply__task_map_corpse_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_register_dyld_image_infos_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_unregister_dyld_image_infos_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t dyld_images;
  NDR_record_t NDR;
  mach_msg_type_number_t dyld_imagesCnt;
 } __Reply__task_get_dyld_image_infos_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_register_dyld_shared_cache_image_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_register_dyld_set_dyld_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  dyld_kernel_process_info_t dyld_process_state;
 } __Reply__task_register_dyld_get_process_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_vm_address_t kcd_addr_begin;
  mach_vm_size_t kcd_size;
 } __Reply__task_map_corpse_info_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t info_outCnt;
  integer_t info_out[4];
 } __Reply__task_inspect_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  task_exc_guard_behavior_t behavior;
 } __Reply__task_get_exc_guard_behavior_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_exc_guard_behavior_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_dyld_process_info_notify_register_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t token;
 } __Reply__task_create_identity_token_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t task_port;
 } __Reply__task_identity_token_get_task_port_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_dyld_process_info_notify_deregister_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t masksCnt;
  exception_mask_t masks[32];
  exception_handler_info_t old_handlers_info[32];
  exception_behavior_t old_behaviors[32];
  thread_state_flavor_t old_flavors[32];
 } __Reply__task_get_exception_ports_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_test_sync_upcall_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_corpse_forking_behavior_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_test_async_upcall_propagation_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_vm_address_t kcd_addr_begin;
  mach_vm_size_t kcd_size;
 } __Reply__task_map_kcdata_object_64_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_register_hardened_exception_handler_t __attribute__((unused));
#pragma pack(pop)
union __ReplyUnion__task_subsystem {
 __Reply__task_create_t Reply_task_create;
 __Reply__task_terminate_t Reply_task_terminate;
 __Reply__task_threads_t Reply_task_threads;
 __Reply__mach_ports_register_t Reply_mach_ports_register;
 __Reply__mach_ports_lookup_t Reply_mach_ports_lookup;
 __Reply__task_info_t Reply_task_info;
 __Reply__task_set_info_t Reply_task_set_info;
 __Reply__task_suspend_t Reply_task_suspend;
 __Reply__task_resume_t Reply_task_resume;
 __Reply__task_get_special_port_t Reply_task_get_special_port;
 __Reply__task_set_special_port_t Reply_task_set_special_port;
 __Reply__thread_create_t Reply_thread_create;
 __Reply__thread_create_running_t Reply_thread_create_running;
 __Reply__task_set_exception_ports_t Reply_task_set_exception_ports;
 __Reply__task_get_exception_ports_t Reply_task_get_exception_ports;
 __Reply__task_swap_exception_ports_t Reply_task_swap_exception_ports;
 __Reply__lock_set_create_t Reply_lock_set_create;
 __Reply__lock_set_destroy_t Reply_lock_set_destroy;
 __Reply__semaphore_create_t Reply_semaphore_create;
 __Reply__semaphore_destroy_t Reply_semaphore_destroy;
 __Reply__task_policy_set_t Reply_task_policy_set;
 __Reply__task_policy_get_t Reply_task_policy_get;
 __Reply__task_sample_t Reply_task_sample;
 __Reply__task_policy_t Reply_task_policy;
 __Reply__task_set_emulation_t Reply_task_set_emulation;
 __Reply__task_get_emulation_vector_t Reply_task_get_emulation_vector;
 __Reply__task_set_emulation_vector_t Reply_task_set_emulation_vector;
 __Reply__task_set_ras_pc_t Reply_task_set_ras_pc;
 __Reply__task_zone_info_t Reply_task_zone_info;
 __Reply__task_assign_t Reply_task_assign;
 __Reply__task_assign_default_t Reply_task_assign_default;
 __Reply__task_get_assignment_t Reply_task_get_assignment;
 __Reply__task_set_policy_t Reply_task_set_policy;
 __Reply__task_get_state_t Reply_task_get_state;
 __Reply__task_set_state_t Reply_task_set_state;
 __Reply__task_set_phys_footprint_limit_t Reply_task_set_phys_footprint_limit;
 __Reply__task_suspend2_t Reply_task_suspend2;
 __Reply__task_resume2_t Reply_task_resume2;
 __Reply__task_purgable_info_t Reply_task_purgable_info;
 __Reply__task_get_mach_voucher_t Reply_task_get_mach_voucher;
 __Reply__task_set_mach_voucher_t Reply_task_set_mach_voucher;
 __Reply__task_swap_mach_voucher_t Reply_task_swap_mach_voucher;
 __Reply__task_generate_corpse_t Reply_task_generate_corpse;
 __Reply__task_map_corpse_info_t Reply_task_map_corpse_info;
 __Reply__task_register_dyld_image_infos_t Reply_task_register_dyld_image_infos;
 __Reply__task_unregister_dyld_image_infos_t Reply_task_unregister_dyld_image_infos;
 __Reply__task_get_dyld_image_infos_t Reply_task_get_dyld_image_infos;
 __Reply__task_register_dyld_shared_cache_image_info_t Reply_task_register_dyld_shared_cache_image_info;
 __Reply__task_register_dyld_set_dyld_state_t Reply_task_register_dyld_set_dyld_state;
 __Reply__task_register_dyld_get_process_state_t Reply_task_register_dyld_get_process_state;
 __Reply__task_map_corpse_info_64_t Reply_task_map_corpse_info_64;
 __Reply__task_inspect_t Reply_task_inspect;
 __Reply__task_get_exc_guard_behavior_t Reply_task_get_exc_guard_behavior;
 __Reply__task_set_exc_guard_behavior_t Reply_task_set_exc_guard_behavior;
 __Reply__task_dyld_process_info_notify_register_t Reply_task_dyld_process_info_notify_register;
 __Reply__task_create_identity_token_t Reply_task_create_identity_token;
 __Reply__task_identity_token_get_task_port_t Reply_task_identity_token_get_task_port;
 __Reply__task_dyld_process_info_notify_deregister_t Reply_task_dyld_process_info_notify_deregister;
 __Reply__task_get_exception_ports_info_t Reply_task_get_exception_ports_info;
 __Reply__task_test_sync_upcall_t Reply_task_test_sync_upcall;
 __Reply__task_set_corpse_forking_behavior_t Reply_task_set_corpse_forking_behavior;
 __Reply__task_test_async_upcall_propagation_t Reply_task_test_async_upcall_propagation;
 __Reply__task_map_kcdata_object_64_t Reply_task_map_kcdata_object_64;
 __Reply__task_register_hardened_exception_handler_t Reply_task_register_hardened_exception_handler;
};
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_terminate
(
 thread_act_t target_act
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t act_get_state
(
 thread_read_t target_act,
 int flavor,
 thread_state_t old_state,
 mach_msg_type_number_t *old_stateCnt
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t act_set_state
(
 thread_act_t target_act,
 int flavor,
 thread_state_t new_state,
 mach_msg_type_number_t new_stateCnt
);
extern
__attribute__((availability(watchos,unavailable)))
kern_return_t thread_get_state
(
 thread_read_t target_act,
 thread_state_flavor_t flavor,
 thread_state_t old_state,
 mach_msg_type_number_t *old_stateCnt
);
extern
__attribute__((availability(watchos,unavailable)))
kern_return_t thread_set_state
(
 thread_act_t target_act,
 thread_state_flavor_t flavor,
 thread_state_t new_state,
 mach_msg_type_number_t new_stateCnt
);
extern
__attribute__((availability(watchos,unavailable)))
kern_return_t thread_suspend
(
 thread_read_t target_act
);
extern
__attribute__((availability(watchos,unavailable)))
kern_return_t thread_resume
(
 thread_read_t target_act
);
extern
__attribute__((availability(watchos,unavailable)))
kern_return_t thread_abort
(
 thread_act_t target_act
);
extern
__attribute__((availability(watchos,unavailable)))
kern_return_t thread_abort_safely
(
 thread_act_t target_act
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_depress_abort
(
 thread_act_t thread
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_get_special_port
(
 thread_inspect_t thr_act,
 int which_port,
 mach_port_t *special_port
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_set_special_port
(
 thread_act_t thr_act,
 int which_port,
 mach_port_t special_port
);
extern
kern_return_t thread_info
(
 thread_inspect_t target_act,
 thread_flavor_t flavor,
 thread_info_t thread_info_out,
 mach_msg_type_number_t *thread_info_outCnt
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_set_exception_ports
(
 thread_act_t thread,
 exception_mask_t exception_mask,
 mach_port_t new_port,
 exception_behavior_t behavior,
 thread_state_flavor_t new_flavor
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_get_exception_ports
(
 thread_act_t thread,
 exception_mask_t exception_mask,
 exception_mask_array_t masks,
 mach_msg_type_number_t *masksCnt,
 exception_handler_array_t old_handlers,
 exception_behavior_array_t old_behaviors,
 exception_flavor_array_t old_flavors
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_swap_exception_ports
(
 thread_act_t thread,
 exception_mask_t exception_mask,
 mach_port_t new_port,
 exception_behavior_t behavior,
 thread_state_flavor_t new_flavor,
 exception_mask_array_t masks,
 mach_msg_type_number_t *masksCnt,
 exception_handler_array_t old_handlers,
 exception_behavior_array_t old_behaviors,
 exception_flavor_array_t old_flavors
);
extern
kern_return_t thread_policy
(
 thread_act_t thr_act,
 policy_t policy,
 policy_base_t base,
 mach_msg_type_number_t baseCnt,
 boolean_t set_limit
);
extern
kern_return_t thread_policy_set
(
 thread_act_t thread,
 thread_policy_flavor_t flavor,
 thread_policy_t policy_info,
 mach_msg_type_number_t policy_infoCnt
);
extern
kern_return_t thread_policy_get
(
 thread_inspect_t thread,
 thread_policy_flavor_t flavor,
 thread_policy_t policy_info,
 mach_msg_type_number_t *policy_infoCnt,
 boolean_t *get_default
);
extern
kern_return_t thread_sample
(
 thread_act_t thread,
 mach_port_t reply
);
extern
kern_return_t etap_trace_thread
(
 thread_act_t target_act,
 boolean_t trace_status
);
extern
kern_return_t thread_assign
(
 thread_act_t thread,
 processor_set_t new_set
);
extern
kern_return_t thread_assign_default
(
 thread_act_t thread
);
extern
kern_return_t thread_get_assignment
(
 thread_inspect_t thread,
 processor_set_name_t *assigned_set
);
extern
kern_return_t thread_set_policy
(
 thread_act_t thr_act,
 processor_set_t pset,
 policy_t policy,
 policy_base_t base,
 mach_msg_type_number_t baseCnt,
 policy_limit_t limit,
 mach_msg_type_number_t limitCnt
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_get_mach_voucher
(
 thread_read_t thr_act,
 mach_voucher_selector_t which,
 ipc_voucher_t *voucher
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_set_mach_voucher
(
 thread_act_t thr_act,
 ipc_voucher_t voucher
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_swap_mach_voucher
(
 thread_act_t thr_act,
 ipc_voucher_t new_voucher,
 ipc_voucher_t *old_voucher
);
extern
kern_return_t thread_convert_thread_state
(
 thread_act_t thread,
 int direction,
 thread_state_flavor_t flavor,
 thread_state_t in_state,
 mach_msg_type_number_t in_stateCnt,
 thread_state_t out_state,
 mach_msg_type_number_t *out_stateCnt
);
extern
kern_return_t thread_get_exception_ports_info
(
 mach_port_t port,
 exception_mask_t exception_mask,
 exception_mask_array_t masks,
 mach_msg_type_number_t *masksCnt,
 exception_handler_info_array_t old_handlers_info,
 exception_behavior_array_t old_behaviors,
 exception_flavor_array_t old_flavors
);
extern
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)))
kern_return_t thread_adopt_exception_handler
(
 thread_t thread,
 mach_port_t exc_port,
 exception_mask_t exc_mask,
 exception_behavior_t behavior_mask,
 thread_state_flavor_t flavor_mask
);
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__thread_terminate_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  int flavor;
  mach_msg_type_number_t old_stateCnt;
 } __Request__act_get_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  int flavor;
  mach_msg_type_number_t new_stateCnt;
  natural_t new_state[1296];
 } __Request__act_set_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  thread_state_flavor_t flavor;
  mach_msg_type_number_t old_stateCnt;
 } __Request__thread_get_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  thread_state_flavor_t flavor;
  mach_msg_type_number_t new_stateCnt;
  natural_t new_state[1296];
 } __Request__thread_set_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__thread_suspend_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__thread_resume_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__thread_abort_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__thread_abort_safely_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__thread_depress_abort_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  int which_port;
 } __Request__thread_get_special_port_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t special_port;
  NDR_record_t NDR;
  int which_port;
 } __Request__thread_set_special_port_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  thread_flavor_t flavor;
  mach_msg_type_number_t thread_info_outCnt;
 } __Request__thread_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_port;
  NDR_record_t NDR;
  exception_mask_t exception_mask;
  exception_behavior_t behavior;
  thread_state_flavor_t new_flavor;
 } __Request__thread_set_exception_ports_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  exception_mask_t exception_mask;
 } __Request__thread_get_exception_ports_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_port;
  NDR_record_t NDR;
  exception_mask_t exception_mask;
  exception_behavior_t behavior;
  thread_state_flavor_t new_flavor;
 } __Request__thread_swap_exception_ports_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  policy_t policy;
  mach_msg_type_number_t baseCnt;
  integer_t base[5];
  boolean_t set_limit;
 } __Request__thread_policy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  thread_policy_flavor_t flavor;
  mach_msg_type_number_t policy_infoCnt;
  integer_t policy_info[16];
 } __Request__thread_policy_set_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  thread_policy_flavor_t flavor;
  mach_msg_type_number_t policy_infoCnt;
  boolean_t get_default;
 } __Request__thread_policy_get_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t reply;
 } __Request__thread_sample_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  boolean_t trace_status;
 } __Request__etap_trace_thread_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_set;
 } __Request__thread_assign_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__thread_assign_default_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
 } __Request__thread_get_assignment_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t pset;
  NDR_record_t NDR;
  policy_t policy;
  mach_msg_type_number_t baseCnt;
  integer_t base[5];
  mach_msg_type_number_t limitCnt;
  integer_t limit[1];
 } __Request__thread_set_policy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_voucher_selector_t which;
 } __Request__thread_get_mach_voucher_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t voucher;
 } __Request__thread_set_mach_voucher_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_voucher;
  mach_msg_port_descriptor_t old_voucher;
 } __Request__thread_swap_mach_voucher_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  int direction;
  thread_state_flavor_t flavor;
  mach_msg_type_number_t in_stateCnt;
  natural_t in_state[1296];
  mach_msg_type_number_t out_stateCnt;
 } __Request__thread_convert_thread_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  exception_mask_t exception_mask;
 } __Request__thread_get_exception_ports_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t exc_port;
  NDR_record_t NDR;
  exception_mask_t exc_mask;
  exception_behavior_t behavior_mask;
  thread_state_flavor_t flavor_mask;
 } __Request__thread_adopt_exception_handler_t __attribute__((unused));
#pragma pack(pop)
union __RequestUnion__thread_act_subsystem {
 __Request__thread_terminate_t Request_thread_terminate;
 __Request__act_get_state_t Request_act_get_state;
 __Request__act_set_state_t Request_act_set_state;
 __Request__thread_get_state_t Request_thread_get_state;
 __Request__thread_set_state_t Request_thread_set_state;
 __Request__thread_suspend_t Request_thread_suspend;
 __Request__thread_resume_t Request_thread_resume;
 __Request__thread_abort_t Request_thread_abort;
 __Request__thread_abort_safely_t Request_thread_abort_safely;
 __Request__thread_depress_abort_t Request_thread_depress_abort;
 __Request__thread_get_special_port_t Request_thread_get_special_port;
 __Request__thread_set_special_port_t Request_thread_set_special_port;
 __Request__thread_info_t Request_thread_info;
 __Request__thread_set_exception_ports_t Request_thread_set_exception_ports;
 __Request__thread_get_exception_ports_t Request_thread_get_exception_ports;
 __Request__thread_swap_exception_ports_t Request_thread_swap_exception_ports;
 __Request__thread_policy_t Request_thread_policy;
 __Request__thread_policy_set_t Request_thread_policy_set;
 __Request__thread_policy_get_t Request_thread_policy_get;
 __Request__thread_sample_t Request_thread_sample;
 __Request__etap_trace_thread_t Request_etap_trace_thread;
 __Request__thread_assign_t Request_thread_assign;
 __Request__thread_assign_default_t Request_thread_assign_default;
 __Request__thread_get_assignment_t Request_thread_get_assignment;
 __Request__thread_set_policy_t Request_thread_set_policy;
 __Request__thread_get_mach_voucher_t Request_thread_get_mach_voucher;
 __Request__thread_set_mach_voucher_t Request_thread_set_mach_voucher;
 __Request__thread_swap_mach_voucher_t Request_thread_swap_mach_voucher;
 __Request__thread_convert_thread_state_t Request_thread_convert_thread_state;
 __Request__thread_get_exception_ports_info_t Request_thread_get_exception_ports_info;
 __Request__thread_adopt_exception_handler_t Request_thread_adopt_exception_handler;
};
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_terminate_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t old_stateCnt;
  natural_t old_state[1296];
 } __Reply__act_get_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__act_set_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t old_stateCnt;
  natural_t old_state[1296];
 } __Reply__thread_get_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_set_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_suspend_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_resume_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_abort_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_abort_safely_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_depress_abort_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t special_port;
 } __Reply__thread_get_special_port_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_set_special_port_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t thread_info_outCnt;
  integer_t thread_info_out[32];
 } __Reply__thread_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_set_exception_ports_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t old_handlers[32];
  NDR_record_t NDR;
  mach_msg_type_number_t masksCnt;
  exception_mask_t masks[32];
  exception_behavior_t old_behaviors[32];
  thread_state_flavor_t old_flavors[32];
 } __Reply__thread_get_exception_ports_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t old_handlers[32];
  NDR_record_t NDR;
  mach_msg_type_number_t masksCnt;
  exception_mask_t masks[32];
  exception_behavior_t old_behaviors[32];
  thread_state_flavor_t old_flavors[32];
 } __Reply__thread_swap_exception_ports_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_policy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_policy_set_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t policy_infoCnt;
  integer_t policy_info[16];
  boolean_t get_default;
 } __Reply__thread_policy_get_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_sample_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__etap_trace_thread_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_assign_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_assign_default_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t assigned_set;
 } __Reply__thread_get_assignment_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_set_policy_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t voucher;
 } __Reply__thread_get_mach_voucher_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_set_mach_voucher_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t old_voucher;
 } __Reply__thread_swap_mach_voucher_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t out_stateCnt;
  natural_t out_state[1296];
 } __Reply__thread_convert_thread_state_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t masksCnt;
  exception_mask_t masks[32];
  exception_handler_info_t old_handlers_info[32];
  exception_behavior_t old_behaviors[32];
  thread_state_flavor_t old_flavors[32];
 } __Reply__thread_get_exception_ports_info_t __attribute__((unused));
#pragma pack(pop)
#pragma pack(push, 4)
 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__thread_adopt_exception_handler_t __attribute__((unused));
#pragma pack(pop)
union __ReplyUnion__thread_act_subsystem {
 __Reply__thread_terminate_t Reply_thread_terminate;
 __Reply__act_get_state_t Reply_act_get_state;
 __Reply__act_set_state_t Reply_act_set_state;
 __Reply__thread_get_state_t Reply_thread_get_state;
 __Reply__thread_set_state_t Reply_thread_set_state;
 __Reply__thread_suspend_t Reply_thread_suspend;
 __Reply__thread_resume_t Reply_thread_resume;
 __Reply__thread_abort_t Reply_thread_abort;
 __Reply__thread_abort_safely_t Reply_thread_abort_safely;
 __Reply__thread_depress_abort_t Reply_thread_depress_abort;
 __Reply__thread_get_special_port_t Reply_thread_get_special_port;
 __Reply__thread_set_special_port_t Reply_thread_set_special_port;
 __Reply__thread_info_t Reply_thread_info;
 __Reply__thread_set_exception_ports_t Reply_thread_set_exception_ports;
 __Reply__thread_get_exception_ports_t Reply_thread_get_exception_ports;
 __Reply__thread_swap_exception_ports_t Reply_thread_swap_exception_ports;
 __Reply__thread_policy_t Reply_thread_policy;
 __Reply__thread_policy_set_t Reply_thread_policy_set;
 __Reply__thread_policy_get_t Reply_thread_policy_get;
 __Reply__thread_sample_t Reply_thread_sample;
 __Reply__etap_trace_thread_t Reply_etap_trace_thread;
 __Reply__thread_assign_t Reply_thread_assign;
 __Reply__thread_assign_default_t Reply_thread_assign_default;
 __Reply__thread_get_assignment_t Reply_thread_get_assignment;
 __Reply__thread_set_policy_t Reply_thread_set_policy;
 __Reply__thread_get_mach_voucher_t Reply_thread_get_mach_voucher;
 __Reply__thread_set_mach_voucher_t Reply_thread_set_mach_voucher;
 __Reply__thread_swap_mach_voucher_t Reply_thread_swap_mach_voucher;
 __Reply__thread_convert_thread_state_t Reply_thread_convert_thread_state;
 __Reply__thread_get_exception_ports_info_t Reply_thread_get_exception_ports_info;
 __Reply__thread_adopt_exception_handler_t Reply_thread_adopt_exception_handler;
};

struct exec_info {
 char path[1024];
 int ac;
 int ec;
 char **av;
 char **ev;
};
int grade_binary(cpu_type_t, cpu_subtype_t, cpu_subtype_t, _Bool allow_simulator_binary);
boolean_t binary_match(cpu_type_t mask_bits, cpu_type_t req_cpu,
    cpu_subtype_t req_subcpu, cpu_type_t test_cpu,
    cpu_subtype_t test_subcpu);
struct pal_efi_registers {
 uint64_t rcx;
 uint64_t rdx;
 uint64_t r8;
 uint64_t r9;
 uint64_t rax;
};
kern_return_t
pal_efi_call_in_64bit_mode(uint64_t func,
    struct pal_efi_registers *efi_reg,
    void *stack_contents,
    size_t stack_contents_size,
    uint64_t *efi_status);
kern_return_t
pal_efi_call_in_32bit_mode(uint32_t func,
    struct pal_efi_registers *efi_reg,
    void *stack_contents,
    size_t stack_contents_size,
    uint32_t *efi_status);
boolean_t pal_machine_sleep(uint8_t type_a,
    uint8_t type_b,
    uint32_t bit_position,
    uint32_t disable_mask,
    uint32_t enable_mask);

extern void act_set_astbsd(thread_t);
extern void bsd_ast(thread_t);
extern void kevent_ast(thread_t thread, uint16_t bits);
extern void act_set_astkevent(thread_t thread, uint16_t bits);
extern uint16_t act_clear_astkevent(thread_t thread, uint16_t bits);
extern void act_set_ast_reset_pcs(thread_t thread);

typedef unsigned long NXSwappedFloat;
typedef unsigned long long NXSwappedDouble;
static __inline__ __attribute__((deprecated))
unsigned short
NXSwapShort(
    unsigned short inv
)
{
    return (unsigned short)((__uint16_t)(__builtin_constant_p((uint16_t)inv) ? ((__uint16_t)((((__uint16_t)((uint16_t)inv) & 0xff00U) >> 8) | (((__uint16_t)((uint16_t)inv) & 0x00ffU) << 8))) : _OSSwapInt16((uint16_t)inv)));
}
static __inline__ __attribute__((deprecated))
unsigned int
NXSwapInt(
    unsigned int inv
)
{
    return (unsigned int)(__builtin_constant_p((uint32_t)inv) ? ((__uint32_t)((((__uint32_t)((uint32_t)inv) & 0xff000000U) >> 24) | (((__uint32_t)((uint32_t)inv) & 0x00ff0000U) >> 8) | (((__uint32_t)((uint32_t)inv) & 0x0000ff00U) << 8) | (((__uint32_t)((uint32_t)inv) & 0x000000ffU) << 24))) : _OSSwapInt32((uint32_t)inv));
}
static __inline__ __attribute__((deprecated))
unsigned long
NXSwapLong(
    unsigned long inv
)
{
    return (unsigned long)(__builtin_constant_p((uint32_t)inv) ? ((__uint32_t)((((__uint32_t)((uint32_t)inv) & 0xff000000U) >> 24) | (((__uint32_t)((uint32_t)inv) & 0x00ff0000U) >> 8) | (((__uint32_t)((uint32_t)inv) & 0x0000ff00U) << 8) | (((__uint32_t)((uint32_t)inv) & 0x000000ffU) << 24))) : _OSSwapInt32((uint32_t)inv));
}
static __inline__ __attribute__((deprecated))
unsigned long long
NXSwapLongLong(
    unsigned long long inv
)
{
    return (unsigned long long)(__builtin_constant_p((uint64_t)inv) ? ((__uint64_t)((((__uint64_t)((uint64_t)inv) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)((uint64_t)inv) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)((uint64_t)inv) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)((uint64_t)inv) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)((uint64_t)inv) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)((uint64_t)inv) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)((uint64_t)inv) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)((uint64_t)inv) & 0x00000000000000ffULL) << 56))) : _OSSwapInt64((uint64_t)inv));
}
static __inline__ __attribute__((deprecated))
NXSwappedFloat
NXConvertHostFloatToSwapped(float x)
{
    union fconv {
        float number;
        NXSwappedFloat sf;
    } u;
    u.number = x;
    return u.sf;
}
static __inline__ __attribute__((deprecated))
float
NXConvertSwappedFloatToHost(NXSwappedFloat x)
{
    union fconv {
        float number;
        NXSwappedFloat sf;
    } u;
    u.sf = x;
    return u.number;
}
static __inline__ __attribute__((deprecated))
NXSwappedDouble
NXConvertHostDoubleToSwapped(double x)
{
    union dconv {
        double number;
        NXSwappedDouble sd;
    } u;
    u.number = x;
    return u.sd;
}
static __inline__ __attribute__((deprecated))
double
NXConvertSwappedDoubleToHost(NXSwappedDouble x)
{
    union dconv {
        double number;
        NXSwappedDouble sd;
    } u;
    u.sd = x;
    return u.number;
}
static __inline__ __attribute__((deprecated))
NXSwappedFloat
NXSwapFloat(NXSwappedFloat x)
{
    return (NXSwappedFloat)(__builtin_constant_p((uint32_t)x) ? ((__uint32_t)((((__uint32_t)((uint32_t)x) & 0xff000000U) >> 24) | (((__uint32_t)((uint32_t)x) & 0x00ff0000U) >> 8) | (((__uint32_t)((uint32_t)x) & 0x0000ff00U) << 8) | (((__uint32_t)((uint32_t)x) & 0x000000ffU) << 24))) : _OSSwapInt32((uint32_t)x));
}
static __inline__ __attribute__((deprecated))
NXSwappedDouble
NXSwapDouble(NXSwappedDouble x)
{
    return (NXSwappedDouble)(__builtin_constant_p((uint64_t)x) ? ((__uint64_t)((((__uint64_t)((uint64_t)x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)((uint64_t)x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)((uint64_t)x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)((uint64_t)x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)((uint64_t)x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)((uint64_t)x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)((uint64_t)x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)((uint64_t)x) & 0x00000000000000ffULL) << 56))) : _OSSwapInt64((uint64_t)x));
}
enum NXByteOrder {
    NX_UnknownByteOrder,
    NX_LittleEndian,
    NX_BigEndian
};
static __inline__
enum NXByteOrder
NXHostByteOrder(void)
{
    return NX_LittleEndian;
}
static __inline__ __attribute__((deprecated))
unsigned short
NXSwapBigShortToHost(
    unsigned short x
)
{
    return (unsigned short)((__uint16_t)(__builtin_constant_p((uint16_t)x) ? ((__uint16_t)((((__uint16_t)((uint16_t)x) & 0xff00U) >> 8) | (((__uint16_t)((uint16_t)x) & 0x00ffU) << 8))) : _OSSwapInt16((uint16_t)x)));
}
static __inline__ __attribute__((deprecated))
unsigned int
NXSwapBigIntToHost(
    unsigned int x
)
{
    return (unsigned int)(__builtin_constant_p((uint32_t)x) ? ((__uint32_t)((((__uint32_t)((uint32_t)x) & 0xff000000U) >> 24) | (((__uint32_t)((uint32_t)x) & 0x00ff0000U) >> 8) | (((__uint32_t)((uint32_t)x) & 0x0000ff00U) << 8) | (((__uint32_t)((uint32_t)x) & 0x000000ffU) << 24))) : _OSSwapInt32((uint32_t)x));
}
static __inline__ __attribute__((deprecated))
unsigned long
NXSwapBigLongToHost(
    unsigned long x
)
{
    return (unsigned long)(__builtin_constant_p((uint32_t)x) ? ((__uint32_t)((((__uint32_t)((uint32_t)x) & 0xff000000U) >> 24) | (((__uint32_t)((uint32_t)x) & 0x00ff0000U) >> 8) | (((__uint32_t)((uint32_t)x) & 0x0000ff00U) << 8) | (((__uint32_t)((uint32_t)x) & 0x000000ffU) << 24))) : _OSSwapInt32((uint32_t)x));
}
static __inline__ __attribute__((deprecated))
unsigned long long
NXSwapBigLongLongToHost(
    unsigned long long x
)
{
    return (unsigned long long)(__builtin_constant_p((uint64_t)x) ? ((__uint64_t)((((__uint64_t)((uint64_t)x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)((uint64_t)x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)((uint64_t)x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)((uint64_t)x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)((uint64_t)x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)((uint64_t)x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)((uint64_t)x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)((uint64_t)x) & 0x00000000000000ffULL) << 56))) : _OSSwapInt64((uint64_t)x));
}
static __inline__ __attribute__((deprecated))
double
NXSwapBigDoubleToHost(
    NXSwappedDouble x
)
{
    return NXConvertSwappedDoubleToHost((NXSwappedDouble)(__builtin_constant_p((uint64_t)x) ? ((__uint64_t)((((__uint64_t)((uint64_t)x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)((uint64_t)x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)((uint64_t)x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)((uint64_t)x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)((uint64_t)x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)((uint64_t)x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)((uint64_t)x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)((uint64_t)x) & 0x00000000000000ffULL) << 56))) : _OSSwapInt64((uint64_t)x)));
}
static __inline__ __attribute__((deprecated))
float
NXSwapBigFloatToHost(
    NXSwappedFloat x
)
{
    return NXConvertSwappedFloatToHost((NXSwappedFloat)(__builtin_constant_p((uint32_t)x) ? ((__uint32_t)((((__uint32_t)((uint32_t)x) & 0xff000000U) >> 24) | (((__uint32_t)((uint32_t)x) & 0x00ff0000U) >> 8) | (((__uint32_t)((uint32_t)x) & 0x0000ff00U) << 8) | (((__uint32_t)((uint32_t)x) & 0x000000ffU) << 24))) : _OSSwapInt32((uint32_t)x)));
}
static __inline__ __attribute__((deprecated))
unsigned short
NXSwapHostShortToBig(
    unsigned short x
)
{
    return (unsigned short)((__uint16_t)(__builtin_constant_p((uint16_t)x) ? ((__uint16_t)((((__uint16_t)((uint16_t)x) & 0xff00U) >> 8) | (((__uint16_t)((uint16_t)x) & 0x00ffU) << 8))) : _OSSwapInt16((uint16_t)x)));
}
static __inline__ __attribute__((deprecated))
unsigned int
NXSwapHostIntToBig(
    unsigned int x
)
{
    return (unsigned int)(__builtin_constant_p((uint32_t)x) ? ((__uint32_t)((((__uint32_t)((uint32_t)x) & 0xff000000U) >> 24) | (((__uint32_t)((uint32_t)x) & 0x00ff0000U) >> 8) | (((__uint32_t)((uint32_t)x) & 0x0000ff00U) << 8) | (((__uint32_t)((uint32_t)x) & 0x000000ffU) << 24))) : _OSSwapInt32((uint32_t)x));
}
static __inline__ __attribute__((deprecated))
unsigned long
NXSwapHostLongToBig(
    unsigned long x
)
{
    return (unsigned long)(__builtin_constant_p((uint32_t)x) ? ((__uint32_t)((((__uint32_t)((uint32_t)x) & 0xff000000U) >> 24) | (((__uint32_t)((uint32_t)x) & 0x00ff0000U) >> 8) | (((__uint32_t)((uint32_t)x) & 0x0000ff00U) << 8) | (((__uint32_t)((uint32_t)x) & 0x000000ffU) << 24))) : _OSSwapInt32((uint32_t)x));
}
static __inline__ __attribute__((deprecated))
unsigned long long
NXSwapHostLongLongToBig(
    unsigned long long x
)
{
    return (unsigned long long)(__builtin_constant_p((uint64_t)x) ? ((__uint64_t)((((__uint64_t)((uint64_t)x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)((uint64_t)x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)((uint64_t)x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)((uint64_t)x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)((uint64_t)x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)((uint64_t)x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)((uint64_t)x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)((uint64_t)x) & 0x00000000000000ffULL) << 56))) : _OSSwapInt64((uint64_t)x));
}
static __inline__ __attribute__((deprecated))
NXSwappedDouble
NXSwapHostDoubleToBig(
    double x
)
{
    return (NXSwappedDouble)(__builtin_constant_p((uint64_t)NXConvertHostDoubleToSwapped(x)) ? ((__uint64_t)((((__uint64_t)((uint64_t)NXConvertHostDoubleToSwapped(x)) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)((uint64_t)NXConvertHostDoubleToSwapped(x)) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)((uint64_t)NXConvertHostDoubleToSwapped(x)) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)((uint64_t)NXConvertHostDoubleToSwapped(x)) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)((uint64_t)NXConvertHostDoubleToSwapped(x)) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)((uint64_t)NXConvertHostDoubleToSwapped(x)) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)((uint64_t)NXConvertHostDoubleToSwapped(x)) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)((uint64_t)NXConvertHostDoubleToSwapped(x)) & 0x00000000000000ffULL) << 56))) : _OSSwapInt64((uint64_t)NXConvertHostDoubleToSwapped(x)));
}
static __inline__ __attribute__((deprecated))
NXSwappedFloat
NXSwapHostFloatToBig(
    float x
)
{
    return (NXSwappedFloat)(__builtin_constant_p((uint32_t)NXConvertHostFloatToSwapped(x)) ? ((__uint32_t)((((__uint32_t)((uint32_t)NXConvertHostFloatToSwapped(x)) & 0xff000000U) >> 24) | (((__uint32_t)((uint32_t)NXConvertHostFloatToSwapped(x)) & 0x00ff0000U) >> 8) | (((__uint32_t)((uint32_t)NXConvertHostFloatToSwapped(x)) & 0x0000ff00U) << 8) | (((__uint32_t)((uint32_t)NXConvertHostFloatToSwapped(x)) & 0x000000ffU) << 24))) : _OSSwapInt32((uint32_t)NXConvertHostFloatToSwapped(x)));
}
static __inline__ __attribute__((deprecated))
unsigned short
NXSwapLittleShortToHost(
    unsigned short x
)
{
    return (unsigned short)((uint16_t)((uint16_t)x));
}
static __inline__ __attribute__((deprecated))
unsigned int
NXSwapLittleIntToHost(
    unsigned int x
)
{
    return (unsigned int)((uint32_t)((uint32_t)x));
}
static __inline__ __attribute__((deprecated))
unsigned long
NXSwapLittleLongToHost(
    unsigned long x
)
{
    return (unsigned long)((uint32_t)((uint32_t)x));
}
static __inline__ __attribute__((deprecated))
unsigned long long
NXSwapLittleLongLongToHost(
    unsigned long long x
)
{
    return (unsigned long long)((uint64_t)((uint64_t)x));
}
static __inline__ __attribute__((deprecated))
double
NXSwapLittleDoubleToHost(
    NXSwappedDouble x
)
{
    return NXConvertSwappedDoubleToHost((NXSwappedDouble)((uint64_t)((uint64_t)x)));
}
static __inline__ __attribute__((deprecated))
float
NXSwapLittleFloatToHost(
    NXSwappedFloat x
)
{
    return NXConvertSwappedFloatToHost((NXSwappedFloat)((uint32_t)((uint32_t)x)));
}
static __inline__ __attribute__((deprecated))
unsigned short
NXSwapHostShortToLittle(
    unsigned short x
)
{
    return (unsigned short)((uint16_t)((uint16_t)x));
}
static __inline__ __attribute__((deprecated))
unsigned int
NXSwapHostIntToLittle(
    unsigned int x
)
{
    return (unsigned int)((uint32_t)((uint32_t)x));
}
static __inline__ __attribute__((deprecated))
unsigned long
NXSwapHostLongToLittle(
    unsigned long x
)
{
    return (unsigned long)((uint32_t)((uint32_t)x));
}
static __inline__ __attribute__((deprecated))
unsigned long long
NXSwapHostLongLongToLittle(
    unsigned long long x
)
{
    return (unsigned long long)((uint64_t)((uint64_t)x));
}
static __inline__ __attribute__((deprecated))
NXSwappedDouble
NXSwapHostDoubleToLittle(
    double x
)
{
    return (NXSwappedDouble)((uint64_t)((uint64_t)NXConvertHostDoubleToSwapped(x)));
}
static __inline__ __attribute__((deprecated))
NXSwappedFloat
NXSwapHostFloatToLittle(
    float x
)
{
    return (NXSwappedFloat)((uint32_t)((uint32_t)NXConvertHostFloatToSwapped(x)));
}
struct mach_header {
 uint32_t magic;
 int32_t cputype;
 int32_t cpusubtype;
 uint32_t filetype;
 uint32_t ncmds;
 uint32_t sizeofcmds;
 uint32_t flags;
};
struct mach_header_64 {
 uint32_t magic;
 int32_t cputype;
 int32_t cpusubtype;
 uint32_t filetype;
 uint32_t ncmds;
 uint32_t sizeofcmds;
 uint32_t flags;
 uint32_t reserved;
};
struct load_command {
 uint32_t cmd;
 uint32_t cmdsize;
};
union lc_str {
 uint32_t offset;
};
struct segment_command {
 uint32_t cmd;
 uint32_t cmdsize;
 char segname[16];
 uint32_t vmaddr;
 uint32_t vmsize;
 uint32_t fileoff;
 uint32_t filesize;
 int32_t maxprot;
 int32_t initprot;
 uint32_t nsects;
 uint32_t flags;
};
struct segment_command_64 {
 uint32_t cmd;
 uint32_t cmdsize;
 char segname[16];
 uint64_t vmaddr;
 uint64_t vmsize;
 uint64_t fileoff;
 uint64_t filesize;
 int32_t maxprot;
 int32_t initprot;
 uint32_t nsects;
 uint32_t flags;
};
struct section {
 char sectname[16];
 char segname[16];
 uint32_t addr;
 uint32_t size;
 uint32_t offset;
 uint32_t align;
 uint32_t reloff;
 uint32_t nreloc;
 uint32_t flags;
 uint32_t reserved1;
 uint32_t reserved2;
};
struct section_64 {
 char sectname[16];
 char segname[16];
 uint64_t addr;
 uint64_t size;
 uint32_t offset;
 uint32_t align;
 uint32_t reloff;
 uint32_t nreloc;
 uint32_t flags;
 uint32_t reserved1;
 uint32_t reserved2;
 uint32_t reserved3;
};
struct fvmlib {
 union lc_str name;
 uint32_t minor_version;
 uint32_t header_addr;
};
struct fvmlib_command {
 uint32_t cmd;
 uint32_t cmdsize;
 struct fvmlib fvmlib;
};
struct dylib {
    union lc_str name;
    uint32_t timestamp;
    uint32_t current_version;
    uint32_t compatibility_version;
};
struct dylib_command {
 uint32_t cmd;
 uint32_t cmdsize;
 struct dylib dylib;
};
struct dylib_use_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t nameoff;
    uint32_t marker;
    uint32_t current_version;
    uint32_t compat_version;
    uint32_t flags;
};
struct sub_framework_command {
 uint32_t cmd;
 uint32_t cmdsize;
 union lc_str umbrella;
};
struct sub_client_command {
 uint32_t cmd;
 uint32_t cmdsize;
 union lc_str client;
};
struct sub_umbrella_command {
 uint32_t cmd;
 uint32_t cmdsize;
 union lc_str sub_umbrella;
};
struct sub_library_command {
 uint32_t cmd;
 uint32_t cmdsize;
 union lc_str sub_library;
};
struct prebound_dylib_command {
 uint32_t cmd;
 uint32_t cmdsize;
 union lc_str name;
 uint32_t nmodules;
 union lc_str linked_modules;
};
struct dylinker_command {
 uint32_t cmd;
 uint32_t cmdsize;
 union lc_str name;
};
struct thread_command {
 uint32_t cmd;
 uint32_t cmdsize;
};
struct routines_command {
 uint32_t cmd;
 uint32_t cmdsize;
 uint32_t init_address;
 uint32_t init_module;
 uint32_t reserved1;
 uint32_t reserved2;
 uint32_t reserved3;
 uint32_t reserved4;
 uint32_t reserved5;
 uint32_t reserved6;
};
struct routines_command_64 {
 uint32_t cmd;
 uint32_t cmdsize;
 uint64_t init_address;
 uint64_t init_module;
 uint64_t reserved1;
 uint64_t reserved2;
 uint64_t reserved3;
 uint64_t reserved4;
 uint64_t reserved5;
 uint64_t reserved6;
};
struct symtab_command {
 uint32_t cmd;
 uint32_t cmdsize;
 uint32_t symoff;
 uint32_t nsyms;
 uint32_t stroff;
 uint32_t strsize;
};
struct dysymtab_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t ilocalsym;
    uint32_t nlocalsym;
    uint32_t iextdefsym;
    uint32_t nextdefsym;
    uint32_t iundefsym;
    uint32_t nundefsym;
    uint32_t tocoff;
    uint32_t ntoc;
    uint32_t modtaboff;
    uint32_t nmodtab;
    uint32_t extrefsymoff;
    uint32_t nextrefsyms;
    uint32_t indirectsymoff;
    uint32_t nindirectsyms;
    uint32_t extreloff;
    uint32_t nextrel;
    uint32_t locreloff;
    uint32_t nlocrel;
};
struct dylib_table_of_contents {
    uint32_t symbol_index;
    uint32_t module_index;
};
struct dylib_module {
    uint32_t module_name;
    uint32_t iextdefsym;
    uint32_t nextdefsym;
    uint32_t irefsym;
    uint32_t nrefsym;
    uint32_t ilocalsym;
    uint32_t nlocalsym;
    uint32_t iextrel;
    uint32_t nextrel;
    uint32_t iinit_iterm;
    uint32_t ninit_nterm;
    uint32_t
 objc_module_info_addr;
    uint32_t
 objc_module_info_size;
};
struct dylib_module_64 {
    uint32_t module_name;
    uint32_t iextdefsym;
    uint32_t nextdefsym;
    uint32_t irefsym;
    uint32_t nrefsym;
    uint32_t ilocalsym;
    uint32_t nlocalsym;
    uint32_t iextrel;
    uint32_t nextrel;
    uint32_t iinit_iterm;
    uint32_t ninit_nterm;
    uint32_t
        objc_module_info_size;
    uint64_t
        objc_module_info_addr;
};
struct dylib_reference {
    uint32_t isym:24,
        flags:8;
};
struct twolevel_hints_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t offset;
    uint32_t nhints;
};
struct twolevel_hint {
    uint32_t
 isub_image:8,
 itoc:24;
};
struct prebind_cksum_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t cksum;
};
struct uuid_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint8_t uuid[16];
};
struct rpath_command {
    uint32_t cmd;
    uint32_t cmdsize;
    union lc_str path;
};
struct linkedit_data_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t dataoff;
    uint32_t datasize;
};
struct encryption_info_command {
   uint32_t cmd;
   uint32_t cmdsize;
   uint32_t cryptoff;
   uint32_t cryptsize;
   uint32_t cryptid;
};
struct encryption_info_command_64 {
   uint32_t cmd;
   uint32_t cmdsize;
   uint32_t cryptoff;
   uint32_t cryptsize;
   uint32_t cryptid;
   uint32_t pad;
};
struct version_min_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t version;
    uint32_t sdk;
};
struct build_version_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t platform;
    uint32_t minos;
    uint32_t sdk;
    uint32_t ntools;
};
struct build_tool_version {
    uint32_t tool;
    uint32_t version;
};
struct dyld_info_command {
   uint32_t cmd;
   uint32_t cmdsize;
    uint32_t rebase_off;
    uint32_t rebase_size;
    uint32_t bind_off;
    uint32_t bind_size;
    uint32_t weak_bind_off;
    uint32_t weak_bind_size;
    uint32_t lazy_bind_off;
    uint32_t lazy_bind_size;
    uint32_t export_off;
    uint32_t export_size;
};
struct linker_option_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t count;
};
struct symseg_command {
 uint32_t cmd;
 uint32_t cmdsize;
 uint32_t offset;
 uint32_t size;
};
struct ident_command {
 uint32_t cmd;
 uint32_t cmdsize;
};
struct fvmfile_command {
 uint32_t cmd;
 uint32_t cmdsize;
 union lc_str name;
 uint32_t header_addr;
};
struct entry_point_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint64_t entryoff;
    uint64_t stacksize;
};
struct source_version_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint64_t version;
};
struct data_in_code_entry {
    uint32_t offset;
    uint16_t length;
    uint16_t kind;
};
struct tlv_descriptor
{
 void* (*thunk)(struct tlv_descriptor*);
 unsigned long key;
 unsigned long offset;
};
struct note_command {
    uint32_t cmd;
    uint32_t cmdsize;
    char data_owner[16];
    uint64_t offset;
    uint64_t size;
};
struct fileset_entry_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint64_t vmaddr;
    uint64_t fileoff;
    union lc_str entry_id;
    uint32_t reserved;
};

typedef int load_return_t;
typedef struct _load_result {
 user_addr_t mach_header;
 user_addr_t entry_point;
 user_addr_t user_stack;
 mach_vm_size_t user_stack_size;
 user_addr_t user_stack_alloc;
 mach_vm_size_t user_stack_alloc_size;
 mach_vm_address_t all_image_info_addr;
 mach_vm_size_t all_image_info_size;
 int thread_count;
 unsigned int
     unixproc : 1,
     needs_dynlinker : 1,
     dynlinker : 1,
     validentry : 1,
     has_pagezero : 1,
     using_lcmain : 1,
     legacy_footprint : 1,
 is_64bit_addr : 1,
     is_64bit_data : 1,
     custom_stack : 1,
     is_cambria : 1;
 unsigned int csflags;
 unsigned char uuid[16];
 mach_vm_address_t min_vm_addr;
 mach_vm_address_t max_vm_addr;
 unsigned int platform_binary;
 off_t cs_end_offset;
 void *threadstate;
 size_t threadstate_sz;
 uint32_t ip_platform;
 uint32_t lr_min_sdk;
 uint32_t lr_sdk;
 user_addr_t dynlinker_mach_header;
 user_addr_t dynlinker_max_vm_addr;
 int dynlinker_fd;
} load_result_t;
struct image_params;
load_return_t load_machfile(
 struct image_params *imgp,
 struct mach_header *header,
 thread_t thread,
 vm_map_t *mapp,
 load_result_t *result);
load_return_t
validate_potential_simulator_binary(
 cpu_type_t exectype,
 struct image_params *imgp,
 off_t file_offset,
 off_t macho_size);
struct fat_header {
 uint32_t magic;
 uint32_t nfat_arch;
};
struct fat_arch {
 int32_t cputype;
 int32_t cpusubtype;
 uint32_t offset;
 uint32_t size;
 uint32_t align;
};
struct fat_arch_64 {
 int32_t cputype;
 int32_t cpusubtype;
 uint64_t offset;
 uint64_t size;
 uint32_t align;
 uint32_t reserved;
};
load_return_t fatfile_validate_fatarches(vm_offset_t data_ptr, vm_size_t data_size);
load_return_t fatfile_getbestarch(vm_offset_t data_ptr, vm_size_t data_size, struct image_params *imgp, struct fat_arch *archret, _Bool affinity);
load_return_t fatfile_getbestarch_for_cputype(cpu_type_t cputype, cpu_subtype_t cpusubtype,
    vm_offset_t data_ptr, vm_size_t data_size, struct image_params *imgp, struct fat_arch *archret);
load_return_t fatfile_getarch_with_bits(integer_t archbits,
    vm_offset_t data_ptr, vm_size_t data_size, struct fat_arch *archret);
extern task_t current_task(void);
extern void task_reference(task_t task);
extern _Bool task_is_driver(task_t task);
extern task_t kernel_task;
extern void task_deallocate(
 task_t task);
extern void task_name_deallocate(
 task_name_t task_name);
extern void task_policy_set_deallocate(
 task_policy_set_t task_policy_set);
extern void task_policy_get_deallocate(
 task_policy_get_t task_policy_get);
extern void task_inspect_deallocate(
 task_inspect_t task_inspect);
extern void task_read_deallocate(
 task_read_t task_read);
extern void task_suspension_token_deallocate(
 task_suspension_token_t token);
extern boolean_t task_self_region_footprint(void);
extern void task_self_region_footprint_set(boolean_t newval);
extern void task_ledgers_footprint(ledger_t ledger,
    ledger_amount_t *ledger_resident,
    ledger_amount_t *ledger_compressed);
extern void task_set_memory_ownership_transfer(
 task_t task,
 boolean_t value);

struct trust_cache_entry1 {
 uint8_t cdhash[CS_CDHASH_LEN];
 uint8_t hash_type;
 uint8_t flags;
} __attribute__((__packed__));
struct trust_cache_module1 {
 uint32_t version;
 uuid_t uuid;
 uint32_t num_entries;
 struct trust_cache_entry1 entries[];
} __attribute__((__packed__));

struct pager_struct {
 boolean_t is_device;
};
typedef struct pager_struct *vm_pager_t;
typedef struct pager_file {
 queue_chain_t pf_chain;
 struct vnode *pf_vp;
 u_int pf_count;
 u_char *pf_bmap;
 long pf_npgs;
 long pf_pfree;
 long pf_lowat;
 long pf_hipage;
 long pf_hint;
 char *pf_name;
 boolean_t pf_prefer;
 int pf_index;
 void * pf_lock;
} *pager_file_t;
struct bs_map {
 struct vnode *vp;
 void *bs;
};
extern struct bs_map bs_port_table[];
typedef struct {
 unsigned int index:8;
 unsigned int offset:24;
} pf_entry;
typedef enum {
 IS_INODE,
 IS_RNODE
} vpager_fstype;
typedef struct vstruct {
 boolean_t is_device;
 pager_file_t vs_pf;
 pf_entry **vs_pmap;
 unsigned int
                 vs_swapfile:1;
 short vs_count;
 int vs_size;
 struct vnode *vs_vp;
} *vnode_pager_t;
typedef kern_return_t mach_error_t;
typedef mach_error_t (* mach_error_fn_t)( void );
typedef kern_return_t IOReturn;
extern pmap_t pmap_create_options(ledger_t ledger, vm_map_size_t size,
    unsigned int flags);
extern int get_map_nentries(vm_map_t);
extern kern_return_t memory_object_signed(memory_object_control_t control,
    boolean_t is_signed);
static const load_result_t load_result_null = {
 .mach_header = ((mach_vm_offset_t) 0),
 .entry_point = ((mach_vm_offset_t) 0),
 .user_stack = ((mach_vm_offset_t) 0),
 .user_stack_size = 0,
 .user_stack_alloc = ((mach_vm_offset_t) 0),
 .user_stack_alloc_size = 0,
 .all_image_info_addr = ((mach_vm_offset_t) 0),
 .all_image_info_size = 0,
 .thread_count = 0,
 .unixproc = 0,
 .dynlinker = 0,
 .needs_dynlinker = 0,
 .validentry = 0,
 .using_lcmain = 0,
 .is_64bit_addr = 0,
 .is_64bit_data = 0,
 .custom_stack = 0,
 .csflags = 0,
 .has_pagezero = 0,
 .uuid = { 0 },
 .min_vm_addr = ((mach_vm_offset_t) ((user_addr_t) 0x00007FFFFFE00000ULL)),
 .max_vm_addr = ((mach_vm_offset_t) 0),
 .cs_end_offset = 0,
 .threadstate = ((void *)0),
 .threadstate_sz = 0,
 .is_cambria = 0,
 .dynlinker_mach_header = ((mach_vm_offset_t) 0),
 .dynlinker_fd = -1,
};
static load_return_t
parse_machfile(
 struct vnode *vp,
 vm_map_t map,
 thread_t thread,
 struct mach_header *header,
 off_t file_offset,
 off_t macho_size,
 int depth,
 int64_t slide,
 int64_t dyld_slide,
 load_result_t *result,
 load_result_t *binresult,
 struct image_params *imgp
 );
static load_return_t
load_segment(
 struct load_command *lcp,
 uint32_t filetype,
 void *control,
 off_t pager_offset,
 off_t macho_size,
 struct vnode *vp,
 vm_map_t map,
 int64_t slide,
 load_result_t *result,
 struct image_params *imgp
 );
static load_return_t
load_uuid(
 struct uuid_command *uulp,
 char *command_end,
 load_result_t *result
 );
static load_return_t
load_version(
 struct version_min_command *vmc,
 boolean_t *found_version_cmd,
 int ip_flags,
 load_result_t *result
 );
static load_return_t
load_code_signature(
 struct linkedit_data_command *lcp,
 struct vnode *vp,
 off_t macho_offset,
 off_t macho_size,
 cpu_type_t cputype,
 cpu_subtype_t cpusubtype,
 load_result_t *result,
 struct image_params *imgp);
static
load_return_t
load_main(
 struct entry_point_command *epc,
 thread_t thread,
 int64_t slide,
 load_result_t *result
 );
static
load_return_t
setup_driver_main(
 thread_t thread,
 int64_t slide,
 load_result_t *result
 );
static load_return_t
load_unixthread(
 struct thread_command *tcp,
 thread_t thread,
 int64_t slide,
 boolean_t is_x86_64_compat_binary,
 load_result_t *result
 );
static load_return_t
load_threadstate(
 thread_t thread,
 uint32_t *ts,
 uint32_t total_size,
 load_result_t *
 );
static load_return_t
load_threadstack(
 thread_t thread,
 uint32_t *ts,
 uint32_t total_size,
 mach_vm_offset_t *user_stack,
 int *customstack,
 boolean_t is_x86_64_compat_binary,
 load_result_t *result
 );
static load_return_t
load_threadentry(
 thread_t thread,
 uint32_t *ts,
 uint32_t total_size,
 mach_vm_offset_t *entry_point
 );
static load_return_t
load_dylinker(
 struct dylinker_command *lcp,
 integer_t archbits,
 vm_map_t map,
 thread_t thread,
 int depth,
 int64_t slide,
 load_result_t *result,
 struct image_params *imgp
 );
extern int bootarg_no32exec;
static boolean_t
check_if_simulator_binary(
 struct image_params *imgp,
 off_t file_offset,
 off_t macho_size);
struct macho_data;
static load_return_t
get_macho_vnode(
 const char *path,
 integer_t archbits,
 struct mach_header *mach_header,
 off_t *file_offset,
 off_t *macho_size,
 struct macho_data *macho_data,
 struct vnode **vpp,
 struct image_params *imgp
 );
static inline void
widen_segment_command(const struct segment_command *scp32,
    struct segment_command_64 *scp)
{
 scp->cmd = scp32->cmd;
 scp->cmdsize = scp32->cmdsize;
 __builtin___memmove_chk (scp->segname, scp32->segname, sizeof(scp->segname), __builtin_object_size (scp->segname, 0));
 scp->vmaddr = scp32->vmaddr;
 scp->vmsize = scp32->vmsize;
 scp->fileoff = scp32->fileoff;
 scp->filesize = scp32->filesize;
 scp->maxprot = scp32->maxprot;
 scp->initprot = scp32->initprot;
 scp->nsects = scp32->nsects;
 scp->flags = scp32->flags;
}
static void
note_all_image_info_section(const struct segment_command_64 *scp,
    boolean_t is64, size_t section_size, const void *sections,
    int64_t slide, load_result_t *result)
{
 const union {
  struct section s32;
  struct section_64 s64;
 } *sectionp;
 unsigned int i;
 if (strncmp(scp->segname, "__DATA_DIRTY", sizeof(scp->segname)) != 0 &&
     strncmp(scp->segname, "__DATA", sizeof(scp->segname)) != 0) {
  return;
 }
 for (i = 0; i < scp->nsects; ++i) {
  sectionp = (const void *)
      ((const char *)sections + section_size * i);
  if (0 == strncmp(sectionp->s64.sectname, "__all_image_info",
      sizeof(sectionp->s64.sectname))) {
   result->all_image_info_addr =
       is64 ? sectionp->s64.addr : sectionp->s32.addr;
   result->all_image_info_addr += slide;
   result->all_image_info_size =
       is64 ? sectionp->s64.size : sectionp->s32.size;
   return;
  }
 }
}
const int fourk_binary_compatibility_unsafe = 1;
const int fourk_binary_compatibility_allow_wx = 0;
load_return_t
load_machfile(
 struct image_params *imgp,
 struct mach_header *header,
 thread_t thread,
 vm_map_t *mapp,
 load_result_t *result
 )
{
 struct vnode *vp = imgp->ip_vp;
 off_t file_offset = imgp->ip_arch_offset;
 off_t macho_size = imgp->ip_arch_size;
 off_t total_size = 0;
 off_t file_size = imgp->ip_vattr->va_data_size;
 pmap_t pmap = 0;
 vm_map_t map;
 load_result_t myresult;
 load_return_t lret;
 boolean_t enforce_hard_pagezero = 1;
 int in_exec = (imgp->ip_flags & 0x00000100);
 task_t task = current_task();
 int64_t aslr_page_offset = 0;
 int64_t dyld_aslr_page_offset = 0;
 int64_t aslr_section_size = 0;
 int64_t aslr_section_offset = 0;
 kern_return_t kret;
 unsigned int pmap_flags = 0;
 if (__os_warn_unused(__builtin_add_overflow((file_offset), (macho_size), (&total_size))) ||
     total_size > file_size) {
  return 2;
 }
 result->is_64bit_addr = ((imgp->ip_flags & 0x00000008) == 0x00000008);
 result->is_64bit_data = ((imgp->ip_flags & 0x00000400) == 0x00000400);
 pmap_flags |= result->is_64bit_addr ? PMAP_CREATE_64BIT : 0;
 task_t ledger_task;
 if (imgp->ip_new_thread) {
  ledger_task = get_threadtask(imgp->ip_new_thread);
 } else {
  ledger_task = task;
 }
 pmap = pmap_create_options(get_task_ledger(ledger_task),
     (vm_map_size_t) 0,
     pmap_flags);
 if (pmap == ((void *)0)) {
  return 7;
 }
 map = vm_map_create(pmap,
     0,
     vm_compute_max_offset(result->is_64bit_addr),
     1);
 if (result->is_64bit_addr) {
  vm_map_set_page_shift(map, SIXTEENK_PAGE_SHIFT);
 } else {
  vm_map_set_page_shift(map, page_shift_user32);
 }
 if (!cs_process_global_enforcement() && (header->flags & 0x20000)) {
  vm_map_disable_NX(map);
 }
 if ((header->flags & 0x1000000) && !(imgp->ip_flags & 0x00000040)) {
  vm_map_disallow_data_exec(map);
 }
 if (!(imgp->ip_flags & 0x00000020)) {
  vm_map_get_max_aslr_slide_section(map, &aslr_section_offset, &aslr_section_size);
  aslr_section_offset = (random() % aslr_section_offset) * aslr_section_size;
  aslr_page_offset = random();
  aslr_page_offset %= vm_map_get_max_aslr_slide_pages(map);
  aslr_page_offset <<= vm_map_page_shift(map);
  dyld_aslr_page_offset = random();
  dyld_aslr_page_offset %= vm_map_get_max_loader_aslr_slide_pages(map);
  dyld_aslr_page_offset <<= vm_map_page_shift(map);
  aslr_page_offset += aslr_section_offset;
 }
 if (vm_map_page_shift(map) < (int)12) {
  DEBUG4K_LOAD("slide=0x%llx dyld_slide=0x%llx\n", aslr_page_offset, dyld_aslr_page_offset);
 }
 if (!result) {
  result = &myresult;
 }
 *result = load_result_null;
 result->is_64bit_addr = ((imgp->ip_flags & 0x00000008) == 0x00000008);
 result->is_64bit_data = ((imgp->ip_flags & 0x00000400) == 0x00000400);
 lret = parse_machfile(vp, map, thread, header, file_offset, macho_size,
     0, aslr_page_offset, dyld_aslr_page_offset, result,
     ((void *)0), imgp);
 if (lret != 0) {
  vm_map_deallocate(map);
  return lret;
 }
 if (!result->is_64bit_addr) {
  enforce_hard_pagezero = 0;
 }
 if (result->is_64bit_addr &&
     (imgp->ip_flags & 0x00000200)) {
  int random_bits;
  vm_map_offset_t high_start;
  random_bits = random();
  random_bits &= (1 << 8) - 1;
  high_start = (((vm_map_offset_t)random_bits)
          << 27);
  vm_map_set_high_start(map, high_start);
 }
 if (enforce_hard_pagezero &&
     (vm_map_has_hard_pagezero(map, 0x1000) == 0)) {
  if (
   !result->is_64bit_addr &&
   !(header->flags & 0x200000) &&
   (vm_map_page_shift(map) != FOURK_PAGE_SHIFT ||
   12 != FOURK_PAGE_SHIFT) &&
   result->has_pagezero &&
   fourk_binary_compatibility_unsafe) {
  } else
  {
   vm_map_deallocate(map);
   return 2;
  }
 }
 if (enforce_hard_pagezero && result->is_64bit_addr && (header->cputype == (((cpu_type_t) 12) | 0x01000000))) {
  if (vm_map_has_hard_pagezero(map, 0x100000000) == 0) {
   vm_map_deallocate(map);
   return 2;
  }
 }
 vm_commit_pagezero_status(map);
 if (in_exec) {
  proc_t p = vfs_context_proc(imgp->ip_vfs_context);
  kret = task_start_halt(task);
  if (kret != 0) {
   vm_map_deallocate(map);
   return 4;
  }
  proc_transcommit(p, 0);
  workq_mark_exiting(p);
  task_complete_halt(task);
  workq_exit(p);
  task_rollup_accounting_info(get_threadtask(thread), task);
 }
 *mapp = map;
 return 0;
}
int macho_printf = 0;
static boolean_t
pie_required(
 cpu_type_t exectype,
 cpu_subtype_t execsubtype)
{
 switch (exectype) {
 case (((cpu_type_t) 7) | 0x01000000):
  return 0;
 case (((cpu_type_t) 12) | 0x01000000):
  return 1;
 case ((cpu_type_t) 12):
  switch (execsubtype) {
  case ((cpu_subtype_t) 12):
   return 1;
  }
  break;
 }
 return 0;
}
static
load_return_t
parse_machfile(
 struct vnode *vp,
 vm_map_t map,
 thread_t thread,
 struct mach_header *header,
 off_t file_offset,
 off_t macho_size,
 int depth,
 int64_t aslr_offset,
 int64_t dyld_aslr_offset,
 load_result_t *result,
 load_result_t *binresult,
 struct image_params *imgp
 )
{
 uint32_t ncmds;
 struct load_command *lcp;
 struct dylinker_command *dlp = 0;
 void * control;
 load_return_t ret = 0;
 void * addr;
 vm_size_t alloc_size, cmds_size;
 size_t offset;
 size_t oldoffset;
 int pass;
 proc_t p = vfs_context_proc(imgp->ip_vfs_context);
 int error;
 int resid = 0;
 int spawn = (imgp->ip_flags & 0x00000010);
 int vfexec = (imgp->ip_flags & 0x00000080);
 size_t mach_header_sz = sizeof(struct mach_header);
 boolean_t abi64;
 boolean_t got_code_signatures = 0;
 boolean_t found_header_segment = 0;
 boolean_t found_xhdr = 0;
 boolean_t found_version_cmd = 0;
 int64_t slide = 0;
 boolean_t dyld_no_load_addr = 0;
 boolean_t is_dyld = 0;
 vm_map_offset_t effective_page_mask = (4096 - 1);
 uint64_t pagezero_end = 0;
 uint64_t executable_end = 0;
 uint64_t writable_start = 0;
 vm_map_size_t effective_page_size;
 effective_page_mask = vm_map_page_mask(map);
 effective_page_size = vm_map_page_size(map);
 if (header->magic == 0xfeedfacf ||
     header->magic == 0xcffaedfe) {
  mach_header_sz = sizeof(struct mach_header_64);
 }
 if (depth > 2) {
  return 4;
 }
 depth++;
 if (((cpu_type_t)(header->cputype & ~0xff000000) != (cpu_type() & ~0xff000000))
     ) {
  return 1;
 }
 if (!grade_binary(header->cputype,
     header->cpusubtype & ~0xff000000,
     header->cpusubtype & 0xff000000, 1)) {
  return 1;
 }
 abi64 = ((header->cputype & 0x01000000) == 0x01000000);
 switch (header->filetype) {
 case 0x2:
  if (depth != 1 && depth != 3) {
   return 4;
  }
  if (header->flags & 0x4) {
   if (!(header->flags & 0x200000) && pie_required(header->cputype, header->cpusubtype & ~0xff000000)) {
    return 4;
   }
   result->needs_dynlinker = 1;
  } else if (header->cputype == (((cpu_type_t) 7) | 0x01000000)) {
  } else {
   return 4;
  }
  break;
 case 0x7:
  if (depth != 2) {
   return 4;
  }
  is_dyld = 1;
  break;
 default:
  return 4;
 }
 if ((header->flags & 0x200000) || is_dyld) {
  slide = aslr_offset;
 }
 control = ubc_getobject(vp, 0x0000);
 if (__os_warn_unused(__builtin_add_overflow((mach_header_sz), (header->sizeofcmds), (&cmds_size))) ||
     (off_t)cmds_size > macho_size ||
     __os_warn_unused(({ _Bool __ovr = __os_warn_unused(__builtin_add_overflow((cmds_size), ((__typeof__(*&alloc_size))(4096 - 1)), (&alloc_size))); *&alloc_size &= ~((__typeof__(*&alloc_size))(4096 - 1)); __ovr; })) ||
     alloc_size > 2147483647) {
  return 2;
 }
 addr = kalloc(alloc_size);
 if (addr == ((void *)0)) {
  return 5;
 }
 error = vn_rdwr(UIO_READ, vp, addr, (int)alloc_size, file_offset,
     UIO_SYSSPACE, 0, vfs_context_ucred(imgp->ip_vfs_context), &resid, p);
 if (error) {
  kfree(addr, alloc_size);
  return 9;
 }
 if (resid) {
  {
   kfree(addr, alloc_size);
   return 2;
  }
 }
 boolean_t slide_realign = 0;
 if (!abi64) {
  slide_realign = 1;
 }
 for (pass = 0; pass <= 3; pass++) {
  if (pass == 1) {
   boolean_t is_pie;
   int64_t adjust;
   is_pie = ((header->flags & 0x200000) != 0);
   if (pagezero_end != 0 &&
       pagezero_end < effective_page_size) {
    adjust = effective_page_size;
    do { if (macho_printf) { printf ("pagezero boundary at " "0x%llx; adjust slide from " "0x%llx to 0x%llx%s\n", (uint64_t) pagezero_end, slide, slide + adjust, (is_pie ? "" : " BUT NO PIE ****** :-(")); } } while (0);
    if (is_pie) {
     slide += adjust;
     pagezero_end += adjust;
     executable_end += adjust;
     writable_start += adjust;
    }
   }
   if (pagezero_end != 0) {
    result->has_pagezero = 1;
   }
   if (executable_end == writable_start &&
       (executable_end & effective_page_mask) != 0 &&
       (executable_end & FOURK_PAGE_MASK) == 0) {
    adjust =
        (effective_page_size -
        (executable_end & effective_page_mask));
    do { if (macho_printf) { printf ("page-unaligned X-W boundary at " "0x%llx; adjust slide from " "0x%llx to 0x%llx%s\n", (uint64_t) executable_end, slide, slide + adjust, (is_pie ? "" : " BUT NO PIE ****** :-(")); } } while (0);
    if (is_pie) {
     slide += adjust;
    }
   }
   if (dyld_no_load_addr && binresult) {
    mach_vm_address_t max_vm_addr = binresult->max_vm_addr;
    slide = vm_map_round_page(slide + max_vm_addr, effective_page_mask);
   }
  }
  if ((pass == 3) && (thread != ((thread_t) ((void *)0)))) {
   if (depth == 1 && imgp && (imgp->ip_flags & 0x00000800)) {
    if (result->ip_platform == 10) {
     ret = setup_driver_main(thread, slide, result);
    } else {
     ret = 4;
    }
   } else if (!result->using_lcmain && result->validentry == 0) {
    ret = 4;
   }
   if (ret != 0) {
    thread_state_initialize(thread);
    break;
   }
  }
  if ((pass == 3) && (found_header_segment == 0)) {
   ret = 2;
   break;
  }
  offset = mach_header_sz;
  ncmds = header->ncmds;
  while (ncmds--) {
   if (offset + sizeof(struct load_command) > cmds_size) {
    ret = 2;
    break;
   }
   lcp = (struct load_command *)(addr + offset);
   oldoffset = offset;
   if (__os_warn_unused(__builtin_add_overflow((offset), (lcp->cmdsize), (&offset))) ||
       lcp->cmdsize < sizeof(struct load_command) ||
       offset > cmds_size) {
    ret = 2;
    break;
   }
   switch (lcp->cmd) {
   case 0x1: {
    struct segment_command *scp = (struct segment_command *) lcp;
    if (scp->cmdsize < sizeof(*scp)) {
     ret = 2;
     break;
    }
    if (pass == 0) {
     if (is_dyld && scp->vmaddr == 0 && scp->fileoff == 0) {
      dyld_no_load_addr = 1;
      if (!slide_realign) {
       continue;
      }
     }
     ((void)0);
     if (scp->initprot == 0 && scp->maxprot == 0 && scp->vmaddr == 0) {
      if (__os_warn_unused(__extension__({ __typeof(*(&pagezero_end)) _tmp; _Bool _s, _t; _s = __os_warn_unused(__builtin_add_overflow(((scp->vmaddr)), ((scp->vmsize)), (&_tmp))); _t = __os_warn_unused(__builtin_add_overflow(((slide)), (_tmp), ((&pagezero_end)))); _s | _t; })) || pagezero_end > 4294967295U) {
       ret = 2;
       break;
      }
     }
     if (scp->initprot & ((vm_prot_t) 0x04)) {
      if (__os_warn_unused(__extension__({ __typeof(*(&executable_end)) _tmp; _Bool _s, _t; _s = __os_warn_unused(__builtin_add_overflow(((scp->vmaddr)), ((scp->vmsize)), (&_tmp))); _t = __os_warn_unused(__builtin_add_overflow(((slide)), (_tmp), ((&executable_end)))); _s | _t; })) || executable_end > 4294967295U) {
       ret = 2;
       break;
      }
     }
     if (scp->initprot & ((vm_prot_t) 0x02)) {
      if (__os_warn_unused(__builtin_add_overflow((scp->vmaddr), (slide), (&writable_start))) || writable_start > 4294967295U) {
       ret = 2;
       break;
      }
     }
     break;
    }
    if (pass == 1 && !strncmp(scp->segname, "__XHDR", sizeof(scp->segname))) {
     found_xhdr = 1;
    }
    if (pass != 2) {
     break;
    }
    if (abi64) {
     ret = 2;
     break;
    }
    ret = load_segment(lcp,
        header->filetype,
        control,
        file_offset,
        macho_size,
        vp,
        map,
        slide,
        result,
        imgp);
    if (ret == 0 && scp->fileoff == 0 && scp->filesize > 0) {
     if (found_header_segment ||
         ((scp->initprot & (((vm_prot_t) 0x01) | ((vm_prot_t) 0x04))) != (((vm_prot_t) 0x01) | ((vm_prot_t) 0x04)))) {
      ret = 2;
      break;
     }
     found_header_segment = 1;
    }
    break;
   }
   case 0x19: {
    struct segment_command_64 *scp64 = (struct segment_command_64 *) lcp;
    if (scp64->cmdsize < sizeof(*scp64)) {
     ret = 2;
     break;
    }
    if (pass == 0) {
     if (is_dyld && scp64->vmaddr == 0 && scp64->fileoff == 0) {
      dyld_no_load_addr = 1;
     }
     continue;
    }
    if (pass == 1 && !strncmp(scp64->segname, "__XHDR", sizeof(scp64->segname))) {
     found_xhdr = 1;
    }
    if (pass != 2) {
     break;
    }
    if (!abi64) {
     ret = 2;
     break;
    }
    ret = load_segment(lcp,
        header->filetype,
        control,
        file_offset,
        macho_size,
        vp,
        map,
        slide,
        result,
        imgp);
    if (ret == 0 && scp64->fileoff == 0 && scp64->filesize > 0) {
     if (found_header_segment ||
         ((scp64->initprot & (((vm_prot_t) 0x01) | ((vm_prot_t) 0x04))) != (((vm_prot_t) 0x01) | ((vm_prot_t) 0x04)))) {
      ret = 2;
      break;
     }
     found_header_segment = 1;
    }
    break;
   }
   case 0x5: {
    boolean_t is_x86_64_compat_binary = 0;
    if (pass != 1) {
     break;
    }
    ret = load_unixthread(
     (struct thread_command *) lcp,
     thread,
     slide,
     is_x86_64_compat_binary,
     result);
    break;
   }
   case (0x28|0x80000000):
    if (pass != 1) {
     break;
    }
    if (depth != 1) {
     break;
    }
    ret = load_main(
     (struct entry_point_command *) lcp,
     thread,
     slide,
     result);
    break;
   case 0xe:
    if (pass != 3) {
     break;
    }
    if ((depth == 1) && (dlp == 0)) {
     dlp = (struct dylinker_command *)lcp;
    } else {
     ret = 4;
    }
    break;
   case 0x1b:
    if (pass == 1 && depth == 1) {
     ret = load_uuid((struct uuid_command *) lcp,
         (char *)addr + cmds_size,
         result);
    }
    break;
   case 0x1d:
    if (pass != 1) {
     break;
    }
    ret = load_code_signature(
     (struct linkedit_data_command *) lcp,
     vp,
     file_offset,
     macho_size,
     header->cputype,
     header->cpusubtype,
     result,
     imgp);
    if (ret != 0) {
     printf("proc %d: load code signature error %d "
         "for file \"%s\"\n",
         p->p_pid, ret, vp->v_name);
     if (!cs_process_global_enforcement()) {
      ret = 0;
     }
    } else {
     got_code_signatures = 1;
    }
    if (got_code_signatures) {
     unsigned tainted = CS_VALIDATE_TAINTED;
     boolean_t valid = 0;
     vm_size_t off = 0;
     if (cs_debug > 10) {
      printf("validating initial pages of %s\n", vp->v_name);
     }
     while (off < alloc_size && ret == 0) {
      tainted = CS_VALIDATE_TAINTED;
      valid = cs_validate_range(vp,
          ((void *)0),
          file_offset + off,
          addr + off,
          (((4096)<(cmds_size))?(4096):(cmds_size)),
          &tainted);
      if (!valid || (tainted & CS_VALIDATE_TAINTED)) {
       if (cs_debug) {
        printf("CODE SIGNING: %s[%d]: invalid initial page at offset %lld validated:%d tainted:%d csflags:0x%x\n",
            vp->v_name, p->p_pid, (long long)(file_offset + off), valid, tainted, result->csflags);
       }
       if (cs_process_global_enforcement() ||
           (result->csflags & (0x00000100 | 0x00000200 | 0x00001000))) {
        ret = 4;
       }
       result->csflags &= ~0x00000001;
      }
      off += 4096;
     }
    }
    break;
   case 0x25:
   case 0x24:
   case 0x30:
   case 0x2F: {
    struct version_min_command *vmc;
    if (depth != 1 || pass != 0) {
     break;
    }
    vmc = (struct version_min_command *) lcp;
    ret = load_version(vmc, &found_version_cmd, imgp->ip_flags, result);
    break;
   }
   case 0x32: {
    if (depth != 1 || pass != 0) {
     break;
    }
    struct build_version_command* bvc = (struct build_version_command*)lcp;
    if (bvc->cmdsize < sizeof(*bvc)) {
     ret = 2;
     break;
    }
    if (found_version_cmd == 1) {
     ret = 2;
     break;
    }
    result->ip_platform = bvc->platform;
    result->lr_sdk = bvc->sdk;
    result->lr_min_sdk = bvc->minos;
    found_version_cmd = 1;
    break;
   }
   default:
    ret = 0;
    break;
   }
   if (ret != 0) {
    break;
   }
  }
  if (ret != 0) {
   break;
  }
 }
 if (ret == 0) {
  if (!got_code_signatures && cs_process_global_enforcement()) {
   ret = 4;
  }
  if (result->needs_dynlinker && !dlp) {
   ret = 4;
  }
  if ((ret == 0) && (dlp != 0)) {
   ret = load_dylinker(dlp, header->cputype, map, thread, depth,
       dyld_aslr_offset, result, imgp);
  }
  if ((ret == 0) && (depth == 1)) {
   if (result->thread_count == 0) {
    ret = 4;
   }
  }
 }
 if (ret == 2 && found_xhdr) {
  ret = 11;
 }
 kfree(addr, alloc_size);
 return ret;
}
load_return_t
validate_potential_simulator_binary(
 cpu_type_t exectype __attribute__((__unused__)),
 struct image_params *imgp __attribute__((__unused__)),
 off_t file_offset __attribute__((__unused__)),
 off_t macho_size __attribute__((__unused__)))
{
 if (bootarg_no32exec && imgp != ((void *)0) && exectype == ((cpu_type_t) 7)) {
  if (imgp->ip_simulator_binary == 0) {
   boolean_t simulator_binary = check_if_simulator_binary(imgp, file_offset, macho_size);
   imgp->ip_simulator_binary = simulator_binary ? 1 : 2;
  }
  if (imgp->ip_simulator_binary != 1) {
   return 1;
  }
 }
 return 0;
}
static boolean_t
check_if_simulator_binary(
 struct image_params *imgp,
 off_t file_offset,
 off_t macho_size)
{
 struct mach_header *header;
 char *ip_vdata = ((void *)0);
 kauth_cred_t cred = ((void *)0);
 uint32_t ncmds;
 struct load_command *lcp;
 boolean_t simulator_binary = 0;
 void * addr = ((void *)0);
 vm_size_t alloc_size, cmds_size;
 size_t offset;
 proc_t p = current_proc();
 int error;
 int resid = 0;
 size_t mach_header_sz = sizeof(struct mach_header);
 cred = kauth_cred_proc_ref(p);
 ip_vdata = kalloc(4096);
 __builtin___memset_chk (ip_vdata, 0, 4096, __builtin_object_size (ip_vdata, 0));
 if (ip_vdata == ((void *)0)) {
  goto bad;
 }
 error = vn_rdwr(UIO_READ, imgp->ip_vp, ip_vdata,
     4096, file_offset,
     UIO_SYSSPACE, (0x0001 | 0x0008),
     cred, &resid, p);
 if (error) {
  goto bad;
 }
 header = (struct mach_header *)ip_vdata;
 if (header->magic == 0xfeedfacf ||
     header->magic == 0xcffaedfe) {
  mach_header_sz = sizeof(struct mach_header_64);
 }
 if (__os_warn_unused(__builtin_add_overflow((mach_header_sz), (header->sizeofcmds), (&cmds_size))) ||
     (off_t)cmds_size > macho_size ||
     __os_warn_unused(({ _Bool __ovr = __os_warn_unused(__builtin_add_overflow((cmds_size), ((__typeof__(*&alloc_size))(4096 - 1)), (&alloc_size))); *&alloc_size &= ~((__typeof__(*&alloc_size))(4096 - 1)); __ovr; })) ||
     alloc_size > 2147483647) {
  goto bad;
 }
 addr = kalloc(alloc_size);
 if (addr == ((void *)0)) {
  goto bad;
 }
 error = vn_rdwr(UIO_READ, imgp->ip_vp, addr, (int)alloc_size, file_offset,
     UIO_SYSSPACE, 0x0008, cred, &resid, p);
 if (error) {
  goto bad;
 }
 if (resid) {
  goto bad;
 }
 offset = mach_header_sz;
 ncmds = header->ncmds;
 while (ncmds--) {
  if (offset + sizeof(struct load_command) > cmds_size) {
   break;
  }
  lcp = (struct load_command *)(addr + offset);
  if (__os_warn_unused(__builtin_add_overflow((offset), (lcp->cmdsize), (&offset))) ||
      lcp->cmdsize < sizeof(struct load_command) ||
      offset > cmds_size) {
   break;
  }
  switch (lcp->cmd) {
  case 0x30:
   simulator_binary = 1;
   break;
  case 0x32: {
   struct build_version_command *bvc;
   bvc = (struct build_version_command *) lcp;
   if (bvc->cmdsize < sizeof(*bvc)) {
    break;
   }
   if (bvc->platform == 7 ||
       bvc->platform == 9) {
    simulator_binary = 1;
   }
   break;
  }
  case 0x25: {
   simulator_binary = 1;
   break;
  }
  default:
   break;
  }
  if (simulator_binary == 1) {
   break;
  }
 }
bad:
 if (ip_vdata) {
  kfree(ip_vdata, 4096);
 }
 if (cred) {
  kauth_cred_unref(&cred);
 }
 if (addr) {
  kfree(addr, alloc_size);
 }
 return simulator_binary;
}
static load_return_t
unprotect_dsmos_segment(
 __attribute__((__unused__)) uint64_t file_off,
 __attribute__((__unused__)) uint64_t file_size,
 __attribute__((__unused__)) struct vnode *vp,
 __attribute__((__unused__)) off_t macho_offset,
 __attribute__((__unused__)) vm_map_t map,
 __attribute__((__unused__)) vm_map_offset_t map_addr,
 __attribute__((__unused__)) vm_map_size_t map_size)
{
 return 0;
}
static kern_return_t
map_segment(
 vm_map_t map,
 vm_map_offset_t vm_start,
 vm_map_offset_t vm_end,
 memory_object_control_t control,
 vm_map_offset_t file_start,
 vm_map_offset_t file_end,
 vm_prot_t initprot,
 vm_prot_t maxprot,
 load_result_t *result)
{
 vm_map_offset_t cur_offset, cur_start, cur_end;
 kern_return_t ret;
 vm_map_offset_t effective_page_mask;
 vm_map_kernel_flags_t vmk_flags, cur_vmk_flags;
 if (vm_end < vm_start ||
     file_end < file_start) {
  return 2;
 }
 if (vm_end == vm_start ||
     file_end == file_start) {
  return 0;
 }
 effective_page_mask = vm_map_page_mask(map);
 vmk_flags = VM_MAP_KERNEL_FLAGS_NONE;
 if (vm_map_page_aligned(vm_start, effective_page_mask) &&
     vm_map_page_aligned(vm_end, effective_page_mask) &&
     vm_map_page_aligned(file_start, effective_page_mask) &&
     vm_map_page_aligned(file_end, effective_page_mask)) {
 } else {
  vmk_flags.vmkf_fourk = 1;
 }
 cur_offset = 0;
 cur_start = vm_start;
 cur_end = vm_start;
 if (!vm_map_page_aligned(vm_start, effective_page_mask)) {
  cur_end = vm_map_round_page(cur_start, effective_page_mask);
  if (cur_end > vm_end) {
   cur_end = vm_start + (file_end - file_start);
  }
  if (control != ((memory_object_control_t) 0)) {
   vmk_flags.vmkf_no_copy_on_read = 1;
   ret = vm_map_enter_mem_object_control(
    map,
    &cur_start,
    cur_end - cur_start,
    (mach_vm_offset_t)0,
    0x0000,
    vmk_flags,
    VM_KERN_MEMORY_NONE,
    control,
    file_start + cur_offset,
    1,
    initprot, maxprot,
    ((vm_inherit_t) 1));
  } else {
   ret = vm_map_enter_mem_object(
    map,
    &cur_start,
    cur_end - cur_start,
    (mach_vm_offset_t)0,
    0x0000,
    vmk_flags,
    VM_KERN_MEMORY_NONE,
    ((ipc_port_t) ((void *)0)),
    0,
    1,
    initprot, maxprot,
    ((vm_inherit_t) 1));
  }
  if (ret != 0) {
   return 5;
  }
  cur_offset += cur_end - cur_start;
 }
 if (cur_end >= vm_start + (file_end - file_start)) {
  goto done;
 }
 if (vm_map_round_page(cur_end, effective_page_mask) >=
     vm_map_trunc_page(vm_start + (file_end - file_start),
     effective_page_mask)) {
 } else {
  cur_start = cur_end;
  if ((vm_start & effective_page_mask) !=
      (file_start & effective_page_mask)) {
   cur_vmk_flags = vmk_flags;
  } else {
   cur_vmk_flags = VM_MAP_KERNEL_FLAGS_NONE;
  }
  (void) result;
  if (result->is_cambria && (initprot & ((vm_prot_t) 0x04)) == ((vm_prot_t) 0x04)) {
   cur_vmk_flags.vmkf_translated_allow_execute = 1;
  }
  cur_end = vm_map_trunc_page(vm_start + (file_end -
      file_start),
      effective_page_mask);
  if (control != ((memory_object_control_t) 0)) {
   cur_vmk_flags.vmkf_no_copy_on_read = 1;
   ret = vm_map_enter_mem_object_control(
    map,
    &cur_start,
    cur_end - cur_start,
    (mach_vm_offset_t)0,
    0x0000,
    cur_vmk_flags,
    VM_KERN_MEMORY_NONE,
    control,
    file_start + cur_offset,
    1,
    initprot, maxprot,
    ((vm_inherit_t) 1));
  } else {
   ret = vm_map_enter_mem_object(
    map,
    &cur_start,
    cur_end - cur_start,
    (mach_vm_offset_t)0,
    0x0000,
    cur_vmk_flags,
    VM_KERN_MEMORY_NONE,
    ((ipc_port_t) ((void *)0)),
    0,
    1,
    initprot, maxprot,
    ((vm_inherit_t) 1));
  }
  if (ret != 0) {
   return 5;
  }
  cur_offset += cur_end - cur_start;
 }
 if (cur_end >= vm_start + (file_end - file_start)) {
  goto done;
 }
 cur_start = cur_end;
 if (!vm_map_page_aligned(vm_start + (file_end - file_start),
     effective_page_mask)) {
  cur_end = vm_start + (file_end - file_start);
  if (control != ((memory_object_control_t) 0)) {
   vmk_flags.vmkf_no_copy_on_read = 1;
   ret = vm_map_enter_mem_object_control(
    map,
    &cur_start,
    cur_end - cur_start,
    (mach_vm_offset_t)0,
    0x0000,
    vmk_flags,
    VM_KERN_MEMORY_NONE,
    control,
    file_start + cur_offset,
    1,
    initprot, maxprot,
    ((vm_inherit_t) 1));
  } else {
   ret = vm_map_enter_mem_object(
    map,
    &cur_start,
    cur_end - cur_start,
    (mach_vm_offset_t)0,
    0x0000,
    vmk_flags,
    VM_KERN_MEMORY_NONE,
    ((ipc_port_t) ((void *)0)),
    0,
    1,
    initprot, maxprot,
    ((vm_inherit_t) 1));
  }
  if (ret != 0) {
   return 5;
  }
  cur_offset += cur_end - cur_start;
 }
done:
 ((void)0);
 return 0;
}
static
load_return_t
load_segment(
 struct load_command *lcp,
 uint32_t filetype,
 void * control,
 off_t pager_offset,
 off_t macho_size,
 struct vnode *vp,
 vm_map_t map,
 int64_t slide,
 load_result_t *result,
 struct image_params *imgp)
{
 struct segment_command_64 segment_command, *scp;
 kern_return_t ret;
 vm_map_size_t delta_size;
 vm_prot_t initprot;
 vm_prot_t maxprot;
 size_t segment_command_size, total_section_size,
     single_section_size;
 uint64_t file_offset, file_size;
 vm_map_offset_t vm_offset;
 size_t vm_size;
 vm_map_offset_t vm_start, vm_end, vm_end_aligned;
 vm_map_offset_t file_start, file_end;
 kern_return_t kr;
 boolean_t verbose;
 vm_map_size_t effective_page_size;
 vm_map_offset_t effective_page_mask;
 vm_map_kernel_flags_t vmk_flags;
 boolean_t fourk_align;
 (void)imgp;
 effective_page_size = vm_map_page_size(map);
 effective_page_mask = vm_map_page_mask(map);
 verbose = 0;
 if (0x19 == lcp->cmd) {
  segment_command_size = sizeof(struct segment_command_64);
  single_section_size = sizeof(struct section_64);
  fourk_align = 0;
  if (vm_map_page_shift(map) == FOURK_PAGE_SHIFT &&
      12 != FOURK_PAGE_SHIFT) {
   fourk_align = 1;
   verbose = 1;
  }
 } else {
  segment_command_size = sizeof(struct segment_command);
  single_section_size = sizeof(struct section);
  if (effective_page_size != FOURK_PAGE_SIZE) {
   fourk_align = 1;
   verbose = 1;
  } else {
   fourk_align = 0;
  }
 }
 if (lcp->cmdsize < segment_command_size) {
  DEBUG4K_ERROR("LOAD_BADMACHO cmdsize %d < %zu\n", lcp->cmdsize, segment_command_size);
  return 2;
 }
 total_section_size = lcp->cmdsize - segment_command_size;
 if (0x19 == lcp->cmd) {
  scp = (struct segment_command_64 *)lcp;
 } else {
  scp = &segment_command;
  widen_segment_command((struct segment_command *)lcp, scp);
 }
 if (verbose) {
  do { if (macho_printf) { printf ("+++ load_segment %s " "vm[0x%llx:0x%llx] file[0x%llx:0x%llx] " "prot %d/%d flags 0x%x\n", scp->segname, (uint64_t)(slide + scp->vmaddr), (uint64_t)(slide + scp->vmaddr + scp->vmsize), pager_offset + scp->fileoff, pager_offset + scp->fileoff + scp->filesize, scp->initprot, scp->maxprot, scp->flags); } } while (0);
 }
 if (scp->fileoff + scp->filesize < scp->fileoff ||
     scp->fileoff + scp->filesize > (uint64_t)macho_size) {
  DEBUG4K_ERROR("LOAD_BADMACHO fileoff 0x%llx filesize 0x%llx macho_size 0x%llx\n", scp->fileoff, scp->filesize, (uint64_t)macho_size);
  return 2;
 }
 if (total_section_size / single_section_size < scp->nsects) {
  DEBUG4K_ERROR("LOAD_BADMACHO 0x%zx 0x%zx %d\n", total_section_size, single_section_size, scp->nsects);
  return 2;
 }
 if (__os_warn_unused(__builtin_add_overflow((pager_offset), (scp->fileoff), (&file_offset)))) {
  DEBUG4K_ERROR("LOAD_BADMACHO file_offset: 0x%llx + 0x%llx\n", pager_offset, scp->fileoff);
  return 2;
 }
 file_size = scp->filesize;
 if (fourk_align) {
  if ((file_offset & FOURK_PAGE_MASK) != 0) {
   DEBUG4K_ERROR("LOAD_BADMACHO file_offset 0x%llx\n", file_offset);
   return 2;
  }
 } else
 if ((file_offset & (unsigned long long)(4096 - 1)) != 0 ||
     (file_offset & vm_map_page_mask(map)) != 0) {
  DEBUG4K_ERROR("LOAD_BADMACHO file_offset 0x%llx\n", file_offset);
  return 2;
 }
 if (result->cs_end_offset &&
     result->cs_end_offset < (off_t)scp->fileoff &&
     result->cs_end_offset - scp->fileoff < scp->filesize) {
  if (cs_debug) {
   printf("section outside code signature\n");
  }
  DEBUG4K_ERROR("LOAD_BADMACHO end_offset 0x%llx fileoff 0x%llx filesize 0x%llx\n", result->cs_end_offset, scp->fileoff, scp->filesize);
  return 2;
 }
 if (__os_warn_unused(__builtin_add_overflow((scp->vmaddr), (slide), (&vm_offset)))) {
  if (cs_debug) {
   printf("vmaddr too large\n");
  }
  DEBUG4K_ERROR("LOAD_BADMACHO vmaddr 0x%llx slide 0x%llx vm_offset 0x%llx\n", scp->vmaddr, slide, (uint64_t)vm_offset);
  return 2;
 }
 if (scp->vmsize > 18446744073709551615UL) {
  DEBUG4K_ERROR("LOAD_BADMACHO vmsize 0x%llx\n", scp->vmsize);
  return 2;
 }
 vm_size = (size_t)scp->vmsize;
 if (vm_size == 0) {
  return 0;
 }
 if (scp->vmaddr == 0 &&
     file_size == 0 &&
     vm_size != 0 &&
     (scp->initprot & (((vm_prot_t) 0x01)|((vm_prot_t) 0x02)|((vm_prot_t) 0x04))) == ((vm_prot_t) 0x00) &&
     (scp->maxprot & (((vm_prot_t) 0x01)|((vm_prot_t) 0x02)|((vm_prot_t) 0x04))) == ((vm_prot_t) 0x00)) {
  if (map == ((vm_map_t) ((void *)0))) {
   return 0;
  }
  vm_end = (vm_map_offset_t)(vm_offset + vm_size);
  if (vm_end < vm_offset) {
   DEBUG4K_ERROR("LOAD_BADMACHO vm_end 0x%llx vm_offset 0x%llx vm_size 0x%llx\n", (uint64_t)vm_end, (uint64_t)vm_offset, (uint64_t)vm_size);
   return 2;
  }
  if (verbose) {
   do { if (macho_printf) { printf ("++++++ load_segment: " "page_zero up to 0x%llx\n", (uint64_t) vm_end); } } while (0);
  }
  if (fourk_align) {
   vm_end_aligned = vm_map_trunc_page(vm_end,
       effective_page_mask);
  } else
  {
   vm_end = vm_map_round_page(vm_end,
       (unsigned long long)(4096 - 1));
   vm_end_aligned = vm_end;
  }
  ret = vm_map_raise_min_offset(map,
      vm_end_aligned);
  if (ret == 0 &&
      vm_end > vm_end_aligned) {
   ((void)0);
   vmk_flags = VM_MAP_KERNEL_FLAGS_NONE;
   vmk_flags.vmkf_fourk = 1;
   ret = vm_map_enter_mem_object(
    map,
    &vm_end_aligned,
    vm_end - vm_end_aligned,
    (mach_vm_offset_t) 0,
    0x0000,
    vmk_flags,
    VM_KERN_MEMORY_NONE,
    ((ipc_port_t) ((void *)0)),
    0,
    0,
    (scp->initprot & (((vm_prot_t) 0x01)|((vm_prot_t) 0x02)|((vm_prot_t) 0x04))),
    (scp->maxprot & (((vm_prot_t) 0x01)|((vm_prot_t) 0x02)|((vm_prot_t) 0x04))),
    ((vm_inherit_t) 1));
  }
  if (ret != 0) {
   DEBUG4K_ERROR("LOAD_FAILURE ret 0x%x\n", ret);
   return 4;
  }
  return 0;
 } else {
  if (filetype != 0x7 && scp->vmaddr == 0) {
   DEBUG4K_ERROR("LOAD_BADMACHO filetype %d vmaddr 0x%llx\n", filetype, scp->vmaddr);
   return 2;
  }
 }
 if (fourk_align) {
  file_start = vm_map_trunc_page(file_offset,
      FOURK_PAGE_MASK);
  file_end = vm_map_round_page(file_offset + file_size,
      FOURK_PAGE_MASK);
  vm_start = vm_map_trunc_page(vm_offset,
      FOURK_PAGE_MASK);
  vm_end = vm_map_round_page(vm_offset + vm_size,
      FOURK_PAGE_MASK);
  if (file_offset - file_start > FOURK_PAGE_MASK ||
      file_end - file_offset - file_size > FOURK_PAGE_MASK) {
   DEBUG4K_ERROR("LOAD_BADMACHO file_start / file_size wrap "
       "[0x%llx:0x%llx] -> [0x%llx:0x%llx]\n",
       file_offset,
       file_offset + file_size,
       (uint64_t) file_start,
       (uint64_t) file_end);
   return 2;
  }
  if (!strncmp(scp->segname, "__LINKEDIT", 11) &&
      (((file_start) & (4096 - 1)) == 0) &&
      vm_map_page_aligned(file_start, vm_map_page_mask(map)) &&
      (((vm_start) & (4096 - 1)) == 0) &&
      vm_map_page_aligned(vm_start, vm_map_page_mask(map))) {
   file_end = vm_map_round_page(file_end,
       effective_page_mask);
   vm_end = vm_map_round_page(vm_end,
       effective_page_mask);
  }
 } else
 {
  file_start = vm_map_trunc_page(file_offset,
      effective_page_mask);
  file_end = vm_map_round_page(file_offset + file_size,
      effective_page_mask);
  vm_start = vm_map_trunc_page(vm_offset,
      effective_page_mask);
  vm_end = vm_map_round_page(vm_offset + vm_size,
      effective_page_mask);
  if (file_offset - file_start > effective_page_mask ||
      file_end - file_offset - file_size > effective_page_mask) {
   DEBUG4K_ERROR("LOAD_BADMACHO file_start / file_size wrap "
       "[0x%llx:0x%llx] -> [0x%llx:0x%llx]\n",
       file_offset,
       file_offset + file_size,
       (uint64_t) file_start,
       (uint64_t) file_end);
   return 2;
  }
 }
 if (vm_start < result->min_vm_addr) {
  result->min_vm_addr = vm_start;
 }
 if (vm_end > result->max_vm_addr) {
  result->max_vm_addr = vm_end;
 }
 if (map == ((vm_map_t) ((void *)0))) {
  return 0;
 }
 if (vm_size > 0) {
  initprot = (scp->initprot) & (((vm_prot_t) 0x01)|((vm_prot_t) 0x02)|((vm_prot_t) 0x04));
  maxprot = (scp->maxprot) & (((vm_prot_t) 0x01)|((vm_prot_t) 0x02)|((vm_prot_t) 0x04));
  if (verbose) {
   do { if (macho_printf) { printf ("++++++ load_segment: " "mapping at vm [0x%llx:0x%llx] of " "file [0x%llx:0x%llx]\n", (uint64_t) vm_start, (uint64_t) vm_end, (uint64_t) file_start, (uint64_t) file_end); } } while (0);
  }
  ret = map_segment(map,
      vm_start,
      vm_end,
      control,
      file_start,
      file_end,
      initprot,
      maxprot,
      result);
  if (ret) {
   DEBUG4K_ERROR("LOAD_NOSPACE start 0x%llx end 0x%llx ret 0x%x\n", (uint64_t)vm_start, (uint64_t)vm_end, ret);
   return 5;
  }
 }
 if ((vm_end - vm_start) > (file_end - file_start)) {
  delta_size = (vm_end - vm_start) - (file_end - file_start);
 } else {
  delta_size = 0;
 }
 if (delta_size > 0) {
  vm_map_offset_t tmp_start;
  vm_map_offset_t tmp_end;
  if (__os_warn_unused(__builtin_add_overflow((vm_start), (file_end - file_start), (&tmp_start)))) {
   DEBUG4K_ERROR("LOAD_NOSPACE tmp_start: 0x%llx + 0x%llx\n", (uint64_t)vm_start, (uint64_t)(file_end - file_start));
   return 5;
  }
  if (__os_warn_unused(__builtin_add_overflow((tmp_start), (delta_size), (&tmp_end)))) {
   DEBUG4K_ERROR("LOAD_NOSPACE tmp_end: 0x%llx + 0x%llx\n", (uint64_t)tmp_start, (uint64_t)delta_size);
   return 5;
  }
  if (verbose) {
   do { if (macho_printf) { printf ("++++++ load_segment: " "delta mapping vm [0x%llx:0x%llx]\n", (uint64_t) tmp_start, (uint64_t) tmp_end); } } while (0);
  }
  kr = map_segment(map,
      tmp_start,
      tmp_end,
      ((memory_object_control_t) 0),
      0,
      delta_size,
      scp->initprot,
      scp->maxprot,
      result);
  if (kr != 0) {
   DEBUG4K_ERROR("LOAD_NOSPACE 0x%llx 0x%llx kr 0x%x\n", (unsigned long long)tmp_start, (uint64_t)delta_size, kr);
   return 5;
  }
 }
 if ((scp->fileoff == 0) && (scp->filesize != 0)) {
  result->mach_header = vm_offset;
 }
 if (scp->flags & 0x8) {
  ret = unprotect_dsmos_segment(file_start,
      file_end - file_start,
      vp,
      pager_offset,
      map,
      vm_start,
      vm_end - vm_start);
  if (ret != 0) {
   DEBUG4K_ERROR("unprotect 0x%llx 0x%llx ret %d \n", (uint64_t)vm_start, (uint64_t)vm_end, ret);
   return ret;
  }
 } else {
  ret = 0;
 }
 if (0 == ret &&
     filetype == 0x7 &&
     result->all_image_info_addr == ((mach_vm_offset_t) 0)) {
  note_all_image_info_section(scp,
      0x19 == lcp->cmd,
      single_section_size,
      ((const char *)lcp +
      segment_command_size),
      slide,
      result);
 }
 if (result->entry_point != ((mach_vm_offset_t) 0)) {
  if ((result->entry_point >= vm_offset) && (result->entry_point < (vm_offset + vm_size))) {
   if ((scp->initprot & (((vm_prot_t) 0x01) | ((vm_prot_t) 0x04))) == (((vm_prot_t) 0x01) | ((vm_prot_t) 0x04))) {
    result->validentry = 1;
   } else {
    result->validentry = 0;
   }
  }
 }
 if (ret != 0 && verbose) {
  DEBUG4K_ERROR("ret %d\n", ret);
 }
 return ret;
}
static
load_return_t
load_uuid(
 struct uuid_command *uulp,
 char *command_end,
 load_result_t *result
 )
{
 if ((uulp->cmdsize < sizeof(struct uuid_command)) ||
     (((char *)uulp + sizeof(struct uuid_command)) > command_end)) {
  return 2;
 }
 __builtin___memcpy_chk (&result->uuid[0], &uulp->uuid[0], sizeof(result->uuid), __builtin_object_size (&result->uuid[0], 0));
 return 0;
}
static
load_return_t
load_version(
 struct version_min_command *vmc,
 boolean_t *found_version_cmd,
 int ip_flags __attribute__((__unused__)),
 load_result_t *result
 )
{
 uint32_t platform = 0;
 uint32_t sdk;
 uint32_t min_sdk;
 if (vmc->cmdsize < sizeof(*vmc)) {
  return 2;
 }
 if (*found_version_cmd == 1) {
  return 2;
 }
 *found_version_cmd = 1;
 sdk = vmc->sdk;
 min_sdk = vmc->version;
 switch (vmc->cmd) {
 case 0x24:
  platform = 1;
  break;
 case 0x25:
  platform = 7;
  break;
 case 0x30:
  platform = 9;
  break;
 case 0x2F:
  platform = 8;
  break;
 default:
  sdk = (uint32_t)-1;
  min_sdk = (uint32_t)-1;
  __builtin_unreachable();
 }
 result->ip_platform = platform;
 result->lr_min_sdk = min_sdk;
 result->lr_sdk = sdk;
 return 0;
}
static
load_return_t
load_main(
 struct entry_point_command *epc,
 thread_t thread,
 int64_t slide,
 load_result_t *result
 )
{
 mach_vm_offset_t addr;
 kern_return_t ret;
 if (epc->cmdsize < sizeof(*epc)) {
  return 2;
 }
 if (result->thread_count != 0) {
  return 4;
 }
 if (thread == ((thread_t) ((void *)0))) {
  return 0;
 }
 if (epc->stacksize) {
  if (__os_warn_unused(__builtin_add_overflow((epc->stacksize), (4 * 4096), (&result->user_stack_size)))) {
   return 2;
  }
  result->user_stack_size = epc->stacksize;
  if (__os_warn_unused(__builtin_add_overflow((epc->stacksize), (4096), (&result->user_stack_alloc_size)))) {
   return 2;
  }
  result->custom_stack = 1;
 } else {
  result->user_stack_alloc_size = (64*1024*1024);
 }
 ret = thread_userstackdefault(&addr, result->is_64bit_addr);
 if (ret != 0) {
  return 4;
 }
 result->user_stack = (user_addr_t)((mach_vm_offset_t)((user_addr_t)addr - slide) & ~((signed)(4096 - 1)));
 if (result->using_lcmain || result->entry_point != ((mach_vm_offset_t) 0)) {
  return 4;
 }
 result->needs_dynlinker = 1;
 result->using_lcmain = 1;
 ret = thread_state_initialize( thread );
 if (ret != 0) {
  return 4;
 }
 result->unixproc = 1;
 result->thread_count++;
 return 0;
}
static
load_return_t
setup_driver_main(
 thread_t thread,
 int64_t slide,
 load_result_t *result
 )
{
 mach_vm_offset_t addr;
 kern_return_t ret;
 if (thread == ((thread_t) ((void *)0))) {
  return 0;
 }
 result->user_stack_alloc_size = (64*1024*1024);
 ret = thread_userstackdefault(&addr, result->is_64bit_addr);
 if (ret != 0) {
  return 4;
 }
 result->user_stack = (user_addr_t)addr;
 result->user_stack -= slide;
 if (result->using_lcmain || result->entry_point != ((mach_vm_offset_t) 0)) {
  return 4;
 }
 result->needs_dynlinker = 1;
 ret = thread_state_initialize( thread );
 if (ret != 0) {
  return 4;
 }
 result->unixproc = 1;
 result->thread_count++;
 return 0;
}
static
load_return_t
load_unixthread(
 struct thread_command *tcp,
 thread_t thread,
 int64_t slide,
 boolean_t is_x86_64_compat_binary,
 load_result_t *result
 )
{
 load_return_t ret;
 int customstack = 0;
 mach_vm_offset_t addr;
 if (tcp->cmdsize < sizeof(*tcp)) {
  return 2;
 }
 if (result->thread_count != 0) {
  return 4;
 }
 if (thread == ((thread_t) ((void *)0))) {
  return 0;
 }
 ret = load_threadstack(thread,
     (uint32_t *)(((vm_offset_t)tcp) +
     sizeof(struct thread_command)),
     tcp->cmdsize - sizeof(struct thread_command),
     &addr, &customstack, is_x86_64_compat_binary, result);
 if (ret != 0) {
  return ret;
 }
 if (customstack) {
  result->custom_stack = 1;
 } else {
  result->user_stack_alloc_size = (64*1024*1024);
 }
 result->user_stack = (user_addr_t)((mach_vm_offset_t)((user_addr_t)addr - slide) & ~((signed)(4096 - 1)));
 {
  ret = load_threadentry(thread,
      (uint32_t *)(((vm_offset_t)tcp) +
      sizeof(struct thread_command)),
      tcp->cmdsize - sizeof(struct thread_command),
      &addr);
  if (ret != 0) {
   return ret;
  }
  if (result->using_lcmain || result->entry_point != ((mach_vm_offset_t) 0)) {
   return 4;
  }
  result->entry_point = (user_addr_t)addr;
  result->entry_point += slide;
  ret = load_threadstate(thread,
      (uint32_t *)(((vm_offset_t)tcp) + sizeof(struct thread_command)),
      tcp->cmdsize - sizeof(struct thread_command),
      result);
  if (ret != 0) {
   return ret;
  }
 }
 result->unixproc = 1;
 result->thread_count++;
 return 0;
}
static
load_return_t
load_threadstate(
 thread_t thread,
 uint32_t *ts,
 uint32_t total_size,
 load_result_t *result
 )
{
 uint32_t size;
 int flavor;
 uint32_t thread_size;
 uint32_t *local_ts = ((void *)0);
 uint32_t local_ts_size = 0;
 int ret;
 (void)thread;
 if (total_size > 0) {
  local_ts_size = total_size;
  local_ts = kalloc(local_ts_size);
  if (local_ts == ((void *)0)) {
   return 4;
  }
  __builtin___memcpy_chk (local_ts, ts, local_ts_size, __builtin_object_size (local_ts, 0));
  ts = local_ts;
 }
 while (total_size > 0) {
  if (total_size < 2 * sizeof(uint32_t)) {
   return 2;
  }
  flavor = *ts++;
  size = *ts++;
  if (__os_warn_unused(__extension__({ __typeof(*(&thread_size)) _tmp; _Bool _s, _t; _s = __os_warn_unused(__builtin_add_overflow(((size)), ((2)), (&_tmp))); _t = __os_warn_unused(__builtin_mul_overflow(((sizeof(uint32_t))), (_tmp), ((&thread_size)))); _s | _t; })) ||
      __os_warn_unused(__builtin_sub_overflow((total_size), (thread_size), (&total_size)))) {
   ret = 2;
   goto bad;
  }
  ts += size;
 }
 result->threadstate = local_ts;
 result->threadstate_sz = local_ts_size;
 return 0;
bad:
 if (local_ts) {
  kfree(local_ts, local_ts_size);
 }
 return ret;
}
static
load_return_t
load_threadstack(
 thread_t thread,
 uint32_t *ts,
 uint32_t total_size,
 mach_vm_offset_t *user_stack,
 int *customstack,
 __attribute__((__unused__)) boolean_t is_x86_64_compat_binary,
 load_result_t *result
 )
{
 kern_return_t ret;
 uint32_t size;
 int flavor;
 uint32_t stack_size;
 if (total_size == 0) {
  return 2;
 }
 while (total_size > 0) {
  if (total_size < 2 * sizeof(uint32_t)) {
   return 2;
  }
  flavor = *ts++;
  size = *ts++;
  if (4294967295U - 2 < size ||
      4294967295U / sizeof(uint32_t) < size + 2) {
   return 2;
  }
  stack_size = (size + 2) * sizeof(uint32_t);
  if (stack_size > total_size) {
   return 2;
  }
  total_size -= stack_size;
  {
   ret = thread_userstack(thread, flavor, (thread_state_t)ts, size, user_stack, customstack, result->is_64bit_data);
   if (ret != 0) {
    return 4;
   }
  }
  ts += size;
 }
 return 0;
}
static
load_return_t
load_threadentry(
 thread_t thread,
 uint32_t *ts,
 uint32_t total_size,
 mach_vm_offset_t *entry_point
 )
{
 kern_return_t ret;
 uint32_t size;
 int flavor;
 uint32_t entry_size;
 *entry_point = ((mach_vm_offset_t) 0);
 while (total_size > 0) {
  if (total_size < 2 * sizeof(uint32_t)) {
   return 2;
  }
  flavor = *ts++;
  size = *ts++;
  if (4294967295U - 2 < size ||
      4294967295U / sizeof(uint32_t) < size + 2) {
   return 2;
  }
  entry_size = (size + 2) * sizeof(uint32_t);
  if (entry_size > total_size) {
   return 2;
  }
  total_size -= entry_size;
  ret = thread_entrypoint(thread, flavor, (thread_state_t)ts, size, entry_point);
  if (ret != 0) {
   return 4;
  }
  ts += size;
 }
 return 0;
}
struct macho_data {
 struct nameidata __nid;
 union macho_vnode_header {
  struct mach_header mach_header;
  struct fat_header fat_header;
  char __pad[512];
 } __header;
};
static load_return_t
load_dylinker(
 struct dylinker_command *lcp,
 cpu_type_t cputype,
 vm_map_t map,
 thread_t thread,
 int depth,
 int64_t slide,
 load_result_t *result,
 struct image_params *imgp
 )
{
 const char *name;
 struct vnode *vp = ((struct vnode *)((void *)0));
 struct mach_header *header;
 off_t file_offset = 0;
 off_t macho_size = 0;
 load_result_t *myresult;
 kern_return_t ret;
 struct macho_data *macho_data;
 struct {
  struct mach_header __header;
  load_result_t __myresult;
  struct macho_data __macho_data;
 } *dyld_data;
 if (lcp->cmdsize < sizeof(*lcp) || lcp->name.offset >= lcp->cmdsize) {
  return 2;
 }
 name = (const char *)lcp + lcp->name.offset;
 size_t maxsz = lcp->cmdsize - lcp->name.offset;
 size_t namelen = strnlen(name, maxsz);
 if (namelen >= maxsz) {
  return 2;
 }
 if (0 != strcmp(name, "/usr/lib/dyld")) {
  return 2;
 }
 dyld_data = kheap_alloc(KHEAP_TEMP, sizeof(*dyld_data), Z_WAITOK);
 header = &dyld_data->__header;
 myresult = &dyld_data->__myresult;
 macho_data = &dyld_data->__macho_data;
 {
  cputype = (cputype & 0xff000000) | (cpu_type() & ~0xff000000);
 }
 ret = get_macho_vnode(name, cputype, header,
     &file_offset, &macho_size, macho_data, &vp, imgp);
 if (ret) {
  goto novp_out;
 }
 *myresult = load_result_null;
 myresult->is_64bit_addr = result->is_64bit_addr;
 myresult->is_64bit_data = result->is_64bit_data;
 ret = parse_machfile(vp, map, thread, header, file_offset,
     macho_size, depth, slide, 0, myresult, result, imgp);
 if (ret == 0) {
  if (result->threadstate) {
   kfree(result->threadstate, result->threadstate_sz);
  }
  result->threadstate = myresult->threadstate;
  result->threadstate_sz = myresult->threadstate_sz;
  result->dynlinker = 1;
  result->entry_point = myresult->entry_point;
  result->validentry = myresult->validentry;
  result->all_image_info_addr = myresult->all_image_info_addr;
  result->all_image_info_size = myresult->all_image_info_size;
  if (myresult->platform_binary) {
   result->csflags |= 0x02000000;
  }
 }
 struct vnode_attr *va;
 va = kheap_alloc(KHEAP_TEMP, sizeof(*va), Z_WAITOK | Z_ZERO);
 do {(va)->va_supported = (va)->va_active = 0ll; (va)->va_vaflags = 0; } while(0);
 ((va)->va_active |= (1LL<<41));
 ((va)->va_active |= (1LL<<20));
 ((va)->va_active |= (1LL<<17));
 int error = vnode_getattr(vp, va, imgp->ip_vfs_context);
 if (error == 0) {
  imgp->ip_dyld_fsid = vnode_get_va_fsid(va);
  imgp->ip_dyld_fsobjid = va->va_fileid;
 }
 vnode_put(vp);
 kheap_free(KHEAP_TEMP, va, sizeof(*va));
novp_out:
 kheap_free(KHEAP_TEMP, dyld_data, sizeof(*dyld_data));
 return ret;
}
static load_return_t
load_code_signature(
 struct linkedit_data_command *lcp,
 struct vnode *vp,
 off_t macho_offset,
 off_t macho_size,
 cpu_type_t cputype,
 cpu_subtype_t cpusubtype,
 load_result_t *result,
 struct image_params *imgp)
{
 int ret;
 kern_return_t kr;
 vm_offset_t addr;
 int resid;
 struct cs_blob *blob;
 int error;
 vm_size_t blob_size;
 uint32_t sum;
 boolean_t anyCPU;
 addr = 0;
 blob = ((void *)0);
 cpusubtype &= ~0xff000000;
 if (lcp->cmdsize != sizeof(struct linkedit_data_command)) {
  ret = 2;
  goto out;
 }
 sum = 0;
 if (__os_warn_unused(__builtin_add_overflow((lcp->dataoff), (lcp->datasize), (&sum))) || sum > macho_size) {
  ret = 2;
  goto out;
 }
 blob = ubc_cs_blob_get(vp, cputype, cpusubtype, macho_offset);
 if (blob != ((void *)0)) {
  anyCPU = blob->csb_cpu_type == -1;
  if ((blob->csb_cpu_type != cputype &&
      blob->csb_cpu_subtype != cpusubtype && !anyCPU) ||
      blob->csb_base_offset != macho_offset) {
   ret = 2;
   goto out;
  }
  if (!anyCPU && ubc_cs_generation_check(vp) == 0) {
   ret = 0;
   goto out;
  }
  error = ubc_cs_blob_revalidate(vp, blob, imgp, 0, result->ip_platform);
  if (error == 0) {
   if (anyCPU) {
    vnode_lock_spin(vp);
    blob->csb_cpu_type = cputype;
    blob->csb_cpu_subtype = cpusubtype;
    vnode_unlock(vp);
   }
   ret = 0;
   goto out;
  }
  if (error != 35) {
   printf("load_code_signature: revalidation failed: %d\n", error);
   ret = 4;
   goto out;
  }
  ((void)0);
  blob = ((void *)0);
 }
 blob_size = lcp->datasize;
 kr = ubc_cs_blob_allocate(&addr, &blob_size);
 if (kr != 0) {
  ret = 5;
  goto out;
 }
 resid = 0;
 error = vn_rdwr(UIO_READ,
     vp,
     (caddr_t) addr,
     lcp->datasize,
     macho_offset + lcp->dataoff,
     UIO_SYSSPACE,
     0,
     kauth_cred_get(),
     &resid,
     current_proc());
 if (error || resid != 0) {
  ret = 9;
  goto out;
 }
 if (ubc_cs_blob_add(vp,
     result->ip_platform,
     cputype,
     cpusubtype,
     macho_offset,
     &addr,
     lcp->datasize,
     imgp,
     0,
     &blob)) {
  if (addr) {
   ubc_cs_blob_deallocate(addr, blob_size);
   addr = 0;
  }
  ret = 4;
  goto out;
 } else {
  addr = 0;
 }
 ret = 0;
out:
 if (ret == 0) {
  if (blob == ((void *)0)) {
   panic("success, but no blob!");
  }
  result->csflags |= blob->csb_flags;
  result->platform_binary = blob->csb_platform_binary;
  result->cs_end_offset = blob->csb_end_offset;
 }
 if (addr != 0) {
  ubc_cs_blob_deallocate(addr, blob_size);
  addr = 0;
 }
 return ret;
}
static
load_return_t
get_macho_vnode(
 const char *path,
 cpu_type_t cputype,
 struct mach_header *mach_header,
 off_t *file_offset,
 off_t *macho_size,
 struct macho_data *data,
 struct vnode **vpp,
 struct image_params *imgp
 )
{
 struct vnode *vp;
 vfs_context_t ctx = vfs_context_current();
 proc_t p = vfs_context_proc(ctx);
 kauth_cred_t kerncred;
 struct nameidata *ndp = &data->__nid;
 boolean_t is_fat;
 struct fat_arch fat_arch;
 int error;
 int resid;
 union macho_vnode_header *header = &data->__header;
 off_t fsize = (off_t)0;
 kerncred = vfs_context_ucred(vfs_context_kernel());
 NDINIT(ndp, 0, OP_OPEN, 0x00000040 | 0x0004, UIO_SYSSPACE, ((user_addr_t)((uintptr_t)(path))), ctx);
 if ((error = namei(ndp)) != 0) {
  if (error == 2) {
   error = 8;
  } else {
   error = 4;
  }
  return error;
 }
 nameidone(ndp);
 vp = ndp->ni_vp;
 if (vp->v_type != VREG) {
  error = 6;
  goto bad1;
 }
 if ((error = vnode_size(vp, &fsize, ctx)) != 0) {
  error = 4;
  goto bad1;
 }
 if (vp->v_mount->mnt_flag & 0x00000004) {
  error = 6;
  goto bad1;
 }
 if ((error = vnode_authorize(vp, ((void *)0), (1U<<3) | (1U<<1), ctx)) != 0) {
  error = 6;
  goto bad1;
 }
 if ((error = VNOP_OPEN(vp, 0x00000001, ctx)) != 0) {
  error = 6;
  goto bad1;
 }
 if ((error = vn_rdwr(UIO_READ, vp, (caddr_t)header, sizeof(*header), 0,
     UIO_SYSSPACE, 0x0008, kerncred, &resid, p)) != 0) {
  error = 9;
  goto bad2;
 }
 if (resid) {
  error = 2;
  goto bad2;
 }
 if (header->mach_header.magic == 0xfeedface ||
     header->mach_header.magic == 0xfeedfacf) {
  is_fat = 0;
 } else if ((__builtin_constant_p(header->fat_header.magic) ? ((__uint32_t)((((__uint32_t)(header->fat_header.magic) & 0xff000000U) >> 24) | (((__uint32_t)(header->fat_header.magic) & 0x00ff0000U) >> 8) | (((__uint32_t)(header->fat_header.magic) & 0x0000ff00U) << 8) | (((__uint32_t)(header->fat_header.magic) & 0x000000ffU) << 24))) : _OSSwapInt32(header->fat_header.magic)) == 0xcafebabe) {
  is_fat = 1;
 } else {
  error = 2;
  goto bad2;
 }
 if (is_fat) {
  error = fatfile_validate_fatarches((vm_offset_t)(&header->fat_header),
      sizeof(*header));
  if (error != 0) {
   goto bad2;
  }
  error = fatfile_getbestarch_for_cputype(cputype, ((cpu_subtype_t) -1),
      (vm_offset_t)(&header->fat_header), sizeof(*header), imgp, &fat_arch);
  if (error != 0) {
   goto bad2;
  }
  error = vn_rdwr(UIO_READ, vp, (caddr_t)&header->mach_header,
      sizeof(header->mach_header), fat_arch.offset,
      UIO_SYSSPACE, 0x0008, kerncred, &resid, p);
  if (error) {
   error = 9;
   goto bad2;
  }
  if (resid) {
   error = 2;
   goto bad2;
  }
  if (header->mach_header.magic != 0xfeedface &&
      header->mach_header.magic != 0xfeedfacf) {
   error = 2;
   goto bad2;
  }
  *file_offset = fat_arch.offset;
  *macho_size = fat_arch.size;
 } else {
  if ((cpu_type_t)header->mach_header.cputype != cputype) {
   error = 1;
   goto bad2;
  }
  *file_offset = 0;
  *macho_size = fsize;
 }
 *mach_header = header->mach_header;
 *vpp = vp;
 ubc_setsize(vp, fsize);
 return error;
bad2:
 (void) VNOP_CLOSE(vp, 0x00000001, ctx);
bad1:
 vnode_put(vp);
 return error;
}
