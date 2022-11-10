#include <iostream>
#include <fstream>

using namespace std;

int deletefunc(){
    int sonuc = remove("metin.txt");

    if(sonuc == 0){
    cout << "Dosya silindi";
  } else {
    cerr << "Dosya silinemedi";
    return -1;
  }
  return 0;
}


int main(){
    ifstream f("metin.txt");
 string satir = "";

if(f.is_open()){
     while ( getline(f, satir) ){
      cout << satir << endl;
    }
    cout<<"dosya acildi";
     f.close();
}

char ch;
cout<<"silmek icin 'd'"<<endl;
cin>>ch;

if(ch=='d') deletefunc();

    return 0;
}