# i3wm status panel utils

## Dependencies
- i3wm
- i3status

## Configuration and prerequisites
Build i3wm_status_panel_utils and move executable to /usr/local/bin/i3wm_status_panel_utils
Change default panel from .i3/config to provided shell script
```
bar {
    status_command /path/to/i3status.sh
}
```
Shell file can be copied from shell/i3status.sh

## Available status values
- Battery charge value
- to be added