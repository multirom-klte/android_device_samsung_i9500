#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
	// Framebuffer
	"/sys/class/graphics/fb0",

	// EMMC stuff
	"/sys/block/mmcblk0",
	"/sys/devices/platform/dw_mmc.0*",
	"/sys/devices/platform/dw_mmc.0",
	"/sys/devices/platform/dw_mmc.0/mmc_host/mmc0",
	"/sys/devices/platform/dw_mmc.0/mmc_host/mmc0/mmc0:0001",
	"/sys/devices/platform/dw_mmc.0/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
	"/sys/devices/platform/dw_mmc.0/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p9",
	"/sys/devices/platform/dw_mmc.0/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p19",
	"/sys/devices/platform/dw_mmc.0/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p20",
	"/sys/devices/platform/dw_mmc.0/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p21",
	"/sys/bus/mmc",
	"/sys/bus/mmc/drivers/mmcblk",
	"/sys/bus/sdio/drivers/bcmsdh_sdmmc",
	"/sys/module/mmc_core",
	"/sys/module/mmcblk",

	// Input stuff
	"/sys/class/misc/uinput",
	"/sys/class/sec/sec_key*",
	"/sys/class/sec/sec_touchkey*",
	"/sys/class/sec/sec_touchscreen*",
	"/sys/devices/platform/i2c-gpio.8/i2c-8/8-0020/input*",
	"/sys/devices/platform/gpio-keys.0/input*",
	"/sys/devices/platform/s3c2440-i2c.0/i2c-0/0-0020/input*",
	"/sys/devices/virtual/input*",
	"/sys/devices/virtual/misc/uinput",
	"/sys/module/uinput",

	// for adb
	"/sys/class/tty/ptmx",
	"/sys/devices/platform/dw_mmc.0/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p20", //system
	"/sys/devices/platform/dw_mmc.0/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p19", //cache
	"/sys/class/misc/android_adb",
	"/sys/class/android_usb/android0/f_adb",
	"/sys/bus/usb",

	// MicroSD card
	"/sys/block/mmcblk1",
	"/sys/devices/platform/dw_mmc*",

	// USB Drive & USB-OTG is in here
	"/sys/module/ehci_hcd*",
	"/sys/devices/platform/s5p-ehci*",

	NULL
};
