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
	{ 0xe67f4cec, "register_netdevice" },
	{ 0xf67dac7c, "sdio_writeb" },
	{ 0xb740128b, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x40fd20ec, "skb_queue_head" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0x35b8f182, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x17c639c4, "wiphy_free" },
	{ 0x7410aba2, "strreplace" },
	{ 0x3e4bdb21, "cfg80211_connect_done" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x39191e28, "of_find_node_opts_by_path" },
	{ 0x42bbfb6f, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0xbe09d47d, "device_release_driver" },
	{ 0xf27f2b07, "irq_of_parse_and_map" },
	{ 0xea124bd1, "gcd" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x2c87ca3c, "cfg80211_inform_bss_data" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xf1e109f, "send_sig" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4c4d3d51, "sdio_enable_func" },
	{ 0xd371874c, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2cffc4a0, "cfg80211_report_wowlan_wakeup" },
	{ 0x31c46e00, "sdio_claim_irq" },
	{ 0xeff86b32, "no_llseek" },
	{ 0xd1bae8a5, "sdio_retune_release" },
	{ 0x42f7bebc, "brcmu_pkt_buf_get_skb" },
	{ 0x9fdc3b71, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xbf776b23, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x77dc1ef2, "cfg80211_rx_mgmt" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc310b981, "strnstr" },
	{ 0x2ebbdcb, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x604bda2d, "brcmu_pktq_pdeq_tail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xffc6cb8, "of_device_is_compatible" },
	{ 0x8f9af2c4, "__platform_driver_probe" },
	{ 0x999e8297, "vfree" },
	{ 0x5d933dcc, "pm_runtime_allow" },
	{ 0x1bbc61fd, "dma_free_attrs" },
	{ 0xc3c42ffd, "brcmu_pktq_penq" },
	{ 0x6149aa1f, "pci_pme_capable" },
	{ 0xe621229e, "cfg80211_unregister_wdev" },
	{ 0x7d157a7e, "brcmu_pktq_mdeq" },
	{ 0xa84ed2a, "debugfs_create_file" },
	{ 0x8f7bbdac, "pm_runtime_forbid" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe8e40a30, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x71dac747, "sdio_get_host_pm_caps" },
	{ 0xdb680deb, "skb_unlink" },
	{ 0x899d86dd, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9014bcf6, "cfg80211_mgmt_tx_status" },
	{ 0x4c153cd7, "param_ops_string" },
	{ 0xfd94814e, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xe0308c3b, "__netdev_alloc_skb" },
	{ 0x5eb044e5, "netif_rx" },
	{ 0x2561913a, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x2ed14e67, "mmc_wait_for_req" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xfe419c, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc8baae41, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9b7c5d43, "cfg80211_vendor_cmd_reply" },
	{ 0x45e2a934, "brcmu_pktq_pdeq_match" },
	{ 0x9d192459, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x7d37a066, "netif_rx_ni" },
	{ 0x8ff862e1, "pinctrl_pm_select_idle_state" },
	{ 0x4afa974a, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbbe80fdb, "kmalloc_order" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0xc5850110, "printk" },
	{ 0xae4a89e0, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcc2fa577, "of_find_property" },
	{ 0x2494d9e2, "wiphy_read_of_freq_limits" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x54b0845c, "efivar_entry_size" },
	{ 0x89d1d583, "free_netdev" },
	{ 0xec8f1d16, "wiphy_unregister" },
	{ 0x9166fada, "strncpy" },
	{ 0xb8f6c39f, "register_netdev" },
	{ 0xe82ba96e, "nla_put" },
	{ 0x16ed16bf, "mmc_set_data_timeout" },
	{ 0x24b2b588, "sdio_readl" },
	{ 0x5feaaf7b, "cfg80211_del_sta_sinfo" },
	{ 0x83309953, "ieee80211_get_channel" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xba7d933d, "dma_direct_map_page" },
	{ 0x44f801f7, "dma_alloc_attrs" },
	{ 0xff4fadcf, "brcmu_pktq_peek_tail" },
	{ 0x8b8a4d6a, "brcmu_pktq_flush" },
	{ 0x5f1c0b39, "sdio_retune_crc_enable" },
	{ 0xd0cb4352, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x40b62655, "cfg80211_michael_mic_failure" },
	{ 0x7b6b88ab, "wiphy_apply_custom_regulatory" },
	{ 0x3a9c114, "irq_get_irq_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x13a9c28a, "skb_pull" },
	{ 0x19d8e15c, "simple_open" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xb5af44a1, "of_prop_next_string" },
	{ 0xa035398d, "request_firmware_nowait" },
	{ 0x44687b79, "cfg80211_ibss_joined" },
	{ 0x951ecfa5, "device_wakeup_enable" },
	{ 0x3990fe09, "_dev_err" },
	{ 0xe7a4a811, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe21a3abf, "sdio_readsb" },
	{ 0xb627acfb, "sdio_unregister_driver" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x46a1fe2f, "sdio_f0_writeb" },
	{ 0x266d4214, "sdio_set_host_pm_flags" },
	{ 0x65bbfa16, "cfg80211_check_combinations" },
	{ 0xe39d8a00, "skb_queue_tail" },
	{ 0x1cb20f56, "dma_direct_unmap_page" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x9e2b8dd8, "cfg80211_roamed" },
	{ 0xbfc75ef4, "cfg80211_put_bss" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd8bac1d0, "__cfg80211_alloc_reply_skb" },
	{ 0xd5a79c70, "wiphy_register" },
	{ 0x51602e94, "cfg80211_crit_proto_stopped" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x3f8a39c5, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x790f4c4d, "cfg80211_classify8021d" },
	{ 0x8d6a53ab, "efivar_entry_get" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x421ac717, "kfree_skb" },
	{ 0xf7845e7, "cfg80211_ready_on_channel" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0xeb11c5aa, "wiphy_new_nm" },
	{ 0x8123c2db, "alloc_netdev_mqs" },
	{ 0x13d9ba52, "pci_read_config_dword" },
	{ 0x2e2d0e4a, "eth_type_trans" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x59301590, "sdio_f0_readb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe0321373, "pinctrl_pm_select_default_state" },
	{ 0x64cd9f3e, "dev_driver_string" },
	{ 0x866f452c, "wake_up_process" },
	{ 0xa9d2c6da, "pskb_expand_head" },
	{ 0xc78590b9, "platform_device_add_data" },
	{ 0xf3b2e9a8, "pci_unregister_driver" },
	{ 0x78738ef1, "ether_setup" },
	{ 0xfb354f69, "cfg80211_disconnected" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x57496cb8, "unregister_netdevice_queue" },
	{ 0x4980925b, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc8b70c52, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3590751, "brcmu_pktq_penq_head" },
	{ 0x2e789f40, "brcmu_pktq_init" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x2668e5f8, "of_property_read_variable_u16_array" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x90822239, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x890e12f, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xd8aacb8, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcf80f62b, "skb_dequeue" },
	{ 0x5a6f312b, "cfg80211_remain_on_channel_expired" },
	{ 0x24eb2cee, "unregister_netdev" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xbe9b3c7e, "sdio_register_driver" },
	{ 0x36d24122, "consume_skb" },
	{ 0xd1508969, "sdio_memcpy_fromio" },
	{ 0xd9dcbd9d, "cfg80211_sched_scan_stopped" },
	{ 0xa1eb11de, "sdio_claim_host" },
	{ 0xe57ede98, "platform_driver_unregister" },
	{ 0x32704252, "firmware_request_nowarn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd7059096, "cfg80211_scan_done" },
	{ 0x11ec7220, "sdio_retune_crc_disable" },
	{ 0x4f1335fd, "of_property_read_variable_u32_array" },
	{ 0xd4a2a330, "brcmu_pkt_buf_free_skb" },
	{ 0x4cf237b2, "skb_put" },
	{ 0x708d2e28, "pci_enable_device" },
	{ 0xc60c2d7d, "of_node_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8b3f3a9d, "is_acpi_device_node" },
	{ 0x91cea0a0, "sdio_set_block_size" },
	{ 0x8d5581e5, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7ee7514, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x591d8fb5, "sdio_release_host" },
	{ 0xd9a62111, "sdio_retune_hold_now" },
	{ 0xc017c151, "cfg80211_sched_scan_results" },
	{ 0x1d0db279, "brcmu_pktq_mlen" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "brcmutil");

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("pci:v000014E4d000043A3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004355sv000014E4sd00004355bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004354sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043ECsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043E9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043EFsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000AA52sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004365sv000014E4sd00004365bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C4sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C5sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000440Dsv*sd*bc02sc80i*");
