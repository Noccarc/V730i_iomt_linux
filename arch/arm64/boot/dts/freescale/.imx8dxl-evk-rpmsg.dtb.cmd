cmd_arch/arm64/boot/dts/freescale/imx8dxl-evk-rpmsg.dtb := mkdir -p arch/arm64/boot/dts/freescale/ ; gcc -E -Wp,-MD,arch/arm64/boot/dts/freescale/.imx8dxl-evk-rpmsg.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/freescale/.imx8dxl-evk-rpmsg.dtb.dts.tmp arch/arm64/boot/dts/freescale/imx8dxl-evk-rpmsg.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm64/boot/dts/freescale/imx8dxl-evk-rpmsg.dtb -b 0 -iarch/arm64/boot/dts/freescale/ -i./scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg -@  -d arch/arm64/boot/dts/freescale/.imx8dxl-evk-rpmsg.dtb.d.dtc.tmp arch/arm64/boot/dts/freescale/.imx8dxl-evk-rpmsg.dtb.dts.tmp ; cat arch/arm64/boot/dts/freescale/.imx8dxl-evk-rpmsg.dtb.d.pre.tmp arch/arm64/boot/dts/freescale/.imx8dxl-evk-rpmsg.dtb.d.dtc.tmp > arch/arm64/boot/dts/freescale/.imx8dxl-evk-rpmsg.dtb.d

source_arch/arm64/boot/dts/freescale/imx8dxl-evk-rpmsg.dtb := arch/arm64/boot/dts/freescale/imx8dxl-evk-rpmsg.dts

deps_arch/arm64/boot/dts/freescale/imx8dxl-evk-rpmsg.dtb := \
  arch/arm64/boot/dts/freescale/imx8dxl-evk.dts \
  arch/arm64/boot/dts/freescale/imx8dxl.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/imx8-clock.h \
  scripts/dtc/include-prefixes/dt-bindings/firmware/imx/rsrc.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/pads-imx8dxl.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm64/boot/dts/freescale/imx8-ss-v2x.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-security.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-cm40.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-adma.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-audio.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-dma.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-conn.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-ddr.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-lsio.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-hsio.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/soc/imx8_hsio.h \
  arch/arm64/boot/dts/freescale/imx8-ss-lcdif.dtsi \
  arch/arm64/boot/dts/freescale/imx8dxl-ss-adma.dtsi \
  arch/arm64/boot/dts/freescale/imx8dxl-ss-conn.dtsi \
  arch/arm64/boot/dts/freescale/imx8dxl-ss-lsio.dtsi \
  arch/arm64/boot/dts/freescale/imx8dxl-ss-hsio.dtsi \
  arch/arm64/boot/dts/freescale/imx8dxl-ss-ddr.dtsi \
  arch/arm64/boot/dts/freescale/imx8dxl-ss-security.dtsi \

arch/arm64/boot/dts/freescale/imx8dxl-evk-rpmsg.dtb: $(deps_arch/arm64/boot/dts/freescale/imx8dxl-evk-rpmsg.dtb)

$(deps_arch/arm64/boot/dts/freescale/imx8dxl-evk-rpmsg.dtb):
