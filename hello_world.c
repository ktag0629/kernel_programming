#include <linux/init.h>
#include <linux/module.h>

int hello_world_module_init(void) {
	printk(KERN_ALERT "Hello World from %s \n", __FUNCTION__);
	return 0;
}

void hello_world_module_exit(void){
	printk(KERN_ALERT "Goodbye, World: from %s \n", __FUNCTION__);
}

module_init(hello_world_module_init); // called when inserted in the kernel space
module_exit(hello_world_module_exit); // called when removed in the kernel space


// INFO
MODULE_AUTHOR("KENT TAGUBA");
MODULE_LICENSE("GPL");
