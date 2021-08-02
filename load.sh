#!/bin/bash

scp -r /mnt/c/GregWatch/src pi@192.168.0.121:~/GregWatch
scp /mnt/c/GregWatch/config pi@192.168.0.121:~/GregWatch
ssh pi@192.168.0.121 'cd ~/GregWatch; GB --load'
