# Button 2 LED
 **ESP32 DevKit V1** sử dụng nút nhấn thông qua thư viện **OneButton** để điều khiển trạng thái đèn LED
---

# Tính năng

- Khi double click sẽ chuyển chế độ điều khiển giữa hai LED (LED1 và LED2)
- Khi single click sẽ bật tắt cái LED đang được điều khiển (LED1 hoặc 2, đã chọn ở bước 1)
- Khi giữ nút nhấn sẽ làm cái LED đang được điều khiển nhấp nháy 200ms một lần. 
---

# Phần cứng
1. **ESP32 DevKit V1** (1 board)
2. **Button 4 pins** (1 cái)
3. **LED 5mm** (1 cái)
4. **Điện trở 1kΩ** (1 cái)
5. **Breadboard & Dây cắm**

---

Sơ đồ kết nối
D21 - Button - GND
D4 - led(-) - led(+) - R(1k) - 3.3v

# Thư mục dự án

```text
Button 2 LED/
├── .vscode/
├── include/
├── src/
│   └── main.cpp    
├── .gitignore
├── platformio.ini     
└── README.md       
