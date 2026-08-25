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
	{ 0xfb178df0, "genphy_resume" },
	{ 0x35449cb6, "phy_drivers_unregister" },
	{ 0x7797082b, "phy_drivers_register" },
	{ 0xa71d529d, "phy_write_mmd" },
	{ 0x9d192459, "_dev_warn" },
	{ 0x51cd7a60, "phy_restore_page" },
	{ 0x12a38747, "usleep_range" },
	{ 0x92fe7788, "phy_save_page" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa9789553, "phy_read_mmd" },
	{ 0x4f1335fd, "of_property_read_variable_u32_array" },
	{ 0xcca175c7, "devm_kmalloc" },
	{ 0x484c68e7, "genphy_suspend" },
	{ 0xcb0e7db, "__genphy_config_aneg" },
	{ 0x24f36ad7, "mdiobus_write" },
	{ 0x83eb187c, "mdiobus_read" },
	{ 0x3ef9b704, "devm_kfree" },
	{ 0xf472a9b9, "__mdiobus_read" },
	{ 0x41bec76f, "__mdiobus_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000000111110000010011????");
