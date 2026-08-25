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
	{ 0xe0badb3, "sock_release" },
	{ 0xfc51d66c, "metadata_dst_alloc" },
	{ 0x122a78c, "sock_create_kern" },
	{ 0xd3a4f483, "kernel_setsockopt" },
	{ 0xca0a1d02, "kernel_connect" },
	{ 0x23fe779b, "iptunnel_xmit" },
	{ 0x60e897fb, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbf5ed5d3, "ipv6_stub" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd4046891, "udp_set_csum" },
	{ 0xcb5ab8e3, "kernel_bind" },
	{ 0x8d522714, "__rcu_read_lock" },
};

MODULE_INFO(depends, "");

