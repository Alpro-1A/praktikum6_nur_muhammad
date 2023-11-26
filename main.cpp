#include <iostream>
using namespace std;

int main() {
    int Nilai[100];
    int n;
    int max_num =INT_MIN;
    int max_indeks;

    cout << "Masukkan jumlah angka: "; cin >> n;
    cout << "Masukkan " << n << " angka: " << endl;
    for(int i =0; i< n; i++){
        cin >> Nilai[i];
        if(Nilai[i] > max_num){
            max_num = Nilai[i];
            max_indeks = i;
        }
    }
    if(max_num != INT_MIN){
        cout << "Angka tertinggi adalah: " << max_num << " pada indeks ke-" << max_indeks << endl;
    }else{
        cout << "Angka kosong." << endl;
    }
    return 0;
}
