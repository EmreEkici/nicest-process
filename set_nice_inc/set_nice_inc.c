#include <linux/syscalls.h>
#include <linux/kernel.h>
#include <asm/errno.h>

asmlinkage long sys_set_nice_inc(pid_t pid, int value) {
	struct task_struct* p = find_task_by_vpid(pid);
	if (p != NULL) {
		p->nice_inc = value;
		return 0;
	}
	return -ESRCH;
}