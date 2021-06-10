EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MCU_Microchip_ATmega:ATmega328P-AU U?
U 1 1 60C0C793
P 4800 3850
F 0 "U?" H 4800 2261 50  0000 C CNN
F 1 "ATmega328P-AU" H 4800 2170 50  0000 C CNN
F 2 "Package_QFP:TQFP-32_7x7mm_P0.8mm" H 4800 3850 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega328_P%20AVR%20MCU%20with%20picoPower%20Technology%20Data%20Sheet%2040001984A.pdf" H 4800 3850 50  0001 C CNN
	1    4800 3850
	1    0    0    -1  
$EndComp
$Comp
L Device:C C?
U 1 1 60C0E9E7
P 6350 3100
F 0 "C?" V 6098 3100 50  0000 C CNN
F 1 "C" V 6189 3100 50  0000 C CNN
F 2 "" H 6388 2950 50  0001 C CNN
F 3 "~" H 6350 3100 50  0001 C CNN
	1    6350 3100
	0    1    1    0   
$EndComp
Wire Wire Line
	6200 3100 6150 3100
Wire Wire Line
	6150 3100 5950 3100
Wire Wire Line
	5950 3100 5950 3250
Connection ~ 6150 3100
Wire Wire Line
	6150 3700 5950 3700
Wire Wire Line
	5950 3700 5950 3350
Connection ~ 6150 3700
Wire Wire Line
	6150 3600 6150 3700
Wire Wire Line
	6150 3300 6150 3100
$Comp
L Device:Crystal Y?
U 1 1 60C0CCC5
P 6150 3450
F 0 "Y?" V 6104 3581 50  0000 L CNN
F 1 "Crystal" V 6195 3581 50  0000 L CNN
F 2 "" H 6150 3450 50  0001 C CNN
F 3 "~" H 6150 3450 50  0001 C CNN
	1    6150 3450
	0    1    1    0   
$EndComp
Wire Wire Line
	5400 3350 5950 3350
Connection ~ 5850 2300
Wire Wire Line
	5400 2950 5600 2950
Wire Wire Line
	5400 2850 5750 2850
Wire Wire Line
	5400 2750 5650 2750
Wire Wire Line
	5400 2650 5700 2650
Wire Wire Line
	5400 3150 5550 3150
Wire Wire Line
	5400 4950 5500 4950
$Comp
L power:GND #PWR?
U 1 1 60C57A4A
P 7450 3100
F 0 "#PWR?" H 7450 2850 50  0001 C CNN
F 1 "GND" V 7455 2972 50  0000 R CNN
F 2 "" H 7450 3100 50  0001 C CNN
F 3 "" H 7450 3100 50  0001 C CNN
	1    7450 3100
	0    -1   -1   0   
$EndComp
Text Notes 8050 4750 0    50   ~ 0
Button Input Lines\n
Wire Wire Line
	5400 4550 8000 4550
Wire Wire Line
	5400 4650 8000 4650
Wire Wire Line
	5400 4750 8000 4750
Wire Wire Line
	5400 4850 8000 4850
Wire Wire Line
	7250 3100 6950 3100
Wire Wire Line
	5500 1000 5500 4950
Wire Wire Line
	5550 1000 5550 1800
Wire Wire Line
	5600 1000 5600 1900
Wire Wire Line
	5650 1000 5650 2750
Wire Wire Line
	5700 1000 5700 2650
Wire Wire Line
	5750 1000 5750 2850
Wire Wire Line
	5850 2300 4900 2300
Wire Wire Line
	4900 2300 4900 2350
Wire Wire Line
	4900 2300 4800 2300
Wire Wire Line
	4800 2300 4800 2350
Connection ~ 4900 2300
Wire Wire Line
	5600 1900 6050 1900
Connection ~ 5600 1900
Wire Wire Line
	5600 1900 5600 2950
Wire Wire Line
	6050 1800 5550 1800
Connection ~ 5550 1800
Wire Wire Line
	5550 1800 5550 3150
Wire Wire Line
	6050 1700 5850 1700
Connection ~ 5850 1700
Wire Wire Line
	5850 1700 5850 2300
$Comp
L Device:CP C?
U 1 1 60C1D1DF
P 6950 2650
F 0 "C?" H 7068 2696 50  0000 L CNN
F 1 "CP" H 7068 2605 50  0000 L CNN
F 2 "" H 6988 2500 50  0001 C CNN
F 3 "~" H 6950 2650 50  0001 C CNN
	1    6950 2650
	1    0    0    -1  
$EndComp
Wire Wire Line
	5850 1000 5850 1700
Wire Wire Line
	6550 1400 6550 1350
$Comp
L power:+5V #PWR?
U 1 1 60C5C274
P 6950 2350
F 0 "#PWR?" H 6950 2200 50  0001 C CNN
F 1 "+5V" H 6965 2523 50  0000 C CNN
F 2 "" H 6950 2350 50  0001 C CNN
F 3 "" H 6950 2350 50  0001 C CNN
	1    6950 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	6550 1350 7250 1350
$Comp
L Connector:AVR-ISP-6 J?
U 1 1 60C86912
P 6450 1800
F 0 "J?" H 6120 1804 50  0000 R CNN
F 1 "AVR-ISP-6" H 6120 1895 50  0000 R CNN
F 2 "" V 6200 1850 50  0001 C CNN
F 3 " ~" H 5175 1250 50  0001 C CNN
	1    6450 1800
	-1   0    0    1   
$EndComp
Wire Wire Line
	5400 3250 5950 3250
Wire Wire Line
	5900 3050 5400 3050
Wire Wire Line
	6050 2000 5900 2000
Wire Wire Line
	6550 1350 5800 1350
Wire Wire Line
	5800 1000 5800 1350
Connection ~ 6550 1350
Wire Wire Line
	7250 1350 7250 3100
Connection ~ 7250 3100
Wire Wire Line
	4800 5350 6700 5350
Wire Wire Line
	6950 2800 6950 3100
Connection ~ 6950 3100
Wire Wire Line
	7250 3100 7450 3100
Wire Wire Line
	6950 3100 6600 3100
Wire Wire Line
	6950 2350 6950 2450
Connection ~ 6950 2450
Wire Wire Line
	6950 2450 6950 2500
Wire Wire Line
	6550 2450 6550 2300
Wire Wire Line
	6550 2450 6950 2450
$Comp
L Device:R R?
U 1 1 60C1B6B7
P 5850 3900
F 0 "R?" H 5920 3946 50  0000 L CNN
F 1 "R" H 5920 3855 50  0000 L CNN
F 2 "" V 5780 3900 50  0001 C CNN
F 3 "~" H 5850 3900 50  0001 C CNN
	1    5850 3900
	1    0    0    -1  
$EndComp
Wire Wire Line
	5400 4150 5850 4150
Wire Wire Line
	5850 4150 5850 4050
Wire Wire Line
	5850 3750 5850 2300
$Comp
L Device:LED D?
U 1 1 60D31404
P 6700 5200
F 0 "D?" V 6739 5082 50  0000 R CNN
F 1 "LED" V 6648 5082 50  0000 R CNN
F 2 "" H 6700 5200 50  0001 C CNN
F 3 "~" H 6700 5200 50  0001 C CNN
	1    6700 5200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6700 5350 7250 5350
Text Notes 5250 900  0    50   ~ 0
SPI Lines to the Screen\n
$Comp
L Device:LED D?
U 1 1 60D4A58F
P 6600 2850
F 0 "D?" V 6639 2732 50  0000 R CNN
F 1 "LED" V 6548 2732 50  0000 R CNN
F 2 "" H 6600 2850 50  0001 C CNN
F 3 "~" H 6600 2850 50  0001 C CNN
	1    6600 2850
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6600 3000 6600 3100
Connection ~ 6600 3100
Wire Wire Line
	6600 3100 6500 3100
Wire Wire Line
	6500 3700 6150 3700
$Comp
L Device:C C?
U 1 1 60C0E2CA
P 6650 3700
F 0 "C?" V 6398 3700 50  0000 C CNN
F 1 "C" V 6489 3700 50  0000 C CNN
F 2 "" H 6688 3550 50  0001 C CNN
F 3 "~" H 6650 3700 50  0001 C CNN
	1    6650 3700
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 60D56E2D
P 6200 2650
F 0 "R?" V 5993 2650 50  0000 C CNN
F 1 "R" V 6084 2650 50  0000 C CNN
F 2 "" V 6130 2650 50  0001 C CNN
F 3 "~" H 6200 2650 50  0001 C CNN
	1    6200 2650
	0    1    1    0   
$EndComp
Wire Wire Line
	6050 2650 5900 2650
Wire Wire Line
	6450 2300 6450 2450
Wire Wire Line
	6450 2450 6550 2450
Wire Wire Line
	5850 2300 6450 2300
Connection ~ 6550 2450
Connection ~ 6700 5350
$Comp
L Device:R R?
U 1 1 60D66696
P 6000 5200
F 0 "R?" V 5793 5200 50  0000 C CNN
F 1 "R" V 5884 5200 50  0000 C CNN
F 2 "" V 5930 5200 50  0001 C CNN
F 3 "~" H 6000 5200 50  0001 C CNN
	1    6000 5200
	0    1    1    0   
$EndComp
Wire Wire Line
	5400 5050 5650 5050
Wire Wire Line
	5650 5050 5650 5200
Wire Wire Line
	5650 5200 5850 5200
Wire Wire Line
	6150 5200 6450 5200
Wire Wire Line
	6450 5200 6450 5050
Wire Wire Line
	6450 5050 6700 5050
Connection ~ 7250 3700
Wire Wire Line
	7250 3700 7250 5350
Wire Wire Line
	7250 3700 7250 3100
Wire Wire Line
	6800 3700 7250 3700
Connection ~ 5900 2650
Wire Wire Line
	5900 2650 5900 3050
Wire Wire Line
	5900 2000 5900 2650
Wire Wire Line
	6350 2650 6600 2650
Wire Wire Line
	6600 2650 6600 2700
$EndSCHEMATC
