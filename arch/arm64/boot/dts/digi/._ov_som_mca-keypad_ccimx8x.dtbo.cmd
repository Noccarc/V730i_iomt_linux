cmd_arch/arm64/boot/dts/digi/_ov_som_mca-keypad_ccimx8x.dtbo := mkdir -p arch/arm64/boot/dts/digi/ ; gcc -E -Wp,-MD,arch/arm64/boot/dts/digi/._ov_som_mca-keypad_ccimx8x.dtbo.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/digi/._ov_som_mca-keypad_ccimx8x.dtbo.dts.tmp arch/arm64/boot/dts/digi/_ov_som_mca-keypad_ccimx8x.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm64/boot/dts/digi/_ov_som_mca-keypad_ccimx8x.dtbo -b 0 -iarch/arm64/boot/dts/digi/ -i./scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg -@  -d arch/arm64/boot/dts/digi/._ov_som_mca-keypad_ccimx8x.dtbo.d.dtc.tmp arch/arm64/boot/dts/digi/._ov_som_mca-keypad_ccimx8x.dtbo.dts.tmp ; cat arch/arm64/boot/dts/digi/._ov_som_mca-keypad_ccimx8x.dtbo.d.pre.tmp arch/arm64/boot/dts/digi/._ov_som_mca-keypad_ccimx8x.dtbo.d.dtc.tmp > arch/arm64/boot/dts/digi/._ov_som_mca-keypad_ccimx8x.dtbo.d

source_arch/arm64/boot/dts/digi/_ov_som_mca-keypad_ccimx8x.dtbo := arch/arm64/boot/dts/digi/_ov_som_mca-keypad_ccimx8x.dts

deps_arch/arm64/boot/dts/digi/_ov_som_mca-keypad_ccimx8x.dtbo := \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \

arch/arm64/boot/dts/digi/_ov_som_mca-keypad_ccimx8x.dtbo: $(deps_arch/arm64/boot/dts/digi/_ov_som_mca-keypad_ccimx8x.dtbo)

$(deps_arch/arm64/boot/dts/digi/_ov_som_mca-keypad_ccimx8x.dtbo):
