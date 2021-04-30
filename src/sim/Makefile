HARDWARE_SIM=../../lib/hardwareSim.so
TIME_SIM=../../lib/timeSim.so

simulators: $(HARDWARE_SIM) $(TIME_SIM)

$(HARDWARE_SIM): hardwareSim.c hardwareSim.h
	gcc -shared -fPIC $< -o $@

$(TIME_SIM): timeSim.c timeSim.h
	gcc -shared -fPIC $< -o $@

clean:
	rm $(HARDWARE_SIM)
	rm $(TIME_SIM)