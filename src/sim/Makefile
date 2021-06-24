CC = gcc
CFLAGS = -shared -finstrument-functions -fPIC

LIB_DIR=../../lib
HARDWARE_SIM=$(LIB_DIR)/hardwareSim.so
TIME_SIM=$(LIB_DIR)/timeSim.so

simulators: $(LIB_DIR) $(HARDWARE_SIM) $(TIME_SIM)

$(LIB_DIR):
	mkdir -p $@

$(HARDWARE_SIM): hardwareSim.c hardwareSim.h
	$(CC) $(CFLAGS) $< -o $@

$(TIME_SIM): timeSim.c timeSim.h
	$(CC) $(CFLAGS)  $< -o $@

clean:
	rm $(HARDWARE_SIM)
	rm $(TIME_SIM)