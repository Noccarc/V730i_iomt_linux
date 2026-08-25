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
	{ 0xc382f4bb, "param_ops_uint" },
	{ 0xeff86b32, "no_llseek" },
	{ 0x965c8b7, "driver_unregister" },
	{ 0x8a4a7dc9, "class_destroy" },
	{ 0x534a5448, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2d8c77ea, "__class_create" },
	{ 0xc617486, "__register_chrdev" },
	{ 0x24bd19d2, "put_device" },
	{ 0xbd4566c, "spi_setup" },
	{ 0x63a560f1, "get_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xfa44cda6, "device_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2aad0ce1, "spi_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3be2e220, "device_create" },
	{ 0x9d192459, "_dev_warn" },
	{ 0x291057f5, "acpi_match_device" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0x8b3f3a9d, "is_acpi_device_node" },
	{ 0xffc6cb8, "of_device_is_compatible" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x10fa39d5, "stream_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ab7989d, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:SPT0001:*");
MODULE_ALIAS("acpi*:SPT0002:*");
MODULE_ALIAS("acpi*:SPT0003:*");
MODULE_ALIAS("of:N*T*Crohm,dh2228fv");
MODULE_ALIAS("of:N*T*Crohm,dh2228fvC*");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488C*");
MODULE_ALIAS("of:N*T*Cge,achc");
MODULE_ALIAS("of:N*T*Cge,achcC*");
MODULE_ALIAS("of:N*T*Csemtech,sx1301");
MODULE_ALIAS("of:N*T*Csemtech,sx1301C*");
MODULE_ALIAS("of:N*T*Clwn,bk4");
MODULE_ALIAS("of:N*T*Clwn,bk4C*");
MODULE_ALIAS("of:N*T*Cdh,dhcom-board");
MODULE_ALIAS("of:N*T*Cdh,dhcom-boardC*");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpld");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpldC*");
