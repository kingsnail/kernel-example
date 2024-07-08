#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int __init module_start(void)
{
    printk(KERN_INFO "Hello, World!\n");
    return 0;
}

static void __exit module_end(void)
{
    printk(KERN_INFO "Goodbye, World!\n");
}

module_init(module_start);
module_exit(module_end);
