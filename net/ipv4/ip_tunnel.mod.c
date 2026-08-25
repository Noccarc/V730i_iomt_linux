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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe0041c7b, "module_layout" },
	{ 0xe67f4cec, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x29fa7653, "icmpv6_send" },
	{ 0x98cf60b3, "strlen" },
	{ 0x53c51e67, "iptun_encaps" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7083910b, "dst_release" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd70a8466, "dst_cache_get_ip4" },
	{ 0xdb562082, "neigh_destroy" },
	{ 0x1885f87d, "__icmp_send" },
	{ 0x4cda1c15, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x3feea40, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x89d1d583, "free_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x23fe779b, "iptunnel_xmit" },
	{ 0x7439bde6, "gro_cells_receive" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xeeb4582, "init_net" },
	{ 0xc18c0283, "__skb_get_hash" },
	{ 0x5553269e, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421ac717, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x8123c2db, "alloc_netdev_mqs" },
	{ 0x2e2d0e4a, "eth_type_trans" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xa9d2c6da, "pskb_expand_head" },
	{ 0xf0e816f5, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x57496cb8, "unregister_netdevice_queue" },
	{ 0xae66fbcd, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6f2ca5fe, "gro_cells_init" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x4829a47e, "memcpy" },
	{ 0x32764ae4, "dst_cache_set_ip4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3a13d93, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x547fd45f, "dev_set_mtu" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

