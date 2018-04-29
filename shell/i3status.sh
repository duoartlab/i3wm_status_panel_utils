#!/bin/sh
# shell script to extend i3status with more stuff

i3status | while :
do
    battery=$(i3wm_status_panel_utils)
    echo "$battery"
    sleep 2
done
