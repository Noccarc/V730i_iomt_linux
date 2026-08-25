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
	{ 0x40fd20ec, "skb_queue_head" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2ebbdcb, "__dev_kfree_skb_any" },
	{ 0xdb680deb, "skb_unlink" },
	{ 0xe0308c3b, "__netdev_alloc_skb" },
	{ 0xae58e266, "skb_dequeue_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0xe39d8a00, "skb_queue_tail" },
	{ 0xcf80f62b, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4cf237b2, "skb_put" },
};

MODULE_INFO(depends, "");

