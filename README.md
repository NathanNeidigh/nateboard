# Nateboard
A custom QMK keyboard with custom Dvorak-like layout optimized for programming on a homebuilt Dactyl/Kinesis_2 keyboard.

![DactylCC](https://i.imgur.com/CUbPLZCh.jpeg)

Modelled on the *Kinesis Advantage* (KA) 1|2, though missing it's combined function and program row, the *Dactyl CC* retains the finger and thumb key placements of the KA but opts to split board into physical halves. This custom version of the *Dactyl CC* features a custom Dvorak-like layout that is optimized for programming.

* Keyboard Maintainer: [Nathan Neidigh](https://github.com/nathanneidigh)
* Hardware Supported: Pro micro controller or its clones.
* Hardware Availability: [Dactyl CC GitHub](https://github.com/mjohns/dactyl-cc)

Compile example for this keyboard (after setting up your build environment and moving this repo into the qmk_firmware/handwired/ directory):

'''bash
qmk compile -kb handwired/Nateboard
'''

Flashing example for this keyboard for the left-side:

'''bash
qmk flash -kb handwired/Nateboard -bl avrdude-split-left
'''

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
