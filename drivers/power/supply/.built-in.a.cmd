cmd_drivers/power/supply/built-in.a := rm -f drivers/power/supply/built-in.a; aarch64-dey-linux-ar cDPrST drivers/power/supply/built-in.a drivers/power/supply/power_supply_core.o drivers/power/supply/power_supply_sysfs.o drivers/power/supply/power_supply_leds.o drivers/power/supply/power_supply_hwmon.o drivers/power/supply/bq27xxx_battery.o drivers/power/supply/bq27xxx_battery_i2c.o