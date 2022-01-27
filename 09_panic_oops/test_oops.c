#include <linux/kernel.h>
#include <linux/module.h>

static int mykernel_init(void) {
    pr_info("test oops init");
    // Trying to access invalid memory location
    *(int *)0x12 = 100;
    return 0;
}

static void mykernel_exit(void) {
    pr_info("Exit \n");
}

module_init(mykernel_init);
module_exit(mykernel_exit);

/* Metadata */
MODULE_DESCRIPTION("Practice linux kernel module");
MODULE_AUTHOR("Danny Deng <zxpay73945788@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.1.1");

