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
	{ 0x29da4a98, "usbnet_get_endpoints" },
	{ 0xed83617a, "usbnet_device_suggests_idle" },
	{ 0xc246c750, "netdev_warn" },
	{ 0x56049771, "usb_submit_urb" },
	{ 0xfc91d4fc, "usb_alloc_urb" },
	{ 0xb22b2e9a, "usbnet_skb_return" },
	{ 0x899d86dd, "skb_trim" },
	{ 0xeaa58c40, "skb_clone" },
	{ 0x13a9c28a, "skb_pull" },
	{ 0xe64c27e8, "usb_free_urb" },
	{ 0x36d24122, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xd0cb4352, "skb_push" },
	{ 0x4cf237b2, "skb_put" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x2ebbdcb, "__dev_kfree_skb_any" },
	{ 0xf763c25e, "skb_copy_expand" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");
