#!/bin/sh
# Copy xusb file to initrd
#
#mkdir -p "${DESTDIR}"/lib/firmware/nvidia/tegra210
malifile=/lib/firmware/mali_csffw.bin

if [ -f "${malifile}" ]; then
	cp "${malifile}" "${DESTDIR}"/lib/firmware
fi

exit 0
