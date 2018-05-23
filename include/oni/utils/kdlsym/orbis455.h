#pragma once
#include <oni/config.h>

// Offsets ported by Crazyvoid

#if ONI_PLATFORM==ONI_PLATFORM_ORBIS_BSD_455
/*
These are the required functions in order for the Oni Framework to operate properly
These are all offsets into the base of the kernel. They expect all standard FreeBSD 9 prototypes
The reason we do not hardcode offsets here, is due to the different platforms that are supported, and
for the platforms that do enable kernel ASLR (Address Space Layout Randomization?)
*/

#define kdlsym_addr_allproc						 		 	 0x1AD7720
#define kdlsym_addr_allproc_lock				 		 	 0x1AD76B8

#define kdlsym_addr_critical_enter						 	 0x23D560
#define kdlsym_addr_critical_exit						 	 0x23D570

#define	kdlsym_addr_kernel_map                               0x1b31218
#define kdlsym_addr_kern_reboot							 	 0x998A0
#define kdlsym_addr_kmem_alloc 								 0x16ECD0
#define kdlsym_addr_kmem_free						 		 0x16EEA0
#define kdlsym_addr_kproc_create							 0x464700

#define kdlsym_addr_kproc_create							 0x464700
#define kdlsym_addr_sys_mlockall							 0x142AF0
#define kdlsym_addr_sys_mlock								 0x142A40

#define kdlsym_addr_pfind						 		 	 0x79780
#define kdlsym_addr_printf                                   0x17F30
#define kdlsym_addr_proc_rwmem					 		 	 0x17CB70
#define kdlsym_addr_pmap_activate							 0x427530

#define kdlsym_addr_vmspace_alloc							 0x391A70
#define kdlsym_addr_vmspace_free				 		 	 0x391D10

#define kdlsym_addr_snprintf					 		 	 0x18230

#define kdlsym_addr_vsnprintf					 		 	 0x18360

#define kdlsym_addr__mtx_lock_flags				 		 	 0x30D6A0
#define kdlsym_addr__mtx_unlock_flags			 		 	 0x30D940

#define kdlsym_addr__sx_slock					 		 	 0x38F980
#define kdlsym_addr__sx_sunlock					 		 	 0x38FB00

#define kdlsym_addr_vmspace_acquire_ref			 		 	 0x391EE0
#define kdlsym_addr__vm_map_lock_read			 		 	 0x3920B0
#define kdlsym_addr__vm_map_unlock_read			 		 	 0x392100

// TODO: Sort by alpha

#define kdlsym_addr_sys_lseek					 		 	 0x441D20
#define kdlsym_addr_sys_mmap					 		 	 0x1419F0
#define kdlsym_addr_sys_munmap					 		 	 0x142190
#define kdlsym_addr_utilUSleep							 	 0x65F290
#define kdlsym_addr_kthread_exit							 0x464F60
#define kdlsym_addr_kthread_add								 0x464C90
#define kdlsym_addr_sys_read                                 0x5EC50
#define kdlsym_addr_sys_fstat						 		 0x42B1B0
#define kdlsym_addr_sys_close                                0x42AC00
#define kdlsym_addr_sys_socket                               0x3EAC20
#define kdlsym_addr_sys_write                                0x5F1A0


#define kdlsym_addr_sys_getdents						 	 0x445600
#define kdlsym_addr_sys_bind                                 0x3EB550
#define kdlsym_addr_sys_listen                               0x3EB760
#define kdlsym_addr_sys_accept                               0x3EBEC0
#define kdlsym_addr_sys_recvfrom							 0x3ED080
#define kdlsym_addr_sys_sendto								 0x3EC9C0
#define kdlsym_addr_sys_open							 	 0x43FCE0
#define kdlsym_addr_memcpy                                   0x14A6B0
#define kdlsym_addr_memset 								     0x302BD0
#define kdlsym_addr_sys_stat						 		 0x442320

#define	kdlsym_addr_Xfast_syscall                            0x3095D0
#define kdlsym_addr_sys_dup2								 0x428E50
#define kdlsym_addr_sys_shutdown							 0x3ED250
#define kdlsym_addr_sys_unlink								 0x441730
#define kdlsym_addr_sys_setuid								 0x114450
#define kdlsym_addr_sys_ptrace								 0x17D000
#define kdlsym_addr_sscanf									 0x302100
#define kdlsym_addr_mtx_init								 0x30e0c0

#define kdlsym_addr_sys_kill								 0x23CC0

#define kdlsym_addr_sys_mkdir								 0x444DE0
#define kdlsym_addr_sys_rmdir								 0x445160


#endif