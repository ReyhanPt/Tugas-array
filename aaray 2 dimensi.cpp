#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
 cout<<"===================================\n";
 cout<<"Nama : REYHAN PUTRA FEBRIAN\n";
 cout<<"NIM : 22343069\n";
 cout<<"Program Membuat Array 2 Dimensi\n";
 cout<<"===================================\n\n";
	int A[3][4]={{4,6,8,0},{1,3,5,7},{2,3,4,5}};

	for (int b=0;b<3;b++){
		for (int k=0;k<4;k++){
			cout<<A[b][k]<<" ";
		}
		cout << endl;
	}
getch();

}
