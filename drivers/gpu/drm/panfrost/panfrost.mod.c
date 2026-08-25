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
	{ 0x2e3257c6, "drm_release" },
	{ 0xa0573262, "dma_direct_unmap_sg" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xfcfe07e8, "drm_dev_register" },
	{ 0x7cbd239b, "drm_compat_ioctl" },
	{ 0x273b2ea4, "pm_runtime_force_suspend" },
	{ 0x474927c4, "regulator_set_voltage" },
	{ 0x815588a6, "clk_enable" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x82bdec8e, "devfreq_resume_device" },
	{ 0x18b74d47, "__pm_runtime_disable" },
	{ 0x1c506289, "drm_dev_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xecaea5f0, "__pm_runtime_use_autosuspend" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xb222de38, "dev_pm_opp_get_voltage" },
	{ 0x7482a6c0, "__pm_runtime_suspend" },
	{ 0xe81ff3b3, "regulator_disable" },
	{ 0xbed482b0, "alloc_io_pgtable_ops" },
	{ 0xc70b4f41, "dma_set_mask" },
	{ 0x3296943b, "drm_gem_shmem_mmap" },
	{ 0x25eba6dd, "drm_gem_shmem_purge_locked" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc737285b, "drm_sched_resubmit_jobs" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x81d4cf95, "drm_gem_shmem_get_pages_sgt" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7d9bd797, "devm_devfreq_add_device" },
	{ 0xfb05be1d, "drm_gem_unlock_reservations" },
	{ 0x87b8798d, "sg_next" },
	{ 0x9f7ba438, "pm_runtime_force_resume" },
	{ 0xad6b3c77, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb7f0129b, "param_ops_bool" },
	{ 0x56ecbd31, "dev_pm_opp_get_freq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcb0e8a47, "devfreq_suspend_device" },
	{ 0x20bcd089, "__pm_runtime_resume" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6f855bb7, "devm_clk_get_optional" },
	{ 0x2057cd34, "dma_set_coherent_mask" },
	{ 0x6701be9a, "__platform_driver_register" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0xdd94a6f8, "drm_sched_increase_karma" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9394cc0, "drm_gem_shmem_pin" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0x9b8f81a8, "drm_dev_put" },
	{ 0x7b982195, "drm_mm_init" },
	{ 0x9d192459, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x6d3b1035, "dma_resv_wait_timeout_rcu" },
	{ 0xc49d66cc, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x2397317c, "drm_gem_shmem_print_info" },
	{ 0x6d87df0e, "drm_sched_stop" },
	{ 0x61ff0287, "drm_dev_unregister" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x44110257, "drm_gem_shmem_free_object" },
	{ 0xc5850110, "printk" },
	{ 0x66f4a42, "drm_gem_handle_create" },
	{ 0x56440820, "drm_gem_object_put_unlocked" },
	{ 0x5eeaf8bd, "drm_gem_objects_lookup" },
	{ 0x17520bb0, "shmem_read_mapping_page_gfp" },
	{ 0x5e8ab1e6, "drm_sched_fini" },
	{ 0x72e15730, "drm_sched_init" },
	{ 0x50674de7, "drm_timeout_abs_to_jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x240de2a7, "platform_get_resource" },
	{ 0xb90fbb44, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x5de53b6c, "noop_llseek" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x3990fe09, "_dev_err" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xde301e31, "drm_sched_entity_destroy" },
	{ 0xfede2727, "drm_gem_shmem_vunmap" },
	{ 0x225be295, "drm_gem_shmem_vm_ops" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xdf4105b3, "drm_gem_prime_fd_to_handle" },
	{ 0x439cdd74, "drm_gem_shmem_put_pages" },
	{ 0xbada5999, "drm_dev_printk" },
	{ 0xa65ad067, "drm_ioctl" },
	{ 0x587ba624, "_dev_info" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x5214f980, "devm_regulator_get" },
	{ 0xe3b7e1bc, "unregister_shrinker" },
	{ 0xf1f78f9, "drm_syncobj_replace_fence" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbc351cb2, "dev_pm_opp_put" },
	{ 0xd6228d61, "pm_runtime_enable" },
	{ 0x9d69cb75, "drm_sched_start" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd27c69a3, "platform_get_irq_byname" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x9c8282ef, "__pm_runtime_set_status" },
	{ 0xcc726493, "dev_pm_opp_of_remove_table" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xca1ac51, "devm_reset_control_array_get" },
	{ 0x8464746a, "drm_gem_object_lookup" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x64cd9f3e, "dev_driver_string" },
	{ 0x65d58959, "drm_sched_fault" },
	{ 0x9ffc2a40, "devm_clk_get" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa1bcdd6d, "drm_gem_prime_handle_to_fd" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x9ad09e7e, "drm_sched_job_init" },
	{ 0x68f7463d, "drm_gem_create_mmap_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f3f1229, "dma_direct_map_sg" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xca4f5836, "register_shrinker" },
	{ 0xc1aa5cb3, "devfreq_recommended_opp" },
	{ 0x21cd6d61, "drm_sched_job_cleanup" },
	{ 0x46101e8a, "drm_gem_shmem_unpin" },
	{ 0x1d12fd6e, "drm_mm_insert_node_in_range" },
	{ 0xd50b3d93, "drm_gem_lock_reservations" },
	{ 0x26b877c1, "drm_gem_shmem_create" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xfbd27bb7, "sg_alloc_table_from_pages" },
	{ 0xc307a10c, "drm_mm_takedown" },
	{ 0x56d1e892, "pm_runtime_set_autosuspend_delay" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xcf28ca2b, "drm_gem_prime_mmap" },
	{ 0x25b95038, "dev_pm_opp_of_add_table" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x29361773, "complete" },
	{ 0x22664539, "drm_syncobj_find_fence" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe57ede98, "platform_driver_unregister" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x2c287154, "drm_mm_remove_node" },
	{ 0x8840b003, "drm_gem_shmem_madvise" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x20ae545d, "drm_sched_entity_init" },
	{ 0xcca175c7, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x5ee1a54b, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd851fd21, "dma_resv_add_excl_fence" },
	{ 0xb4953257, "drm_syncobj_find" },
	{ 0xf175681d, "drm_gem_shmem_get_sg_table" },
	{ 0x1485a307, "free_io_pgtable_ops" },
	{ 0x5deb8470, "drm_gem_shmem_vmap" },
	{ 0xb92511b1, "drm_poll" },
	{ 0x3d02cd70, "dma_fence_signal_locked" },
	{ 0x7f53051, "drm_sched_entity_push_job" },
	{ 0x49e2691f, "regulator_enable" },
	{ 0x18ec30f7, "drm_open" },
};

MODULE_INFO(depends, "gpu-sched");

MODULE_ALIAS("of:N*T*Carm,mali-t604");
MODULE_ALIAS("of:N*T*Carm,mali-t604C*");
MODULE_ALIAS("of:N*T*Carm,mali-t624");
MODULE_ALIAS("of:N*T*Carm,mali-t624C*");
MODULE_ALIAS("of:N*T*Carm,mali-t628");
MODULE_ALIAS("of:N*T*Carm,mali-t628C*");
MODULE_ALIAS("of:N*T*Carm,mali-t720");
MODULE_ALIAS("of:N*T*Carm,mali-t720C*");
MODULE_ALIAS("of:N*T*Carm,mali-t760");
MODULE_ALIAS("of:N*T*Carm,mali-t760C*");
MODULE_ALIAS("of:N*T*Carm,mali-t820");
MODULE_ALIAS("of:N*T*Carm,mali-t820C*");
MODULE_ALIAS("of:N*T*Carm,mali-t830");
MODULE_ALIAS("of:N*T*Carm,mali-t830C*");
MODULE_ALIAS("of:N*T*Carm,mali-t860");
MODULE_ALIAS("of:N*T*Carm,mali-t860C*");
MODULE_ALIAS("of:N*T*Carm,mali-t880");
MODULE_ALIAS("of:N*T*Carm,mali-t880C*");
