#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

/* Define in module1.c and already EXPORT_SYMBOL */
extern int my_add(int a, int b);

static int test_init(void) {
    printk(KERN_INFO"%s: In init by module2\n", __func__);
    printk(KERN_INFO"my_add(1, 2): %d\n", my_add(1, 2));
    return 0;
}

static void test_exit(void) {
    printk(KERN_INFO"%s: In exit by module2: \n", __func__);
}

module_init(test_init);
module_exit(test_exit);

MODULE_AUTHOR("Danny Deng");
MODULE_DESCRIPTION("Argument parsing example");

