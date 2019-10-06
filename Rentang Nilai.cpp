#include<iostream>
#include<conio.h>
using namespace std;
main ()
{
	ulang:

double NilaiUjian;
char skor;

cout << "\n  ========== RENTANG ANGKA ==========";
cout << "\n  ANNISA RUSYDINA SABILA";
cout << "\n  19051397004";
cout << "\n  D4 MANAJEMEN INFORMATIKA";

cout<<"\n";
cout<<"\n  Masukan Nilai Ujian : ";
cin>>NilaiUjian;

if(NilaiUjian >= 85)
skor= 'A' ;
else

if(NilaiUjian >= 75)
skor= 'B';
else

if(NilaiUjian >= 65)
skor= 'C';
else

if(NilaiUjian >= 55)
skor= 'D';
else
skor= 'E';

cout<<" Skornya adalah : "<<skor<<endl;

cout<<"\n";

		goto ulang;
}
