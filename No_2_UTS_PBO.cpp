#include <iostream>
#include <string>

using namespace std;

int main (){
	string NM;
	string NIM;

	cout<<"Masukan Data Berikut : "<<endl<<endl;
	 
	cout<<"Nama Mahasiswa  : ";
	getline (cin, NM); 
	 
	 
	cout<<"NIM : ";
	getline (cin, NIM); 
	
	cout<<endl;
	cout<<"========================"<<endl;
	cout<<"DATA MAHASISWA"<<endl; 
	cout<<"========================"<<endl;
	
	cout<<"Nama Mahasiswa  : "<<NM<<endl;
	cout<<"NIM : "<<NIM<<endl;

}
