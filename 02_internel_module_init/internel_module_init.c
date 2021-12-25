#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

/*
* Kernel module default initial function name
*/
int init_module(void) {
    printk(KERN_INFO"%s: In init\n", __func__);
    return 0;
}

/*
* Kernel module default exit function name
*/
void cleanup_module(void) {
    printk(KERN_INFO"%s: In exit\n", __func__);
}

MODULE_AUTHOR("Danny Deng");
MODULE_DESCRIPTION("Internel module example");

