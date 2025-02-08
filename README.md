#Kutuphane Gecikme Hesaplayici#

Bu program, bir kütüphane kullanıcısının ödünç aldığı bir kitabı zamanında iade edip etmediğini ve olası gecikme ücretini hesaplamak için tasarlanmıştır. Tarihler, epoch zaman formatı kullanılarak hesaplanır.

Kullanım

Program çalıştırıldığında kullanıcıdan aşağıdaki bilgileri girmesi istenir:

Kullanıcı Bilgileri:

Ad

Soyad

Üye numarası

Kitap Ödünç ve İade Tarihleri:

Yıl

Ay

Gün

Program, girilen tarihleri epoch zamanına çevirir ve iki tarih arasındaki farkı hesaplar. Kitap ödünç süresi gün cinsinden ekrana yazdırılır. Kitabın 14 günden fazla gecikmesi durumunda gecikme süresi ve toplam gecikme ücreti hesaplanarak ekrana yazdırılır.

Epoch Zamanı Nedir?

Epoch zamanı, 1 Ocak 1970 00:00:00 UTC'den itibaren geçen toplam saniye sayısını temsil eder. Program, tarihler arasındaki farkı bu zaman formatına çevirerek hesaplar.

Gecikme Hesaplama

Kitap 14 günden fazla tutulursa gecikme günü hesaplanır.

Gecikme ücreti her gün için 2 TL olarak belirlenmiştir.
