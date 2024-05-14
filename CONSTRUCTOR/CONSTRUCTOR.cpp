
#include <iostream>
using namespace std;

class Mahasiswa {
public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printALL();

    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

