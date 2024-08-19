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
	{ 0xb7f0129b, "param_ops_bool" },
	{ 0x77772912, "ip_tunnel_get_link_net" },
	{ 0x3bb6eabc, "ip_tunnel_get_iflink" },
	{ 0xf399984b, "ip_tunnel_get_stats64" },
	{ 0xfd60fc36, "rtnl_link_register" },
	{ 0xad1554af, "xfrm4_tunnel_register" },
	{ 0xe67f5bc5, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf34536bf, "unregister_pernet_device" },
	{ 0xca9be874, "xfrm4_tunnel_deregister" },
	{ 0x5aa1c89f, "rtnl_link_unregister" },
	{ 0x640e8dd4, "ipv6_chk_custom_prefix" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc655daa4, "ipv6_chk_prefix" },
	{ 0x3a13d93, "skb_copy_bits" },
	{ 0x5eb044e5, "netif_rx" },
	{ 0x5083e1a7, "kmem_cache_alloc" },
	{ 0x4a882adb, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x29fa7653, "icmpv6_send" },
	{ 0x32764ae4, "dst_cache_set_ip4" },
	{ 0x23fe779b, "iptunnel_xmit" },
	{ 0x53c51e67, "iptun_encaps" },
	{ 0x36d24122, "consume_skb" },
	{ 0x2d0ffc7f, "skb_set_owner_w" },
	{ 0xf1201a8a, "skb_realloc_headroom" },
	{ 0xd70a8466, "dst_cache_get_ip4" },
	{ 0xdb562082, "neigh_destroy" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xf2b60f2, "ip_tunnel_xmit" },
	{ 0x9c76bc8f, "iptunnel_handle_offloads" },
	{ 0x2561913a, "__pskb_pull_tail" },
	{ 0x5ce4e79f, "ip_tunnel_encap_setup" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xe67f4cec, "register_netdevice" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xf0e816f5, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x89d1d583, "free_netdev" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xb8f6c39f, "register_netdev" },
	{ 0x8123c2db, "alloc_netdev_mqs" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xeeb4582, "init_net" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x3feea40, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5553269e, "__dev_get_by_index" },
	{ 0x7083910b, "dst_release" },
	{ 0xae66fbcd, "ip_route_output_flow" },
	{ 0xe2cb580c, "make_kuid" },
	{ 0x8de2e9c7, "ip_tunnel_rcv" },
	{ 0x421ac717, "kfree_skb" },
	{ 0xebf5ef60, "__iptunnel_pull_header" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7acba0d5, "ipv4_redirect" },
	{ 0x89e88552, "ip6_err_gen_icmpv6_unreach" },
	{ 0x4405fb8c, "ipv4_update_pmtu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x56470118, "__warn_printk" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x57496cb8, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe82ba96e, "nla_put" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");

