#include <linux/module.h>
#include<linux/kernel.h>

int init_module(void)
{
printk(KERN_INFO "start ?Hello world ...\n);
return 0;
}
void cleanup_module(void)
{
printk(KERN_INFO "End Hello world ...\n);
}





