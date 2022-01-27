#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/sched.h>
#include <asm/current.h>

static int mykernel_init(void) {
    pr_info("test current init");
    pr_info("current pid: %d, process: %s\n", current->pid, current->comm);
    return 0;
}

static void mykernel_exit(void) {
    pr_info("current pid: %d, process: %s\n", current->pid, current->comm);
    pr_info("Exit \n");
}

module_init(mykernel_init);
module_exit(mykernel_exit);

/* Metadata */
MODULE_DESCRIPTION("Practice linux kernel module");
MODULE_AUTHOR("Danny Deng <zxpay73945788@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.1.1");

