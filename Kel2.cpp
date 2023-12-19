#include <iostream>
#include <cstring>

using namespace std;

class Pelanggan {
private:
    int idPelanggan;
    string nama;
    int noMeja;

public:
    void input_data() {
        cout << "\t       *SELAMAT DATANG*" << endl;
        cout << "============|Silahkan Input Data|===========" << endl;
        cout << "ID Pelanggan : ";
        cin >> idPelanggan;
        cout << "Masukan Nama : ";
        cin >> nama;
        cout << "No Meja      : ";
        cin >> noMeja;
    }

    void dataPelanggan() {
        cout << "\n============|Data Pelanggan|===========" << endl;
        cout << "ID      :" << idPelanggan << endl;
        cout << "Nama    :" << nama << endl;
        cout << "No Meja :" << noMeja << endl;
    }
};

class Pesanan {
private:
    char pilihMakanan[20];
    char pilihMinuman[20];
    char menu;

public:
    void menuMakanan() {
        cout << "\n============|Pilih Menu Makanan|===========" << endl;
        cout << "1. Mie Pangsit" << endl;
        cout << "2. Mie Ayam" << endl;
        cout << "3. Soto" << endl;

        cout << "Pilih No [1-3]  : ";
        cin >> menu;
        switch (menu) {
        case '1':
            strcpy(pilihMakanan, "Mie Pangsit");
            break;
        case '2':
            strcpy(pilihMakanan, "Mie Ayam");
            break;
        case '3':
            strcpy(pilihMakanan, "Soto");
            break;
        default:
            strcpy(pilihMakanan, "Nomor Kategori Yang Dimasukkan Salah");
            break;
        }
    }

    void menuMinuman() {
        cout << "\n============|Pilih Menu Minuman|===========" << endl;
        cout << "1. Es Teh" << endl;
        cout << "2. Teh Es" << endl;
        cout << "3. Teh Dingin" << endl;

        cout << "Pilih No [1-3]  : ";
        cin >> menu;
        switch (menu) {
        case '1':
            strcpy(pilihMinuman, "Es Teh");
            break;
        case '2':
            strcpy(pilihMinuman, "Teh Es");
            break;
        case '3':
            strcpy(pilihMinuman, "Teh Dingin");
            break;
        default:
            strcpy(pilihMinuman, "Nomor Kategori Yang Dimasukkan Salah");
            break;
        }
    }

    void tampilkanPesanan() {
        cout << "\n============*Daftar Pesanan*===========" << endl;
        cout << "Makanan : " << pilihMakanan << endl;
        cout << "Minuman : " << pilihMinuman << endl;
    }

    void editPesanan() {
        char option;
        do {
            cout << "Apakah Anda ingin mengedit pesanan? (N/Y): ";
            cin >> option;

            if (option == 'Y' || option == 'y') {
                cout << "Pilih pesanan yang ingin diubah (M/m makanan, N/n minuman): ";
                cin >> menu;

                if (menu == 'M' || menu == 'm') {
                    menuMakanan();
                } else if (menu == 'N' || menu == 'n') {
                    menuMinuman();
                } else {
                    cout << "Pilihan tidak valid" << endl;
                }
            }
        } while (option == 'Y' || option == 'y');
    }
};

int main() {
    Pelanggan pelanggan;
    Pesanan pesanan;

    pelanggan.input_data();
    system("cls");
    
    pesanan.menuMakanan();
    pesanan.menuMinuman();
    pesanan.editPesanan();
    system("cls");
    
    pelanggan.dataPelanggan();
    pesanan.tampilkanPesanan();

}

