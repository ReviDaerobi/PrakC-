#include <iostream>

using namespace std;
int main() {
    
    int nA,nT,luas;

// Input
    cout << "Masukan Nilai Alas : ";
    cin >> nA;
    cout << "Masukan Nilai Tinggi : ";
    cin >> nT;

    //  Rumus 

    luas = 0.5 * nA * nT;

// Output 
    cout << "Nilai Alas : " << nA << endl;
    
    cout << "Nilai Tinggi : " << nT << endl;
    
    cout << "Nilai Luas : " << luas << " cm^2" << endl;
    
}