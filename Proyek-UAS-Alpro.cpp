#include <iostream>
#include <cmath>

using namespace std;

double tambah(double a, double b) { return a + b; }
double kurang(double a, double b) { return a - b; }
double kali(double a, double b) { return a * b; }
double bagi(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Hasil: Tidak terdefinisi.\n";
        return 0;
    }
}
double pangkat(double a, double b) { return pow(a, b); }
double akar(double a, double b) {
    if (a >= 0 && b > 0)
        return pow(a, 1.0 / b);
    else {
        cout << "Error: Tidak bisa menghitung akar dengan pangkat 0 atau bilangan negatif.\n";
        return 0;
    }
}
double seper(double a) {
    if (a != 0)
        return 1 / a;
    else {
        cout << "Hasil: Tidak terdefinisi.\n";
        return 0;
    }
}
double persen(double a) { return a / 100; }

int main() {
    double hasil = 0;
    double memory = 0;
    bool jalan = true;
    int pilihan = 9;
   
    while (pilihan == 9) {
        cout << "Selamat Datang di Kalkulator Desimal Sederhana!" << endl;
        cout << "Masukkan angka pertama: ";
        cin >> hasil;
           pilihan = 0;
           jalan = true;

    while (jalan) {
        double b = 0;

        cout << "\nApa yang ingin Anda lakukan?" << endl;
        cout << "1. Tambah (+)\n";
        cout << "2. Kurang (-)\n";
        cout << "3. Kali (*)\n";
        cout << "4. Bagi (/)\n";
        cout << "5. Pangkat (^)\n";
        cout << "6. Akar (v)\n";
        cout << "7. Seper (1/x)\n";
        cout << "8. Persen (%)\n";
        cout << "9. C (Clear)\n";
        cout << "10. Memory Clear (MC)\n";
        cout << "11. Memory Plus (M+)\n";
        cout << "12. Memory Minus (M-)\n";
        cout << "13. Memory Recall (MR)\n";
        cout << "14. Selesai\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 6) {
            cout << "Masukkan angka kedua: ";
            cin >> b;
        }

        switch (pilihan) {
            case 1:
                hasil = tambah(hasil, b);
                break;
            case 2:
                hasil = kurang(hasil, b);
                break;
            case 3:
                hasil = kali(hasil, b);
                break;
            case 4:
                hasil = bagi(hasil, b);
                break;
            case 5:
                hasil = pangkat(hasil, b);
                break;
            case 6:
                hasil = akar(hasil, b);
                break;
            case 7:
                hasil = seper(hasil);
                break;
            case 8:
                hasil = persen(hasil);
                break;
            case 9:
                hasil = 0;
                jalan = false;
                break;
            case 10:
                memory = 0;
                cout << "Memori telah dihapus.\n";
                break;
            case 11:
                memory += hasil;
                cout << "Memori sekarang: " << memory << endl;
                break;
            case 12:
                memory -= hasil;
                cout << "Memori sekarang: " << memory << endl;
                break;
            case 13:
                cout << "Nilai dalam memori: " << memory << endl;
                break;
            case 14:
                cout << "Hasil akhir: " << hasil << endl;
                jalan = false;
                break;
            default:
                cout << "Pilihan tidak valid. Silahkan coba lagi.\n";
        }

        if (pilihan != 14) {
            cout << "Hasil saat ini: " << hasil << endl;
        }
    }
}

    return 0;
}