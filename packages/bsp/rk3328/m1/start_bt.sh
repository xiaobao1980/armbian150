#!/bin/bash

function die_on_error {
	if [ ! $? = 0 ]; then
		echo $1
		exit 1
	fi
}

# Kill any rtk_hciattach actually running.
# Do not complain if we didn't kill anything.
killall -q -SIGTERM rtk_hciattach

echo "We must stop getty now, You must physically disconnect your USB-UART-Adapter!"
systemctl stop serial-getty@ttyS2 || die_on_error "Could not stop getty"

echo "Using /dev/ttyS2 for Bluetooth"

echo "Power cycle 8723 BT-section"
rfkill block bluetooth
sleep 2
rfkill unblock bluetooth
echo "Start rtk_hciattach"

/usr/bin/rtk_hciattach -n -s 115200 /dev/ttyS2 rtk_h5
