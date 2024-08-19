cmd_arch/arm64/boot/dts/digi/_ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo := mkdir -p arch/arm64/boot/dts/digi/ ; gcc -E -Wp,-MD,arch/arm64/boot/dts/digi/._ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/digi/._ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo.dts.tmp arch/arm64/boot/dts/digi/_ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm64/boot/dts/digi/_ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo -b 0 -iarch/arm64/boot/dts/digi/ -i./scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg -@  -d arch/arm64/boot/dts/digi/._ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo.d.dtc.tmp arch/arm64/boot/dts/digi/._ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo.dts.tmp ; cat arch/arm64/boot/dts/digi/._ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo.d.pre.tmp arch/arm64/boot/dts/digi/._ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo.d.dtc.tmp > arch/arm64/boot/dts/digi/._ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo.d

source_arch/arm64/boot/dts/digi/_ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo := arch/arm64/boot/dts/digi/_ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dts

deps_arch/arm64/boot/dts/digi/_ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo := \

arch/arm64/boot/dts/digi/_ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo: $(deps_arch/arm64/boot/dts/digi/_ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo)

$(deps_arch/arm64/boot/dts/digi/_ov_board_hsd101pfw2-lvds_ccimx8m-dvk.dtbo):
