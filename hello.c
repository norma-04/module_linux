#include <linux/module.h>
#include <linux/init.h>

int my_init(void){
   printk("hell0 kernel\n");
   return 0;
}

void my_exit(void){
   printk("goodbye kernel\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
