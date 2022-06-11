OFFSET=16
GOVERNOR="ondemand"


family_tweaks_bsp() {

	if [[ $BOOTCONFIG == *3328* ]] && [[ $BRANCH != legacy ]]; then
		mkdir -p "$destination"/etc/X11/xorg.conf.d
		cat <<-EOF >"$destination"/etc/X11/xorg.conf.d/02-driver.conf
			# set fbdev as default driver.
			Section "Device"
			         Identifier "NOGPU"
			         Driver "fbdev"
			EndSection
		EOF
	fi

}
