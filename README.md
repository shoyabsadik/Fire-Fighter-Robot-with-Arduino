# 🔥 Arduino Fire Fighter Robot

An autonomous fire-fighting robot built using Arduino, flame sensor, servo motor, relay module, and L298N motor driver.  
This robot detects fire, moves toward the flame, activates a water pump, and sprays water using a rotating servo mechanism.

---

# 🚀 Project By

### ⚡ Pico Robotics  
Innovative Robotics & IoT Solutions

### 🔧 MSS ElectroTech

---

# 📌 Features

- 🔥 Automatic fire detection
- 🚗 Autonomous movement toward fire
- 💧 Water pump activation using relay
- 🎯 Servo-based water spraying system
- ⚡ L298N motor driver controlled movement
- 🤖 Beginner-friendly Arduino project

---

# 🛠️ Components Required

| Component | Quantity |
|---|---|
| Arduino UNO | 1 |
| L298N Motor Driver | 1 |
| DC Motors | 2 |
| Robot Chassis | 1 |
| Flame Sensor | 1 |
| Servo Motor | 1 |
| Relay Module | 1 |
| Water Pump | 1 |
| Battery Pack | 1 |
| Jumper Wires | Several |

---

# 🔌 Pin Configuration

| Component | Arduino Pin |
|---|---|
| Motor ENA | 5 |
| Motor IN1 | 10 |
| Motor IN2 | 9 |
| Motor IN3 | 8 |
| Motor IN4 | 7 |
| Motor ENB | 6 |
| Flame Sensor | 4 |
| Servo Motor | 3 |
| Relay Module | 11 |

---

# ⚙️ Working Principle

1. The flame sensor continuously checks for fire.
2. When fire is detected:
   - The robot moves forward.
   - Stops near the fire source.
   - Turns ON the water pump using the relay.
3. The servo motor rotates left and right to spray water over a wider area.
4. After extinguishing:
   - Pump turns OFF
   - Servo returns to center position.

---

# 📂 Arduino Code

The project uses:
- `Servo.h` library
- PWM motor speed control
- Digital flame sensing
- Relay-based pump switching

---

# 🧠 Future Improvements

- Add obstacle avoidance
- Add Bluetooth/WiFi control
- Add smoke sensor
- Add ESP32-CAM live streaming
- Add automatic path planning
- Add IoT fire alert notification system

---

# 📸 Project Preview

You can add:
- Circuit Diagram
- Robot Images
- Demo Video
- Working GIF

inside this repository.

---

# ▶️ How to Upload Code

1. Install Arduino IDE
2. Select:
   - Board → Arduino UNO
   - Correct COM Port
3. Install Servo library (if needed)
4. Upload the code
5. Power the robot and test

---

# 📚 Applications

- Fire safety projects
- Robotics competitions
- STEM education
- Engineering learning
- Smart safety systems

---

# 👨‍💻 Author

## M. Shoyab Sadik

- 🌐 Website: https://shoyab-sadik.github.io/
- 💼 LinkedIn: https://www.linkedin.com/in/m-shoyab-sadik/
- 📱 WhatsApp: +8801575317604

---

# 🏢 Organization

## Pico Robotics

Focused on:
- Robotics
- IoT
- Automation
- AI-based systems
- STEM Education

---

# ⭐ Support

If you like this project:

- ⭐ Star the repository
- 🍴 Fork the project
- 📢 Share with others

---

# 📜 License

This project is open-source and free to use for educational purposes.
