cmd_fs/nfs/flexfilelayout/nfs_layout_flexfiles.ko := aarch64-dey-linux-ld -r  -EL  -maarch64elf  --build-id  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds -o fs/nfs/flexfilelayout/nfs_layout_flexfiles.ko fs/nfs/flexfilelayout/nfs_layout_flexfiles.o fs/nfs/flexfilelayout/nfs_layout_flexfiles.mod.o;  true