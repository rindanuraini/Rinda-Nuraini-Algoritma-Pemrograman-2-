#include <iostream>
using namespace std;

//prototype
void prosesBaca ();
void prosesTukar ();
void prosesTampil ();

//variabel global
	int a,b,temp;

//program utama
int main () {
prosesBaca ();
	prosesTukar ();
	prosesTampil ();
	return 0;
}

//proses mambaca
void prosesBaca () {
	cout << "Masukkan nilai A : ";
	cin >>a;
	cout << "Masukkan nilai B : ";
	cin >>b;
}

//proses tukar
void prosesTukar () {
	temp=b;
	b=a;
	a=temp;
}

//prosesTambil
void peosesTampil () {
	cout << "=============" <<endl;
	cout << "Nilai A sekarang : "<<a<<endl;
	cout << "Nilai B sekarang : "<<b;
}s