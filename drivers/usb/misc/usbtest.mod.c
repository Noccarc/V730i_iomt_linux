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
	{ 0x42bbfb6f, "param_ops_int" },
	{ 0xc382f4bb, "param_ops_uint" },
	{ 0x4928f22c, "param_ops_ushort" },
	{ 0xe547d372, "usb_deregister" },
	{ 0x24e0ecf3, "usb_register_driver" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xaf7d07c8, "usb_get_descriptor" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x9d192459, "_dev_warn" },
	{ 0xb7fd2367, "usb_set_interface" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3a7baba8, "usb_clear_halt" },
	{ 0x6214726f, "usb_get_status" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x4239f896, "usb_kill_urb" },
	{ 0x51bd55b5, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0x587ba624, "_dev_info" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x29bcdec1, "usb_free_coherent" },
	{ 0xe64c27e8, "usb_free_urb" },
	{ 0x94ae22f, "usb_alloc_coherent" },
	{ 0xfc91d4fc, "usb_alloc_urb" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd4c525e5, "usb_unlink_urb" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x56049771, "usb_submit_urb" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdcb764ad, "memset" },
	{ 0x6e41b656, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3990fe09, "_dev_err" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c163151, "usb_sg_wait" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x488a81c8, "usb_sg_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcf05b8d6, "usb_sg_cancel" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");
