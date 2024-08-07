#include <iostream>
#include "kethua.h"
#include<math.h>
#include<iomanip>
#include<string>

using namespace std;

class diem : public kethua
{
private:
    int toan, ly, hoa;
public:
    double TB;
    diem()
    {
        toan = 0;
        ly = 0;
        hoa = 0;
        TB = 0;
    }

    void set()
    {
        kethua::set();
        cout << "nhap diem: " << "\n";
        cout << "toan: "; cin >> toan;
        cout << "ly: "; cin >> ly;
        cout << "hoa: "; cin >> hoa;
    }

    void get()
    {
        kethua::get();
        cout << "Toan: " << toan << "\n";
        cout << "ly: " << ly << "\n";
        cout << "hoa: " << hoa << "\n";
        cout << "TB: " << double(toan + ly + hoa) / 3 << endl;
    }
};


int main()
{
    diem s1;
    s1.set();
    s1.get();
    return 0;
}

