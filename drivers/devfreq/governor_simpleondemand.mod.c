#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe0041c7b, "module_layout" },
	{ 0xc5850110, "printk" },
	{ 0x62bbdbb2, "devfreq_remove_governor" },
	{ 0xa4c79ba8, "devfreq_add_governor" },
	{ 0xb1bac022, "devfreq_monitor_start" },
	{ 0x26d7f69, "devfreq_monitor_suspend" },
	{ 0xb40aa161, "devfreq_interval_update" },
	{ 0x6a87f920, "devfreq_monitor_stop" },
	{ 0x62ff8dce, "devfreq_monitor_resume" },
};

MODULE_INFO(depends, "");

