#!/bin/bash

ssh pi@GregRaspberryPiCIServer 'mkdir -p ~/GregWatch/src; mkdir -p ~/GregWatch/lib/plugins'
scp -r /mnt/c/GregWatch/src pi@GregRaspberryPiCIServer:~/GregWatch/
scp -r /mnt/c/GregWatch/config pi@GregRaspberryPiCIServer:~/GregWatch/
scp /mnt/c/GregWatch/lib/plugins/RPToArduinoLoaderPlugin_RP.so pi@GregRaspberryPiCIServer:~/GregWatch/lib/plugins/RPToArduinoLoaderPlugin_RP.so
