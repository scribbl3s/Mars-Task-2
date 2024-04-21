# Mars-Task-2

# The task: 
Using an ultrasonic sensor, MD10C motor driver, DC motor, battery and Arduino Mega 2560 to rotate the motor shaft as below.
above 100 cm: 150 pwm acw
75 to 100 cm: 75 pwm acw
50 to 75 cm: stop
25 to 50 cm: 75 pwm cw
below 25 cm: 150 pwm cw

# Steps followed:
- learning the connections for the driver, DC motor and ultrasonic sensor
- writing the framework of the code (pins, input/outputs, if statements) so that once the testing for each part is done, it can be added to this
- connecting the DC motor to driver using a buckboost converter, and connecting the driver to the arduino
- coding the driver and DC motor to peform basic direction and pwm changes, for testing
- testing the components using the code, replacing components that weren't working (the driver was not working, so we replaced it. the buckboost converted also seemed faulty, but we realised we didn't need one as we only needed 150 pwm at most, so we didn't use it.)
- connecting the ultrasonic sensor to the arduino
- printing values of distances found using the ultrasonic sensor using a basic code, for testing
- coding for the actual task
- connecting all components and transferring the code to the arduino
- executing the task

# Thought process and learning:
- I have only tried projects on TinkerCad so far, so working with the components in real life was exciting. Doing the wiring, testing the components and seeing them work were new experiences and I had fun.
- As some of the components are new to me, I first wanted to get an idea of how they work (what inputs and outputs they have, what other components they are connected to, why we use them). So I first read about their function and connections to get some familiarity.
- I started writing the final code, then realised that it would be better to write it in parts so that we can test each portion of the code as well as each component's working more efficiently. It was easier to identify the faulty components because of this.
- While looking at resources, I learnt about how the ultrasonic sensor works, the pulseIn function, the use of buckboost converters and drivers, and that there are different ways to control direction and pwm of a motor depending on the driver or connections used.

# Potential applications:
1) This can be used to detect obstacles and move a vehicle based on its distance from the obstacle. For this application, the motors can be connected to the wheels. If the obstacle is far away, the vehicle would move closer to it. If the obstacle is at the right distance away from it (so that it can observe without danger) it would stop. If the obstacle is too close by, it would move away from it.
2) It can be used to position a camera at the right distance from the object being photographed, instead of changing the focal length of the lens.

# Resources:
for ultrasonic sensor
https://projecthub.arduino.cc/Isaac100/getting-started-with-the-hc-sr04-ultrasonic-sensor-7cabe1
https://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/
for driver
https://manuals.plus/cytron/md10c-10a-dc-motor-driver-manual#getting_started
https://github.com/CytronTechnologies/Arduino_MD10C
https://youtu.be/JzRiqCpqcb0



