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
	{ 0xe0738838, "udp6_set_csum" },
	{ 0xe0badb3, "sock_release" },
	{ 0x122a78c, "sock_create_kern" },
	{ 0xd3a4f483, "kernel_setsockopt" },
	{ 0xca0a1d02, "kernel_connect" },
	{ 0x60e897fb, "kernel_sock_shutdown" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb5ab8e3, "kernel_bind" },
	{ 0xf561ba59, "ip6_local_out" },
};

MODULE_INFO(depends, "");

