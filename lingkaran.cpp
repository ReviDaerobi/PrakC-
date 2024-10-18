#include <iostream>
#include <cmath>


using namespace std;
int main() {
    
   double r,phi,luas;

// Input
    cout << "Masukan Nilai Jari Jari : ";
    cin >> r;

    //  Rumus 
    phi = 3.14159;
    luas = phi * pow(r,2);

// Output 
    cout << "Nilai Jari Jari : " << r << endl;
    
    cout << "Nilai Phi : " << phi << endl;

    cout << "Nilai Diameter (r²) : " << pow(r,2) << endl;
    
    cout << "Nilai Luas : " << luas << " cm^2" << endl;
    
}