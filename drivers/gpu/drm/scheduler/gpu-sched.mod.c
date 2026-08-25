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
	{ 0x2d3385d3, "system_wq" },
	{ 0xe5c40a1a, "kmem_cache_destroy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe8e40a30, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0xc5850110, "printk" },
	{ 0xae4a89e0, "kthread_stop" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xc4d0a192, "kmem_cache_free" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3c23da, "kthread_unpark" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x3b20fb95, "dma_fence_remove_callback" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x866f452c, "wake_up_process" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5e4e9a9, "kthread_park" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdfee2d83, "kmem_cache_create" },
	{ 0xc354b5b0, "sched_setscheduler" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");

