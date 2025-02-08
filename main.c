#include <stdio.h>
#include <time.h>

struct Tarih {
    int yil, ay, gun;
};

struct Kullanici {
    char ad[50];
    char soyad[50];
    int uyeNo;
};

// Tarihleri epoch zamanýna çeviren fonksiyon
time_t EpochaCevir(struct Tarih tarih) {
    struct tm tm_zaman = {0};
    tm_zaman.tm_year = tarih.yil - 1900;
    tm_zaman.tm_mon = tarih.ay - 1;
    tm_zaman.tm_mday = tarih.gun;
    return mktime(&tm_zaman);
}

int main() {
    struct Tarih oduncTarihi, iadeTarihi;
    struct Kullanici kullanici;
    time_t epochOdunc, epochIade;
    double farkGun;
    int gecikmeGun;
    int gecikmeUcreti = 2; // Gecikme ücreti (TL/gun)
    
    printf("KUTUPHANE KITAP GECIKME HESAPLAMA\n\n");
    
    printf("Kullanici bilgilerini giriniz:\n");
    printf("Ad: "); scanf("%s", kullanici.ad);
    printf("Soyad: "); scanf("%s", kullanici.soyad);
    printf("Uye No: "); scanf("%d", &kullanici.uyeNo);
    
    do {
        printf("\nOdunc aldiginiz tarihi giriniz:\n");
        printf("Yil: "); scanf("%d", &oduncTarihi.yil);
        if (oduncTarihi.yil < 1970) printf("Hata! Yil 1970'ten kucuk olamaz! Tekrar giriniz.\n");
    } while (oduncTarihi.yil < 1970);
    
    do {
        printf("Ay (1-12): "); scanf("%d", &oduncTarihi.ay);
        if (oduncTarihi.ay < 1 || oduncTarihi.ay > 12) printf("Hata! Ay 1 ile 12 arasinda olmalidir! Tekrar giriniz.\n");
    } while (oduncTarihi.ay < 1 || oduncTarihi.ay > 12);
    
    do {
        printf("Gun: "); scanf("%d", &oduncTarihi.gun);
        if (oduncTarihi.gun < 1 || oduncTarihi.gun > 31) printf("Hata! Gun 1 ile 31 arasinda olmalidir! Tekrar giriniz.\n");
    } while (oduncTarihi.gun < 1 || oduncTarihi.gun > 31);
    
    do {
        printf("\nIade tarihini giriniz:\n");
        printf("Yil: "); scanf("%d", &iadeTarihi.yil);
        if (iadeTarihi.yil < 1970) printf("Hata! Yil 1970'ten kucuk olamaz! Tekrar giriniz.\n");
    } while (iadeTarihi.yil < 1970);
    
    do {
        printf("Ay (1-12): "); scanf("%d", &iadeTarihi.ay);
        if (iadeTarihi.ay < 1 || iadeTarihi.ay > 12) printf("Hata! Ay 1 ile 12 arasinda olmalidir! Tekrar giriniz.\n");
    } while (iadeTarihi.ay < 1 || iadeTarihi.ay > 12);
    
    do {
        printf("Gun: "); scanf("%d", &iadeTarihi.gun);
        if (iadeTarihi.gun < 1 || iadeTarihi.gun > 31) printf("Hata! Gun 1 ile 31 arasinda olmalidir! Tekrar giriniz.\n");
    } while (iadeTarihi.gun < 1 || iadeTarihi.gun > 31);
    
    epochOdunc = EpochaCevir(oduncTarihi);
    epochIade = EpochaCevir(iadeTarihi);
    
    farkGun = difftime(epochIade, epochOdunc) / (60 * 60 * 24);
    gecikmeGun = (int)farkGun - 14; // Kitap 14 gün içinde iade edilmelidir
    
    printf("\nOdunc tarihi epoch: %lld\n", (long long)epochOdunc);
    printf("Iade tarihi epoch: %lld\n", (long long)epochIade);
    printf("Kitap odunc suresi: %.0f gun\n", farkGun);
    
    if (gecikmeGun > 0) {
        printf("\nMerhaba %s!\n", kullanici.ad);
        printf("Gecikme gunu: %d\n", gecikmeGun);
        printf("Toplam gecikme ucreti: %d TL\n", gecikmeGun * gecikmeUcreti);
    } else {
        printf("Kitap zamaninda iade edilmis. Gecikme ucreti yok.\n");
    }
    
    return 0;
}

