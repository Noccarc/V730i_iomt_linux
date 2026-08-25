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
	{ 0xbba6de33, "param_ops_charp" },
	{ 0x42bbfb6f, "param_ops_int" },
	{ 0xc382f4bb, "param_ops_uint" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x3bdb5d28, "alg_test" },
	{ 0x69e0f203, "crypto_aead_setkey" },
	{ 0xb9f1b1c6, "crypto_aead_setauthsize" },
	{ 0xbcc00391, "crypto_alloc_aead" },
	{ 0x414b5ac6, "crypto_ahash_final" },
	{ 0x18fd9762, "crypto_ahash_setkey" },
	{ 0x37a0cba, "kfree" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0x150f9f51, "crypto_alloc_ahash" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a4497db, "kzfree" },
	{ 0x261c7303, "crypto_req_done" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbd06cf77, "crypto_destroy_tfm" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x47286183, "crypto_alloc_skcipher" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4c029b6d, "crypto_ahash_digest" },
	{ 0x85689fee, "crypto_skcipher_decrypt" },
	{ 0x5b5f9303, "crypto_skcipher_encrypt" },
	{ 0xc5850110, "printk" },
	{ 0xd216ed9b, "crypto_aead_decrypt" },
	{ 0xe30f6adb, "crypto_aead_encrypt" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
};

MODULE_INFO(depends, "");

