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
	{ 0x9ba94330, "usbnet_set_link_ksettings" },
	{ 0x181ced77, "usbnet_get_link_ksettings" },
	{ 0x9b9f6670, "usbnet_nway_reset" },
	{ 0x4f075fa7, "usbnet_set_msglevel" },
	{ 0x2c8f89b7, "usbnet_get_msglevel" },
	{ 0xbe8935b3, "usbnet_get_stats64" },
	{ 0x24873b81, "usbnet_tx_timeout" },
	{ 0x14747e0a, "usbnet_change_mtu" },
	{ 0x2eac50db, "eth_validate_addr" },
	{ 0x168ba90a, "usbnet_start_xmit" },
	{ 0xb02b4474, "usbnet_stop" },
	{ 0xfe9bd218, "usbnet_open" },
	{ 0xe547d372, "usb_deregister" },
	{ 0x24e0ecf3, "usb_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x29da4a98, "usbnet_get_endpoints" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcffd8b5b, "mii_nway_restart" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xae7c6bd, "mii_ethtool_gset" },
	{ 0x2f9086a6, "mii_check_media" },
	{ 0x4566ed2e, "usbnet_write_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x99bbb20a, "usbnet_read_cmd" },
	{ 0x3e0b87a8, "usbnet_link_change" },
	{ 0xe937cbb8, "netdev_err" },
	{ 0xe0308c3b, "__netdev_alloc_skb" },
	{ 0xb22b2e9a, "usbnet_skb_return" },
	{ 0x4829a47e, "memcpy" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x12592d24, "usbnet_write_cmd_async" },
	{ 0x9419d49a, "generic_mii_ioctl" },
	{ 0x9166fada, "strncpy" },
	{ 0x2bb287a3, "usbnet_get_drvinfo" },
	{ 0xdd83becf, "mii_link_ok" },
	{ 0x4cf237b2, "skb_put" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xd0cb4352, "skb_push" },
	{ 0x2ebbdcb, "__dev_kfree_skb_any" },
	{ 0xf763c25e, "skb_copy_expand" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0FE6p9800d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "99F6B84E1BBC11F6E7821DE");
