# Autonomous-Mobile-Robot
In this repository, we will design and develop an autonomous mobile robot using Arduino programming, featuring motor control, obstacle detection, and customizable behaviors.

# Arduino-Based Mobile Robot

## Introduction

Welcome to the documentation for our Arduino-based mobile robot project! This documentation provides comprehensive guidance on setting up, programming, and using your mobile robot. Whether you're a beginner in robotics or an educator, this guide will help you get started.

## Getting Started

### Hardware Setup

1. **Assemble the Robot Chassis**: Begin by mounting the Arduino Uno, L293D Motor Driver Shield, Infrared Sensor, TT Gear Motors, and other components on the acrylic sheet following the provided guidelines.

2. **Connect Components**: Use jumper wires to make the necessary connections between components. Refer to the circuit diagram for accurate wiring.

3. **Power Supply**: Insert the lithium-ion batteries and connect them to the power supply terminals. Use the DC switch to control the power.

### Software Setup

1. **Install Arduino IDE**: If you haven't already, download and install the [Arduino IDE](https://www.arduino.cc/en/software) on your computer.

2. **Open the Project**: Clone this GitHub repository to your computer. Open the Arduino code file (`robot_code.ino`) in the Arduino IDE.

3. **Upload Code**: Connect your Arduino Uno to your computer via USB. Select the correct board and port in the Arduino IDE, then click the "Upload" button to load the code onto the Arduino.

## Project Overview

### Objectives

1. **Build a Mobile Robot**: Create a mobile robot capable of movement and interaction with its environment.

2. **Educational Tool**: Introduce beginners to robotics, Arduino programming, and motor control.

3. **Hardware Integration**: Demonstrate the integration of hardware components, including motors, sensors, and Arduino Uno.

4. **Customization**: Provide a platform for experimenting with additional features and functionalities.

### Functionalities

- **Motor Control**: The robot moves in different directions and at varying speeds using TT gear motors and the L293D motor driver shield.

- **Sensor Interaction**: An infrared sensor detects obstacles for navigation and collision avoidance.

- **Programmability**: Customize the robot's behavior using the open-source Arduino code.

## Hardware Requirements

To replicate this project, gather the following hardware components:

- Arduino Uno
- L293D Motor Driver Shield
- Infrared Sensor
- TT Gear Motors with Wheels
- Acrylic Sheet (for the robot's chassis)
- Lithium-Ion Batteries (for power supply)
- DC Switch (for power control)
- Jumper Wires and Breadboard (for connections)

## Software Requirements

To program and upload code to the Arduino Uno, you need:

- Arduino IDE (or compatible software)
- Visual Studio Code (optional, for enhanced coding and project management)


## Code Overview

### Arduino Code

The Arduino code (`robot_code.ino`) controls the robot's behavior. It includes motor control, sensor interaction, and customizable behaviors.

### Customization

You can customize the code to implement different robot behaviors, such as line following, advanced obstacle avoidance, or specific navigation tasks.

## Usage

### Uploading Code

1. Connect the Arduino Uno to your computer via USB.

2. Open the Arduino IDE, load the code (`robot_code.ino`), and select the correct board and port.

3. Click the "Upload" button to transfer the code to the Arduino.

### Interacting with the Robot

Power on the robot using the DC switch. Observe the robot's behavior based on the uploaded code and sensor inputs. Customize the code to experiment with various robot functionalities.

## Contributing

Contributions to this project are welcome! Whether you have improvements to the code, additional features, or educational resources to share, feel free to open issues or pull requests.

