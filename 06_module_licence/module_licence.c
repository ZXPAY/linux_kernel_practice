#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("abssc");

static int module_lic_init(void) {
    printk(KERN_INFO"%s: In init\n", __func__);
    return 0;
}

static void module_lic_exit(void) {
    printk(KERN_INFO"%s: In exit: \n", __func__);
}

module_init(module_lic_init);
module_exit(module_lic_exit);
