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
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xf34d7ec1, "snd_register_device" },
	{ 0x1637459d, "snd_card_file_remove" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xcf562533, "snd_device_initialize" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x5e897641, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x6da9f9, "seq_printf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x496a24fc, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xdcb764ad, "memset" },
	{ 0x2c643e88, "snd_device_new" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3588d361, "snd_unregister_device" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x3990fe09, "_dev_err" },
	{ 0x42b6443e, "module_put" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x53c2f59c, "snd_card_file_add" },
	{ 0x7acb0bd6, "snd_ctl_register_ioctl" },
	{ 0x24bd19d2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ecda339, "snd_info_free_entry" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0xce07cfe2, "__arch_copy_in_user" },
	{ 0x45c3c525, "dev_set_name" },
	{ 0x6c674619, "snd_ctl_unregister_ioctl_compat" },
	{ 0xb185cc8f, "snd_info_create_module_entry" },
	{ 0xbbf011e8, "snd_info_register" },
	{ 0x43cd8f7f, "try_module_get" },
};

MODULE_INFO(depends, "");

