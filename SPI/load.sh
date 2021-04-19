#!/bin/bash

scp -r /mnt/c/GregWatch/SPI pi@192.168.0.121:~/GregWatch
ssh pi@192.168.0.121 'cd ~/GregWatch/SPI; GB --load'
