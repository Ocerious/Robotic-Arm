# Robotics Innovation Showcase
### What if we could make a smaller version of the same industrial robots companies like Amazon and Tesla use in their factories?</b>
This project is an attempt to accomplish that goal. A hand gesture controlled Arduino robot arm that can be programmed and controlled.
</br></br>
There are hundreds of robotic arm kits that are available online, but they are pricey, and I wouldn't learn as much if I built my own from scratch. Therefore, 3D printing the parts is far more affordable and will help me learn more about how to create robotic projects in the future.
</br></br>
But no worries—the internet is a great tool with a tonne of online resources I can use.
The theory behind what I'm learning to make still holds true since Thingiverse includes listings of many robots that use servo motors and because each project explains how the 3D models were created. 

## Description
I built a robotic glove that uses your hand motions to control a six-axis robot. The robotic arm can be opened, closed, or rotated by mirroring simple movements like pinching or rotating your wrist. Essentially just using your hand to guide a robotic arm.
- 6 axis (DoF)
- Portable
- Arduino programmed
- Control the robot with human gestures
- Can be pre-programmed to carry out basic functions
- Can be controlled wirelessly from a range
- Can hold a load weight 600g (Max load 1kg)

## ?
### What sensors will be used by the glove?
It will make use of flex sensors as well as an accelerometer (MPU6050). A change in the glove will be detected by the flex sensors. It will then communicate a certain value mapped to a gesture to the robotic arm via Bluetooth to then drive a servo motor.
- Flex Sensors - The resistance of this plastic piece changes according on the degree of bend, altering the current. This measurement is then utilised to identify variations in hand movement.
- Accelerometers - An accelerometer can detect a shift in arm and wrist movement for more lifelike motions.

## Materials
The following are all the parts that are required for both the arm and glove, which I either bought from Jaycar or AliExpress.

### Arm
- 6 x Servo Motor - MG966R Series
- Servo Driver, PCA9685
- Battery Pack (5V, 2200 mAh)
- Arduino Uno
- Arduino HC-05
- Breadboard
- Jumper Wires
- NEMA 17 Servo Motor
- A4988 Stepper Motor Driver
- LiPo 11.1V, 2200mAh, 3s

### Glove
- 3 x Flex Sensor
- 2 x MPU6050 (Accelerometer)
- Arduino Nano
- 3 x Resistors (10k)
- Resistors (220R)
- Durable Glove
- 9V Battery
- 9V Batter Clip
- 3 x Capacitor (100nF)
- Arduino HC-05
- Braided Cable Sleeve
