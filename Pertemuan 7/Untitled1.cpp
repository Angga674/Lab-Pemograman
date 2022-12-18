#include <iostream>
using namespace std;

int x,y;

void tambah(int a, int b){
    int p;
    p = a + b;
    cout << "X + Y = "<<p;
}

int main(){
    cout << "x=";
    cin >> x;
    cout << "y = ";
    cin >> y;
    tambah (x, y);
}
