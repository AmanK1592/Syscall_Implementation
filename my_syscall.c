#include<linux/syscalls.h>
#include<linux/kernel.h>

asmlinkage long sys_my_syscall(void)
{
	printk("This is the new system call Aman Karnik implemented\n");
	return 0;

}
