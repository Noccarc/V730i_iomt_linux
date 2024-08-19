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
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0x8a53ccca, "usb_add_config" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0xb7f0129b, "param_ops_bool" },
	{ 0x4ddcb8f2, "usb_otg_descriptor_init" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0xbba6de33, "param_ops_charp" },
	{ 0xe86bb2cf, "fsg_common_set_cdev" },
	{ 0xeb6c8f26, "usb_put_function_instance" },
	{ 0xe237e6a5, "usb_otg_descriptor_alloc" },
	{ 0xeab7e8a9, "usb_composite_overwrite_options" },
	{ 0x587ba624, "_dev_info" },
	{ 0xb11b3821, "usb_composite_probe" },
	{ 0x8520830b, "usb_add_function" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0xdeb2566, "usb_put_function" },
	{ 0xc61a9e31, "usb_composite_unregister" },
	{ 0xa48c8a16, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0xf39fd01e, "usb_string_ids_tab" },
	{ 0xc655ad62, "param_array_ops" },
	{ 0x3a79f574, "usb_get_function_instance" },
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0x4928f22c, "param_ops_ushort" },
	{ 0xc382f4bb, "param_ops_uint" },
};

MODULE_INFO(depends, "");

