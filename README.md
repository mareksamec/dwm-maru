My custom build of dwm
=====================

Mostly just for backup purpose of the whole build I just patched together work of different ppl. 

This is based on dwm flexipatch build:
https://github.com/bakkeby/dwm-flexipatch/tree/dwm-flexipatch-1.0


Original DWM (Dynamic Widnow Manager):
https://dwm.suckless.org

Currently based on DWM 6.2 version

Following patches are enabled:
------------------------------

Enable patches in flexipatch by modifying 0 to 1 in patches.h file

- Show layout symbol in bar
- Show status in bar
- Systray patch
- Show tag symbols in bar
- Show window titles in bar
- Left pad patch
- Color emoji patch
- Statuscolor patch
- Attachside patch
- Autostart patch
- Resize the split by drag patch
- Pertag patch
- Resizecorners patch
- Swallow patch (Plan 9 like window swallowing of terminal windows that start gui app)
- Vanity gaps patch
- Fibonacci dwindle layout
- Tile layout

Other added custom settings
---------------------------
Added support for laptop HW buttons (see the top of the config.h file). I have the MODKEY mapped to Super (Win key).

## Custom keyboard shortcuts
|     Shortcuts     |                                       Command/app                                       |
|:-----------------:|:---------------------------------------------------------------------------------------:|
| MODKEY + Ctrl + l |                run [xsercurelock](https://github.com/google/xsecurelock)                |
|    MODKEY + x     | [Flameshot](https://flameshot.org/docs/installation/installation-linux/) screenshot app |
|    MODKEY + a     |                     [ranger](https://ranger.github.io) file manager                     |
|    MODKEY + w     |                 Run default browser defined in $BROWSER system variable                 |


TODO:
-----
Add list of used patches, builds, etc.



