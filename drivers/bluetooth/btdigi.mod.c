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
	{ 0xe57ede98, "platform_driver_unregister" },
	{ 0x6701be9a, "__platform_driver_register" },
	{ 0x9d192459, "_dev_warn" },
	{ 0x49e2691f, "regulator_enable" },
	{ 0x5214f980, "devm_regulator_get" },
	{ 0x3990fe09, "_dev_err" },
	{ 0xe81ff3b3, "regulator_disable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdigi,bluetooth-cc8x");
MODULE_ALIAS("of:N*T*Cdigi,bluetooth-cc8xC*");

MODULE_INFO(srcversion, "0B882B06A7B8891D111A21F");
