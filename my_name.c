#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/init.h>      // included for __init and __exit macros


static int my_name(void)
{
    printk("Aman Karnik\n");
    return 0;    // Non-zero return means that the module couldn't be loaded.
}

static void clean_module(void)
{
    printk("Aman Karnik\n");
    
}


module_init(my_name);
module_exit(clean_module);
