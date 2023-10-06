#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int i;
	int k;
	int n;
	int larik[50];
	int temporary;
	
	cout << "\n ==> Inputkan banyak data yang akan diurutkan : ";
	cin >> n;
	cout << "\n";
	for (i=1; i<=n; i++){
	cout << "\t Inputkan data ke- " <<i<< "=";
	cin >> larik[i];
}

	for (i=1; i<=n; i++){
		for (k=1; k<=n; k++){
			if (larik[i] > larik[k]){
			temporary = larik[k];
			larik[k] = larik[i];
			larik[i] = temporary;
		}
			}
		}
		
		cout << "\n-------------------------------------------\n";
		cout << "## Hasil Pengurutan Data Secara Ascending ## \n";
		cout << "\n-------------------------------------------\n";
		cout << "\n";
		
			for (i=1; i<=n; i++){
	cout << "\t Element ke- " <<i<< "=" <<larik[i]<<endl;
}
	cout << "\n Created By Alpro STI";
	getch();
}
		
		
	

