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
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0x1dbff301, "media_device_usb_allocate" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x509c63b3, "usb_altnum_to_altsetting" },
	{ 0xa286a234, "snd_pcm_format_name" },
	{ 0x42bbfb6f, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xd18703b6, "media_device_unregister_entity" },
	{ 0xec093d91, "snd_pcm_period_elapsed" },
	{ 0x6d1fc477, "media_devnode_create" },
	{ 0x9efb9189, "usb_driver_set_configuration" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4f136fff, "snd_pcm_stop_xrun" },
	{ 0x6da9f9, "seq_printf" },
	{ 0x4239f896, "usb_kill_urb" },
	{ 0x8de96219, "usb_reset_configuration" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4d9ec2fc, "media_device_delete" },
	{ 0xb7f0129b, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2d955318, "usb_autopm_get_interface" },
	{ 0x52adbe81, "snd_pcm_lib_preallocate_pages" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb2af19e1, "snd_usbmidi_resume" },
	{ 0xd4c525e5, "usb_unlink_urb" },
	{ 0x52e8d88f, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaf7d07c8, "usb_get_descriptor" },
	{ 0xbba6de33, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9d192459, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x2c643e88, "snd_device_new" },
	{ 0x76a965cb, "usb_string" },
	{ 0x2abe7fdc, "media_remove_intf_link" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7a05dc35, "snd_pcm_hw_constraint_list" },
	{ 0xe547d372, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xcdcabffe, "snd_pcm_set_ops" },
	{ 0x10867959, "media_entity_pads_init" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xb7fd2367, "usb_set_interface" },
	{ 0x72ff7b24, "snd_ctl_notify" },
	{ 0xe1d091ec, "snd_card_free_when_closed" },
	{ 0xc02bb9fd, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x6e41b656, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x34ceb970, "usb_driver_claim_interface" },
	{ 0x9e039733, "snd_pcm_new_stream" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5112f9b8, "snd_hwdep_new" },
	{ 0xc55c267, "snd_pcm_lib_free_pages" },
	{ 0xa385eb75, "snd_pcm_lib_ioctl" },
	{ 0x29bcdec1, "usb_free_coherent" },
	{ 0x3990fe09, "_dev_err" },
	{ 0xbf2a5304, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4c45c868, "__snd_usbmidi_create" },
	{ 0xfc7ffcbe, "snd_pcm_lib_malloc_pages" },
	{ 0x1d4a9418, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xad8f489b, "media_device_register_entity" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xbed43a41, "snd_usbmidi_suspend" },
	{ 0x587ba624, "_dev_info" },
	{ 0x56049771, "usb_submit_urb" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0xc77e8049, "snd_pcm_hw_rule_add" },
	{ 0x62ef2dff, "snd_component_add" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6066087b, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17f2ae92, "usb_reset_device" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdd0ea279, "snd_ctl_new1" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xc8acd259, "usb_interrupt_msg" },
	{ 0x6d121522, "media_create_pad_link" },
	{ 0xa9c7dff0, "media_create_intf_link" },
	{ 0x530586ec, "snd_ctl_find_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x972c0fca, "snd_ctl_free_one" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x721e17c2, "snd_card_rw_proc_new" },
	{ 0xc91c9e02, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc655ad62, "param_array_ops" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xe17b0c8b, "snd_pcm_hw_constraint_minmax" },
	{ 0x24e0ecf3, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9f7e3e84, "snd_card_free" },
	{ 0x52b757c8, "snd_card_register" },
	{ 0x7c04b78, "snd_pcm_add_chmap_ctls" },
	{ 0xd5b9d94f, "usb_ifnum_to_if" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xff3e2e3b, "snd_pcm_new" },
	{ 0x956852a6, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x94ae22f, "usb_alloc_coherent" },
	{ 0xbb656f5d, "snd_ctl_add" },
	{ 0xa1873a75, "usb_get_current_frame_number" },
	{ 0x77bc13a0, "strim" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe64c27e8, "usb_free_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xbbc85688, "usb_autopm_put_interface" },
	{ 0xfc91d4fc, "usb_alloc_urb" },
	{ 0x83762fc9, "media_devnode_remove" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd-hwdep");

MODULE_ALIAS("usb:v03F0p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0403pB8D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3048d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F0Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F19d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424pB832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0850d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08AEd*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08F0d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08F5d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08F6d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp0990d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v0499p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1004d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p1005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p100Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p102Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p102Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p102Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p104Ed*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p104Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1053d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p1054d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p1055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1059d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1507d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1509d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p150Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p150Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p*d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p001Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p002Bd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p002Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p003Bd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0047d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0048d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p004Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p004Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p006Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0074d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p00A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p00C4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p00E6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0108d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p012Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p*d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v06F8pB000d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1002d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1011d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1021d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1031d010dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0763p1033d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2001d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2003d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2008d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p200Dd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0763p2030d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2031d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2080d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2081d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v07CFp6801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CFp6802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FDp0001d*dc*dsc02dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0944p0200d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0944p0201d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v09E8p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09E8p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A4Ep2040d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0A4Ep4040d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0012d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0013d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0014d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Dp0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Dp0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p0001d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1235p0002d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1235p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p4661d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v133Ep0815d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13E5p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p752Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F38p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4752p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7104p2202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v05E1p0408d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v0DBAp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DBAp3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep0283d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v200Cp100Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1686p00DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic01isc03ip*in*");
MODULE_ALIAS("usb:v0D8Cp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19B5p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp4014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp402Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FDp0004d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2B73p0023d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2B73p0017d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2B73p000Ed*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0414pA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p0D64d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p543Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v26CEp0A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0414pA000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0414pA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v534Dp2109d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic01isc01ip*in*");
