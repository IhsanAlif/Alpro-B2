/*Nama file : 13_BiayaParkir*/
/*Pembuat   : Ihsan Alif Lazuardi Anwar - 24060121140162*/
/*Deskripsi : Menghitung biaya parkir berdasarkan lama parkir*/
/*Tanggal   : Jum'at,18 Maret 2022*/

#include <stdio.h>

int main (){
	//Kamus
	int i,b;

	//Algoritma
	printf("Membuat Program Biaya Parkir \n");
	printf("Jam lamanya parkir  : ");
	scanf("%d", &i);

	if ( i > 2) {
		b = 2000 + (i-2) * 500 ;
		printf(" Biaya Parkir sebesar: %d", b);
    }
	else{
		b = 2000;
		printf(" Biaya Parkir sebesar: %d", b);
	}
	return 0;
}
