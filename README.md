# ESP32-Blynk-Notification-System-
A beginner-friendly IoT project using ESP32, push buttons, and Blynk IoT to send real-time notifications. When a student or faculty presses a button, a message is sent to the Blynk app. Ideal for smart door alerts and learning ESP32 with Arduino and cloud integration.


# ESP32 Blynk Notification System

This project demonstrates a basic Internet of Things (IoT) system using an ESP32 NodeMCU, two push buttons, and the Blynk IoT platform to create a smart notification system. When either button is pressed—one assigned to faculty, the other to students—a corresponding alert is instantly sent to a mobile device via the Blynk app. The message reads either “Faculty is waiting outside” or “Student is waiting outside.”

Designed as an introductory project, it helps beginners understand how embedded systems interact with cloud services and physical inputs. The hardware setup is simple, requiring minimal components, and the code is written using the Arduino IDE, making it accessible to learners and hobbyists.

---

## 📦 Required Components

- ESP32 NodeMCU  
- 2x Push buttons  
- Breadboard and jumper wires  
- Blynk IoT account  
- Arduino IDE

---

## 📚 Required Libraries

Install the following libraries via **Arduino Library Manager**:

- **Blynk** by Volodymyr Shymanskyy (`Blynk` v1.1.0 or newer)
- **WiFi** (included with ESP32 board package)

To install:
- Arduino IDE → **Sketch** → **Include Library** → **Manage Libraries**
- Search and install the required libraries

---

## ✨ Features

- Real-time push notifications using Blynk IoT
- Distinguishes between student and faculty alerts
- Uses just two push buttons for input
- Simple and minimal hardware setup
- Expandable for other smart applications

---

## 💡 Use Cases

- Entry notification system for offices or classrooms  
- Smart door alert system for homes  
- An alternative to doorbells  
- Beginner project for learning IoT and ESP32

---

## 🔌 Circuit Connections

| Component       | ESP32 GPIO Pin |
|----------------|----------------|
| Student Button | GPIO 14        |
| Faculty Button | GPIO 27        |

- Connect one side of each button to **GND**
- Other side to the respective GPIO
- Internal pull-up resistors are enabled in code

---

## ⚙️ Arduino IDE Setup

1. Install the **ESP32 board** via Board Manager  
2. Install the **Blynk** and **WiFi** libraries  
3. Replace the placeholders in the `.ino` file with your credentials  
4. Upload the code using a USB connection

---

## 🌐 Blynk Cloud Setup

1. Sign in to [Blynk Cloud](https://blynk.cloud)  
2. Create a new **Template** and a **Device**  
3. Note your:
   - **Template ID**
   - **Device Name**
   - **Auth Token**

4. Go to **Events**, create:
   - `student_waiting`: “Student is waiting outside”
   - `faculty_waiting`: “Faculty is waiting outside”

---

## 📱 Blynk Mobile App Setup

- Log in with the same account as Blynk Cloud
- Add your device
- Enable notifications for the events

---

## 🧠 How It Works

- ESP32 monitors two button inputs  
- When a button is pressed:
  - A cloud event is triggered via Blynk
  - You get an instant notification on your phone

---

## 🛠 Future Improvements

- Add camera support for visual confirmation  
- Replace buttons with biometric or RFID input  
- Add OLED display for local status  
- Implement debounce and state logic

---

## 📝 Project Summary

This project offers a basic hands-on experience with ESP32, Arduino IDE, and Blynk IoT. It demonstrates how to send remote notifications based on physical inputs, making it a practical introduction to embedded systems and real-time cloud communication.

---

## 🧑‍💻 Author

Made by Utkarsh Jha as a basic IoT/Embedded project.
