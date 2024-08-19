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
	{ 0xff52dcf6, "devlink_port_register" },
	{ 0xfb66f1eb, "alloc_pages_current" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xa0573262, "dma_direct_unmap_sg" },
	{ 0x96a26ad6, "device_remove_file" },
	{ 0x4504943f, "kmem_cache_alloc_node" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0x35b8f182, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0xc4ba3673, "devlink_reload_enable" },
	{ 0x53b954a2, "up_read" },
	{ 0x831b4dc2, "pci_enable_sriov" },
	{ 0x5e304f5c, "devlink_reload_disable" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x42bbfb6f, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4c7e3820, "devlink_param_driverinit_value_get" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc70b4f41, "dma_set_mask" },
	{ 0x5f602934, "dev_printk" },
	{ 0xd371874c, "pci_disable_device" },
	{ 0x690daedb, "pci_disable_msix" },
	{ 0x32127574, "pci_disable_sriov" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8cb3345, "dma_direct_sync_single_for_cpu" },
	{ 0xff40d64b, "pcie_print_link_status" },
	{ 0x51924c87, "pci_release_regions" },
	{ 0xb7f0129b, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x434c7b55, "devlink_alloc" },
	{ 0x30f744f8, "devlink_params_register" },
	{ 0x1bbc61fd, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x9d2bebd4, "__alloc_pages_nodemask" },
	{ 0x2057cd34, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x748fe944, "devlink_param_value_changed" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xfe419c, "pci_set_master" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9d192459, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x5dad6142, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8e42b005, "devlink_params_publish" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9166fada, "strncpy" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x6b0e32d2, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x44f801f7, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6626afca, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xd22d728, "devlink_region_snapshot_create" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xce807a25, "up_write" },
	{ 0x3990fe09, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x74828651, "devlink_port_unregister" },
	{ 0x6f791233, "alloc_cpu_rmap" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x499dc98, "devlink_param_driverinit_value_set" },
	{ 0x41cea89f, "devlink_region_create" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x810be09, "free_irq_cpu_rmap" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x25c65acc, "device_create_file" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x587ba624, "_dev_info" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x41ebd3b9, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0x50da9ec2, "pci_enable_msix_range" },
	{ 0x605d5bfa, "cache_line_size" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x13d9ba52, "pci_read_config_dword" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xf3b2e9a8, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x333ed00, "param_ops_byte" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x8b5b25c8, "irq_cpu_rmap_add" },
	{ 0x81f9efd7, "devlink_free" },
	{ 0xab8dd469, "devlink_register" },
	{ 0xceb728d6, "pci_sriov_get_totalvfs" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f3f1229, "dma_direct_map_sg" },
	{ 0x48181e00, "devlink_region_shapshot_id_get" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6484df8a, "pci_request_regions" },
	{ 0xc655ad62, "param_array_ops" },
	{ 0xb005554e, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0xacff94a7, "devlink_params_unregister" },
	{ 0x24a8162f, "dma_direct_sync_single_for_device" },
	{ 0x890e12f, "__pci_register_driver" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xca9360b5, "rb_next" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x708d2e28, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x28f26684, "irq_set_affinity_hint" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xa410a295, "devlink_region_destroy" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x3fa5ebcd, "dma_pool_create" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc640147d, "devlink_unregister" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xf037fde7, "pcie_capability_write_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc06e42c1, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015B3d00006340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000634Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006732sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000673Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000675Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006764sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006746sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000676Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "25292ABA33AACEC70227442");
