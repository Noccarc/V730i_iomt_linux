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
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xc829374e, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb128eb99, "video_device_release_empty" },
	{ 0x42bbfb6f, "param_ops_int" },
	{ 0x83b10363, "v4l2_device_unregister" },
	{ 0xb3b56da9, "v4l2_ctrl_handler_free" },
	{ 0xcd6d5161, "v4l2_ctrl_g_ctrl" },
	{ 0x26ebe5b9, "vb2_fop_poll" },
	{ 0x33afc171, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4239f896, "usb_kill_urb" },
	{ 0x659fd2af, "vb2_ops_wait_prepare" },
	{ 0x7db730c5, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x907d7828, "v4l2_device_register" },
	{ 0xd34f6fec, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfab15b03, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e75adbf, "vb2_vmalloc_memops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc734c449, "vb2_fop_mmap" },
	{ 0x37158958, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x362515bf, "video_unregister_device" },
	{ 0xb7fd2367, "usb_set_interface" },
	{ 0x87a6536a, "v4l2_ctrl_subscribe_event" },
	{ 0x232c03d6, "vb2_plane_vaddr" },
	{ 0xc1f3536b, "vb2_buffer_done" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5be1b729, "vb2_ioctl_create_bufs" },
	{ 0x29bcdec1, "usb_free_coherent" },
	{ 0x42b3ed21, "vb2_ioctl_dqbuf" },
	{ 0xc88bba0d, "__v4l2_ctrl_s_ctrl" },
	{ 0x56049771, "usb_submit_urb" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0xe24eb29d, "vb2_fop_release" },
	{ 0x92b31f12, "vb2_queue_error" },
	{ 0x35bd484d, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaab74078, "input_register_device" },
	{ 0x8bfa2070, "v4l2_ctrl_handler_setup" },
	{ 0x3a7baba8, "usb_clear_halt" },
	{ 0x39386b7d, "input_free_device" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2141ec44, "v4l2_fh_open" },
	{ 0x7cbcf07c, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x40f2d810, "input_unregister_device" },
	{ 0xda0e10a0, "vb2_ops_wait_finish" },
	{ 0xd5b9d94f, "usb_ifnum_to_if" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8c7a2d28, "vb2_ioctl_expbuf" },
	{ 0x94ae22f, "usb_alloc_coherent" },
	{ 0xe6220fff, "vb2_ioctl_streamoff" },
	{ 0x934c552b, "v4l2_device_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe64c27e8, "usb_free_urb" },
	{ 0x6a3dbc34, "video_ioctl2" },
	{ 0xfc91d4fc, "usb_alloc_urb" },
	{ 0xb58ab548, "input_allocate_device" },
	{ 0x9c0f8fcd, "vb2_queue_init" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "622BE485A3666FE37396CA5");
