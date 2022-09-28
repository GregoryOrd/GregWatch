#!/bin/bash

scp -r /mnt/c/GregWatch/src pi@GregRaspberryPiCIServer:~/GregWatch
scp /mnt/c/GregWatch/config pi@GregRaspberryPiCIServer:~/GregWatch
ssh pi@GregRaspberryPiCIServer 'cd ~/GregWatch; GB --load'
