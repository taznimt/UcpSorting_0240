// UCP1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int tasnim(40);
int n;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada tasnim : ";
        cin >> n;
        if (n <= 1)
            break;
        else {
            cout << "\ntasnim dapat mempunyai maksimal 40 elemen.\n";

        }
    }
    cout << endl;
    cout << "==================" << endl;
    cout << "masukan Elemen tasnim" << endl;
    cout << "==================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> tasnim[i];

    }

}

void SelectionShortArray();

void dila() {
    for (int j = 0; j < n - 1; j++) {
        int min_index = j;
        for (int i = j + 1; i < n - 1; i++) { //
            if (tasnim[i] < tasnim[min_index]) { //
                min_index = i; // 
            }
        }
        swap(tasnim[j], tasnim[min_index]); //
    }

    void display() {
        cout << endl;
        cout << "=============" << endl;
        cout << "Element tasnim  yang telah tersusun" << endl;
        cout << "=============" << endl;
        for (int j = 0; j < n; j++) {
            cout << tasnim[j] << endl;

        }
        cout << "jumlah pass = " << n - 1 << endl;
        cout << endl;
    }

    int main()
    {
        input();
        dila();
        display();
        system("pause");

        return 0;

    }

    //dengan memisahkan satu elemen terlebih dahulu lalu dibandingkan dengan mana yang lebih kecil kalau lebih kecil pindah ke kiri kalau lebih besar tetap misalnya jika yang di j pertama nilainya 7 sedangkan di yang ke2 8 maka teetap tapi kalau yang di pertama 8 dan di kedua 7 maka swap ke2nya.
    //dengan mengambil minimum dan men swap nya ke j=0 setelah itu mengambil minimum lagi dan menswap ke j+1
    //dengan mengulang sampai j menjadi kurang dari satu dan indeks nya lebih besar dari temp.