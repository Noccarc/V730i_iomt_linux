cmd_arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-inmate.dtb := mkdir -p arch/arm64/boot/dts/freescale/ ; gcc -E -Wp,-MD,arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-inmate.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-inmate.dtb.dts.tmp arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-inmate.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-inmate.dtb -b 0 -iarch/arm64/boot/dts/freescale/ -i./scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg -@  -d arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-inmate.dtb.d.dtc.tmp arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-inmate.dtb.dts.tmp ; cat arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-inmate.dtb.d.pre.tmp arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-inmate.dtb.d.dtc.tmp > arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-inmate.dtb.d

source_arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-inmate.dtb := arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-inmate.dts

deps_arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-inmate.dtb := \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \

arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-inmate.dtb: $(deps_arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-inmate.dtb)

$(deps_arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-inmate.dtb):
