#include <iostream>
using namespace std;

class barang
{
    public: 
    barang(string namaBarang, int kodeBarang);
};

barang::barang(string namaBarang, int kodeBarang){
    cout << "Construct dengan Parameter" << endl;
    cout << "Nama Barang : " << kodeBarang << endl;
    cout << "kode Barang : " << kodeBarang << endl;
}

int main(){
    barang b("Laptop", 8765);
    return 0;

}