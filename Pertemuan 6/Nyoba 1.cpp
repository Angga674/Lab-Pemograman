#include <iostream>
using namespace  std;

int main()
{
	cout <<"Dafa Alfiana Erlangga" <<endl;
	cout <<"312210446" <<endl;
	
	int sum, range, nilai[100];

	cout << "masukkan range = ";
	cin >> range;

	for(int i = 1; i <= range; i++){
		cout << "masukkan nilai ke-" << i << " = ";
		cin >> nilai[i];
	}

	cout << "data input = " << endl;
	sum = 0;
	for(int i = 1; i <= range; i++){
		cout << "nilai ke-" << i << " adalah " << nilai[i] << endl;
		sum = sum + nilai[i];
	}

	cout <<"rata-rata = ";
	cout << sum/10 << endl;

	return 0;
}
