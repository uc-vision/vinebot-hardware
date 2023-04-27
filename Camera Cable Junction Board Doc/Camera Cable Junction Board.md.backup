<h1>Camera Cable Junction Board</h1>

A board has been made in order to simplify cable management of the camera cables. This PCB provides a common bus for the camera trigger signal between the cameras themselves and any external components that may need to interface with them. It also allows for identical cables between cameras simplifying fault identification. There is also a 2nd additional bus that can be used as an auxilliary for a micro to use.

<p align="centre">
 <img src="Junction PCB SS.png" width="100%"/>
</p>

As the BlackFly cameras have pins defined as input or output in hardware, 4 connections are necessary to allow for identical cables. This does require that a 4 pin be connector be used. The cameras connect with a 4-pin M8 (J1-J8) screw connector. This has 2 pins for power and 2 for signalling. 

Viewed from the front (silkscreen text side) the top left pin is VCC and top right is GND. The blackfly cameras can take an input of 12-24V. In the case of USB cameras, power must <b>NOT</b> be supplied via the XT30 (J13) connector on this board.


<p align="centre">
 <img src="Junction PCB VCC.png" width="100%"/>
</p>

This board does not define the connection to the input/output camera trigger signal. This must be dictated by the cable side connections through pins 1 and 3 on the connector. 


<p align="centre">
 <img src="M8 Conn Closeup.png" width="50%"/>
</p>

This pin selection will also dictate which jumper position selects source or receiver (maybe go left side for source?). Headers on J7 to J12 are for this source select purpose. 

The connectors J14, J15, and J16 can be connected to either main camera trigger bus or auxilliary bus via their respective jumpers. Jumper in the left position will connect them to the main bus, or right for the auxiliary bus. Connector J17 connects to both buses and is intended to be used with a microcontroller.
