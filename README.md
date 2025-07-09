# Auto-Plant-Watering-System
A smart irrigation system that monitors soil moisture and automatically waters plants when needed. Perfect for beginners, it introduces sensors, automation, and basic control systems.


# 🌱 Automatic Plant Watering System

This beginner-friendly project uses an Arduino, soil moisture sensor, and water pump to automate plant care.

## 🔧 Components Required
- Arduino Uno
- Soil Moisture Sensor
- Relay Module
- 5V Water Pump + Tubing
- Jumper Wires
- Breadboard
- Power Supply

## 🔌 Circuit Diagram
![Circuit Diagram](images/circuit_diagram.png)

## 💻 Code
The Arduino reads soil moisture data. If the value drops below a threshold, it turns on the pump using the relay.

[View Full Code](code/plant_watering.ino)

## 🧠 Working Logic
1. Read moisture level
2. If dry → activate pump
3. Else → wait and monitor

## 📈 Possible Extensions
- Add a real-time LCD display
- Integrate with IoT (Blynk / NodeMCU)
- Solar power the system

## ❓ FAQ
**Q: Can I use NodeMCU instead of Arduino?**  
Yes, but ensure voltage compatibility with the sensor and pump.

**Q: Will it work outdoors?**  
Use waterproof enclosures and durable tubing for long-term use.
