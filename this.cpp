#include <iostream>
using namespace std;

class buku{

    string judul;

    public:
       string setget(string judul){
            this->judul = judul;
            return this->judul;
        }

};            

int main()
{
    buku buku1;
    cout << buku1.setget("Matematika") << endl;

    return 0;
}