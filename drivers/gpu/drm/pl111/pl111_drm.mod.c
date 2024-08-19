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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2e3257c6, "drm_release" },
	{ 0xf9a482f9, "msleep" },
	{ 0x42fdd9eb, "amba_driver_register" },
	{ 0xfcfe07e8, "drm_dev_register" },
	{ 0x7cbd239b, "drm_compat_ioctl" },
	{ 0x815588a6, "clk_enable" },
	{ 0xd452f1f5, "of_find_matching_node_and_match" },
	{ 0x23582d80, "drm_crtc_arm_vblank_event" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x39191e28, "of_find_node_opts_by_path" },
	{ 0x1c506289, "drm_dev_alloc" },
	{ 0x963775c2, "drm_mode_config_cleanup" },
	{ 0x2797bcf2, "drm_mode_config_reset" },
	{ 0x4cce27ef, "regmap_update_bits_base" },
	{ 0xe0937a56, "drm_gem_cma_prime_mmap" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5673b854, "clk_hw_get_parent" },
	{ 0x4be00afc, "drm_crtc_handle_vblank" },
	{ 0x6da9f9, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xea3a430d, "drm_crtc_vblank_off" },
	{ 0xad6b3c77, "devm_ioremap_resource" },
	{ 0x6ee0a679, "drm_of_find_panel_or_bridge" },
	{ 0x9464e412, "drm_fb_cma_get_gem_addr" },
	{ 0xffc6cb8, "of_device_is_compatible" },
	{ 0xc2fe8895, "drm_vblank_init" },
	{ 0x8db556f2, "drm_gem_cma_prime_get_sg_table" },
	{ 0x6701be9a, "__platform_driver_register" },
	{ 0x786ccba1, "drm_gem_cma_vm_ops" },
	{ 0xa743d2e4, "drm_simple_display_pipe_init" },
	{ 0x489f003b, "of_reserved_mem_device_init_by_idx" },
	{ 0xe85469f7, "drm_fbdev_generic_setup" },
	{ 0xec43df3c, "drm_panel_bridge_add" },
	{ 0x9b8f81a8, "drm_dev_put" },
	{ 0x61ff0287, "drm_dev_unregister" },
	{ 0x4713a51e, "drm_gem_cma_dumb_create" },
	{ 0x644acbe4, "of_graph_get_next_endpoint" },
	{ 0x3597f226, "drm_gem_fb_create" },
	{ 0x54aeeffa, "drm_crtc_vblank_on" },
	{ 0xa34b2c26, "syscon_node_to_regmap" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0xa1ceb52b, "drm_gem_cma_mmap" },
	{ 0xb90fbb44, "drm_read" },
	{ 0x5de53b6c, "noop_llseek" },
	{ 0x3990fe09, "_dev_err" },
	{ 0x441eadde, "drm_debugfs_create_files" },
	{ 0xdf4105b3, "drm_gem_prime_fd_to_handle" },
	{ 0x7329e287, "clk_hw_round_rate" },
	{ 0xa65ad067, "drm_ioctl" },
	{ 0x587ba624, "_dev_info" },
	{ 0x8c6ef925, "of_reserved_mem_device_release" },
	{ 0x9d78aca, "drm_atomic_helper_check" },
	{ 0x81889f5, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xa05d575, "drm_crtc_send_vblank_event" },
	{ 0x6e8012b3, "drm_crtc_vblank_get" },
	{ 0x9ffc2a40, "devm_clk_get" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8d0dfc5f, "of_get_next_available_child" },
	{ 0xa1bcdd6d, "drm_gem_prime_handle_to_fd" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe3c3f2cf, "drm_panel_bridge_remove" },
	{ 0xadf30b69, "drm_gem_cma_prime_import_sg_table" },
	{ 0x208deb80, "devm_clk_hw_register" },
	{ 0x726438c2, "drm_mode_config_init" },
	{ 0xd9ce7cef, "devm_regmap_init_vexpress_config" },
	{ 0x22c5b588, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x28a76d9d, "drm_simple_display_pipe_attach_bridge" },
	{ 0x9e1b9e0d, "amba_driver_unregister" },
	{ 0x4407ff76, "of_find_device_by_node" },
	{ 0x7a13f942, "drm_kms_helper_poll_init" },
	{ 0x219aeb27, "drm_gem_cma_free_object" },
	{ 0x4f1335fd, "of_property_read_variable_u32_array" },
	{ 0x75728f3d, "drm_gem_cma_prime_vmap" },
	{ 0xc60c2d7d, "of_node_put" },
	{ 0xcca175c7, "devm_kmalloc" },
	{ 0x5ee1a54b, "devm_request_threaded_irq" },
	{ 0x886689c1, "regmap_write" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xb92511b1, "drm_poll" },
	{ 0x18ec30f7, "drm_open" },
	{ 0xec258ee8, "platform_device_put" },
};

MODULE_INFO(depends, "");

