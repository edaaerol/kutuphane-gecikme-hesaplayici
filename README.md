## Kütüphane Kitap Gecikme Hesaplama Programı

Bu program, bir kullanıcının kütüphaneden ödünç aldığı bir kitabı zamanında teslim edip etmediğini kontrol eder ve gecikme üreti hesaplar.

### İÇİNDEKİLER
- [Kullanım](#kullanım)
- [Derleme ve Çalıştırma](#derleme-ve-çalıştırma)
- [Kod Yapısı](#kod-yapısı)
- [Örnek Kullanım](#örnek-kullanım)
- [Notlar](#notlar)

### Kullanım

-Program çalıştırıldığında, kullanıcıdan ad, soyad ve üye numarası girmesi istenir.

-Daha sonra, kitabı ödünç aldığı tarih ve iade ettiği tarih sırasıyla girilir.

-Girilen tarihler epoch zamanına çevrilerek aralarındaki fark hesaplanır.

-Kitabın ödünç süresi 14 gün olarak kabul edilir. Eğer teslim tarihi gecikmişse, gecikme gün sayısına göre toplam gecikme üreti hesaplanır ve ekrana yazdırılır.


### Derleme ve Çalıştırma

Programı derlemek için:
```sh
gcc -o gecikme hesaplama.c -Wall
```

Oluşturulan gecikme programını çalıştırmak için:
```sh
./gecikme
```

### Kod Yapısı

`struct Tarih`: Tarih verisini (yıl, ay, gün) tutar.

`struct Kullanici`: Kullanıcının ad, soyad ve üye numarasını tutar.

`EpochaCevir`: Verilen tarihi epoch zamanına çevirir.

`main`: Kullanıcıdan gerekli bilgileri alır, hesaplamaları yapar ve sonucu ekrana yazdırır.

### Örnek Kullanım

Girdi:
```sh
Ad: Eda
Soyad: Erol
Uye No: 1234
Odunc aldiginiz tarihi giriniz:
Yil: 2024
Ay (1-12): 2
Gun: 1
Iade tarihini giriniz:
Yil: 2024
Ay (1-12): 2
Gun: 20
```
Çıktı:
```sh
Odunc tarihi epoch: 1706745600
Iade tarihi epoch: 1708387200
Kitap odunc suresi: 19 gun

Merhaba Eda!
Gecikme gunu: 5
Toplam gecikme ucreti: 10 TL
```

### Notlar

-Gecikme üreti 2 TL/gün olarak belirlenmiştir.

-Tarih hesaplamalarında time.h kütüphanesi kullanılmıştır.

-Yanlış girilen tarihler için gerekli kontroller mevcuttur.

-Bu program, kitap gecikme hesaplamalarında kütüphanelere yardımcı olmak için tasarlanmıştır.
