CC = gcc
CFLAGS = -shared -finstrument-functions -fPIC

HARDWARE_SIM=../../lib/hardwareSim.so
TIME_SIM=../../lib/timeSim.so

simulators: $(HARDWARE_SIM) $(TIME_SIM)

$(HARDWARE_SIM): hardwareSim.c hardwareSim.h
	$(CC) $(CFLAGS) $< -o $@

$(TIME_SIM): timeSim.c timeSim.h
	$(CC) $(CFLAGS)  $< -o $@

clean:
	rm $(HARDWARE_SIM)
	rm $(TIME_SIM)