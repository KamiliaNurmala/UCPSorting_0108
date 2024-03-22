// Soal A
// Kamilia Nurmala Hayati_0108

#include <iostream>
using namespace std;
int n;
int Kamilia[8]; // 2 nim belakang (08) tapi karena error jadi 8 aja

void InsertionSort() { // no 1 gimana insertion sort membandingkan serta menukar elemen-elemen
	int j, i, temp;

	for (i = 1; i <= n - 1; i++) { 
		temp = Kamilia[i];
		j = i - 1; 
		while (j >= 0 && Kamilia[j] > temp)  
		{
			Kamilia[j + 1] = Kamilia[j]; 
			j--; 
		}
		Kamilia[j + 1] = temp; 
	}
}

void SelectionSort() { // no 2 di sini selection membandingkan dan menukar elemen-elemen
	int j, i, min_index, temp;

	for (j = 0; j <= n - 2; j++) {
		min_index = j;
		for (i = j + 1; i <= n - 1; i++) {
			if (Kamilia[i] < Kamilia[min_index]) {
				min_index = 1;
			}
		}
		temp = Kamilia[j];
		Kamilia[j] = Kamilia[min_index];
		Kamilia[min_index] = temp;
	}
}

void input() { // no 3 cara algorithma sortir mengetahui jumlah langkah yang dilakukan
	while (true) {
		cout << "Masukan banyak elemen pada array : ";  // lebih tepatnya no 3 di sini
		cin >> n;
		if (n <= 50)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 50 elemen";
		}
	}
	cout << endl;
	cout << "===================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> Kamilia[i];
	}
}

void Algorithm() { // no 4
	int j, i, min_index, temp;

	for (j = 0; j <= n - 2; j++) {
		min_index = j;
		for (i = j + 1; i <= n - 1; i++) {
			if (Kamilia[i] < Kamilia[min_index]) {
				min_index = 1;
			}
		}
		temp = Kamilia[j];
		Kamilia[j] = Kamilia[min_index];
		Kamilia[min_index] = temp;
	}
}

void display() {
	cout << endl;
	cout << "===================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "===================" << endl;
	for (int j = 0; j < n; j++) {
		cout << Kamilia[j] << endl;
	}
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main() {

	input();
	cout << "Ini hasil insertion sort" << endl;
	InsertionSort();
	display();
	cout << "Ini hasil selection sort" << endl;
	SelectionSort();
	display();
	cout << "Ini hasil Algortima no 4" << endl;
	Algorithm();
	display();

	return 0;
}
