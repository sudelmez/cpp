#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream f("metin.txt");


if(f.is_open()){
    f<<"deneme yazma";
    cout<<"dosya acildi";
     f.close();
}


    return 0;
}