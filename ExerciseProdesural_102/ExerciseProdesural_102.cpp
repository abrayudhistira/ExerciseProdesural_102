#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double rata) {
    if (rata >= 70)
        return "Selamat Anda Diterima!!!";
    else
        return "Maaf Anda Gagal";
}
string status2(double rata, double nil) {
    if (rata >= 70 or nil >= 80)
        return "Selamat Anda Diterima!!!";
    else
        return "Maaf Anda Gagal";
}
string nama;
int j;

void input() {
    for (int i = 0; i < 20; i++) {
        cout << "Masukkan Nama = ";
    }
    return 0;
}
int main()
{
    input();
}
