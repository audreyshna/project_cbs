#include <iostream>
#include <string>

using namespace std;

int jumlah_harga(int harga){
    
    static int jumlah;

    jumlah += harga;

    return jumlah;
    
}

void halaman_depan(){

    cout << "===========================================================================" << endl;
    cout << " 1. Fantasi | 2. Politik | 3. Misteri | 4. Horor | 5. Romantis | 6. Keluar " << endl;
    cout << "===========================================================================" << endl;

}

void daftar_buku_fantasi(){
   system("cls");
    int harga_1, harga_2, harga_3, harga_4, harga_5, input_user;
    bool option = 1;
    while (option)
    {
        system("cls");
        harga_1 = 140000;
        harga_2 = 80000;
        harga_3 = 130000;
        harga_4 = 135000;
        harga_5 = 80000;

        cout << "1. Harry Potter\t" << harga_1 << endl;
        cout << "2. Bumi\t" << harga_2 << endl;
        cout << "3. Hunger Games\t" << harga_3 << endl;
        cout << "4. Six Of Crows\t" << harga_4 << endl;
        cout << "5. Ceros dan Batozar\t" << harga_5 << endl;
        cout << "=========================" << endl;
        cin >> input_user;
        switch (input_user)
        {
        case 1:
            jumlah_harga(harga_1);
            break;
        case 2:
            jumlah_harga(harga_2);
            break;
        case 3:
            jumlah_harga(harga_3);
            break;
        case 4:
            jumlah_harga(harga_4);
            break;
        case 5:
            jumlah_harga(harga_5);
            break;
        case 6:
            option = 0;
            break;
        default:
            option = 0;
            break;
        }
    }
}

void daftar_buku_politik(){
   system("cls");
    int harga_1, harga_2, harga_3, harga_4, harga_5, input_user;
    bool option = 1;
    while (option)
    {
        system("cls");
        harga_1 = 18000;
        harga_2 = 18000;
        harga_3 = 18000;
        harga_4 = 18000;
        harga_5 = 18000;

        cout << "1.\t" << harga_1 << endl;
        cout << "2.\t" << harga_2 << endl;
        cout << "3.\t" << harga_3 << endl;
        cout << "4.\t" << harga_4 << endl;
        cout << "5.\t" << harga_5 << endl;
        cout << "=========================" << endl;
        cin >> input_user;
        switch (input_user)
        {
        case 1:
            jumlah_harga(harga_1);
            break;
        case 2:
            jumlah_harga(harga_2);
            break;
        case 3:
            jumlah_harga(harga_3);
            break;
        case 4:
            jumlah_harga(harga_4);
            break;
        case 5:
            jumlah_harga(harga_5);
            break;
        case 6:
            option = 0;
            break;
        default:
            option = 0;
            break;
        }
    }
}

void daftar_buku_misteri(){
   system("cls");
    int harga_1, harga_2, harga_3, harga_4, harga_5, input_user;
    bool option = 1;
    while (option)
    {
        system("cls");
        harga_1 = 109000;
        harga_2 = 80000;
        harga_3 = 75000;
        harga_4 = 109000;
        harga_5 = 80000;

        cout << "1. The Guardians\t" << harga_1 << endl;
        cout << "2. Sherlock Holmes\t" << harga_2 << endl;
        cout << "3. Detective Conan\t" << harga_3 << endl;
        cout << "4. One of Us Is Lying\t" << harga_4 << endl;
        cout << "5. Pembunuhan Zodiak Tokyo\t" << harga_5 << endl;
        cout << "=========================" << endl;
        cin >> input_user;
        switch (input_user)
        {
        case 1:
            jumlah_harga(harga_1);
            break;
        case 2:
            jumlah_harga(harga_2);
            break;
        case 3:
            jumlah_harga(harga_3);
            break;
        case 4:
            jumlah_harga(harga_4);
            break;
        case 5:
            jumlah_harga(harga_5);
            break;
        case 6:
            option = 0;
            break;
        default:
            option = 0;
            break;
        }
    }
            
}

void daftar_buku_horor(){
    system("cls");
    int harga_1, harga_2, harga_3, harga_4, harga_5, input_user;
    bool option = 1;
    while (option)
    {
        system("cls");
        harga_1 = 18000;
        harga_2 = 18000;
        harga_3 = 18000;
        harga_4 = 18000;
        harga_5 = 18000;

        cout << "1.\t" << harga_1 << endl;
        cout << "2.\t" << harga_2 << endl;
        cout << "3.\t" << harga_3 << endl;
        cout << "4.\t" << harga_4 << endl;
        cout << "5.\t" << harga_5 << endl;
        cout << "=========================" << endl;
        cin >> input_user;
        switch (input_user)
        {
        case 1:
            jumlah_harga(harga_1);
            break;
        case 2:
            jumlah_harga(harga_2);
            break;
        case 3:
            jumlah_harga(harga_3);
            break;
        case 4:
            jumlah_harga(harga_4);
            break;
        case 5:
            jumlah_harga(harga_5);
            break;
        case 6:
            option = 0;
            break;
        default:
            option = 0;
            break;
        }
    }
}

void daftar_buku_romantis(){
    system("cls");
    int harga_1, harga_2, harga_3, harga_4, harga_5, input_user;
    bool option = 1;
    while (option)
    {
        system("cls");
        harga_1 = 18000;
        harga_2 = 18000;
        harga_3 = 18000;
        harga_4 = 18000;
        harga_5 = 18000;

        cout << "1.\t" << harga_1 << endl;
        cout << "2.\t" << harga_2 << endl;
        cout << "3.\t" << harga_3 << endl;
        cout << "4.\t" << harga_4 << endl;
        cout << "5.\t" << harga_5 << endl;
        cout << "=========================" << endl;
        cin >> input_user;
        switch (input_user)
        {
        case 1:
            jumlah_harga(harga_1);
            break;
        case 2:
            jumlah_harga(harga_2);
            break;
        case 3:
            jumlah_harga(harga_3);
            break;
        case 4:
            jumlah_harga(harga_4);
            break;
        case 5:
            jumlah_harga(harga_5);
            break;
        case 6:
            option = 0;
            break;
        default:
            option = 0;
            break;
        }
    }
}

int main(){
    
    int input_user, total;
    bool masuk_toko = 1;

    while(masuk_toko){

        halaman_depan();
        cout << "Masukkan pilihan anda: ";
        cin >> input_user;

            switch (input_user)
        {
        case 1:
            daftar_buku_fantasi();
            break;
        case 2:
            daftar_buku_politik();
            break;
        case 3:
            daftar_buku_misteri();
            break;
        case 4:
            daftar_buku_horor();
            break;
        case 5:
            daftar_buku_romantis();
            break;
        case 6:
            masuk_toko = 0;
            break;
        default:
            masuk_toko = 0;
            break;
        }
    }
    
    cout << "Jumlah yang harus dibayar: " << jumlah_harga(0);

    return 0;
}

