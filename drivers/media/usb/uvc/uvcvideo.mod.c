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
	{ 0xec3623a7, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xc829374e, "v4l2_event_unsubscribe" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb081e1fe, "debugfs_create_dir" },
	{ 0x14eae184, "v4l2_event_queue_fh" },
	{ 0x98cf60b3, "strlen" },
	{ 0xfffa08a3, "vb2_mmap" },
	{ 0x2b1cbb79, "usb_debug_root" },
	{ 0x83b10363, "v4l2_device_unregister" },
	{ 0xeff86b32, "no_llseek" },
	{ 0x93b751c0, "vb2_create_bufs" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x26ebe5b9, "vb2_fop_poll" },
	{ 0x33afc171, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4239f896, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x659fd2af, "vb2_ops_wait_prepare" },
	{ 0x7db730c5, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2d955318, "usb_autopm_get_interface" },
	{ 0x13e92e9f, "usb_enable_autosuspend" },
	{ 0xa84ed2a, "debugfs_create_file" },
	{ 0x1b5c0864, "v4l2_ctrl_merge" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a5960b2, "debugfs_remove_recursive" },
	{ 0x907d7828, "v4l2_device_register" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e75adbf, "vb2_vmalloc_memops" },
	{ 0x76a965cb, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc734c449, "vb2_fop_mmap" },
	{ 0x37158958, "vb2_ioctl_qbuf" },
	{ 0xe547d372, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x92ed8b78, "v4l2_event_subscribe" },
	{ 0xbbe80fdb, "kmalloc_order" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0x362515bf, "video_unregister_device" },
	{ 0x10867959, "media_entity_pads_init" },
	{ 0xb7fd2367, "usb_set_interface" },
	{ 0x8cb045fa, "v4l2_fh_init" },
	{ 0x232c03d6, "vb2_plane_vaddr" },
	{ 0xc1f3536b, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x59ebb249, "usb_poison_urb" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x6e41b656, "usb_control_msg" },
	{ 0x34ceb970, "usb_driver_claim_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x73450f74, "vb2_qbuf" },
	{ 0xc7d71a02, "vb2_ioctl_prepare_buf" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x5be1b729, "vb2_ioctl_create_bufs" },
	{ 0x29bcdec1, "usb_free_coherent" },
	{ 0xfe3c6279, "vb2_querybuf" },
	{ 0x42b3ed21, "vb2_ioctl_dqbuf" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3cb4fabd, "media_device_cleanup" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x56049771, "usb_submit_urb" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x4b77c88d, "v4l2_ctrl_replace" },
	{ 0x613f0677, "vb2_streamon" },
	{ 0x69b968f, "usb_get_dev" },
	{ 0xe24eb29d, "vb2_fop_release" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x35bd484d, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1252e9c0, "vb2_expbuf" },
	{ 0x16f1feae, "usb_put_dev" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x3a7baba8, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5ca43b81, "usb_driver_release_interface" },
	{ 0xecd96c69, "v4l2_device_register_subdev" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x6d121522, "media_create_pad_link" },
	{ 0x7bbc07d4, "vb2_reqbufs" },
	{ 0x4962e18e, "usb_get_intf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2141ec44, "v4l2_fh_open" },
	{ 0x668ceddb, "v4l2_subdev_init" },
	{ 0x7cbcf07c, "vb2_ioctl_querybuf" },
	{ 0xc91c9e02, "__media_device_register" },
	{ 0x528f4954, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd13223aa, "usb_match_one_id" },
	{ 0x96848186, "scnprintf" },
	{ 0x24e0ecf3, "usb_register_driver" },
	{ 0xda0e10a0, "vb2_ops_wait_finish" },
	{ 0xfec9f07e, "v4l2_fh_add" },
	{ 0xadb3ca89, "v4l2_fh_del" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xd5b9d94f, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd0cf53f0, "vb2_poll" },
	{ 0x1bbaabb0, "media_device_init" },
	{ 0x94ae22f, "usb_alloc_coherent" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xa1873a75, "usb_get_current_frame_number" },
	{ 0x30be69e8, "v4l2_format_info" },
	{ 0xe6220fff, "vb2_ioctl_streamoff" },
	{ 0xc8356911, "vb2_queue_release" },
	{ 0xc382f4bb, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7c4eda81, "vb2_streamoff" },
	{ 0xe64c27e8, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xafb7230, "media_device_unregister" },
	{ 0x6a3dbc34, "video_ioctl2" },
	{ 0xbbc85688, "usb_autopm_put_interface" },
	{ 0xfc91d4fc, "usb_alloc_urb" },
	{ 0xda3e760f, "usb_put_intf" },
	{ 0xe914e41e, "strcpy" },
	{ 0xfaf2e767, "v4l2_fh_exit" },
	{ 0x9c0f8fcd, "vb2_queue_init" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "989D8E515BF6041C12EE9A5");
