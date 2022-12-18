#include <iostream>
using namespace std;

int main()
{
	int baris;
	cout << "Nama = Dafa Alfiana Erlangga \n";
	cout << "NIM  = 312210446 \n";
	cout << "masukkan baris = ";
	cin >> baris;

	for(int i = 1; baris >= i; i++){
		for(int j = baris; j >= i; j--){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
} 
