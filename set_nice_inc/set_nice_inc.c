#include <linux/kernel.h>
#include <linux/sched.h>

asmlinkage long set_nice_inc(pid_t pid, int value) {
	extern struct* task_struct = find_task_by_vpid(pid);
	task_struct->nice_inc = value;
	return task_struct->nice_inc;
}
