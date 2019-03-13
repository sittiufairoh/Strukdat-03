/*
Nama Program	: Strukdat-03
Nama			: SITTI UFAIROH AZZAHRA
NPM				: 140810180002
Deskriptif		: program ini dibuat untuk keliling luas segiempat
Tanggal			: 13 Maret 2019
*/

#include<iostream>
#include<math.h>
using namespace std;

typedef struct {
	float panjang;
	float lebar;
} segiempat;

void input(segiempat *s){
	cout << "Input Panjang	: ";cin >> s-> panjang;
	cout << "Input Lebar	: ";cin >> s-> lebar;
}
float keliling(segiempat s){
	return ((s.panjang+s.lebar)*2);
}
float luas(segiempat s){
	return (s.panjang * s.lebar);
}

float diagonal(segiempat s){
	return (sqrt((s.panjang * s.panjang) + (s.lebar * s.lebar)));
}
void print(segiempat s){
	cout << "\n===========================" <<endl;
	cout << "\tHasilnya " <<endl;
	cout << "===========================" <<endl;
	cout << "Keliling	: "<< keliling(s) <<endl;
	cout << "Luas		: " << luas(s) << endl;
	cout << "Diagonal	: " << diagonal(s) <<endl;
}

int main() {
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(*sg);
}

