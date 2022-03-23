#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int harga1, harga2, a, grg, bkr, total, bayar, diskon;
	char c;
	menu:
	
	cout<<"Daftar menu"<<endl;
	cout<<"1. ayam goreng \t Rp 17.000 \n2. ayam bakar \t Rp 21.000"<<endl;
	cout<<endl;
	cout<<"berapa ayam goreng yang anda pesan : ";cin>>grg;
	harga1= grg * 17000;
	cout<<"berapa ayam bakar yang anda pesan : ";cin>>bkr;
	harga2 = bkr * 21000;
	
	cout<<"apakah anda ingin memesan lagi ? [y/n] ";cin>>c;
	if (c == 'y' || c == 'Y'){
		goto menu;
	}
	else { 
		system("cls");
	}
	
	total = harga1 + harga2;
	
	if (total >= 45000){
		diskon = total * 10/100  ;
		bayar= total - diskon;
	}
	else {
		bayar= total;
	}
	cout<<"--------------------------------------------"<<endl;
	cout<<"		RUMAH MAKAN DIDIK SENTOSA 	"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"AYAM GORENG 		: "<<grg<<endl;
	cout<<"AYAM BAKAR 		: "<<bkr<<endl;
	if (total >=45000){
		cout <<"Total diskon anda 	: "<<diskon<<endl;
		cout<<"Total bayar anda 	: "<<total<<" - "<<diskon<<" = "<<bayar;
	}
	else {
		cout<<"total bayar anda 	= "<<bayar;
	}
	return 0;
	
}
