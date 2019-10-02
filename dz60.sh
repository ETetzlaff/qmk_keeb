if [[ ! -e qmk_firmware ]]; then
    git clone git@github.com:qmk/qmk_firmware.git
fi
rm -rf qmk_firmware/keyboards/dz60/keymaps/reuhssurance
cp -rf dz60/reuhssurance qmk_firmware/keyboards/dz60/keymaps/reuhssurance
cd qmk_firmware
make dz60:dz60:dfu
cd ..
