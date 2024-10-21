#include <iostream>
#include <string>
using namespace std;

// Struktur untuk menyimpan zodiak
struct Zodiak {
    string nama;
    int mulaiBulan;
    int mulaiTanggal;
    int akhirBulan;
    int akhirTanggal;
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal dan bulan
string cariZodiak(int hari, int bulan) {
    Zodiak zodiakArray[12] = {
        {"CAPRICORN", 12, 22, 1, 19},
        {"AQUARIUS", 1, 20, 2, 18},
        {"PISCES", 2, 19, 3, 20},
        {"ARIES", 3, 21, 4, 19},
        {"TAURUS", 4, 20, 5, 20},
        {"GEMINI", 5, 21, 6, 20},
        {"CANCER", 6, 21, 7, 22},
        {"LEO", 7, 23, 8, 22},
        {"VIRGO", 8, 23, 9, 22},
        {"LIBRA", 9, 23, 10, 22},
        {"SCORPIO", 10, 23, 11, 21},
        {"SAGITTARIUS", 11, 22, 12, 21}
    };

    for (int i = 0; i < 12; i++) {
        if ((bulan == zodiakArray[i].mulaiBulan && hari >= zodiakArray[i].mulaiTanggal) ||
            (bulan == zodiakArray[i].akhirBulan && hari <= zodiakArray[i].akhirTanggal)) {
            return zodiakArray[i].nama;
        }
    }
    return "Zodiak tidak ditemukan";
}

int main() {
    int hari, bulan, tahun;

    // Input dari pengguna
    cout << "Masukkan tanggal lahir Anda [tgl-bln-tahun]: ";
    char delimiter;
    cin >> hari >> delimiter >> bulan >> delimiter >> tahun;

    // Menentukan zodiak
    string zodiak = cariZodiak(hari, bulan);

    // Menampilkan hasil
    cout << "Tanggal Lahir Anda: " << hari << "-" << bulan << "-" << tahun << endl;
    cout << "Zodiak Anda adalah: " << zodiak << endl;

    return 0;
}
