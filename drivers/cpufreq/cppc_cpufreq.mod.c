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
	{ 0x1de7fe8f, "cpufreq_unregister_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf3fdc0c2, "cpufreq_register_driver" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xf0380913, "acpi_get_psd_map" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x2817f7fd, "cppc_get_desired_perf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd46af5ef, "cppc_get_perf_ctrs" },
	{ 0x3feea40, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcde26600, "cppc_get_transition_latency" },
	{ 0x9e005e6f, "cppc_get_perf_caps" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x88bb890d, "cpufreq_freq_transition_end" },
	{ 0x5109c9b8, "cpufreq_freq_transition_begin" },
	{ 0x60f99e1b, "cppc_set_perf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI0007:*");
