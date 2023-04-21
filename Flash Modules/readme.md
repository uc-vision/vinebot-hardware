<h1>Flash Modules</h1>

Each of the module consists of 2 separate PCBs, one which carries the LEDs (LED carrier board), and one which carries the capacitors and mosfet (driver board. Gate drive signal and regulated power are supplied externally via an adruino with an external gate drive IC (currently slave to the camera trigger pulse) and an i7A development board. 

<h2>LED Carrier Board</h2>

The leds used in this revision are Cree XHP50.3 6/12V (XHP50D-00-0000-0D0BJ40E3) connected for 6V. The PCB has a 3x3 array of these LEDs which can either be configured to run in 3S3P or 9S by populating different resistor positions. 

<p align="centre">
 <img src="Flash LED Carrier Board Schematic.png" width="50%"/>
</p>

This iteration uses the 3S3P configuration, by bridging R1 and R4 with $0\Omega$ jumpers and placing the current limiting resistors at R2, R5 and R7 positions. To configure for 9S, R3 and R6 should be bridged and current limiting resistor placed at R7.

<h2>Driver Board</h2>

The driver board is a simple passive circuit consisting of, capacitors, an inrush current limiting circuit, a drive MOSFET and a bleed/discharge resistor. 

<p align="centre">
 <img src="Flash Driver Board Schematic.png" width="100%"/>
</p>

Operation of this complete circuit is demonstrated with an LTSpice simulation, using LED parameter characterisation with a graph pulled from the XHP50.2 datasheet (XHP50.2 and XHP50.3 have very similar curves so should still be valid) and a manufacturer provided spice model for the SI4143DY P-channel mosfet. This is available in the Simulation directory.