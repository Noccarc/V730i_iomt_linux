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
	{ 0x716d4777, "fuse_file_poll" },
	{ 0x5de53b6c, "noop_llseek" },
	{ 0x552b7677, "misc_deregister" },
	{ 0x8a4a7dc9, "class_destroy" },
	{ 0x72457946, "misc_register" },
	{ 0x2d8c77ea, "__class_create" },
	{ 0x4829a47e, "memcpy" },
	{ 0x73dde7dc, "fuse_dev_operations" },
	{ 0xb3b8285e, "fuse_dev_free" },
	{ 0xc1d7a055, "fuse_simple_background" },
	{ 0xfb66f1eb, "alloc_pages_current" },
	{ 0xeaf5b764, "fuse_dev_alloc_install" },
	{ 0x8f98a84f, "fuse_conn_init" },
	{ 0x75bebe04, "fuse_dev_fiq_ops" },
	{ 0xc5850110, "printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x79be1e4b, "kobject_uevent" },
	{ 0xb14b3dd2, "cdev_add" },
	{ 0xba04d151, "cdev_alloc" },
	{ 0x9a00e540, "device_add" },
	{ 0x24bd19d2, "put_device" },
	{ 0x45c3c525, "dev_set_name" },
	{ 0x7f48ad85, "device_initialize" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x98cf60b3, "strlen" },
	{ 0x41ebd3b9, "__free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x64adfb70, "fuse_direct_io" },
	{ 0x5843832f, "fuse_do_ioctl" },
	{ 0x7e3297e8, "fuse_do_open" },
	{ 0xccdcc0cc, "fuse_conn_get" },
	{ 0xe7579686, "fuse_sync_release" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb41d6e4, "fuse_dev_release" },
	{ 0x35b25914, "fuse_conn_put" },
	{ 0x2a7095a, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x7518749e, "device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4c265c93, "fuse_abort_conn" },
};

MODULE_INFO(depends, "fuse");

