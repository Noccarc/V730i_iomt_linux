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
	{ 0xe5c40a1a, "kmem_cache_destroy" },
	{ 0x2e3257c6, "drm_release" },
	{ 0x10bfcb21, "drm_prime_gem_destroy" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfcfe07e8, "drm_dev_register" },
	{ 0x7cbd239b, "drm_compat_ioctl" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9d479c4b, "drm_gem_put_pages" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xad53a019, "of_device_get_match_data" },
	{ 0x1c506289, "drm_dev_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x42bbfb6f, "param_ops_int" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x3ebc529e, "vmf_insert_mixed" },
	{ 0xe81ff3b3, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc737285b, "drm_sched_resubmit_jobs" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x21261fef, "drm_gem_mmap_obj" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xad6b3c77, "devm_ioremap_resource" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1bbc61fd, "dma_free_attrs" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x64c1b9bb, "__devm_reset_control_get" },
	{ 0x745a981, "xa_erase" },
	{ 0x2057cd34, "dma_set_coherent_mask" },
	{ 0x6701be9a, "__platform_driver_register" },
	{ 0xdd94a6f8, "drm_sched_increase_karma" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0x9b8f81a8, "drm_dev_put" },
	{ 0x7b982195, "drm_mm_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x6d87df0e, "drm_sched_stop" },
	{ 0x61ff0287, "drm_dev_unregister" },
	{ 0x65fccb35, "drm_gem_dma_resv_wait" },
	{ 0xa7c60440, "drm_prime_pages_to_sg" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x26285da5, "drm_sched_entity_fini" },
	{ 0xc5850110, "printk" },
	{ 0xac63e631, "dma_resv_add_shared_fence" },
	{ 0x66f4a42, "drm_gem_handle_create" },
	{ 0x56440820, "drm_gem_object_put_unlocked" },
	{ 0x5e8ab1e6, "drm_sched_fini" },
	{ 0x72e15730, "drm_sched_init" },
	{ 0x50674de7, "drm_timeout_abs_to_jiffies" },
	{ 0xba7d933d, "dma_direct_map_page" },
	{ 0x44f801f7, "dma_alloc_attrs" },
	{ 0xc4d0a192, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb7d86ac1, "drm_gem_object_release" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x240de2a7, "platform_get_resource" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x15d1c8e7, "kmem_cache_create_usercopy" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x3990fe09, "_dev_err" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x440f2850, "drm_gem_vm_open" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x90dfe9e3, "drm_gem_vm_close" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xdf4105b3, "drm_gem_prime_fd_to_handle" },
	{ 0x1cb20f56, "dma_direct_unmap_page" },
	{ 0xa65ad067, "drm_ioctl" },
	{ 0x587ba624, "_dev_info" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0xedc21635, "drm_gem_mmap" },
	{ 0x3e50b109, "drm_gem_fence_array_add" },
	{ 0x10b3d977, "drm_gem_fence_array_add_implicit" },
	{ 0xf1f78f9, "drm_syncobj_replace_fence" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9d69cb75, "drm_sched_start" },
	{ 0x6214db46, "dma_resv_reserve_shared" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd27c69a3, "platform_get_irq_byname" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8464746a, "drm_gem_object_lookup" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x98051f40, "devm_regulator_get_optional" },
	{ 0x9ffc2a40, "devm_clk_get" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa1bcdd6d, "drm_gem_prime_handle_to_fd" },
	{ 0xdfee2d83, "kmem_cache_create" },
	{ 0x9ad09e7e, "drm_sched_job_init" },
	{ 0xdd7f8db4, "drm_gem_object_init" },
	{ 0x68f7463d, "drm_gem_create_mmap_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x21cd6d61, "drm_sched_job_cleanup" },
	{ 0xbf26a257, "ww_mutex_unlock" },
	{ 0x1d12fd6e, "drm_mm_insert_node_in_range" },
	{ 0xc307a10c, "drm_mm_takedown" },
	{ 0x2c91e17c, "vm_get_page_prot" },
	{ 0x483378f9, "drm_prime_sg_to_page_addr_arrays" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x22664539, "drm_syncobj_find_fence" },
	{ 0xe57ede98, "platform_driver_unregister" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2c287154, "drm_mm_remove_node" },
	{ 0x20ae545d, "drm_sched_entity_init" },
	{ 0xcca175c7, "devm_kmalloc" },
	{ 0x23cc66c4, "drm_gem_get_pages" },
	{ 0x5ee1a54b, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd851fd21, "dma_resv_add_excl_fence" },
	{ 0xb4953257, "drm_syncobj_find" },
	{ 0x2c0ef145, "vmemmap" },
	{ 0xbdf567c, "ww_mutex_lock_interruptible" },
	{ 0x7f53051, "drm_sched_entity_push_job" },
	{ 0x49e2691f, "regulator_enable" },
	{ 0x18ec30f7, "drm_open" },
};

MODULE_INFO(depends, "gpu-sched");

MODULE_ALIAS("of:N*T*Carm,mali-400");
MODULE_ALIAS("of:N*T*Carm,mali-400C*");
MODULE_ALIAS("of:N*T*Carm,mali-450");
MODULE_ALIAS("of:N*T*Carm,mali-450C*");
