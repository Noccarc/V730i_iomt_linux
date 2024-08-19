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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe0041c7b, "module_layout" },
	{ 0x3c26306c, "snd_rawmidi_proceed" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0x53b954a2, "up_read" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x4239f896, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5f394438, "snd_rawmidi_set_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd2dec538, "snd_rawmidi_new" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9d192459, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb7fd2367, "usb_set_interface" },
	{ 0x72ff7b24, "snd_ctl_notify" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x6e41b656, "usb_control_msg" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9aaa32c0, "snd_rawmidi_transmit_peek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x29bcdec1, "usb_free_coherent" },
	{ 0xce807a25, "up_write" },
	{ 0x3990fe09, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x940b3b9c, "usb_urb_ep_type_check" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x56049771, "usb_submit_urb" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0xd92162f5, "snd_rawmidi_transmit_ack" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x68db066d, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xdd0ea279, "snd_ctl_new1" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x102fd9f7, "usb_autopm_get_interface_no_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x94ae22f, "usb_alloc_coherent" },
	{ 0xbb656f5d, "snd_ctl_add" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x73a65647, "snd_rawmidi_transmit" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe64c27e8, "usb_free_urb" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x61e65d03, "snd_rawmidi_receive" },
	{ 0xfc91d4fc, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

