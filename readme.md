# Winry25tc MIDI mode firmware

[Winry25tc](https://ae01.alicdn.com/kf/Hf82e3c6dde4541eea65d1dd42b69cbcfE.jpg)

*MIDI mode for winry25tc*

* Keyboard Maintainer: [Constantine Yerokhin](https://github.com/err5)
* Hardware Supported: Winry25tc (SpiderIsland's 5x5 MacroPad)
* Hardware Availability: https://www.aliexpress.com/item/1005002559266513.html?spm=a2g0o

Building:

    qmk compile -kb winry25_midi -km default

Flashing is done via [qmk_toolbox](https://github.com/qmk/qmk_toolbox)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

In order to flash firmware you need to enter bootloader mode
* **Physical reset button**: Briefly press the button on the back of the PCB twice
