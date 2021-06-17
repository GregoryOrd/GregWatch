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
L MCU_Microchip_ATmega:ATmega328P-AU U2
U 1 1 60C0C793
P 4750 4450
F 0 "U2" H 4750 2861 50  0000 C CNN
F 1 "ATmega328P-AU" H 4750 2770 50  0000 C CNN
F 2 "Package_QFP:TQFP-32_7x7mm_P0.8mm" H 4750 4450 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega328_P%20AVR%20MCU%20with%20picoPower%20Technology%20Data%20Sheet%2040001984A.pdf" H 4750 4450 50  0001 C CNN
	1    4750 4450
	1    0    0    -1  
$EndComp
$Comp
L Device:C C2
U 1 1 60C0E9E7
P 6300 3700
F 0 "C2" V 6048 3700 50  0000 C CNN
F 1 "22p" V 6139 3700 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 6338 3550 50  0001 C CNN
F 3 "~" H 6300 3700 50  0001 C CNN
	1    6300 3700
	0    1    1    0   
$EndComp
Wire Wire Line
	6150 3700 6100 3700
Wire Wire Line
	6100 3700 5900 3700
Wire Wire Line
	5900 3700 5900 3850
Connection ~ 6100 3700
Wire Wire Line
	6100 4300 5900 4300
Wire Wire Line
	5900 4300 5900 3950
Connection ~ 6100 4300
Wire Wire Line
	6100 4200 6100 4300
Wire Wire Line
	6100 3900 6100 3700
Wire Wire Line
	5350 3950 5900 3950
Connection ~ 5800 2900
Wire Wire Line
	5350 3550 5550 3550
Wire Wire Line
	5350 3450 5700 3450
Wire Wire Line
	5350 3350 5600 3350
Wire Wire Line
	5350 3250 5650 3250
Wire Wire Line
	5350 3750 5500 3750
Wire Wire Line
	5350 5550 5450 5550
Wire Wire Line
	5800 2900 4850 2900
Wire Wire Line
	4850 2900 4850 2950
Wire Wire Line
	4850 2900 4750 2900
Wire Wire Line
	4750 2900 4750 2950
Connection ~ 4850 2900
Wire Wire Line
	5550 2500 6000 2500
Connection ~ 5550 2500
Wire Wire Line
	5550 2500 5550 3550
Wire Wire Line
	6000 2400 5500 2400
Connection ~ 5500 2400
Wire Wire Line
	6000 2300 5800 2300
Connection ~ 5800 2300
Wire Wire Line
	5800 2300 5800 2900
Wire Wire Line
	6500 2000 6500 1950
Wire Wire Line
	6500 1950 7200 1950
$Comp
L Connector:AVR-ISP-6 J1
U 1 1 60C86912
P 6400 2400
F 0 "J1" H 6070 2404 50  0000 R CNN
F 1 "AVR-ISP-6" H 6070 2495 50  0000 R CNN
F 2 "AVR-ISP-6:AVR-ISP-6" V 6150 2450 50  0001 C CNN
F 3 " ~" H 5125 1850 50  0001 C CNN
	1    6400 2400
	-1   0    0    1   
$EndComp
Wire Wire Line
	5350 3850 5900 3850
Wire Wire Line
	5850 3650 5350 3650
Wire Wire Line
	6000 2600 5850 2600
Connection ~ 6500 1950
Wire Wire Line
	7200 1950 7200 1650
Connection ~ 7200 3700
Wire Wire Line
	4750 5950 6650 5950
Wire Wire Line
	6500 3050 6500 2900
$Comp
L Device:R R2
U 1 1 60C1B6B7
P 5800 4500
F 0 "R2" H 5870 4546 50  0000 L CNN
F 1 "10k" H 5870 4455 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 5730 4500 50  0001 C CNN
F 3 "~" H 5800 4500 50  0001 C CNN
	1    5800 4500
	1    0    0    -1  
$EndComp
Wire Wire Line
	5350 4750 5800 4750
Wire Wire Line
	5800 4750 5800 4650
Wire Wire Line
	5800 4350 5800 2900
$Comp
L Device:LED D6
U 1 1 60D31404
P 6650 5800
F 0 "D6" V 6689 5682 50  0000 R CNN
F 1 "LED" V 6598 5682 50  0000 R CNN
F 2 "LED_SMD:LED_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 6650 5800 50  0001 C CNN
F 3 "~" H 6650 5800 50  0001 C CNN
	1    6650 5800
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6650 5950 7200 5950
$Comp
L Device:LED D5
U 1 1 60D4A58F
P 6550 3450
F 0 "D5" V 6589 3332 50  0000 R CNN
F 1 "LED" V 6498 3332 50  0000 R CNN
F 2 "LED_SMD:LED_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 6550 3450 50  0001 C CNN
F 3 "~" H 6550 3450 50  0001 C CNN
	1    6550 3450
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6550 3600 6550 3700
Connection ~ 6550 3700
Wire Wire Line
	6550 3700 6450 3700
Wire Wire Line
	6450 4300 6100 4300
$Comp
L Device:C C3
U 1 1 60C0E2CA
P 6600 4300
F 0 "C3" V 6348 4300 50  0000 C CNN
F 1 "22p" V 6439 4300 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 6638 4150 50  0001 C CNN
F 3 "~" H 6600 4300 50  0001 C CNN
	1    6600 4300
	0    1    1    0   
$EndComp
$Comp
L Device:R R4
U 1 1 60D56E2D
P 6150 3250
F 0 "R4" V 5943 3250 50  0000 C CNN
F 1 "100" V 6034 3250 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 6080 3250 50  0001 C CNN
F 3 "~" H 6150 3250 50  0001 C CNN
	1    6150 3250
	0    1    1    0   
$EndComp
Wire Wire Line
	6000 3250 5850 3250
Wire Wire Line
	6400 2900 6400 3050
Wire Wire Line
	6400 3050 6500 3050
Wire Wire Line
	5800 2900 6400 2900
Connection ~ 6500 3050
Connection ~ 6650 5950
$Comp
L Device:R R3
U 1 1 60D66696
P 5950 5800
F 0 "R3" V 5743 5800 50  0000 C CNN
F 1 "100" V 5834 5800 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 5880 5800 50  0001 C CNN
F 3 "~" H 5950 5800 50  0001 C CNN
	1    5950 5800
	0    1    1    0   
$EndComp
Wire Wire Line
	5350 5650 5600 5650
Wire Wire Line
	5600 5650 5600 5800
Wire Wire Line
	5600 5800 5800 5800
Wire Wire Line
	6100 5800 6400 5800
Wire Wire Line
	6400 5800 6400 5650
Wire Wire Line
	6400 5650 6650 5650
Connection ~ 7200 4300
Wire Wire Line
	7200 4300 7200 4050
Wire Wire Line
	6750 4300 7200 4300
Connection ~ 5850 3250
Wire Wire Line
	5850 3250 5850 3650
Wire Wire Line
	5850 2600 5850 3250
Wire Wire Line
	6300 3250 6550 3250
Wire Wire Line
	6550 3250 6550 3300
Wire Wire Line
	5500 2400 5500 3750
Wire Wire Line
	5450 2600 5450 5550
Wire Wire Line
	5450 2600 3350 2600
Wire Wire Line
	5500 2400 4100 2400
Wire Wire Line
	4100 2400 4100 2550
Wire Wire Line
	5600 2350 4050 2350
Wire Wire Line
	4050 2350 4050 2450
Wire Wire Line
	5600 2350 5600 3350
Wire Wire Line
	5650 2300 4000 2300
Wire Wire Line
	4000 2300 4000 2400
Wire Wire Line
	5650 2300 5650 3250
Wire Wire Line
	5700 2250 3950 2250
Wire Wire Line
	3950 2250 3950 2350
Wire Wire Line
	5700 2250 5700 3450
Wire Wire Line
	3900 1950 3900 2300
Wire Wire Line
	5800 2200 3850 2200
Wire Wire Line
	3850 2200 3850 2250
Wire Wire Line
	5800 2200 5800 2300
Wire Wire Line
	3900 1950 6500 1950
$Comp
L nokia_5110-3310_lcd:Nokia_5110_LCD U1
U 1 1 60C2F026
P 1450 2550
F 0 "U1" H 1342 1913 60  0000 C CNN
F 1 "Nokia_5110_LCD" H 1342 2019 60  0000 C CNN
F 2 "Nokia5110:Nokia_5110-3310_LCD-F.Paste-B.Paste" H 1450 2550 60  0001 C CNN
F 3 "" H 1450 2550 60  0000 C CNN
	1    1450 2550
	-1   0    0    1   
$EndComp
Wire Wire Line
	2900 2250 2900 2150
Wire Wire Line
	2900 2150 2250 2150
Wire Wire Line
	2900 2250 3850 2250
$Comp
L Device:C C1
U 1 1 60C3DE26
P 2300 2900
F 0 "C1" H 2415 2946 50  0000 L CNN
F 1 "0.1u" H 2415 2855 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 2338 2750 50  0001 C CNN
F 3 "~" H 2300 2900 50  0001 C CNN
	1    2300 2900
	1    0    0    -1  
$EndComp
Wire Wire Line
	1800 2850 2100 2850
Wire Wire Line
	2100 2850 2100 3050
Wire Wire Line
	2100 3050 2300 3050
Wire Wire Line
	2300 2750 1800 2750
Wire Wire Line
	2300 2300 2300 2750
Wire Wire Line
	2300 2300 3900 2300
Connection ~ 2300 2750
Wire Wire Line
	1800 2650 2250 2650
Wire Wire Line
	2250 2650 2250 2150
Connection ~ 2250 2150
Wire Wire Line
	2250 2150 1800 2150
Wire Wire Line
	2900 2550 2900 2400
Wire Wire Line
	2900 2400 2200 2400
Wire Wire Line
	2200 2400 2200 2250
Wire Wire Line
	2200 2250 1800 2250
Wire Wire Line
	2900 2550 4100 2550
Wire Wire Line
	3350 2600 3350 3450
Text Notes 1750 3400 0    50   ~ 0
Backlight\n
Wire Wire Line
	2950 2500 2950 2350
Wire Wire Line
	2950 2350 1800 2350
Wire Wire Line
	2950 2500 5550 2500
Wire Wire Line
	3000 2350 3000 2600
Wire Wire Line
	3000 2600 2200 2600
Wire Wire Line
	2200 2600 2200 2550
Wire Wire Line
	2200 2550 1800 2550
Wire Wire Line
	3000 2350 3950 2350
Wire Wire Line
	1800 2450 4050 2450
Wire Wire Line
	3050 2400 3050 3100
Wire Wire Line
	3050 3100 1950 3100
Wire Wire Line
	1950 3100 1950 2950
Wire Wire Line
	1950 2950 1800 2950
Wire Wire Line
	3050 2400 4000 2400
Wire Wire Line
	1550 3450 1550 3800
Wire Wire Line
	1550 3450 3350 3450
$Comp
L Device:LED D1
U 1 1 60C94F66
P 1000 4450
F 0 "D1" V 1039 4332 50  0000 R CNN
F 1 "LED" V 948 4332 50  0000 R CNN
F 2 "LED_SMD:LED_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1000 4450 50  0001 C CNN
F 3 "~" H 1000 4450 50  0001 C CNN
	1    1000 4450
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED D2
U 1 1 60C958C2
P 1350 4450
F 0 "D2" V 1389 4332 50  0000 R CNN
F 1 "LED" V 1298 4332 50  0000 R CNN
F 2 "LED_SMD:LED_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1350 4450 50  0001 C CNN
F 3 "~" H 1350 4450 50  0001 C CNN
	1    1350 4450
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED D3
U 1 1 60C97C35
P 1700 4450
F 0 "D3" V 1739 4332 50  0000 R CNN
F 1 "LED" V 1648 4332 50  0000 R CNN
F 2 "LED_SMD:LED_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1700 4450 50  0001 C CNN
F 3 "~" H 1700 4450 50  0001 C CNN
	1    1700 4450
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED D4
U 1 1 60C98264
P 2000 4450
F 0 "D4" V 2039 4332 50  0000 R CNN
F 1 "LED" V 1948 4332 50  0000 R CNN
F 2 "LED_SMD:LED_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2000 4450 50  0001 C CNN
F 3 "~" H 2000 4450 50  0001 C CNN
	1    2000 4450
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1350 4200 1350 4300
Wire Wire Line
	1700 4200 1700 4300
Wire Wire Line
	2000 4200 2000 4300
Wire Wire Line
	1000 4600 1000 4750
Wire Wire Line
	1000 4750 1350 4750
Wire Wire Line
	2000 4750 2000 4600
Wire Wire Line
	1700 4600 1700 4750
Connection ~ 1700 4750
Wire Wire Line
	1700 4750 2000 4750
Wire Wire Line
	1350 4600 1350 4750
Connection ~ 1350 4750
Wire Wire Line
	1350 4750 1550 4750
Wire Wire Line
	1550 5150 2650 5150
Wire Wire Line
	2650 5150 2650 2750
Wire Wire Line
	2650 2750 2300 2750
Wire Wire Line
	1550 4750 1550 5150
Connection ~ 1550 4750
Wire Wire Line
	1550 4750 1700 4750
$Comp
L power:+5V #PWR02
U 1 1 60CD6564
P 7700 1400
F 0 "#PWR02" H 7700 1250 50  0001 C CNN
F 1 "+5V" H 7715 1573 50  0000 C CNN
F 2 "" H 7700 1400 50  0001 C CNN
F 3 "" H 7700 1400 50  0001 C CNN
	1    7700 1400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR01
U 1 1 60CD7132
P 7200 1400
F 0 "#PWR01" H 7200 1150 50  0001 C CNN
F 1 "GND" V 7205 1272 50  0000 R CNN
F 2 "" H 7200 1400 50  0001 C CNN
F 3 "" H 7200 1400 50  0001 C CNN
	1    7200 1400
	-1   0    0    1   
$EndComp
Wire Wire Line
	7200 1400 7200 1650
Connection ~ 7200 1950
Wire Wire Line
	6500 3050 7700 3050
Wire Wire Line
	6550 3700 7200 3700
Wire Wire Line
	7300 1650 7200 1650
Connection ~ 7200 1650
Wire Wire Line
	7600 1650 7700 1650
Wire Wire Line
	7200 1950 7200 2900
Wire Wire Line
	7700 1650 7700 1400
Wire Wire Line
	7700 3050 7700 1900
Connection ~ 7700 1650
$Comp
L 74xx:74HC14 U3
U 2 1 60DD8DEB
P 8500 4750
F 0 "U3" V 8454 4930 50  0000 L CNN
F 1 "74HC14" V 8545 4930 50  0000 L CNN
F 2 "CD74HC14:Texas_Instruments-CD74HC14-Level_C" H 8500 4750 50  0001 C CNN
F 3 "http://www.ti.com/lit/gpn/sn74HC14" H 8500 4750 50  0001 C CNN
	2    8500 4750
	0    1    1    0   
$EndComp
$Comp
L 74xx:74HC14 U3
U 3 1 60DD9676
P 9400 4750
F 0 "U3" V 9354 4930 50  0000 L CNN
F 1 "74HC14" V 9445 4930 50  0000 L CNN
F 2 "CD74HC14:Texas_Instruments-CD74HC14-Level_C" H 9400 4750 50  0001 C CNN
F 3 "http://www.ti.com/lit/gpn/sn74HC14" H 9400 4750 50  0001 C CNN
	3    9400 4750
	0    1    1    0   
$EndComp
$Comp
L 74xx:74HC14 U3
U 7 1 60E38CCF
P 8250 2400
F 0 "U3" H 8480 2446 50  0000 L CNN
F 1 "74HC14" H 8480 2355 50  0000 L CNN
F 2 "CD74HC14:Texas_Instruments-CD74HC14-Level_C" H 8250 2400 50  0001 C CNN
F 3 "http://www.ti.com/lit/gpn/sn74HC14" H 8250 2400 50  0001 C CNN
	7    8250 2400
	1    0    0    -1  
$EndComp
Wire Wire Line
	5350 5150 7600 5150
$Comp
L Device:R R9
U 1 1 60E58DAB
P 9400 3850
F 0 "R9" H 9470 3896 50  0000 L CNN
F 1 "10k" H 9470 3805 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 9330 3850 50  0001 C CNN
F 3 "~" H 9400 3850 50  0001 C CNN
	1    9400 3850
	1    0    0    -1  
$EndComp
Wire Wire Line
	8250 2900 7200 2900
Connection ~ 7200 2900
Wire Wire Line
	8250 1900 7700 1900
Connection ~ 7700 1900
Wire Wire Line
	7700 1900 7700 1650
Wire Wire Line
	7600 5050 7600 4800
Connection ~ 7600 5050
Wire Wire Line
	7600 5150 7600 5050
$Comp
L 74xx:74HC14 U3
U 1 1 60DD74FC
P 7600 4750
F 0 "U3" V 7554 4930 50  0000 L CNN
F 1 "74HC14" V 7645 4930 50  0000 L CNN
F 2 "CD74HC14:Texas_Instruments-CD74HC14-Level_C" H 7600 4750 50  0001 C CNN
F 3 "http://www.ti.com/lit/gpn/sn74HC14" H 7600 4750 50  0001 C CNN
	1    7600 4750
	0    1    1    0   
$EndComp
$Comp
L Device:R R6
U 1 1 60E5858F
P 8500 3850
F 0 "R6" H 8570 3896 50  0000 L CNN
F 1 "10k" H 8570 3805 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 8430 3850 50  0001 C CNN
F 3 "~" H 8500 3850 50  0001 C CNN
	1    8500 3850
	1    0    0    -1  
$EndComp
$Comp
L Device:R R5
U 1 1 60E57E73
P 7600 3850
F 0 "R5" H 7670 3896 50  0000 L CNN
F 1 "10k" H 7670 3805 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 7530 3850 50  0001 C CNN
F 3 "~" H 7600 3850 50  0001 C CNN
	1    7600 3850
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW3
U 1 1 60EE3BE2
P 9550 3600
F 0 "SW3" H 9550 3885 50  0000 C CNN
F 1 "SW_Push" H 9550 3794 50  0000 C CNN
F 2 "Button_Switch_SMD:Panasonic_EVQPUJ_EVQPUA" H 9550 3800 50  0001 C CNN
F 3 "~" H 9550 3800 50  0001 C CNN
	1    9550 3600
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW2
U 1 1 60FA46E2
P 8500 3600
F 0 "SW2" H 8500 3885 50  0000 C CNN
F 1 "SW_Push" H 8500 3794 50  0000 C CNN
F 2 "Button_Switch_SMD:Panasonic_EVQPUJ_EVQPUA" H 8500 3800 50  0001 C CNN
F 3 "~" H 8500 3800 50  0001 C CNN
	1    8500 3600
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW1
U 1 1 60FA4E9B
P 7600 3600
F 0 "SW1" H 7600 3885 50  0000 C CNN
F 1 "SW_Push" H 7600 3794 50  0000 C CNN
F 2 "Button_Switch_SMD:Panasonic_EVQPUJ_EVQPUA" H 7600 3800 50  0001 C CNN
F 3 "~" H 7600 3800 50  0001 C CNN
	1    7600 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	8950 1650 8950 2400
$Comp
L Device:R R7
U 1 1 60E426D4
P 8950 2550
F 0 "R7" H 9020 2596 50  0000 L CNN
F 1 "10k" H 9020 2505 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 8880 2550 50  0001 C CNN
F 3 "~" H 8950 2550 50  0001 C CNN
	1    8950 2550
	1    0    0    -1  
$EndComp
$Comp
L Device:R R8
U 1 1 60FCC5E6
P 9400 2550
F 0 "R8" H 9470 2596 50  0000 L CNN
F 1 "10k" H 9470 2505 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 9330 2550 50  0001 C CNN
F 3 "~" H 9400 2550 50  0001 C CNN
	1    9400 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	9800 1650 9800 2400
$Comp
L Device:R R10
U 1 1 60FD4163
P 9800 2550
F 0 "R10" H 9870 2596 50  0000 L CNN
F 1 "10k" H 9870 2505 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 9730 2550 50  0001 C CNN
F 3 "~" H 9800 2550 50  0001 C CNN
	1    9800 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10250 1650 10250 2400
$Comp
L Device:R R11
U 1 1 60FDC0B5
P 10250 2550
F 0 "R11" H 10320 2596 50  0000 L CNN
F 1 "10k" H 10320 2505 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 10180 2550 50  0001 C CNN
F 3 "~" H 10250 2550 50  0001 C CNN
	1    10250 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	9800 1650 10250 1650
Wire Wire Line
	7700 1650 8950 1650
Wire Wire Line
	8950 1650 9400 1650
Connection ~ 8950 1650
Connection ~ 9800 1650
Wire Wire Line
	9400 2400 9400 1650
Connection ~ 9400 1650
Wire Wire Line
	9400 1650 9800 1650
Wire Wire Line
	8950 3000 7800 3000
Wire Wire Line
	7800 3000 7800 3600
Wire Wire Line
	8950 2700 8950 3000
Wire Wire Line
	9400 3100 8700 3100
Wire Wire Line
	8700 3100 8700 3600
Wire Wire Line
	9400 2700 9400 3100
Wire Wire Line
	9800 3600 9750 3600
Wire Wire Line
	9800 2700 9800 3600
Wire Wire Line
	9800 3600 9800 3700
Wire Wire Line
	9800 3700 9400 3700
Connection ~ 9800 3600
Wire Wire Line
	8700 3600 8700 3700
Wire Wire Line
	8700 3700 8500 3700
Connection ~ 8700 3600
Wire Wire Line
	7800 3600 7800 3700
Wire Wire Line
	7800 3700 7600 3700
Connection ~ 7800 3600
Wire Wire Line
	7200 2900 7200 3200
Connection ~ 7200 3200
Wire Wire Line
	7200 3200 7200 3700
Wire Wire Line
	9350 3200 9350 3600
Connection ~ 9350 3200
Wire Wire Line
	8300 3200 8300 3600
Connection ~ 8300 3200
Wire Wire Line
	7400 3200 7400 3600
Wire Wire Line
	7200 3200 7400 3200
Connection ~ 7400 3200
Wire Wire Line
	7400 3200 8300 3200
Wire Wire Line
	10250 2800 10250 2700
$Comp
L Device:C C5
U 1 1 610BC931
P 7450 4400
F 0 "C5" V 7198 4400 50  0000 C CNN
F 1 "0.1u" V 7289 4400 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 7488 4250 50  0001 C CNN
F 3 "~" H 7450 4400 50  0001 C CNN
	1    7450 4400
	0    1    1    0   
$EndComp
$Comp
L Device:C C6
U 1 1 610E413A
P 8350 4400
F 0 "C6" V 8098 4400 50  0000 C CNN
F 1 "0.1u" V 8189 4400 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 8388 4250 50  0001 C CNN
F 3 "~" H 8350 4400 50  0001 C CNN
	1    8350 4400
	0    1    1    0   
$EndComp
$Comp
L Device:C C7
U 1 1 610E4B92
P 9250 4400
F 0 "C7" V 8998 4400 50  0000 C CNN
F 1 "0.1u" V 9089 4400 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 9288 4250 50  0001 C CNN
F 3 "~" H 9250 4400 50  0001 C CNN
	1    9250 4400
	0    1    1    0   
$EndComp
Wire Wire Line
	7600 4000 7600 4400
Wire Wire Line
	7600 4400 7600 4450
Connection ~ 7600 4400
Wire Wire Line
	8500 4000 8500 4400
Connection ~ 8500 4400
Wire Wire Line
	8500 4400 8500 4450
Wire Wire Line
	7200 4050 7300 4050
Connection ~ 7200 4050
Wire Wire Line
	7200 4050 7200 3700
Wire Wire Line
	7200 4300 7200 5950
Wire Wire Line
	7300 4400 7300 4050
Connection ~ 7300 4050
Wire Wire Line
	7300 4050 8200 4050
Wire Wire Line
	8200 4400 8200 4050
Connection ~ 8200 4050
Wire Wire Line
	9100 4400 9100 4050
Connection ~ 9100 4050
Wire Wire Line
	9400 4400 9400 4450
Wire Wire Line
	9400 4000 9400 4400
Connection ~ 9400 4400
Wire Wire Line
	8500 5050 8500 5250
Wire Wire Line
	5350 5250 8500 5250
Wire Wire Line
	9400 5050 9400 5350
Wire Wire Line
	5350 5350 9400 5350
Wire Wire Line
	10750 2800 10250 2800
Wire Wire Line
	8300 3200 9350 3200
Wire Wire Line
	8200 4050 9100 4050
$Comp
L 74xx:74HC14 U3
U 4 1 60DD9C8F
P 10550 4750
F 0 "U3" V 10504 4930 50  0000 L CNN
F 1 "74HC14" V 10595 4930 50  0000 L CNN
F 2 "CD74HC14:Texas_Instruments-CD74HC14-Level_C" H 10550 4750 50  0001 C CNN
F 3 "http://www.ti.com/lit/gpn/sn74HC14" H 10550 4750 50  0001 C CNN
	4    10550 4750
	0    1    1    0   
$EndComp
$Comp
L Device:R R12
U 1 1 60E59555
P 10550 3850
F 0 "R12" H 10620 3896 50  0000 L CNN
F 1 "10k" H 10620 3805 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 10480 3850 50  0001 C CNN
F 3 "~" H 10550 3850 50  0001 C CNN
	1    10550 3850
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW4
U 1 1 60FA3C8D
P 10550 3600
F 0 "SW4" H 10550 3885 50  0000 C CNN
F 1 "SW_Push" H 10550 3794 50  0000 C CNN
F 2 "Button_Switch_SMD:Panasonic_EVQPUJ_EVQPUA" H 10550 3800 50  0001 C CNN
F 3 "~" H 10550 3800 50  0001 C CNN
	1    10550 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	10750 3600 10750 3700
Wire Wire Line
	10750 3700 10550 3700
Connection ~ 10750 3600
Wire Wire Line
	10350 3200 10350 3600
Wire Wire Line
	9350 3200 10350 3200
Wire Wire Line
	10750 2800 10750 3600
$Comp
L Device:C C8
U 1 1 610E55A4
P 10400 4400
F 0 "C8" V 10148 4400 50  0000 C CNN
F 1 "0.1u" V 10239 4400 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 10438 4250 50  0001 C CNN
F 3 "~" H 10400 4400 50  0001 C CNN
	1    10400 4400
	0    1    1    0   
$EndComp
Wire Wire Line
	10250 4050 10250 4400
Wire Wire Line
	9100 4050 10250 4050
Wire Wire Line
	10550 4000 10550 4400
Wire Wire Line
	10550 4400 10550 4450
Connection ~ 10550 4400
Wire Wire Line
	10550 5050 10550 5450
Wire Wire Line
	5350 5450 10550 5450
$Comp
L Device:CP C4
U 1 1 61205DD1
P 7450 1650
F 0 "C4" V 7195 1650 50  0000 C CNN
F 1 "10u" V 7286 1650 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 7488 1500 50  0001 C CNN
F 3 "~" H 7450 1650 50  0001 C CNN
	1    7450 1650
	0    1    1    0   
$EndComp
$Comp
L Device:R R1
U 1 1 60C7E814
P 1550 3950
F 0 "R1" H 1620 3996 50  0000 L CNN
F 1 "100" H 1620 3905 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" V 1480 3950 50  0001 C CNN
F 3 "~" H 1550 3950 50  0001 C CNN
	1    1550 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	1550 4100 1550 4200
Wire Wire Line
	1550 4200 1350 4200
Wire Wire Line
	1000 4200 1350 4200
Connection ~ 1350 4200
Wire Wire Line
	1000 4200 1000 4300
Wire Wire Line
	1550 4200 1700 4200
Connection ~ 1550 4200
Wire Wire Line
	2000 4200 1700 4200
Connection ~ 1700 4200
$Comp
L Device:Crystal Y1
U 1 1 60C0CCC5
P 6100 4050
F 0 "Y1" V 6054 4181 50  0000 L CNN
F 1 "16M" V 6145 4181 50  0000 L CNN
F 2 "Crystal:Crystal_SMD_3225-4Pin_3.2x2.5mm_HandSoldering" H 6100 4050 50  0001 C CNN
F 3 "~" H 6100 4050 50  0001 C CNN
	1    6100 4050
	0    -1   -1   0   
$EndComp
$EndSCHEMATC
