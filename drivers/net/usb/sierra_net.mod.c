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
	{ 0x9ba94330, "usbnet_set_link_ksettings" },
	{ 0x181ced77, "usbnet_get_link_ksettings" },
	{ 0x9b9f6670, "usbnet_nway_reset" },
	{ 0x4f075fa7, "usbnet_set_msglevel" },
	{ 0x2c8f89b7, "usbnet_get_msglevel" },
	{ 0xbe8935b3, "usbnet_get_stats64" },
	{ 0x24873b81, "usbnet_tx_timeout" },
	{ 0x14747e0a, "usbnet_change_mtu" },
	{ 0x2eac50db, "eth_validate_addr" },
	{ 0xd85ec354, "eth_mac_addr" },
	{ 0x168ba90a, "usbnet_start_xmit" },
	{ 0xb02b4474, "usbnet_stop" },
	{ 0xfe9bd218, "usbnet_open" },
	{ 0xe547d372, "usb_deregister" },
	{ 0x24e0ecf3, "usb_register_driver" },
	{ 0x3e0b87a8, "usbnet_link_change" },
	{ 0x6e41b656, "usb_control_msg" },
	{ 0x3990fe09, "_dev_err" },
	{ 0x99bbb20a, "usbnet_read_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbf776b23, "netif_carrier_off" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0x29da4a98, "usbnet_get_endpoints" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe51f05db, "usbnet_status_start" },
	{ 0x2544ccc0, "usbnet_probe" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ebbdcb, "__dev_kfree_skb_any" },
	{ 0xd0cb4352, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0x2fa688a7, "usbnet_status_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4566ed2e, "usbnet_write_cmd" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2bb287a3, "usbnet_get_drvinfo" },
	{ 0xe937cbb8, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeaa58c40, "skb_clone" },
	{ 0x13a9c28a, "skb_pull" },
	{ 0xb22b2e9a, "usbnet_skb_return" },
	{ 0x899d86dd, "skb_trim" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "79024F3EC1EE44C7D105361");
