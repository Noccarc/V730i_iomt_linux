cmd_crypto/sm3_generic.ko := aarch64-dey-linux-ld -r  -EL  -maarch64elf  --build-id  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds -o crypto/sm3_generic.ko crypto/sm3_generic.o crypto/sm3_generic.mod.o;  true