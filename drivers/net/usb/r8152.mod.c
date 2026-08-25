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
	{ 0x238c983e, "ethtool_op_get_link" },
	{ 0x2eac50db, "eth_validate_addr" },
	{ 0xe547d372, "usb_deregister" },
	{ 0x24e0ecf3, "usb_register_driver" },
	{ 0x9fdc3b71, "netif_carrier_on" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x3990fe09, "_dev_err" },
	{ 0x9efb9189, "usb_driver_set_configuration" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x587ba624, "_dev_info" },
	{ 0xb8f6c39f, "register_netdev" },
	{ 0x5754eeb7, "netif_napi_add" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa913bb63, "alloc_etherdev_mqs" },
	{ 0x17f2ae92, "usb_reset_device" },
	{ 0x36694a9f, "device_set_wakeup_enable" },
	{ 0x1b656c0, "usb_enable_lpm" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xeb8eb49c, "dev_set_mac_address" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc1714aed, "netdev_notice" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc2c5802, "work_busy" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcb424725, "skb_tstamp_tx" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe39d8a00, "skb_queue_tail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xadc0375, "napi_complete_done" },
	{ 0xdce26e3c, "skb_add_rx_frag" },
	{ 0x2e2d0e4a, "eth_type_trans" },
	{ 0x4cf237b2, "skb_put" },
	{ 0x6d4dc810, "__napi_alloc_skb" },
	{ 0x18bd618c, "napi_gro_receive" },
	{ 0x8376f10, "netif_device_attach" },
	{ 0x9597d84b, "__napi_schedule" },
	{ 0x707f70b3, "napi_schedule_prep" },
	{ 0x91c94b15, "netdev_info" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x5a921311, "strncmp" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xbf776b23, "netif_carrier_off" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x89d1d583, "free_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x24eb2cee, "unregister_netdev" },
	{ 0x5d9d38e6, "netif_device_detach" },
	{ 0xa9d2c6da, "pskb_expand_head" },
	{ 0x4afa974a, "netif_tx_wake_queue" },
	{ 0x9537f321, "skb_checksum_help" },
	{ 0x9f534700, "__skb_gso_segment" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x388035bb, "usb_autopm_put_interface_async" },
	{ 0x56049771, "usb_submit_urb" },
	{ 0x2dffbfb5, "usb_autopm_get_interface_async" },
	{ 0xf262a5df, "netif_schedule_queue" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2ebbdcb, "__dev_kfree_skb_any" },
	{ 0x3a13d93, "skb_copy_bits" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x41ebd3b9, "__free_pages" },
	{ 0xfc91d4fc, "usb_alloc_urb" },
	{ 0xfb66f1eb, "alloc_pages_current" },
	{ 0x4504943f, "kmem_cache_alloc_node" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xe937cbb8, "netdev_err" },
	{ 0xd47c17b9, "napi_disable" },
	{ 0x4239f896, "usb_kill_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4fd6d6fb, "__put_page" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe64c27e8, "usb_free_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36d24122, "consume_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc246c750, "netdev_warn" },
	{ 0x392051a, "usb_queue_reset_device" },
	{ 0xcffd8b5b, "mii_nway_restart" },
	{ 0xd059f860, "mii_ethtool_get_link_ksettings" },
	{ 0xbbc85688, "usb_autopm_put_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2d955318, "usb_autopm_get_interface" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6e41b656, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "8533DBDEB4432F285914C38");
