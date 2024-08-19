cmd_drivers/net/ethernet/freescale/sdk_fman/src/xx/module_strings.o := aarch64-dey-linux-gcc -Wp,-MD,drivers/net/ethernet/freescale/sdk_fman/src/xx/.module_strings.o.d  -nostdinc -isystem /opt/dey/3.2-r3/ccimx8mn-dvk/sysroots/x86_64-deysdk-linux/usr/lib/aarch64-dey-linux/gcc/aarch64-dey-linux/10.2.0/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT=3 -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Wno-format-security -std=gnu89 -mgeneral-regs-only -DCONFIG_AS_LSE=1 -DCONFIG_CC_HAS_K_CONSTRAINT=1 -fno-asynchronous-unwind-tables -Wno-psabi -mabi=lp64 -mbranch-protection=none -DKASAN_SHADOW_SCALE_SHIFT=3 -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -fno-allow-store-data-races -Wframe-larger-than=2048 -fstack-protector-strong -Wno-unused-but-set-variable -Wimplicit-fallthrough -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=date-time -Werror=designated-init -fmacro-prefix-map=./= -Wno-packed-not-aligned --sysroot=/opt/dey/3.2-r3/ccimx8mn-dvk/sysroots/aarch64-dey-linux -mstack-protector-guard=sysreg -mstack-protector-guard-reg=sp_el0 -mstack-protector-guard-offset=1136 -DVERSION=\"\" -include ./drivers/net/ethernet/freescale/sdk_fman/ls1043_dflags.h -I./drivers/net/ethernet/freescale/sdk_dpaa/ -I./drivers/net/ethernet/freescale/sdk_fman/inc -I./drivers/net/ethernet/freescale/sdk_fman/inc/cores -I./drivers/net/ethernet/freescale/sdk_fman/inc/etc -I./drivers/net/ethernet/freescale/sdk_fman/inc/Peripherals -I./drivers/net/ethernet/freescale/sdk_fman/inc/flib -I./drivers/net/ethernet/freescale/sdk_fman/inc/integrations/LS1043 -I./drivers/net/ethernet/freescale/sdk_fman/src/inc -I./drivers/net/ethernet/freescale/sdk_fman/src/inc/system -I./drivers/net/ethernet/freescale/sdk_fman/src/inc/wrapper -I./drivers/net/ethernet/freescale/sdk_fman/src/inc/xx -I./include/uapi/linux/fmd -I./include/uapi/linux/fmd/Peripherals -I./include/uapi/linux/fmd/integrations    -DKBUILD_BASENAME='"module_strings"' -DKBUILD_MODNAME='"fsl_ncsw_xx"' -c -o drivers/net/ethernet/freescale/sdk_fman/src/xx/module_strings.o drivers/net/ethernet/freescale/sdk_fman/src/xx/module_strings.c

source_drivers/net/ethernet/freescale/sdk_fman/src/xx/module_strings.o := drivers/net/ethernet/freescale/sdk_fman/src/xx/module_strings.c

deps_drivers/net/ethernet/freescale/sdk_fman/src/xx/module_strings.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  drivers/net/ethernet/freescale/sdk_fman/ls1043_dflags.h \

drivers/net/ethernet/freescale/sdk_fman/src/xx/module_strings.o: $(deps_drivers/net/ethernet/freescale/sdk_fman/src/xx/module_strings.o)

$(deps_drivers/net/ethernet/freescale/sdk_fman/src/xx/module_strings.o):
