
#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
using namespace std;
float kb;



int main() {
    float bits,byte,mb,gb;
    cout << "Enter a file size, in kilobytes (KB): ";
    cin >> kb;
    cout << endl;
    cout << kb << " KB ..."<<endl<<endl;
    
    bits =(kb * 1024 * 8 );
    byte =(kb * 1024 );
    mb =(kb / 1024);
    gb =(kb / (1024 * 1024));
    cout << fixed << setprecision(2);
    //comma seperator
    
    cout.imbue(std::locale("en_US.UTF-8"));
    cout << "... in bits " << right << setw(30)<<(bits)<< " bits"<<endl;
    cout << "... in bytes " << right << setw(29)<<byte <<" bytes"<<endl;
    cout << "... in megabytes " << right << setw(25)<<(mb ) <<" MB"<<endl;
    cout << "... in gigabytes " << right << setw(25)<<(gb )<<" GB"<<endl;
}
