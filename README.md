# growing-coffee-plants

This project is done in multiple parts.

Step 1: Monitor temperature and humidity with a DHT11 sensor and my Arduino Uno. It outputs data readings onto a liquid crystal display. See .png for wiring schematic.

Step 2: Cabinet/enclosure upgrades.
1) IKEA cabinet 2x (BAGGEBO Glass-door cabinet, metal/white, 34x30x116 cm (13 3/8x11 3/4x45 5/8 ")) - metal so the grow lights would magnetically stick to the top surface
2) grow lights (Barrina Orbgrow OG09 Puck Grow Light, 5000K 18W(2 x 9W, 270 Watt Equiv), Full Spectrum Plant Light for Indoor Plants, Magnetic & Linkable with Timer, 5 Levels Dimmable for Plant Shelf, 2 Packs, Black)

Step 3: Monitor temperature and humidity with a DHT11 sensor and outputs data readings onto a liquid crystal display. Uses an external relay to deliver power to a humidifying unit (atomizing transducer) whenever the humidity drops below 70% to humidify the coffee plant in its enclosed chamber. An additional safety feature is in place to detect when the humidifier reservoir becomes empty, shutting off the device when water is not detected with a water sensor. This version of the prototype works, but is not optimized for product longevity. A hole was cut in the side of the cabinet and electronics placed externally to protect them from the humidity.

necessary subcomponents:
1) atomizing transucer (DAOKAI 2 pcs Micro USB Humidifier Module Atomization Disc 5V Module 108KHz 2W), push button short circuited
2) water sensor HW-038
3) 1602IIC LCD screen
4) dht11 temperature & humidity sensor
5) relay SRD-05VDC-SL-C
6) power module HW-131
7) arduino uno
8) barrel jack wall plug
9) 9V battery

Step 4 (extending the life of the product): switched mechanical relay for a MOSFET. Bought a second barrel jack cable to power the arduino (no more battery power). 3D printed a fixture to hold the water sensor and atomising transducer in place so they are not just "free floating" in my "water reservoir" (mug). Installed a second shower curtain liner on other mesh side of the cabinet, as it is harder to humidify with winter approaching.

Step 5: The HW-038 water level sensor corroded within two weeks of use, so for product longevity an alternative water level sensor that does not require contact with the water was chosen (D2CS-H, an industrial capacitive water level sensor). This also allowed me to increase the size of the water reservoir from a mug to a 1L sprite bottle. Since the only requirement of this sensor is to be placed against a non-metallic surface, it could be placed at the base of the plastic bottle. The humidity level threshold was lowered to 55% to protect any exposed electronics, since this was also well within the range that satisfies C. Arabica. I also had to put tape on the backs of the Arduino, LCD, and MOSFET units as an electrically insulating layer since the cabinet is made of metal so it shorted the Arduino at one point.

