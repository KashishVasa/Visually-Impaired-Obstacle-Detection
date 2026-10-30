# Visually Impaired Assistance – Obstacle Detection System

📌 Project Overview

This project is an Arduino-based obstacle detection system designed to assist visually impaired individuals in identifying nearby obstacles.

It uses three HC-SR04 ultrasonic sensors to detect objects from different directions. Based on the measured distance, a buzzer generates audio alerts with varying beep patterns to indicate how close an obstacle is.

The project is developed and simulated using Wokwi.

🎯 Objectives

- Detect nearby obstacles using ultrasonic sensors.
- Monitor obstacles from three directions.
- Provide audio alerts through a buzzer.
- Change buzzer alert patterns according to obstacle distance.
- Develop an affordable assistive technology prototype.

🛠️ Components Used

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 3 |
| Buzzer | 1 |
| Jumper Wires | As required |

🔌 Circuit Connections

Ultrasonic Sensor 1
- TRIG → Digital Pin 5
- ECHO → Digital Pin 6

Ultrasonic Sensor 2
- TRIG → Digital Pin 9
- ECHO → Digital Pin 10

Ultrasonic Sensor 3
- TRIG → Digital Pin 3
- ECHO → Digital Pin 11

Buzzer
- Positive → A0
- Negative → GND

⚙️ Working Principle

1. Three ultrasonic sensors continuously measure the distance of nearby objects.
2. Arduino Uno receives the distance measurements from all three sensors.
3. The system identifies the nearest detected obstacle within 30 cm.
4. The buzzer generates different alert patterns based on the obstacle distance.
5. Closer obstacles produce faster buzzer alerts.
6. When no obstacle is detected within the configured range, the buzzer remains OFF.

📏 Distance-Based Alert System

| Obstacle Distance | Buzzer Alert |
|---|---|
| 0–5 cm | Very fast |
| 5–10 cm | Fast |
| 10–15 cm | Moderate |
| 15–20 cm | Medium |
| 20–25 cm | Slow |
| 25–30 cm | Very slow |
| Above 30 cm | No alert |

💻 Technologies Used

- Arduino Uno
- Embedded C/C++
- Ultrasonic Distance Measurement
- Wokwi Simulation

🌐 Wokwi Simulation

(https://wokwi.com/projects/470339496326260737)

🚀 Applications

- Assistive obstacle detection prototypes
- Smart mobility assistance concepts
- Educational embedded systems projects
- Ultrasonic distance monitoring

🔮 Future Scope

- Integration with wearable devices.
- Addition of vibration-based alerts.
- Integration of GPS for navigation assistance.
- Development of a more compact and portable system.

⚠️ Limitations

- Detection range is limited by the ultrasonic sensors.
- Soft or irregular surfaces may affect measurements.
- Sensor readings can be affected by environmental conditions.
- This educational prototype is not a certified mobility aid and should not replace a white cane or other established mobility support.

👩‍💻 Author
Kashish Vasa

Electronics & Communication Engineering Student


