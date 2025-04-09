#include <linux/module.h>
#include <linux/init.h>

static int __init my_init(void){
   printk("hell0 kernel\n");
   return 0;
}

static void __exit my_exit(void){
   printk("goodbye kernel\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("norma-04<1845981908@qq.com>");
MODULE_DESCRIPTION("A simple module");
