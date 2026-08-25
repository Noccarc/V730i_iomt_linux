cmd_arch/arm64/boot/dts/freescale/imx8qm-mek-rpmsg.dtb := mkdir -p arch/arm64/boot/dts/freescale/ ; gcc -E -Wp,-MD,arch/arm64/boot/dts/freescale/.imx8qm-mek-rpmsg.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/freescale/.imx8qm-mek-rpmsg.dtb.dts.tmp arch/arm64/boot/dts/freescale/imx8qm-mek-rpmsg.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm64/boot/dts/freescale/imx8qm-mek-rpmsg.dtb -b 0 -iarch/arm64/boot/dts/freescale/ -i./scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg -@  -d arch/arm64/boot/dts/freescale/.imx8qm-mek-rpmsg.dtb.d.dtc.tmp arch/arm64/boot/dts/freescale/.imx8qm-mek-rpmsg.dtb.dts.tmp ; cat arch/arm64/boot/dts/freescale/.imx8qm-mek-rpmsg.dtb.d.pre.tmp arch/arm64/boot/dts/freescale/.imx8qm-mek-rpmsg.dtb.d.dtc.tmp > arch/arm64/boot/dts/freescale/.imx8qm-mek-rpmsg.dtb.d

source_arch/arm64/boot/dts/freescale/imx8qm-mek-rpmsg.dtb := arch/arm64/boot/dts/freescale/imx8qm-mek-rpmsg.dts

deps_arch/arm64/boot/dts/freescale/imx8qm-mek-rpmsg.dtb := \
  arch/arm64/boot/dts/freescale/imx8qm-mek.dts \
  scripts/dtc/include-prefixes/dt-bindings/usb/pd.h \
  arch/arm64/boot/dts/freescale/imx8qm.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/imx8-clock.h \
  scripts/dtc/include-prefixes/dt-bindings/firmware/imx/rsrc.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/pads-imx8qm.h \
  scripts/dtc/include-prefixes/dt-bindings/soc/imx8_hsio.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm64/boot/dts/freescale/imx8-ss-security.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-cm41.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-adma.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-audio.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-dma.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-conn.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-ddr.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-lsio.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-hsio.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-img.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-dc0.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-dc1.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-gpu0.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-gpu1.dtsi \
  arch/arm64/boot/dts/freescale/imx8-ss-vpu.dtsi \
  arch/arm64/boot/dts/freescale/imx8qm-ss-audio.dtsi \
  arch/arm64/boot/dts/freescale/imx8qm-ss-dma.dtsi \
  arch/arm64/boot/dts/freescale/imx8qm-ss-conn.dtsi \
  arch/arm64/boot/dts/freescale/imx8qm-ss-ddr.dtsi \
  arch/arm64/boot/dts/freescale/imx8qm-ss-lsio.dtsi \
  arch/arm64/boot/dts/freescale/imx8qm-ss-hsio.dtsi \
  arch/arm64/boot/dts/freescale/imx8qm-ss-dc.dtsi \
  arch/arm64/boot/dts/freescale/imx8qm-ss-lvds.dtsi \
  arch/arm64/boot/dts/freescale/imx8qm-ss-mipi.dtsi \
  arch/arm64/boot/dts/freescale/imx8qm-ss-hdmi.dtsi \
  arch/arm64/boot/dts/freescale/imx8qm-ss-img.dtsi \
  arch/arm64/boot/dts/freescale/imx8qm-ss-gpu.dtsi \

arch/arm64/boot/dts/freescale/imx8qm-mek-rpmsg.dtb: $(deps_arch/arm64/boot/dts/freescale/imx8qm-mek-rpmsg.dtb)

$(deps_arch/arm64/boot/dts/freescale/imx8qm-mek-rpmsg.dtb):
