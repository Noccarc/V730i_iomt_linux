cmd_arch/arm64/crypto/sha512-core.o := aarch64-dey-linux-gcc -Wp,-MD,arch/arm64/crypto/.sha512-core.o.d  -nostdinc -isystem /opt/dey/3.2-r3/ccimx8mn-dvk/sysroots/x86_64-deysdk-linux/usr/lib/aarch64-dey-linux/gcc/aarch64-dey-linux/10.2.0/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT=3 -D__ASSEMBLY__ -fno-PIE -DCONFIG_AS_LSE=1 -mabi=lp64 -DKASAN_SHADOW_SCALE_SHIFT=3  -DMODULE  -c -o arch/arm64/crypto/sha512-core.o arch/arm64/crypto/sha512-core.S

source_arch/arm64/crypto/sha512-core.o := arch/arm64/crypto/sha512-core.S

deps_arch/arm64/crypto/sha512-core.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \

arch/arm64/crypto/sha512-core.o: $(deps_arch/arm64/crypto/sha512-core.o)

$(deps_arch/arm64/crypto/sha512-core.o):
