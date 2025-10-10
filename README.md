# growing-coffee-plants

This project is done in multiple parts.

Step 1: Monitor temperature and humidity with a DHT11 sensor and my Arduino Uno. It outputs data readings onto a liquid crystal display. See .png for wiring schematic.

Step 2: Cabinet/enclosure upgrades.

Step 3: Monitor temperature and humidity with a DHT11 sensor and outputs data readings onto a liquid crystal display. Uses an external relay to deliver power to a humidifying unit (atomizing transducer) whenever the humidity drops below 70% to humidify the coffee plant in its enclosed chamber. An additional safety feature is in place to detect when the humidifier reservoir becomes empty, shutting off the device when water is not detected with a water sensor. This version of the prototype works, but is not optimized.

Step 4 (not done yet): switch relay for MOSFET to extend device lifetime. Buy a second barrel jack cable to power the arduino for safety reasons (battery does not run out while relay circuit is still powered). 3D print an adapter to hold the water sensor and atomising transducer in place so they are not just "free floating" in my "water reservoir" (mug).

