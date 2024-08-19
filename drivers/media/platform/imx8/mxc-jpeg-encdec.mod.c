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
	{ 0xc755ea91, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xc829374e, "v4l2_event_unsubscribe" },
	{ 0x788ddf9e, "__pm_runtime_idle" },
	{ 0x815588a6, "clk_enable" },
	{ 0x65c639e4, "device_link_add" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x18b74d47, "__pm_runtime_disable" },
	{ 0x4378b388, "v4l2_m2m_qbuf" },
	{ 0x14eae184, "v4l2_event_queue_fh" },
	{ 0x42bbfb6f, "param_ops_int" },
	{ 0x5e3201a6, "v4l2_m2m_ctx_init" },
	{ 0x7e96df48, "video_device_release" },
	{ 0x644e1046, "of_count_phandle_with_args" },
	{ 0xc70b4f41, "dma_set_mask" },
	{ 0x83b10363, "v4l2_device_unregister" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x659fd2af, "vb2_ops_wait_prepare" },
	{ 0xad6b3c77, "devm_ioremap_resource" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x7db730c5, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15c66bf7, "v4l2_m2m_fop_mmap" },
	{ 0x20bcd089, "__pm_runtime_resume" },
	{ 0x1bbc61fd, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x2057cd34, "dma_set_coherent_mask" },
	{ 0x6701be9a, "__platform_driver_register" },
	{ 0x370b40b0, "v4l2_m2m_ioctl_streamon" },
	{ 0x907d7828, "v4l2_device_register" },
	{ 0x78ef57fc, "device_link_del" },
	{ 0xd8edaabd, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x9d192459, "_dev_warn" },
	{ 0xd4c52841, "video_device_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x92ed8b78, "v4l2_event_subscribe" },
	{ 0xa455958, "v4l2_m2m_ioctl_streamoff" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c381975, "of_match_node" },
	{ 0x362515bf, "video_unregister_device" },
	{ 0x7014bdfb, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x8cb045fa, "v4l2_fh_init" },
	{ 0x232c03d6, "vb2_plane_vaddr" },
	{ 0xc1f3536b, "vb2_buffer_done" },
	{ 0x44f801f7, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x240de2a7, "platform_get_resource" },
	{ 0x3990fe09, "_dev_err" },
	{ 0x4b12a5b2, "vb2_plane_cookie" },
	{ 0xe9fc5236, "v4l2_m2m_get_vq" },
	{ 0x9f93e984, "dev_pm_domain_detach" },
	{ 0x587ba624, "_dev_info" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x8abe6365, "v4l2_m2m_fop_poll" },
	{ 0xd6228d61, "pm_runtime_enable" },
	{ 0x459e133f, "v4l2_m2m_get_curr_priv" },
	{ 0x35bd484d, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x752b1e87, "v4l2_m2m_buf_queue" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x79d3cfa1, "v4l2_m2m_ioctl_querybuf" },
	{ 0x9ffc2a40, "devm_clk_get" },
	{ 0xee3b1269, "v4l2_m2m_ioctl_expbuf" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc2f53b56, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9354f825, "v4l2_m2m_dqbuf" },
	{ 0xb4e3ff91, "v4l2_src_change_event_subscribe" },
	{ 0xcdd065dd, "v4l2_m2m_buf_remove" },
	{ 0xda0e10a0, "vb2_ops_wait_finish" },
	{ 0xfec9f07e, "v4l2_fh_add" },
	{ 0xbbdd5cd9, "v4l2_m2m_ctx_release" },
	{ 0xadb3ca89, "v4l2_fh_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd47ca4ed, "platform_get_irq" },
	{ 0xe57ede98, "platform_driver_unregister" },
	{ 0xcca175c7, "devm_kmalloc" },
	{ 0x5ee1a54b, "devm_request_threaded_irq" },
	{ 0xe1f70588, "v4l2_m2m_next_buf" },
	{ 0x6a3dbc34, "video_ioctl2" },
	{ 0xc60881a1, "v4l2_m2m_job_finish" },
	{ 0x2448db98, "dev_pm_domain_attach_by_id" },
	{ 0xfaf2e767, "v4l2_fh_exit" },
	{ 0x9c0f8fcd, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx8-jpgdec");
MODULE_ALIAS("of:N*T*Cfsl,imx8-jpgdecC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8-jpgenc");
MODULE_ALIAS("of:N*T*Cfsl,imx8-jpgencC*");
