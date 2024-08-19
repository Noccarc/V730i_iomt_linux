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
	{ 0xb7f0129b, "param_ops_bool" },
	{ 0x18ccb73b, "usbnet_disconnect" },
	{ 0x2544ccc0, "usbnet_probe" },
	{ 0xa3911c89, "ethtool_op_get_ts_info" },
	{ 0xabdbdaa9, "usbnet_get_link" },
	{ 0x9b9f6670, "usbnet_nway_reset" },
	{ 0x4f075fa7, "usbnet_set_msglevel" },
	{ 0x2c8f89b7, "usbnet_get_msglevel" },
	{ 0x2bb287a3, "usbnet_get_drvinfo" },
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
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2883dd0e, "of_get_mac_address" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x29da4a98, "usbnet_get_endpoints" },
	{ 0xc5850110, "printk" },
	{ 0xcffd8b5b, "mii_nway_restart" },
	{ 0xf9a482f9, "msleep" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x12592d24, "usbnet_write_cmd_async" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0x1a78cc8a, "usbnet_suspend" },
	{ 0x3e0b87a8, "usbnet_link_change" },
	{ 0x6f68c0f3, "usbnet_resume" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb22b2e9a, "usbnet_skb_return" },
	{ 0x899d86dd, "skb_trim" },
	{ 0xeaa58c40, "skb_clone" },
	{ 0x13a9c28a, "skb_pull" },
	{ 0xbbc85688, "usb_autopm_put_interface" },
	{ 0x102fd9f7, "usb_autopm_get_interface_no_resume" },
	{ 0x91c94b15, "netdev_info" },
	{ 0xbd6841d4, "crc16" },
	{ 0x9419d49a, "generic_mii_ioctl" },
	{ 0x36694a9f, "device_set_wakeup_enable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x181ced77, "usbnet_get_link_ksettings" },
	{ 0x9ba94330, "usbnet_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe66184b2, "usbnet_defer_kevent" },
	{ 0xae7c6bd, "mii_ethtool_gset" },
	{ 0x2f9086a6, "mii_check_media" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6f280f7a, "usbnet_read_cmd_nopm" },
	{ 0x99bbb20a, "usbnet_read_cmd" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc246c750, "netdev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf15d9c77, "usbnet_write_cmd_nopm" },
	{ 0x4566ed2e, "usbnet_write_cmd" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x2ebbdcb, "__dev_kfree_skb_any" },
	{ 0xa9d2c6da, "pskb_expand_head" },
	{ 0xd0cb4352, "skb_push" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0424p9500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424pEC00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9903d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9905d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9906d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9907d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9908d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9909d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E08d*dc*dsc*dp*ic*isc*ip*in*");
