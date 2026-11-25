# AnalogPulse 🐱⏱️

**AnalogPulse** is a cat-themed, ESP32-S3-powered analog desktop monitor featuring two physical servo-driven dial gauges, a central 0.96" OLED status display, and an addressable WS2812B LED status bar. Evolved from the initial **v1 (SnapDash / DeskPulse)** OLED & rotary dial prototype, **V2** connects over Wi-Fi to display real-time system metrics (such as CPU/GPU load and RAM usage) in a retro-style physical dashboard.

## ✨ Project Versions & Evolution

- **v1 (`v1/SnapDash.ino`):** Initial OLED & potentiometer prototype featuring a 128×64 I2C OLED UI with a weather status header and an analog-controlled 5–60 minute focus/study timer.
- **V2 (`V2/firmware/main.ino`):** Full cat-themed desktop monitor with dual MG90S servo dial gauges (`0% – 100%`), a central 0.96" OLED readout, a WS2812B RGB status bar, and an onboard status/debugging LED.

## 🛠️ Bill of Materials (BOM)

See [`BOM.md`](BOM.md) for the full standalone parts list with SKUs and direct links.

| Component | SKU | Quantity | Unit Price (EUR) | Total Price (EUR) | Store Link | Notes |
| :--- | :---: | :---: | :---: | :---: | :--- | :--- |
| **Espressif ESP32-S3-DevKitC-1-N8R8 (8MB Flash / 8MB PSRAM)** | `006635` | 1 | € 18.00 | € 18.00 | [TinyTronics](https://www.tinytronics.nl/nl/development-boards/microcontroller-boards/met-wi-fi/espressif-esp32-s3-devkitc-1-n8r8-8mb-flash-8mb-psram) | Main microcontroller with Wi-Fi *(Note: 2–4 weeks lead time)* |
| **MG90S Mini Servo (Metal Gear)** | `000263` | 2 | € 5.00 | € 10.00 | [TinyTronics](https://www.tinytronics.nl/nl/mechanica-en-actuatoren/motoren/servomotoren/mg90s-mini-servo) | Drives the left (CPU/GPU) and right (RAM) needles |
| **0.96 inch OLED Display 128×64 pixels Blue - I2C** | `001257` | 1 | € 4.75 | € 4.75 | [TinyTronics](https://www.tinytronics.nl/nl/displays/oled/0.96-inch-oled-display-128*64-pixels-blauw-i2c) | Central status display (`0x3C`) |
| **WorldSemi WS2812B Digital 5050 RGB LED Strip - 60 LEDs 1m** | `000438` | 1 | € 11.50 | € 11.50 | [TinyTronics](https://www.tinytronics.nl/en/lighting/led-strips/led-strips/worldsemi-ws2812b-digital-5050-rgb-led-strip-60-leds-1m) | 5V addressable RGB status lighting behind the front slot |
| **Green LED - 5mm Clear** | `000190` | 1 | € 0.10 | € 0.10 | [TinyTronics](https://www.tinytronics.nl/nl/componenten/led's/led's/groene-led-5mm-helder) | Status & debugging LED *(use with a 220Ω resistor)* |
| **10kΩ Potentiometer - Type RV09 - 1 Channel - Linear** | `001720` | 1 | € 0.35 | € 0.35 | [TinyTronics](https://www.tinytronics.nl/en/components/resistors/potentiometers/10k%CF%89-potmeter-type-rv09) | Analog dial input for `v1` (`SnapDash`) |
| **DuPont Jumper Wires (Female-Female)** | - | 1 set | ~€ 1.50 | ~€ 1.50 | [TinyTronics](https://www.tinytronics.nl/nl/kabels-en-connectoren/kabels-en-adapters/prototyping-draden/dupont-compatible-en-jumper) | Solderless connections for servos, OLED & LEDs |
| **3D-Printed Cat Enclosure & Needles** | - | 1 set | € 0.00 | € 0.00 | Self-printed | Designed in Autodesk Fusion (`3D_disign/` folder) |
| **Component Subtotal** | | | | **€ 46.20** | | *Excluding shipping to Belgium* |

## 🔌 Wiring / Pinout (V2 — ESP32-S3)

| Component | Pin on Component | ESP32-S3 Pin | Notes |
| :--- | :--- | :--- | :--- |
| **Left Servo (CPU/GPU)** | Signal (Orange) | `GPIO 4` | PWM control |
| **Right Servo (RAM)** | Signal (Orange) | `GPIO 5` | PWM control |
| **OLED Display (SSD1306)** | `SDA` | `GPIO 8` | I2C Data |
| **OLED Display (SSD1306)** | `SCL` | `GPIO 9` | I2C Clock |
| **WS2812B LED Strip** | `DIN` (Data In) | `GPIO 6` | Addressable RGB data |
| **Debugging / Status LED** | Anode (`+` via 220Ω) | `D9` | Status & debug indicator |
| **All Components** | `VCC` / `5V` | `5V` | Powered via USB-C |
| **All Components** | `GND` | `GND` | Common ground |
# AnalogPulse 🐱⏱️

**AnalogPulse** is a cat-themed, ESP32-S3-powered analog desktop monitor featuring two physical servo-driven dial gauges, a central 0.96" OLED status display, and an addressable WS2812B LED status bar. Evolved from the initial **v1 (SnapDash / DeskPulse)** OLED & rotary dial prototype, **V2** connects over Wi-Fi to display real-time system metrics (such as CPU/GPU load and RAM usage) in a retro-style physical dashboard.

## ✨ Project Versions & Evolution

- **v1 (`v1/SnapDash.ino`):** Initial OLED & potentiometer prototype featuring a 128×64 I2C OLED UI with a weather status header and an analog-controlled 5–60 minute focus/study timer.
- **V2 (`V2/firmware/main.ino`):** Full cat-themed desktop monitor with dual MG90S servo dial gauges (`0% – 100%`), a central 0.96" OLED readout, a WS2812B RGB status bar, and an onboard status/debugging LED.

## 🛠️ Bill of Materials (BOM)

See [`BOM.md`](BOM.md) for the full standalone parts list with SKUs and direct links.

| Component | SKU | Quantity | Unit Price (EUR) | Total Price (EUR) | Store Link | Notes |
| :--- | :---: | :---: | :---: | :---: | :--- | :--- |
| **Espressif ESP32-S3-DevKitC-1-N8R8 (8MB Flash / 8MB PSRAM)** | `006635` | 1 | € 18.00 | € 18.00 | [TinyTronics](https://www.tinytronics.nl/nl/development-boards/microcontroller-boards/met-wi-fi/espressif-esp32-s3-devkitc-1-n8r8-8mb-flash-8mb-psram) | Main microcontroller with Wi-Fi *(Note: 2–4 weeks lead time)* |
| **MG90S Mini Servo (Metal Gear)** | `000263` | 2 | € 5.00 | € 10.00 | [TinyTronics](https://www.tinytronics.nl/nl/mechanica-en-actuatoren/motoren/servomotoren/mg90s-mini-servo) | Drives the left (CPU/GPU) and right (RAM) needles |
| **0.96 inch OLED Display 128×64 pixels Blue - I2C** | `001257` | 1 | € 4.75 | € 4.75 | [TinyTronics](https://www.tinytronics.nl/nl/displays/oled/0.96-inch-oled-display-128*64-pixels-blauw-i2c) | Central status display (`0x3C`) |
| **WorldSemi WS2812B Digital 5050 RGB LED Strip - 60 LEDs 1m** | `000438` | 1 | € 11.50 | € 11.50 | [TinyTronics](https://www.tinytronics.nl/en/lighting/led-strips/led-strips/worldsemi-ws2812b-digital-5050-rgb-led-strip-60-leds-1m) | 5V addressable RGB status lighting behind the front slot |
| **Green LED - 5mm Clear** | `000190` | 1 | € 0.10 | € 0.10 | [TinyTronics](https://www.tinytronics.nl/nl/componenten/led's/led's/groene-led-5mm-helder) | Status & debugging LED *(use with a 220Ω resistor)* |
| **10kΩ Potentiometer - Type RV09 - 1 Channel - Linear** | `001720` | 1 | € 0.35 | € 0.35 | [TinyTronics](https://www.tinytronics.nl/en/components/resistors/potentiometers/10k%CF%89-potmeter-type-rv09) | Analog dial input for `v1` (`SnapDash`) |
| **DuPont Jumper Wires (Female-Female)** | - | 1 set | ~€ 1.50 | ~€ 1.50 | [TinyTronics](https://www.tinytronics.nl/nl/kabels-en-connectoren/kabels-en-adapters/prototyping-draden/dupont-compatible-en-jumper) | Solderless connections for servos, OLED & LEDs |
| **3D-Printed Cat Enclosure & Needles** | - | 1 set | € 0.00 | € 0.00 | Self-printed | Designed in Autodesk Fusion (`3D_disign/` folder) |
| **Component Subtotal** | | | | **€ 46.20** | | *Excluding shipping to Belgium* |

## 🔌 Wiring / Pinout (V2 — ESP32-S3)

| Component | Pin on Component | ESP32-S3 Pin | Notes |
| :--- | :--- | :--- | :--- |
| **Left Servo (CPU/GPU)** | Signal (Orange) | `GPIO 4` | PWM control |
| **Right Servo (RAM)** | Signal (Orange) | `GPIO 5` | PWM control |
| **OLED Display (SSD1306)** | `SDA` | `GPIO 8` | I2C Data |
| **OLED Display (SSD1306)** | `SCL` | `GPIO 9` | I2C Clock |
| **WS2812B LED Strip** | `DIN` (Data In) | `GPIO 6` | Addressable RGB data |
| **Debugging / Status LED** | Anode (`+` via 220Ω) | `D9` | Status & debug indicator |
| **All Components** | `VCC` / `5V` | `5V` | Powered via USB-C |
| **All Components** | `GND` | `GND` | Common ground |

## 📁 Repository Structure

```text
analog-pulse/
├── v1/
│   └── SnapDash.ino        # Initial OLED & rotary potentiometer prototype
├── V2/
│   └── firmware/
│       └── main.ino        # Main ESP32-S3 dual-servo, OLED & LED firmware
├── 3D_disign/              # Autodesk Fusion 3D models (.step, .stl & .f3d enclosure, back cover & needles)
├── BOM.md                  # Standalone Bill of Materials with TinyTronics links
└── README.md               # Project documentation, BOM, and wiring diagram

## 📁 Repository Structure

```text
analog-pulse/
├── v1/
│   └── SnapDash.ino        # Initial OLED & rotary potentiometer prototype
├── V2/
│   └── firmware/
│       └── main.ino        # Main ESP32-S3 dual-servo, OLED & LED firmware
├── 3D_disign/              # Autodesk Fusion 3D models (.step, .stl & .f3d enclosure, back cover & needles)
├── BOM.md                  # Standalone Bill of Materials with TinyTronics links
└── README.md               # Project documentation, BOM, and wiring diagram<img width="1920" height="881" alt="AnalogPulse_fusion_render" src="https://github.com/user-attachments/assets/a93d4808-5643-458e-a51a-4ea5269f6219" />
