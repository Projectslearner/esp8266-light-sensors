# ESP8266 Light Sensors Project

#### Project Overview
This project focuses on using an ESP8266 microcontroller to read light intensity using a Light Dependent Resistor (LDR). The sensor value is then displayed on the Serial Monitor.

#### Components Needed
- **ESP8266 Microcontroller**
- **Light Dependent Resistor (LDR)**
- **Resistor (optional for voltage divider setup)**
- **Jumper Wires**

#### Circuit Setup
1. **Connecting the LDR to ESP8266:**
   - Connect one leg of the LDR to the 3.3V or 5V pin (depending on LDR type).
   - Connect the other leg of the LDR to analog pin A0 of the ESP8266.
   - Optionally, connect a resistor (e.g., 10kΩ) from the LDR's connection point to ground to create a voltage divider circuit for accurate analog readings.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Operation:**
   - After uploading the code, open the Serial Monitor (baud rate: 9600).
   - The Serial Monitor will display the light intensity value read from the LDR.
   - Observe changes in light intensity and corresponding sensor values.

#### Applications
- **Light Sensing:** Monitor ambient light levels in indoor or outdoor environments.
- **Automation:** Trigger actions based on light levels, e.g., turning on lights when it gets dark.
- **Energy Efficiency:** Optimize energy use based on natural light availability.

#### Notes
- **LDR Calibration:** Adjust the code or circuit if needed based on specific LDR characteristics.
- **Serial Communication:** Use Serial Monitor for real-time monitoring and debugging.
- **Analog Readings:** Understand analog-to-digital conversion and sensor interfacing.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Light Sensors](https://projectslearner.com/learn/esp8266-light-sensors)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner