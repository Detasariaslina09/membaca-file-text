#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main(){
	//steam untuk menulis file
	ifstream myfile;
	char sv_text;

	
	//membuka file
	//jika file tidak ditemukam maka file akan otomatis dibuat
	myfile.open("DDPPRAKTIKUM.txt", ios::app);
	
	cout<<"----------------"<<endl;
	cout<<"MEEMBACA FILE"<<endl;
	cout<<"----------------"<<endl;
	
	//fail() -> untuk memeriksa suatu kesalahan pada operasi file
	if(!myfile.fail()){
	
		cout<<"Isi dari file : "<<endl;
		//ulang selama program belum mencapai akhir konten dari file
		while(!myfile.eof())
		{
			myfile.get(sv_text);
			cout<<sv_text;
		}
		myfile.close();//menutup file
	}
	else{
		cout<<"file tidak ditemukan"<<endl;
	}
	_getche();
	return EXIT_SUCCESS;
}
