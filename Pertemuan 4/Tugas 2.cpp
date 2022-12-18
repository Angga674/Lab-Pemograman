#include <iostream>
using namespace std;

int main()
{
	int bil, j;
	cout << "Nama = Dafa Alfiana Erlangga \n";
	cout << "NIM  = 312210446 \n";
	cout << "Program Segitiga \n";
	cout << "Masukkan baris = ";
	cin >> bil;

	for(int i = 1; i <= bil; i++){
		for(int j = bil; j >= i; j--){
			cout << " ";
		}
		for(int k = 1; k <= (2*i-1); k++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
