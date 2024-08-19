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
	{ 0x18ccb73b, "usbnet_disconnect" },
	{ 0x2544ccc0, "usbnet_probe" },
	{ 0xbe8935b3, "usbnet_get_stats64" },
	{ 0x24873b81, "usbnet_tx_timeout" },
	{ 0x5f5c3308, "cdc_ncm_change_mtu" },
	{ 0x2eac50db, "eth_validate_addr" },
	{ 0xd85ec354, "eth_mac_addr" },
	{ 0x168ba90a, "usbnet_start_xmit" },
	{ 0xb02b4474, "usbnet_stop" },
	{ 0xfe9bd218, "usbnet_open" },
	{ 0xe547d372, "usb_deregister" },
	{ 0x24e0ecf3, "usb_register_driver" },
	{ 0x729aa836, "in6_dev_finish_destroy" },
	{ 0x29e84085, "__vlan_find_dev_deep_rcu" },
	{ 0xbf5ed5d3, "ipv6_stub" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xb22b2e9a, "usbnet_skb_return" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4cf237b2, "skb_put" },
	{ 0xe0308c3b, "__netdev_alloc_skb" },
	{ 0x7077ffe3, "cdc_ncm_rx_verify_ndp16" },
	{ 0x5d444d43, "cdc_ncm_rx_verify_nth16" },
	{ 0xbbc85688, "usb_autopm_put_interface" },
	{ 0x2d955318, "usb_autopm_get_interface" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe937cbb8, "netdev_err" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x7ca86580, "cdc_ncm_fill_tx_frame" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x13a9c28a, "skb_pull" },
	{ 0x2ebbdcb, "__dev_kfree_skb_any" },
	{ 0x2e27cb1e, "usb_match_id" },
	{ 0xb7fd2367, "usb_set_interface" },
	{ 0x814edd54, "usb_cdc_wdm_register" },
	{ 0xf5754de9, "cdc_ncm_bind_common" },
	{ 0x872c2b19, "cdc_ncm_select_altsetting" },
	{ 0x1a78cc8a, "usbnet_suspend" },
	{ 0x6f68c0f3, "usbnet_resume" },
	{ 0xcb107f08, "cdc_ncm_unbind" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");
