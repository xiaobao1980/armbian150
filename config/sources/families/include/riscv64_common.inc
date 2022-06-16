ARCH=riscv64

ATF_COMPILE="no"

BOOTFS_TYPE=fat
BOOTSIZE=512
INITRD_ARCH="riscv"
GOVERNOR="ondemand"

NAME_KERNEL="Image"
NAME_INITRD="uInitrd"
MAIN_CMDLINE="rootflags=data=writeback rw no_console_suspend consoleblank=0 fsck.fix=yes fsck.repair=yes net.ifnames=0 bootsplash.bootfile=bootsplash.armbian"
KERNEL_IMAGE_TYPE=Image


#family_tweaks_bsp() {

#	if [[ $BOOTCONFIG == *3328* ]] && [[ $BRANCH != legacy ]]; then
#		mkdir -p "$destination"/etc/X11/xorg.conf.d
#		cat <<-EOF >"$destination"/etc/X11/xorg.conf.d/02-driver.conf
#			# set fbdev as default driver.
#			Section "Device"
#			         Identifier "NOGPU"
#			         Driver "fbdev"
#			EndSection
#		EOF
#	fi

#}
