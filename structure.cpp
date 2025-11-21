#include <iostream>

using namespace std;

    struct siswa{
        string nama;
        string jenis_kelamin;
        unsigned int uang_saku;
};

int main()
{
    struct siswa siswa1;
    siswa1.nama = "Fachry Meesa";
    siswa1.jenis_kelamin = "Pria";
    siswa1.uang_saku = 20000;

    cout << siswa1.nama <<"jenis kelamin nya" << siswa1.jenis_kelamin << endl;
    cout <<"diberi uang saku" <<siswa1.uang_saku << "per hari" << endl;

    return 0;
}





