# 🔥 Arduino Fire Fighter Robot

An intelligent fire detection and extinguishing robot built using Arduino UNO, flame sensor, servo motor, and L298N motor driver.  
The robot detects fire automatically, moves toward the flame, and activates a water pump to extinguish it.

---

# 👨‍💻 Author

## M. Shoyab Sadik

- 🌐 Website: https://shoyabsadik.github.io/
- 💼 LinkedIn: https://www.linkedin.com/in/shoyabsadik/
- 📱 WhatsApp: +8801575317604

---

# 🚀 Project By

## ⚡ Pico Robotics  
Innovative Robotics, IoT & Automation Solutions

## 🔧 MSS ElectroTech

---

# 📌 Overview

This robot uses a flame sensor to detect fire and a servo-mounted system to spray water in different directions.  
It then moves toward the fire source and activates the pump automatically to extinguish the fire.

---

# ⚙️ Features

- 🔥 Automatic fire detection system
- 🚗 Autonomous movement toward fire
- 💧 Water pump control using relay
- 🎯 Servo-based water spraying mechanism
- ⚡ L298N motor driver control
- 🤖 Smart fire response system

---

# 🛠️ Components Used

| Component | Quantity |
|----------|----------|
| Arduino UNO | 1 |
| L298N Motor Driver | 1 |
| Flame Sensor | 1 |
| Servo Motor | 1 |
| Relay Module | 1 |
| Water Pump | 1 |
| DC Motors | 2 |
| Robot Chassis | 1 |
| Battery Pack | 1 |
| Jumper Wires | As required |

---

# 🔌 Pin Configuration

| Component | Arduino Pin |
|----------|-------------|
| ENA | 5 |
| IN1 | 10 |
| IN2 | 9 |
| IN3 | 8 |
| IN4 | 7 |
| ENB | 6 |
| Flame Sensor | 4 |
| Servo | 3 |
| Relay | 11 |

---

# ⚙️ Working Principle

1. Flame sensor continuously detects fire.
2. When fire is detected:
   - Robot moves toward the fire source
3. Robot stops near the flame.
4. Relay activates water pump.
5. Servo motor rotates to spray water in multiple directions.
6. Fire is extinguished and system resets.

---

# 📂 Arduino Code

The system includes:
- Flame sensor detection logic
- Motor control using L298N
- Servo-based spraying system
- Relay-controlled water pump activation

👉 Full code is available in the repository file.

---

# 🧠 Algorithm Logic

```
IF flame detected:
    move forward
    stop near fire
    turn ON pump
    rotate servo to spray water
ELSE:
    stop motors
    pump OFF
```

---

# 🔧 Function Highlights

- `flame detection` → detects fire
- `motor control functions` → movement system
- `servo_rotation()` → water spraying
- `relay control` → pump ON/OFF system

---

# 📸 Project Preview

Add:
- Robot image
- Circuit diagram
- Working video
- Demo GIF

---

# ▶️ How to Run

1. Open Arduino IDE
2. Select Arduino UNO board
3. Connect components as per wiring
4. Upload code
5. Power the robot
6. Test fire detection system

---

# 📚 Applications

- Fire safety systems
- Industrial safety robotics
- Smart home protection systems
- Robotics learning projects
- Disaster response systems

---

# 🚀 Future Improvements

- 📷 ESP32-CAM fire detection
- 📡 IoT fire alert system
- 📱 Mobile app control
- 🤖 AI-based fire prediction
- 🔋 Battery monitoring system
- 🚧 Obstacle avoidance integration

---

# 🏢 Organization

## Pico Robotics

Focused on:
- Robotics
- IoT
- Automation
- AI-based systems
- STEM education

---

# ⭐ Support

If you like this project:
- ⭐ Star this repository  
- 🍴 Fork it  
- 📢 Share with others  

---

# 📜 License

MIT License – free to use for educational and personal projects.
