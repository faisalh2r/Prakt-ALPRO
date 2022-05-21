#include <windows.h>     ///script untuk prepocessor yang digunakan
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
using namespace std; 

class Jubel {
	public :
		void input();
		void proses();
		void output();
		
	private : 
	 string username_1;
	 int password_1;
	 string username_2="faisal";
	 int password_2= 2100018402;  
	 int menu;   
	 int kaos;            ///ini beberapa variabel yang saya gunakan pada project saya
	 int nama_brg;
	 int kode[15];
	 struct{
	 char nabar [30][30], sz[30];
	 int hrg[30],jmlh[30],size[30]; 
	 }online[15];
	 long int total_byr;
	 int proteksi;
	 long int ttl[20];
	 char nama[40],alamat[30],nohp[14],kode_pos[30];
	 int ongkir,pilih;
	 int a,n;
	 int harga_final;
	 int diskon;
	 int saldo;
	 string ekspedisi;
}p;

void gotoxy(int x, int y){
 COORD coord;                         /// fungsi ini digunakan untuk gotoxy pada dev c++
 coord.X = x;                          /// dengan menambah prepocessor <windows.h>
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void Jubel::input(){     
       cout<< "------------------------"<<endl;
	   cout<< "Program Jual Beli Online"<<endl; 
	   cout<< "------------------------"<<endl;                   
       cout << "Username : "; 
	   cin >> username_1;        
       cout << "Password : "; 
	   cin >> password_1;        
       if (username_1 == username_2 && password_1 == password_2) {            
           cout << "\n--------------------\n";            
           cout << "Login anda berhasil" << endl;            
           cout << "--------------------\n\n";    
		   		      
cout<<"TOKO ONLINE\n";
cout<<" 1. Kaos Pria 002\n";
cout<<" 2. Keluar";

cout<<"\n\nSilahkan Pilih Menu [1/2] : ";
cin>>menu; 
		  	           
		}
       else {            
           cout << "\n------------------------\n";            
           cout << "Maaf Username atau Password anda salah,Silahkan coba lagi" << endl;                         
		   cout << "-------------------------\n\n";            
		   cout <<"Terimakasih"<<endl;    
       }   
   getch();
}
	
void Jubel::proses(){
	
	switch (menu){   // ini untuk isi pilihan menu
		case 1:
   system("cls");
   kaos;
   gotoxy(15,5) ;cout<<"======================================================================"<<endl;
   gotoxy(15,6) ;cout<<"|                        Daftar Harga BAJU                            |"<<endl;
   gotoxy(15,7) ;cout<<"======================================================================"<<endl;
   gotoxy(15,8) ;cout<<"| Kode  |      Model    |       Size        | Stock Ready |   Harga   |"<<endl;
   gotoxy(15,9) ;cout<<"----------------------------------------------------------------------"<<endl;
   gotoxy(15,10);cout<<"|  01   |    Polo       |     M,L,XL,XXL    |      100    | Rp.125000 |"<<endl;
   gotoxy(15,11);cout<<"|  02   |    Oversize   |     M,L,XL,XXL    |      78     | Rp.95000  |"<<endl;
   gotoxy(15,12);cout<<"|  03   |    Shirt      |     M,L,XL,XXL    |      89     | Rp.100000 |"<<endl;
   gotoxy(15,13);cout<<"|  04   |    VNeck      |     M,L,XL,XXL    |      14     | Rp.76000  |"<<endl; 
   gotoxy(15,14);cout<<"======================================================================="<<endl;
   gotoxy(15,15);cout<<endl;
   gotoxy(15,16);cout<<" *Jika total diatas 200K (diluar ongkir) otomatis anda akan mendapat"<<endl;
   gotoxy(15,17);cout<<" voucher diskon 15% dan mendapat voucher gratis ongkir "<<endl;
   gotoxy(15,18);cout<<" *Jika total dibawah 200K (diluar ongkir) maka otomatis anda dikenakan"<<endl;
   gotoxy(15,19);cout<<" ongkir sebanyak Rp.35000"<<endl;
  
   cout<<"\nMasukkan Berapa banyak anda ingin membeli Kaos :";
   cin>>n;
   for(a=1;a<=n;a++){
   cout<<"Kaos ke - "<<a<<endl;
   cout<<"Kode       : ";
   cin>>kode[a];
   cout<<"Model      : ";
   cin>>online[a].nabar[a];
   {
   if(kode[a]==01)
    online[a].hrg[a]=125000;
   else if(kode[a]==02)
    online[a].hrg[a]=95000;
   else if(kode[a]==03)
    online[a].hrg[a]=100000;
   else if(kode[a]==04)
    online[a].hrg[a]=76000;
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
   cout<<"Size       : ";
   cin>>online[a].sz[a];
   cout<<"Jumlah Beli: ";
   cin>>online[a].jmlh[a];
   }
   
   system("cls");
   gotoxy(5,3); cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901 (cara ini mempermudah menghitung garis tepian pada tabel menggunakan array)
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|   Model   |  Size  |   Harga   | Jumlah Beli |   Total    |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; // dihitung dari garis terakhir ditabel
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(24,7+a);cout<<online[a].sz[a];
 gotoxy(29,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byr=total_byr+ttl[a]; 
}
cout<<endl;
        cout<<"     ================================================================"<<endl;
cout<<endl;
    gotoxy(5,11);cout<<"Masukkan Alamat penerimaan"<<endl;	
    
    gotoxy(4,14);cout<<"Nama          		: ";
	cin>>nama;
    gotoxy(4,15);cout<<"Alamat Penerima		: ";
	cin>>alamat;
    gotoxy(4,16);cout<<"No Hp         		: ";
	cin>>nohp;
    gotoxy(4,17);cout<<"Kode Pos 			: ";
	cin>>kode_pos;
    proteksi=3500;
    diskon=0;
    ongkir=0;
    total_byr=total_byr+ttl[a]+proteksi+ongkir;
			if(total_byr < 200000){
				ongkir=35000;
			}
            if(total_byr > 200000){
                diskon = total_byr * 0.15;
				
				}
				
    harga_final=total_byr-diskon+ongkir;
    cout<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Silahkan Pilih Ekspedisi : "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"JNE "<<endl;
    cout<<"JNT "<<endl;
    cout<<"Antereja "<<endl;
    cout<<"Pilih Ekspedisi : ";
    cin>>ekspedisi;
    cout<<"Proteksi/Asuransi Produk : Rp."<<proteksi<<endl;
    cout<<"Ekspedisi : "<<ekspedisi<<endl;
    cout<<"Ongkos Kirim :Rp. "<<ongkir<<endl;
    cout<<"Diskon (15%) 					:Rp. "<<diskon<<endl;
    cout<<"Total Harga Belanja Sebelum Diskon		:Rp. "<<total_byr<<endl;
    cout<<"------------------------------------------------------------"<<endl;
	cout<<"TOTAL Harga Seluruhnya				:Rp."<<harga_final<<endl;
	cout<<endl;
    cout<<"Anda memiliki saldo yang tersimpan sebesar : Rp. 2.500.000 "<<endl;
    cout<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"Silahkan Pilih Metode Pembayaran : "<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"1. COD "<<endl;
    cout<<"2. Saldo "<<endl;
    cout<<"3. Transfer bank "<<endl;
    cout<<"Pilih Lewat : ";cin>>pilih;
    if(pilih==1){
 	cout<<"Pesanan segera dikemas dan siap untuk dikirim."<<endl;
 		cout<<"Siap kan uang anda ketika barang sudah sampai."<<endl;
    }
	else if(pilih==2){
	cout<<"Total yang dibayar : "<<harga_final;
 	saldo= 2500000-harga_final;
 	cout<<"\nSisa saldo anda : "<<saldo<<endl;
 	cout<<"Pesanan sudah dibayar."<<endl;
    }
    else if(pilih==3){
	cout<<"No.virtual account : 12345678910 "<<endl;
	cout<<"Batas akhir pembayaran 1 hari setelah checkout barang"<<endl;
	cout<<"\t Pengiriman dilakukan setelah anda transfer   \n";
	}
    else{
 	cout<<"Data yang anda inputkan salah."<<endl;
 	cout<<"Program berhenti"<<endl;
    }
            break;
            case 2:
    				cout<<"Anda telah berhasil keluar"<<endl;

}
}

void Jubel::output(){
	cout<<endl;
    cout<<"Terimakasih telah berbelanja menggunakan marketplace kami :)";
}

main(){
	p.input();
	p.proses();
	p.output();
}  
    
