/*
* Insert module:
* $ sudo insmod passing_simple_count.ko count=100
* Module information:
* $ sudo modinfo ./passing_simple_count.ko
* See the message:
* $ sudo dmesg
*/

#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

char *name = "Danny";
int count = 0;
module_param(name, charp, S_IRUGO);
module_param(count, int, S_IRUGO);


static int test_arguments_init(void) {
    printk(KERN_INFO"%s: In init\n", __func__);
    printk(KERN_INFO"%s: pass count: %d\n", __func__, count);

    return 0;
}


static void test_exit(void) {
    printk(KERN_INFO"%s: In exit: \n", __func__);
}



module_init(test_arguments_init);
module_exit(test_exit);

MODULE_AUTHOR("Danny Deng");
MODULE_DESCRIPTION("Argument parsing example");


