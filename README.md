# AnalogPulse 🐱⏱️

**AnalogPulse** is a cat-themed, ESP32-S3-powered analog desktop monitor featuring two physical servo-driven dial gauges, a central 0.96" OLED status display, and an addressable WS2812B LED status bar. It connects over Wi-Fi to display real-time system metrics (such as CPU/GPU load and RAM usage) in a retro-style physical dashboard.

## ✨ Features
- **Dual Analog Dial Gauges:** Two MG90S micro-servos drive 3D-printed needles across `0% – 100%` engraved scales for CPU/GPU and RAM usage.
- **Central OLED Display:** A 0.96" (128×64) I2C OLED screen displays exact numerical readouts, network status, and system alerts.
- **Status LED Bar:** A WS2812B RGB LED strip tucked behind the cat's mouth cutout shifts color smoothly from green (idle) to orange (moderate load) and red (high load).
- **Custom 3D-Printed Cat Enclosure:** Designed in Autodesk Fusion with cat ears, front dial markings, internal component mounts, and a rear USB-C cutout.

## 🛠️ Bill of Materials (BOM)

| Component | Quantity | Estimated Price (USD) | Notes |
| :--- | :---: | :---: | :--- |
| **ESP32-S3 DevKitC-1** | 1 | ~$5.50 | Main microcontroller with built-in Wi-Fi |
| **MG90S Micro Servo (Metal Gear)** | 2 | ~$4.50 | Drives the left (CPU/GPU) and right (RAM) needles |
| **0.96" I2C OLED Display (SSD1306)** | 1 | ~$2.50 | 128×64 pixels, 4-pin I2C interface (`0x3C`) |
| **WS2812B Addressable LED Strip / Ring** | 1 | ~$2.50 | 5V RGB status lighting behind the front slot |
| **Jumper Wires & M2 Screws** | 1 set | ~$2.00 | Female-to-female Dupont wires & servo mounting |
| **3D-Printed Enclosure & Needles** | 1 set | $0.00 (Self-printed) | Printed in PLA (`cad/` folder) |
| **Total** | | **~$17.00** | *Funded via Hack Club Torque grant* |

## 🔌 Wiring / Pinout (ESP32-S3)

| Component | Pin on Component | ESP32-S3 Pin | Notes |
| :--- | :--- | :--- | :--- |
| **Left Servo (CPU/GPU)** | Signal (Orange) | `GPIO 4` | PWM control |
| **Right Servo (RAM)** | Signal (Orange) | `GPIO 5` | PWM control |
| **OLED Display (SSD1306)** | `SDA` | `GPIO 8` | I2C Data |
| **OLED Display (SSD1306)** | `SCL` | `GPIO 9` | I2C Clock |
| **WS2812B LED Strip** | `DIN` (Data In) | `GPIO 6` | Addressable RGB data |
| **All Components** | `VCC` / `5V` | `5V` | Powered via USB-C |
| **All Components** | `GND` | `GND` | Common ground |

## 📁 Repository Structure

```text
analog-pulse/
├── cad/                # 3D models (.step and .stl files for enclosure, back cover & needles)
├── firmware/           # ESP32-S3 Arduino/C++ source code (main.ino)
└── README.md           # Project overview, BOM, and wiring documentation