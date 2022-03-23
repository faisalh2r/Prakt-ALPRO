#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int jumlah_beli, bayar, diskon, jumlah[100], harga[100],total[50];
    float total_semua;
    string nama_barang[100];
    cout<<"Menu:"<<endl;
    cout<<"Ayam Bakar Rp: 21.000"<<endl;
    cout<<"Ayam Goreng Rp: 17.000"<<endl;
    cout<<"\nMasukan Jumlah yang ingin dibeli :";
    cin>> jumlah_beli; 

    for (int i=0;i<jumlah_beli;i++){
    	cin.ignore();
        cout<<"\nMasukan Barang ke- "<<i+1<<"\n\n";
        cout<<"Nama Barang : ";
        getline(cin,nama_barang[i]); 

        cout<<"Jumlah Barang : ";
        cin>>jumlah[i]; 

        cout<<"Harga Barang : ";
        cin>>harga[i]; 

        total[i] = jumlah[i]*harga[i]; 
        total_semua += total[i]; 
    }
    cout<<"\n======================";
    cout<<"\nCatatan Belanja";
    cout<<"\n======================";

    cout<<"\nNo\t Barang \t Jumlah \t Harga \t    Total\n";
    for (int i=0; i<jumlah_beli; i++ ){
        cout<<i+1<<setw(8)<<""<<nama_barang[i]<<setw(10)<<""<<jumlah[i]<<setw(12)<<""<<harga[i]<<setw(12)<<total[i]<<endl;
    }

    if(total_semua>=45000){
    	diskon=total_semua*10/100;
    }

    cout<<"\nJumlah Bayar : Rp."<<total_semua<<endl;
    cout<<"Diskon : Rp."<<diskon<<endl;
    cout<<"Total Bayar : Rp."<<total_semua - diskon<<endl;
    cout<<"Bayar : Rp.";
    cin>>bayar;
    cout<<"Kembalian : Rp."<<(bayar-(total_semua-diskon))<<endl;
    return 0;
}
