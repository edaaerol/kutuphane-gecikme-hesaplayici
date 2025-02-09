#Kütüphane Kitap Gecikme Hesaplama Programı#

Bu program, kullanıcıların kütüphaneden ödünç aldıkları kitapların gecikme süresini ve gecikme ücretlerini hesaplamak için tasarlanmıştır. Kullanıcılar ödünç aldıkları ve iade ettikleri tarihleri girdikten sonra program, gecikme süresini hesaplar ve gecikme ücreti varsa bunu ekrana yazdırır.

Kullanılan Yapılar ve Fonksiyonlar

Yapılar
struct Tarih: Tarih bilgilerini (yıl, ay, gün) tutar.
struct Kullanici: Kullanıcı bilgilerini (ad, soyad, üye no) tutar.

Fonksiyonlar
time_t EpochaCevir(struct Tarih tarih): Verilen tarihi epoch (Unix zamanına) çevirir.

Program Akışı
Kullanıcı bilgileri (ad, soyad, üye no) istenir.
Ödünç alınan tarih (yıl, ay, gün) istenir. Tarih bilgileri doğrulanır (yıl 1970'ten büyük, ay 1-12 arası, gün 1-31 arası olmalıdır).
İade tarihi (yıl, ay, gün) istenir. Tarih bilgileri doğrulanır (yıl 1970'ten büyük, ay 1-12 arası, gün 1-31 arası olmalıdır).
Ödünç alınan ve iade edilen tarihler epoch zamanına çevrilir.
İki tarih arasındaki gün farkı hesaplanır.
Gecikme süresi (ödünç süresi 14 günü aştığında) hesaplanır ve varsa gecikme ücreti ekrana yazdırılır.

Derleme ve Çalıştırma
Bu programı derlemek ve çalıştırmak için aşağıdaki adımları izleyin:

Kodu bir dosyaya kaydedin.
Komut satırında aşağıdaki komutu kullanarak programı derleyin.
Programı çalıştırın.
Programın doğru çalışması için gcc derleyicisinin kurulu olduğundan emin olun.
