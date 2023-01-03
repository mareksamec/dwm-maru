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
- Added support for laptop HW buttons (see the top of the config.h file). I have the MODKEY mapped to Super (Win key).
- DWM is configured to run st(simple terminal) as main terminal with MOKDEY + Enter with zshell. To change, change the **termcmd** variable in `config.h`

## Custom keyboard shortcuts
|                                       Command/app                                       |     Shortcuts     |
|:---------------------------------------------------------------------------------------:|:-----------------:|
|                run [xsercurelock](https://github.com/google/xsecurelock)                | MODKEY + Ctrl + l |
| [Flameshot](https://flameshot.org/docs/installation/installation-linux/) screenshot app |    MODKEY + x     |
|                     [ranger](https://ranger.github.io) file manager                     |    MODKEY + a     |
|                 Run default browser defined in $BROWSER system variable                 |    MODKEY + w     |


## Basic operations (some defaults might have been changed)
|                    Action                    |      Command       |
|:--------------------------------------------:|:------------------:|
|               Run st terminal                |   MODKEY + Enter   |
|                  Run dmenu                   |     MODKEY + r     |
|                Cycle layouts                 |   MODKEY + Space   |
|         Set window to floating mode          |     MODKEY + f     |
|          Set to tiling monocle mode          |     MOKDEY + m     |
|           Set to basic tiled mode            |     MOKDEY + t     |
| Focus on next/previous window in current tag |   MODKEY + j / k   |
|      Increases / decreases master size       |   MODKEY + h / l   |
|          Move window to prev screen          | MODKEY + Shift + , |
|          Move window to next screen          | MODKEY + Shift + . |
|             Restart DWM in place             | MODKEY + Shift + q |

TODO:
-----
Add list of used patches, builds, etc.



