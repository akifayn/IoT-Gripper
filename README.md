# 🤖 IoT Tabanlı Gripper Projesi

Bu proje, Wi-Fi üzerinden uzaktan kontrol edilebilen ve servo motorlar ile nesne kavrayabilen bir robotik sistemdir. Sistem, Blynk uygulaması kullanılarak mobil cihazdan kontrol edilir. Bu uygulama, özellikle akıllı lojistik ve otomasyon uygulamaları için prototip olarak geliştirilmiştir.

## 📌 Proje Videosu
📹 [YouTube'da İzle](https://youtu.be/d5sRWF0U2fg)

## 🧰 Kullanılan Teknolojiler ve Malzemeler
- ESP8266 Wi-Fi Modülü
- SG90 Servo Motor (4 adet)
- HW-131 Voltaj Arttırıcı Modül
- Jumper Kablolar
- Blynk Mobil Uygulaması
- Arduino IDE

## ⚙️ Yazılım Özellikleri
- Blynk ile Wi-Fi bağlantısı ve canlı kontrol
- 4 adet servo motor ile gripper hareket kontrolü
- ESP8266 üzerinden mobil bağlantı

## 🔧 Nasıl Kurulur?
1. Arduino IDE’yi açın.
2. Gerekli kütüphaneleri yükleyin:
   - `BlynkSimpleEsp8266.h`
   - `Servo.h`
3. `ROBOTIK.ino` dosyasını açın.
4. `ssid`, `pass` ve `BLYNK_AUTH_TOKEN` bilgilerini kendi bilgilerinizle değiştirin.
5. ESP8266 kart ayarlarını yapın ve kodu yükleyin.
6. Blynk uygulamasında 4 widget ile pinleri ayarlayın (V1-V4).

## 📄 Belgeler
Proje detaylarını [robotik.pdf](./robotik.pdf) dosyasından inceleyebilirsiniz.

## 👨‍💻 Geliştirici Ekibi
- Muhammet Akif AYAN 
- Oğuzhan TÜRKMEN 
- Oğuzhan YALÇIN 

## 🏫 Çorum Hitit Üniversitesi
Bilgisayar Mühendisliği Bölümü – ROBOTİK Proje Ödevi 
