enable_extension "grub"
export SERIALCON="tty1"                          # Cant reasonably expect UEFI stuff to have a serial console. Customize if otherwise.
export UEFI_GRUB_TIMEOUT=${UEFI_GRUB_TIMEOUT:-1} # Default 1-second timeout for GRUB menu.
export BOARD_FIRMWARE_INSTALL="-full"            # Install full firmware for UEFI boards
