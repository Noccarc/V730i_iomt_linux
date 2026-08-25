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
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x24eb2cee, "unregister_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x8376f10, "netif_device_attach" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5eb044e5, "netif_rx" },
	{ 0x2e2d0e4a, "eth_type_trans" },
	{ 0x4cf237b2, "skb_put" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xc1714aed, "netdev_notice" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x89d1d583, "free_netdev" },
	{ 0x36d24122, "consume_skb" },
	{ 0xb8f6c39f, "register_netdev" },
	{ 0xfc91d4fc, "usb_alloc_urb" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xa913bb63, "alloc_etherdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe0308c3b, "__netdev_alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6e41b656, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4afa974a, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x54a2571f, "__dev_kfree_skb_irq" },
	{ 0xd4c525e5, "usb_unlink_urb" },
	{ 0x9d192459, "_dev_warn" },
	{ 0xe64c27e8, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x4239f896, "usb_kill_urb" },
	{ 0x3990fe09, "_dev_err" },
	{ 0x9fdc3b71, "netif_carrier_on" },
	{ 0x5d9d38e6, "netif_device_detach" },
	{ 0xbf776b23, "netif_carrier_off" },
	{ 0x56049771, "usb_submit_urb" },
	{ 0x587ba624, "_dev_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");
