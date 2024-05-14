
#include <iostream>
using namespace std;

class angka {
private:
    int *arr;
    int panjang;
public:
    angka(int);
    ~angka();
    void cetakData();
    void isidata();
};

angka::angka(int i) {
    panjang = i;
    arr = new int[i];
    isidata();
}
angka::~angka() {
    cout << endl;
    cetakData();
    delete[]arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << " = " << arr[i] << endl;
    }
}

void angka::isidata() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << " = "; cin >> arr[i];
    }
    cout << endl;
}

int main()
{
    angka belajarcpp(3);
    angka* ptrBelajarcpp = new angka(5);
    delete ptrBelajarcpp;

    return 0;
}

