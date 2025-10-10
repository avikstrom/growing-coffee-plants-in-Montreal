# growing-coffee-plants

This project is done in multiple parts.

Step 1: Monitor temperature and humidity with a DHT11 sensor and my Arduino Uno. It outputs data readings onto a liquid crystal display. See .png for wiring schematic.

Step 2: Cabinet/enclosure upgrades.
1) IKEA cabinet 2x (BAGGEBO Glass-door cabinet, metal/white, 34x30x116 cm (13 3/8x11 3/4x45 5/8 ")) - metal so the grow lights would magnetically stick to the top surface
2) grow lights (Barrina Orbgrow OG09 Puck Grow Light, 5000K 18W(2 x 9W, 270 Watt Equiv), Full Spectrum Plant Light for Indoor Plants, Magnetic & Linkable with Timer, 5 Levels Dimmable for Plant Shelf, 2 Packs, Black)

Step 3: Monitor temperature and humidity with a DHT11 sensor and outputs data readings onto a liquid crystal display. Uses an external relay to deliver power to a humidifying unit (atomizing transducer) whenever the humidity drops below 70% to humidify the coffee plant in its enclosed chamber. An additional safety feature is in place to detect when the humidifier reservoir becomes empty, shutting off the device when water is not detected with a water sensor. This version of the prototype works, but is not optimized. A hole was cut in the side of the cabinet and electronics placed externally to protect them from the humidity.

necessary subcomponents:
1) atomizing transucer (DAOKAI 2 pcs Micro USB Humidifier Module Atomization Disc 5V Module 108KHz 2W), push button short circuited
2) water sensor HW-038
3) relay SRD-05VDC-SL-C
4) power module HW-131
5) arduino uno
6) barrel jack wall plug
7) 9V battery

Step 4 (not done yet): switch relay for MOSFET to extend device lifetime. Buy a second barrel jack cable to power the arduino for safety reasons (battery does not run out while relay circuit is still powered). 3D print an adapter to hold the water sensor and atomising transducer in place so they are not just "free floating" in my "water reservoir" (mug). Repot the coffee plant. Install a second shower curtain liner on other mesh side of the cabinet, as it is harder to humidify with winter approaching.

