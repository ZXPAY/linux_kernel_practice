#include <linux/kernel.h>
#include <linux/module.h>

static int mykernel_init(void) {
    char buffer[] = "Hello world. Linux is the best OS.";
    printk(KERN_INFO"%s: In init\n", __func__);
    print_hex_dump(KERN_INFO, "buf: ", DUMP_PREFIX_ADDRESS, 
            16, 1, buffer, sizeof(buffer), 1);
    return 0;
}

static void mykernel_exit(void) {
    printk(KERN_INFO"%s: In exit: \n", __func__);
}

module_init(mykernel_init);
module_exit(mykernel_exit);

/* Metadata */
MODULE_DESCRIPTION("Practice linux kernel module");
MODULE_AUTHOR("Danny Deng <zxpay73945788@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.1.1");

