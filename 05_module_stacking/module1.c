#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

int my_add(int a, int b) {
    return a + b;
}
EXPORT_SYMBOL(my_add);

static int test_init(void) {
    printk(KERN_INFO"%s: In init by module1\n", __func__);

    return 0;
}

static void test_exit(void) {
    printk(KERN_INFO"%s: In exit by module1: \n", __func__);
}

module_init(test_init);
module_exit(test_exit);

MODULE_AUTHOR("Danny Deng");
MODULE_DESCRIPTION("Argument parsing example");
