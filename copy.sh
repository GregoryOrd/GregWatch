#!/bin/bash

ssh pi@192.168.0.121 'mkdir -p ~/GregWatch/src; mkdir -p ~/GregWatch/lib/plugins'
scp -r /mnt/c/GregWatch/src pi@192.168.0.121:~/GregWatch/
scp -r /mnt/c/GregWatch/config pi@192.168.0.121:~/GregWatch/
scp /mnt/c/GregWatch/lib/plugins/RPToArduinoLoaderPlugin_RP.so pi@192.168.0.121:~/GregWatch/lib/plugins/RPToArduinoLoaderPlugin_RP.so
