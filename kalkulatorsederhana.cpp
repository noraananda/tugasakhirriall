#include <iostream>
using namespace std;

int main(){
  
  
  int angka;
    char operasi;
    double angka1, angka2;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Pilih operasi (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    double hasil;

    switch (operasi) {
        case '+':
            hasil = angka1 + angka2;
            break;
        case '-':
            hasil = angka1 - angka2;
            break;
        case '*':
            hasil = angka1 * angka2;
            break;
        case '/':
            if (angka2 != 0) {
                hasil = angka1 / angka2;
            } else {
                cout << "Error: Pembagian oleh nol." << endl;
                
            }
            break;
        default:
            cout << "Operasi tidak valid." << endl;
           
    }

    cout << "Hasil: " << angka1 << " " << operasi << " " << angka2 << " = " << hasil << endl;

    return 0;


}
  
   
          
