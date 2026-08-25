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
	{ 0xc906aea4, "pnfs_unregister_layoutdriver" },
	{ 0x2125c76e, "nfs4_schedule_session_recovery" },
	{ 0xfb66f1eb, "alloc_pages_current" },
	{ 0xc180dffa, "pnfs_nfs_generic_sync" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfbd6ae90, "xdr_init_encode" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x59f8fb1, "nfs4_pnfs_ds_connect" },
	{ 0x378c359f, "pnfs_generic_clear_request_commit" },
	{ 0x48d3dd27, "nfs42_proc_layouterror" },
	{ 0x50a9afd2, "nfs4_setup_sequence" },
	{ 0x5a01abae, "prepare_kernel_cred" },
	{ 0x9a402ddf, "nfs_init_cinfo" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc44fa625, "nfs_initiate_commit" },
	{ 0x36455a5e, "pnfs_error_mark_layout_for_return" },
	{ 0x3ff5cab, "nfs4_pnfs_ds_put" },
	{ 0x54bef45, "layoutstats_timer" },
	{ 0x5ab6e33a, "nfs4_delete_deviceid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb7b86108, "init_user_ns" },
	{ 0x6530592c, "nfs4_mark_deviceid_unavailable" },
	{ 0x3aa9ab1a, "nfs4_decode_mp_ds_addr" },
	{ 0x25ddb7ae, "nfs_initiate_pgio" },
	{ 0xd2fdd594, "pnfs_generic_commit_pagelist" },
	{ 0x61a9e606, "pnfs_generic_recover_commit_reqs" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x2cd71cd7, "nfs4_sequence_done" },
	{ 0x93127924, "xdr_reserve_space" },
	{ 0xf9b10b5e, "pnfs_generic_pg_test" },
	{ 0x4f62e84, "pnfs_update_layout" },
	{ 0x1013acb2, "make_kgid" },
	{ 0x8b8733aa, "rpc_exit" },
	{ 0x7023a382, "pnfs_generic_pg_cleanup" },
	{ 0x8564f1e7, "pnfs_generic_write_commit_done" },
	{ 0x6b83be88, "rpc_delay" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x26bee1f1, "pnfs_generic_layout_insert_lseg" },
	{ 0x65d692de, "xdr_init_decode_pages" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xc5ffbd12, "rpc_call_start" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x642e6cd6, "pnfs_read_resend_pnfs" },
	{ 0x67e66bcb, "nfs4_find_get_deviceid" },
	{ 0x638a829a, "nfs4_find_or_create_ds_client" },
	{ 0x15b04a24, "rpc_max_payload" },
	{ 0x42685161, "nfs_pageio_reset_write_mds" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x679f7f1d, "pnfs_layout_mark_request_commit" },
	{ 0x25bc1b29, "pnfs_destroy_layout" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd0cfec78, "nfs4_pnfs_ds_add" },
	{ 0xd7a26727, "pnfs_layoutcommit_inode" },
	{ 0xc13de0c8, "pnfs_put_lseg" },
	{ 0x3a04e7f9, "nfs4_put_deviceid_node" },
	{ 0xba16e220, "pnfs_report_layoutstat" },
	{ 0xdf7bf578, "pnfs_set_layoutcommit" },
	{ 0x7f029b81, "pnfs_generic_scan_commit_lists" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0x41ebd3b9, "__free_pages" },
	{ 0xe2cb580c, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa7e5d1bb, "nfs4_test_deviceid_unavailable" },
	{ 0x6085edbd, "nfs_map_string_to_numeric" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x3af4045d, "__put_cred" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0xbb2aa3f6, "pnfs_generic_pg_readpages" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0x27df89a1, "pnfs_read_done_resend_to_mds" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x28f572cc, "rpc_restart_call_prepare" },
	{ 0xcae9871e, "pnfs_generic_pg_writepages" },
	{ 0xfa145314, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0xc248dce0, "pnfs_generic_pg_check_layout" },
	{ 0x4829a47e, "memcpy" },
	{ 0xffae5239, "pnfs_write_done_resend_to_mds" },
	{ 0xaec5ae5f, "rpc_wake_up" },
	{ 0xc7b8431, "rpc_count_iostats_metrics" },
	{ 0xd184642c, "xdr_inline_decode" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4928f22c, "param_ops_ushort" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xa1e68b8e, "xdr_write_pages" },
	{ 0xf2627e42, "nfs_pageio_reset_read_mds" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb3b7bb2d, "nfs4_init_deviceid_node" },
	{ 0xc382f4bb, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdb523b31, "xdr_set_scratch_buffer" },
	{ 0xd4d14d3d, "nfs_writeback_update_inode" },
	{ 0x63e1dc86, "nfs4_mark_deviceid_available" },
	{ 0x4fd6d6fb, "__put_page" },
	{ 0xf4de0930, "pnfs_register_layoutdriver" },
};

MODULE_INFO(depends, "");

