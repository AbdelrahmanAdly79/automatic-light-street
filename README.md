# 💡 Automatic Street Light Electronics System

An embedded electronic system designed to automate municipal street lighting. By using a light-detecting sensor alongside a power-switching semiconductor, this project automatically switches high-power LEDs on when ambient light drops (night) and switches them off when ambient light increases (day), optimizing energy efficiency.

---

## 📂 Project Structure

```text
automatic light street electronics 2/
├── Automatic street light.pptx  # Slide presentation detailing schematics, component list, and layout
└── sketch_may15a.ino            # Core Arduino source code file
```

---

## ⚙️ Hardware & Logic Architecture

### 1. Hardware Interface Components
- **Microcontroller**: Arduino Uno (or compatible board).
- **Sensor**: Light Dependent Resistor (LDR) sensor module. Wired to Pin 2 (`LDR_SENSOR_PIN`) configured as digital input.
- **Power Switch**: N-Channel MOSFET (Gate pin wired to Pin 3 - `MOSFET_GATE_PIN` configured as output). The MOSFET acts as a solid-state relay, switching the high-current ground path of the street light LEDs without stressing the Arduino.
- **Load**: High-intensity light-emitting diode (LED) array simulating street lamps.

### 2. Logic Execution Flow
- Reads the digital state of the LDR module.
- If ambient light falls below the sensor's physical threshold (module outputs `HIGH` signal), the Arduino sets the MOSFET Gate to `HIGH`, allowing current to flow and turning the LED lamp **ON**.
- If ambient light rises (module outputs `LOW`), the Arduino sets the MOSFET Gate to `LOW`, breaking the circuit and turning the LED lamp **OFF**.

---

## 🛠️ Technology Stack

* **Programming Language**: C++ / Arduino
* **Hardware platform**: Arduino AVR Microcontrollers
* **Electronics Tools**: LDR Sensors, Power MOSFETs (e.g. IRF540N), Pull-up/down resistors

---

## 🚀 Uploading & Running

### Prerequisites
- Install the [Arduino IDE](https://www.arduino.cc/en/software).

### Code Deployment
1. Connect your Arduino board to your computer using a USB cable.
2. Open the Arduino IDE.
3. Open the file `sketch_may15a.ino`.
4. Under **Tools > Board**, select your board type (e.g. Arduino Uno).
5. Under **Tools > Port**, select the COM port corresponding to your connected board.
6. Click the **Upload** button (arrow icon) to compile and flash the firmware onto the hardware.
7. Verify circuit actions by covering the LDR module (LED should turn ON) and exposing it to light (LED should turn OFF).
