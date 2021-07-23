#include <iostream>
#include <time.h>
using namespace std;
int n = 42;
int main(){
    int x = 58;
    int y =20;
    int z = 58;
    while (x!= 0){
    cout << "-";
    x--;
    }
    cout << endl;
    cout << "|nhap vao danh sach sinh vien||                          |"<<endl;
    while(y!=0){
        cout<<"|                            ||                          |"<<endl;
        y--;
    }
    while (z!=0){
        cout << "-";
        z--;
    }
    cout << endl;
    return 0;
}