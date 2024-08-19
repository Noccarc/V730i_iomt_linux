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
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0x6e5b8651, "xz_dec_run" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x52d717da, "xz_dec_init" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");

