cmd_arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-rpmsg.dtb := mkdir -p arch/arm64/boot/dts/freescale/ ; gcc -E -Wp,-MD,arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-rpmsg.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-rpmsg.dtb.dts.tmp arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-rpmsg.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-rpmsg.dtb -b 0 -iarch/arm64/boot/dts/freescale/ -i./scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg -@  -d arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-rpmsg.dtb.d.dtc.tmp arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-rpmsg.dtb.dts.tmp ; cat arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-rpmsg.dtb.d.pre.tmp arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-rpmsg.dtb.d.dtc.tmp > arch/arm64/boot/dts/freescale/.imx8mn-ddr4-evk-rpmsg.dtb.d

source_arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-rpmsg.dtb := arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-rpmsg.dts

deps_arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-rpmsg.dtb := \
  arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk.dts \
  scripts/dtc/include-prefixes/dt-bindings/usb/pd.h \
  arch/arm64/boot/dts/freescale/imx8mn.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/imx8mn-clock.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/imx8mn-dispmix.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm64/boot/dts/freescale/imx8mn-pinfunc.h \

arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-rpmsg.dtb: $(deps_arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-rpmsg.dtb)

$(deps_arch/arm64/boot/dts/freescale/imx8mn-ddr4-evk-rpmsg.dtb):