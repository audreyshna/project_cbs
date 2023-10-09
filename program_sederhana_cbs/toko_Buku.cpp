#include <iostream>
#include <string>

using namespace std;

int jumlah_harga(int harga){
    
    static int jumlah;

    jumlah += harga;

    return jumlah;
    
}

void halaman_depan(){

    cout << "************PILIH GENRE BUKU************" << endl;
    cout << " 1. Fantasi" << endl;
    cout << " 2. Politik" << endl;
    cout << " 3. Misteri" << endl;
    cout << " 4. Horor" << endl;
    cout << " 5. Romantis" << endl;
    cout << "========================================" << endl;
    cout << "Ketik '6' untuk bayar." << endl;

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

        cout << "==================FANTASI==================" << endl;
        cout << "1. Harry Potter\t" << harga_1 << endl;
        cout << "2. Bumi\t" << harga_2 << endl;
        cout << "3. Hunger Games\t" << harga_3 << endl;
        cout << "4. Six Of Crows\t" << harga_4 << endl;
        cout << "5. Ceros dan Batozar\t" << harga_5 << endl;
        cout << "===========================================" << endl;
        cout << "0. Kembali ke halaman utama" << endl;
        cout << "Pilih buku: "
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
        harga_1 = 50000;
        harga_2 = 70000;
        harga_3 = 40000;
        harga_4 = 35000;
        harga_5 = 120000;

        cout << "1. Dasar-Dasar Ilmu Politik\t" << harga_1 << endl;
        cout << "2. Sistem Politik Indonesia Menjelajahi Teori Dan Praktik\t" << harga_2 << endl;
        cout << "3. Buku Politik Pemerintahan Desa di Indonesia\t" << harga_3 << endl;
        cout << "4. Kekuasaan Politik\t" << harga_4 << endl;
        cout << "5. Teori - Teori Hubungan International\t" << harga_5 << endl;
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

        cout << "====================MISTERI====================" << endl;
        cout << "1. The Guardians\t" << harga_1 << endl;
        cout << "2. Sherlock Holmes\t" << harga_2 << endl;
        cout << "3. Detective Conan\t" << harga_3 << endl;
        cout << "4. One of Us Is Lying\t" << harga_4 << endl;
        cout << "5. Pembunuhan Zodiak Tokyo\t" << harga_5 << endl;
        cout << "===============================================" << endl;
        cout << "0. Kembali ke halaman utama" << endl;
        cout << "Pilih buku: "
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
        harga_1 = 86000;
        harga_2 = 70000;
        harga_3 = 95000;
        harga_4 = 38000;
        harga_5 = 147000;

        cout << "=======================HOROR======================" << endl;
        cout << "1. The Shining\t" << harga_1 << endl;
        cout << "2. Danur\t" << harga_2 << endl;
        cout << "3. The Exorcist\t" << harga_3 << endl;
        cout << "4. Sewu Dino\t" << harga_4 << endl;
        cout << "5. The Haunting of Hill House\t" << harga_5 << endl;
        cout << "==================================================" << endl;
        cout << "0.Kembali ke halaman utama" << endl;
        cout << "Pilih buku: ";      
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
        harga_1 = 85000;
        harga_2 = 70000;
        harga_3 = 45000;
        harga_4 = 100000;
        harga_5 = 120000;

        cout << "1. MetroPop Klasik: Love, Curse & Hocus Pocus\t" << harga_1 << endl;
        cout << "2. Cinta Dan Perjuangan\t" << harga_2 << endl;
        cout << "3. Sebuah Usaha Melupakan\t" << harga_3 << endl;
        cout << "4. The Architecture of love\t" << harga_4 << endl;
        cout << "5. Cinta Dan Perjuangan\t" << harga_5 << endl;
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

