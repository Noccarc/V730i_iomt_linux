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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x91c94b15, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x411024ee, "phy_disconnect" },
	{ 0x815588a6, "clk_enable" },
	{ 0xd0442e9c, "of_mdiobus_register" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x731079c0, "phy_stop" },
	{ 0xd47c17b9, "napi_disable" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x707f70b3, "napi_schedule_prep" },
	{ 0xd017efc3, "of_parse_phandle" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc70b4f41, "dma_set_mask" },
	{ 0xa08d63b7, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x574a843c, "mdiobus_get_phy" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2ebbdcb, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1bbc61fd, "dma_free_attrs" },
	{ 0xbe3b149, "mdiobus_unregister" },
	{ 0x2057cd34, "dma_set_coherent_mask" },
	{ 0x6701be9a, "__platform_driver_register" },
	{ 0xe8b7ebc4, "netif_napi_del" },
	{ 0x1ab9e5f7, "devm_mdiobus_alloc_size" },
	{ 0xe0308c3b, "__netdev_alloc_skb" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xacc18b59, "phy_print_status" },
	{ 0x291057f5, "acpi_match_device" },
	{ 0xf262a5df, "netif_schedule_queue" },
	{ 0x9d192459, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x63773ed1, "phy_start" },
	{ 0x38d7bff8, "phy_find_first" },
	{ 0x4afa974a, "netif_tx_wake_queue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdf0544db, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0x238c983e, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x89d1d583, "free_netdev" },
	{ 0xb8f6c39f, "register_netdev" },
	{ 0xba7d933d, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x44f801f7, "dma_alloc_attrs" },
	{ 0xf1c4cad2, "phy_attached_print" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x54a2571f, "__dev_kfree_skb_irq" },
	{ 0x240de2a7, "platform_get_resource" },
	{ 0x5754eeb7, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x3990fe09, "_dev_err" },
	{ 0xb4e3c633, "of_match_device" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x524f3fde, "phy_ethtool_get_link_ksettings" },
	{ 0x1cb20f56, "dma_direct_unmap_page" },
	{ 0x18bd618c, "napi_gro_receive" },
	{ 0x880e9547, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9597d84b, "__napi_schedule" },
	{ 0xfcfc936a, "phy_connect_direct" },
	{ 0x24bd19d2, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xadc0375, "napi_complete_done" },
	{ 0x2e2d0e4a, "eth_type_trans" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x64cd9f3e, "dev_driver_string" },
	{ 0xa9d2c6da, "pskb_expand_head" },
	{ 0xe937cbb8, "netdev_err" },
	{ 0x9ffc2a40, "devm_clk_get" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x63a560f1, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc246c750, "netdev_warn" },
	{ 0x2eac50db, "eth_validate_addr" },
	{ 0xeb0982b4, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xaf0fdad4, "___pskb_trim" },
	{ 0xedc03953, "iounmap" },
	{ 0x24eb2cee, "unregister_netdev" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xeba86544, "phy_mii_ioctl" },
	{ 0x2c4e3856, "device_get_mac_address" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd47ca4ed, "platform_get_irq" },
	{ 0x4407ff76, "of_find_device_by_node" },
	{ 0x36d24122, "consume_skb" },
	{ 0x8ba8801, "of_phy_find_device" },
	{ 0xe57ede98, "platform_driver_unregister" },
	{ 0x4cf237b2, "skb_put" },
	{ 0xc60c2d7d, "of_node_put" },
	{ 0xd85ec354, "eth_mac_addr" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8b3f3a9d, "is_acpi_device_node" },
	{ 0x421108fa, "devm_platform_ioremap_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa913bb63, "alloc_etherdev_mqs" },
	{ 0x8fd7628f, "genphy_restart_aneg" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,fsm9900-emac");
MODULE_ALIAS("of:N*T*Cqcom,fsm9900-emacC*");
MODULE_ALIAS("acpi*:QCOM8070:*");
