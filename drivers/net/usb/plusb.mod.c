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
	{ 0x6f68c0f3, "usbnet_resume" },
	{ 0x1a78cc8a, "usbnet_suspend" },
	{ 0x18ccb73b, "usbnet_disconnect" },
	{ 0x2544ccc0, "usbnet_probe" },
	{ 0xe547d372, "usb_deregister" },
	{ 0x24e0ecf3, "usb_register_driver" },
	{ 0x99bbb20a, "usbnet_read_cmd" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v067Bp0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp25A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp258Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3923p7825d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp27A1d*dc*dsc*dp*ic*isc*ip*in*");
