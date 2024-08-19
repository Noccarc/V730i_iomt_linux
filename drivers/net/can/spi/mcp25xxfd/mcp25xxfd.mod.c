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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x91c94b15, "netdev_info" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fc3cbb9, "register_candev" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb081e1fe, "debugfs_create_dir" },
	{ 0x42bbfb6f, "param_ops_int" },
	{ 0x389f225c, "of_property_read_u32_index" },
	{ 0x33e88705, "alloc_can_err_skb" },
	{ 0xe81ff3b3, "regulator_disable" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6da9f9, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x534a5448, "__spi_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb7f0129b, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x101340, "debugfs_create_x32" },
	{ 0xbd4566c, "spi_setup" },
	{ 0x6a5960b2, "debugfs_remove_recursive" },
	{ 0xf0b6f294, "gpiochip_remove" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x99218119, "gpiochip_add_data_with_key" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x356e54fb, "can_bus_off" },
	{ 0xbf471b94, "debugfs_create_u32" },
	{ 0x9d192459, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x7d37a066, "netif_rx_ni" },
	{ 0xcf585454, "close_candev" },
	{ 0x33f1b117, "spi_async" },
	{ 0x4afa974a, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcc2fa577, "of_find_property" },
	{ 0x965c8b7, "driver_unregister" },
	{ 0x9cee21c5, "debugfs_create_u64" },
	{ 0x4734f927, "netif_receive_skb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x87c7222c, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xac782267, "free_candev" },
	{ 0xe3a53f4c, "sort" },
	{ 0x3990fe09, "_dev_err" },
	{ 0xb4e3c633, "of_match_device" },
	{ 0xafdc7813, "gpiochip_get_data" },
	{ 0x2aad0ce1, "spi_sync" },
	{ 0x709e5180, "can_change_mtu" },
	{ 0x587ba624, "_dev_info" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0xc56d87d0, "unregister_candev" },
	{ 0x1c4e8512, "alloc_can_skb" },
	{ 0x84e8fc8f, "debugfs_create_devm_seqfile" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x421ac717, "kfree_skb" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x98051f40, "devm_regulator_get_optional" },
	{ 0xe937cbb8, "netdev_err" },
	{ 0x9ffc2a40, "devm_clk_get" },
	{ 0xfa796e2e, "open_candev" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc246c750, "netdev_warn" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdfcb1844, "spi_get_device_id" },
	{ 0xe1a0d3c2, "alloc_canfd_skb" },
	{ 0x36f438, "debugfs_create_symlink" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x81305675, "can_get_echo_skb" },
	{ 0x4cf16c64, "can_put_echo_skb" },
	{ 0xcca175c7, "devm_kmalloc" },
	{ 0xc382f4bb, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x49e2691f, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:mcp2517fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fdC*");
