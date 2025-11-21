
#include <iostream>

using namespace std;

    struct siswa{
        string nama;
        string sekolah;
        unsigned int nis;
};

int main()
{
    struct siswa siswa2;
    siswa2.nama = "Fachry meesa";
    siswa2.sekolah = "Bunda Kandung";
    siswa2.nis = 17128;

    cout << "==++ Pendaftaran Siswa Baru ++==" << endl;
    cout << "Nama : ";
    getline(cin,siswa2.nama);

    cout << "sekolah : ";
    getline(cin,siswa2.sekolah);

    cout << "nis : ";
    cin >> siswa2.nis;

    cout << endl;

    cout << "Nama Kamu       : " << siswa2.nama << endl;
    cout << "Sekolah saya di : " << siswa2.sekolah << endl;
    cout << "NIS saya adalah : " << siswa2.nis << endl;

    return 0;
}
