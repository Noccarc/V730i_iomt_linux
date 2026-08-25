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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8c108c6b, "inet_del_protocol" },
	{ 0x1885f87d, "__icmp_send" },
	{ 0x2561913a, "__pskb_pull_tail" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe4da9bd2, "inet_add_protocol" },
	{ 0x421ac717, "kfree_skb" },
};

MODULE_INFO(depends, "");

