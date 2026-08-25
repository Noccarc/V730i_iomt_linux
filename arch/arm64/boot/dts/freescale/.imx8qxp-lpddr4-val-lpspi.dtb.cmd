cmd_arch/arm64/boot/dts/freescale/imx8qxp-lpddr4-val-lpspi.dtb := mkdir -p arch/arm64/boot/dts/freescale/ ; gcc -E -Wp,-MD,arch/arm64/boot/dts/freescale/.imx8qxp-lpddr4-val-lpspi.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/freescale/.imx8qxp-lpddr4-val-lpspi.dtb.dts.tmp arch/arm64/boot/dts/freescale/imx8qxp-lpddr4-val-lpspi.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm64/boot/dts/freescale/imx8qxp-lpddr4-val-lpspi.dtb -b 0 -iarch/arm64/boot/dts/freescale/ -i./scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg -@  -d arch/arm64/boot/dts/freescale/.imx8qxp-lpddr4-val-lpspi.dtb.d.dtc.tmp arch/arm64/boot/dts/freescale/.imx8qxp-lpddr4-val-lpspi.dtb.dts.tmp ; cat arch/arm64/boot/dts/freescale/.imx8qxp-lpddr4-val-lpspi.dtb.d.pre.tmp arch/arm64/boot/dts/freescale/.imx8qxp-lpddr4-val-lpspi.dtb.d.dtc.tmp > arch/arm64/boot/dts/freescale/.imx8qxp-lpddr4-val-lpspi.dtb.d

source_arch/arm64/boot/dts/freescale/imx8qxp-lpddr4-val-lpspi.dtb := arch/arm64/boot/dts/freescale/imx8qxp-lpddr4-val-lpspi.dts

deps_arch/arm64/boot/dts/freescale/imx8qxp-lpddr4-val-lpspi.dtb := \
  arch/arm64/boot/dts/freescale/imx8qxp-lpddr4-val.dts \
  scripts/dtc/include-prefixes/dt-bindings/usb/pd.h \
  arch/arm64/boot/dts/freescale/imx8qxp.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/imx8-clock.h \
  scripts/dtc/include-prefixes/dt-bindings/firmware/imx/rsrc.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/pads-imx8qxp.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm64/boot/dts/freescale/imx8-ss-security.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-cm40.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-vpu.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-dc0.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-adma.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-audio.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-dma.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-conn.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-ddr.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-lsio.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-hsio.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/soc/imx8_hsio.h \
  arch/arm64/boot/dts/freescale/imx8-ss-img.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-gpu0.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-lcdif.dtsi \
  arch/arm64/boot/dts/freescale/imx8qxp-ss-adma.dtsi \
  arch/arm64/boot/dts/freescale/imx8qxp-ss-conn.dtsi \
  arch/arm64/boot/dts/freescale/imx8qxp-ss-lsio.dtsi \
  arch/arm64/boot/dts/freescale/imx8qxp-ss-hsio.dtsi \
  arch/arm64/boot/dts/freescale/imx8qxp-ss-img.dtsi \
  arch/arm64/boot/dts/freescale/imx8qxp-ss-dc.dtsi \
  arch/arm64/boot/dts/freescale/imx8qxp-ss-lvds.dtsi \
  arch/arm64/boot/dts/freescale/imx8qxp-ss-gpu.dtsi \

arch/arm64/boot/dts/freescale/imx8qxp-lpddr4-val-lpspi.dtb: $(deps_arch/arm64/boot/dts/freescale/imx8qxp-lpddr4-val-lpspi.dtb)

$(deps_arch/arm64/boot/dts/freescale/imx8qxp-lpddr4-val-lpspi.dtb):
