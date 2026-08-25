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
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb7f0129b, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd297c39f, "usb_ep_autoconfig_reset" },
	{ 0x4ddcb8f2, "usb_otg_descriptor_init" },
	{ 0xbba6de33, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeb6c8f26, "usb_put_function_instance" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe237e6a5, "usb_otg_descriptor_alloc" },
	{ 0xeab7e8a9, "usb_composite_overwrite_options" },
	{ 0x587ba624, "_dev_info" },
	{ 0xb11b3821, "usb_composite_probe" },
	{ 0x8520830b, "usb_add_function" },
	{ 0x6cd05e5e, "usb_gadget_wakeup" },
	{ 0xdeb2566, "usb_put_function" },
	{ 0xc61a9e31, "usb_composite_unregister" },
	{ 0xa48c8a16, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0xf39fd01e, "usb_string_ids_tab" },
	{ 0x1acf8886, "usb_add_config_only" },
	{ 0x3a79f574, "usb_get_function_instance" },
	{ 0x4928f22c, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc382f4bb, "param_ops_uint" },
};

MODULE_INFO(depends, "");

