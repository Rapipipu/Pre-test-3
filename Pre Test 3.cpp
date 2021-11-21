#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	/* Muhammad Rafi Satria
	   2117051046
	*/
	
	int harga_belanjaan;
	int p = 41000;
	int q = 11000;
	int r = 0;
	int total;
	
	cout << "Masukan harga belanjaan = ";
	cin >> harga_belanjaan;
	
	cout << endl;
	
	if(harga_belanjaan < 50000){
		total = harga_belanjaan + p;
		cout << "Total = " << total << endl;	
	}else if (harga_belanjaan < 120000){
		total = harga_belanjaan + q;
		cout << "Total = " << total << endl;
	}else (harga_belanjaan >= 120000);{
		total = harga_belanjaan + r;
		cout << "Total = " << total << endl;
	}
}
	
