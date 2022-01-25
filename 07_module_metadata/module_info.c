#include <linux/kernel.h>
#include <linux/module.h>

static int module_info_init(void) {
    printk(KERN_INFO"%s: In init\n", __func__);
    return 0;
}

static void module_info_exit(void) {
    printk(KERN_INFO"%s: In exit: \n", __func__);
}

module_init(module_info_init);
module_exit(module_info_exit);

/* Metadata */
MODULE_DESCRIPTION("Practice linux kernel module");
MODULE_AUTHOR("Danny Deng <zxpay73945788@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.1.1");
