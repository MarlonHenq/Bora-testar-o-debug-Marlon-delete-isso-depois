#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(main);

void main(void)
{
	while (1){
		printk("Test printk\n");
		k_sleep(K_SECONDS(1));
		LOG_INF("Info message example.");
		k_sleep(K_SECONDS(1));
	}
}