<h1>Flash Modules</h1>

Each of the module consists of 2 separate PCBs, one which carries the LEDs (LED carrier board), and one which carries the capacitors and mosfet (driver board. Gate drive signal and regulated power are supplied externally via an adruino with an external gate drive IC (currently slave to the camera trigger pulse with adjusted on time) and an i7A development board. The external connections are MR30 connectors with red power, black ground, and white gate drive signal.

<b>Voltage on the i7A to power the flash circuity is orignally set at 17.8V.</b> This voltage is limited by the TC4422 which has a maximum VCC of 18V. 

An i7A configured for 19V can be trimmed down to this voltage. 

<h2>LED Carrier Board</h2>

The leds used in this revision are Cree XHP50.3 6/12V (XHP50D-00-0000-0D0BJ40E3) connected for 6V. The PCB has a 3x3 array of these LEDs which can either be configured to run in 3S3P or 9S by populating different resistor positions. 

<p align="centre">
 <img src="Flash LED Carrier Board Schematic.png" width="50%"/>
</p>

This iteration uses the 3S3P configuration, by bridging R1 and R4 with $0\Omega$ jumpers and placing the current limiting resistors (50mOhm) at R2, R5 and R7 positions. To configure for 9S, R3 and R6 should be bridged and current limiting resistor placed at R7.

<h2>Driver Board</h2>

The driver board is a simple passive circuit consisting of, capacitors, an inrush current limiting circuit, a drive MOSFET and a bleed/discharge resistor. 

<p align="centre">
 <img src="Flash Driver Board Schematic.png" width="80%"/>
</p>

Operation of this complete circuit is demonstrated with an LTSpice simulation, using LED parameter characterisation with a graph pulled from the XHP50.2 datasheet (XHP50.2 and XHP50.3 have very similar curves so should still be valid) and a manufacturer provided spice model for the SI4143DY P-channel mosfet. This is available in the Simulation directory.

<h2>Arduino Gate Driver</h2>

The arduino gate driver is a simple uno with basic power and gate drive circuitry soldered onto an prototyping hat.

The arduino code, Flash.ino, originally triggers on an input from pin 12 and outputs to pin 5.

<p align="centre">
 <img src="Arduino Uno Gate Drive Hat.png" width="80%"/>
</p>

The gate driver is an 8 pin TC4422, non inverting gate drivers capable of a peak of 9A. On time is set in milliseconds with the global ON_TIME

R1 is required as a pull down, otherwise the arduino gate drive will be sensitive to noise. 

R2 is to keep gate drive current below 9A when operated at the original set voltage.