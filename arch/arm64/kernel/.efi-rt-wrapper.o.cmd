cmd_arch/arm64/kernel/efi-rt-wrapper.o := aarch64-dey-linux-gcc -Wp,-MD,arch/arm64/kernel/.efi-rt-wrapper.o.d  -nostdinc -isystem /opt/dey/3.2-r3/ccimx8mn-dvk/sysroots/x86_64-deysdk-linux/usr/lib/aarch64-dey-linux/gcc/aarch64-dey-linux/10.2.0/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT=3 -D__ASSEMBLY__ -fno-PIE -DCONFIG_AS_LSE=1 -mabi=lp64 -DKASAN_SHADOW_SCALE_SHIFT=3    -c -o arch/arm64/kernel/efi-rt-wrapper.o arch/arm64/kernel/efi-rt-wrapper.S

source_arch/arm64/kernel/efi-rt-wrapper.o := arch/arm64/kernel/efi-rt-wrapper.S

deps_arch/arm64/kernel/efi-rt-wrapper.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/linkage.h \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/have/arch/prel32/relocations.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \
  arch/arm64/include/asm/linkage.h \

arch/arm64/kernel/efi-rt-wrapper.o: $(deps_arch/arm64/kernel/efi-rt-wrapper.o)

$(deps_arch/arm64/kernel/efi-rt-wrapper.o):