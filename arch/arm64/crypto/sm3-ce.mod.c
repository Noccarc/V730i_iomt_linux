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
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xdcb764ad, "memset" },
	{ 0xcff234e4, "crypto_unregister_shash" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa4372d0e, "crypto_register_shash" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x2546f62b, "crypto_sm3_update" },
	{ 0xabe25f11, "crypto_sm3_finup" },
};

MODULE_INFO(depends, "sm3_generic");

MODULE_ALIAS("cpu:type:*:feature:*0012*");
