rm -rf qmk_firmware/keyboards/dz60/keymaps/reuhssurance
cp -rf dz60/reuhssurance qmk_firmware/keyboards/dz60/keymaps/reuhssurance
cd qmk_firmware
make dz60:dz60:dfu
cd ..
