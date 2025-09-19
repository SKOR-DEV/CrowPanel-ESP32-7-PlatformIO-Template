# AGENT_INSTRUCTIONS.md

## ⚠️ ВАЖЛИВО: Перед початком роботи

**ОБОВ'ЯЗКОВО прочитайте та вивчіть всю документацію в цьому файлі перед початком розробки або внесенням змін у проект!**

### Цільове обладнання

#### Дисплей: CrowPanel ESP32 7.0" HMI Display
- **Модель:** 7.0 inch -CrowPanel ESP32 display
- **Процесор:** ESP32-S3-WROOM-1-N4R8
- **Роздільна здатність:** 800×480 пікселів
- **Flash:** 4MB
- **PSRAM:** 8MB
- **Тип сенсора:** Ємнісний сенсорний екран
- **Тип дисплея:** TN Panel TFT-LCD
- **Драйвери дисплея:** EK9716BD3 & EK73002ACGB
- **Живлення:** DC 5V-2A
- **Робоча область:** 153.84×85.63мм (Ш×В)
- **Робоча температура:** -20℃～70℃

#### Інтерфейси
- **SPK:** PY2.0-2P (динамік)
- **GPIO_D:** HY2.0-4P (цифрові GPIO)
- **UART0:** HY2.0-4P (послідовний порт)
- **I2C:** HY2.0-4P (I2C інтерфейс)
- **Кнопки:** BOOT та Reset

#### Бездротовий зв'язок
- **Wi-Fi:** 2.4 ГГц (802.11 b/g/n)
- **Bluetooth:** 5.0 LE

### Технічні посилання
- [Офіційна документація дисплея](https://www.elecrow.com/wiki/esp32-display-702727-intelligent-touch-screen-wi-fi26ble-800480-hmi-display.html)
- [Специфікації та покупка](https://www.elecrow.com/esp32-display-7-inch-hmi-display-rgb-tft-lcd-touch-screen-support-lvgl.html)
- [Керівництво по PlatformIO](https://www.elecrow.com/wiki/CrowPanel_ESP32_7.0-inch_with_PlatformIO.html)

### Середовище розробки
- **Platform:** PlatformIO
- **Framework:** Arduino (ESP32)
- **Графічна бібліотека:** LVGL 8.3.6
- **Додаткові бібліотеки:**
  - LovyanGFX 1.1.12
  - TAMC_GT911 1.0.2 (для сенсорного екрану)


