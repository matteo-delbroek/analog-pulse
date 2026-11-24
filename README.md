# AnalogPulse 🐱⏱️

**AnalogPulse** is a cat-themed, ESP32-S3-powered analog desktop monitor featuring two physical servo-driven dial gauges, a central 0.96" OLED status display, and an addressable WS2812B LED status bar. Evolved from the initial **v1 (SnapDash / DeskPulse)** OLED & rotary dial prototype, **V2** connects over Wi-Fi to display real-time system metrics (such as CPU/GPU load and RAM usage) in a retro-style physical dashboard.

## ✨ Project Versions & Evolution

- **v1 (`v1/SnapDash.ino`):** Initial OLED & potentiometer prototype featuring a 128×64 I2C OLED UI with a weather status header and an analog-controlled 5–60 minute focus/study timer.
- **V2 (`V2/firmware/main.ino`):** Full cat-themed desktop monitor with dual MG90S servo dial gauges (`0% – 100%`), a central 0.96" OLED readout, and a WS2812B RGB status bar[cite: 6].

## 🛠️ Bill of Materials (BOM)

| Component | Quantity | Estimated Price (USD) | Notes |
| :--- | :---: | :---: | :--- |
| **ESP32-S3 DevKitC-1** | 1 | ~$5.50 | Main microcontroller with built-in Wi-Fi |
| **MG90S Micro Servo (Metal Gear)** | 2 | ~$4.50 | Drives the left (CPU/GPU) and right (RAM) needles |
| **0.96" I2C OLED Display (SSD1306)** | 1 | ~$2.50 | 128×64 pixels, 4-pin I2C interface (`0x3C`)[cite: 6] |
| **WS2812B Addressable LED Strip / Ring** | 1 | ~$2.50 | 5V RGB status lighting behind the front slot |
| **Potentiometer (10kΩ)** | 1 | ~$0.50 | Used in `v1` (`SnapDash`) for analog dial input[cite: 6] |
| **Jumper Wires & M2 Screws** | 1 set | ~$2.00 | Female-to-female Dupont wires & servo mounting |
| **3D-Printed Cat Enclosure & Needles** | 1 set | $0.00 (Self-printed) | Designed in Autodesk Fusion (`cad/` folder) |
| **Total** | | **~$17.50** | *Funded via Hack Club Hardware Grant* |

## 🔌 Wiring / Pinout (V2 — ESP32-S3)

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
├── v1/
│   └── SnapDash.ino        # Initial OLED & rotary potentiometer prototype[cite: 6]
├── V2/
│   └── firmware/
│       └── main.ino        # Main ESP32-S3 dual-servo, OLED & LED firmware[cite: 6]
├── cad/                    # Autodesk Fusion 3D models (.step & .stl enclosure, back cover & needles)
└── README.md               # Project documentation, BOM, and wiring diagram[cite: 6]