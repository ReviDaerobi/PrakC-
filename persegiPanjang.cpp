#include <iostream>


using namespace std;
int main() {
    
    int nP,nL,luas;

// Input
    cout << "Masukan Nilai Panjang : ";
    cin >> nP;
    cout << "Masukan Nilai Lebar : ";
    cin >> nL;

    //  Rumus 

    luas = nP * nL;

// Output 
    cout << "Nilai Panjang : " << nP << endl;
    
    cout << "Nilai Lebar : " << nL << endl;
    
    cout << "Nilai Luas : " << luas << " cm^2" << endl;
    
}