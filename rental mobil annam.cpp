#include<iostream.h>
#include<conio.h>
int main()
{
    awal:
    clrscr();
    int l_sewa;
    char nama [30];
    char pil,yt;
    cout << "             ****RENTAL/SEWA MOBIL ANNAM&ANDI****           " << endl;
    cout << "                       ***GO CAR GO***                       " << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "KODE        Jenis Mobil                  Harga Sewa/Hari           " << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << " 1.         Honda civic                  Rp. 350.000               " << endl;
    cout << " 2.         Toyota Innova                Rp. 500.000               " << endl;
    cout << " 3.         Bus Marcedes Benz            Rp. 800.000               " << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Nama Penyewa         : " ;cin>>nama;
    cout << "Kode Mobil (1/2/3)   : " ;cin>>pil;
    cout << "Lama Sewa            : " ;cin>>l_sewa;
    cout << "----------------------------------------------------------------" << endl;

  if (pil=='1') {
    int h_sewa,sub_tot,diskon,tot,bay,balik;
    h_sewa=350000;
    sub_tot=l_sewa*h_sewa;
        if (l_sewa>=7) (diskon=sub_tot*0.3);
        else (diskon=sub_tot*0);
    tot=sub_tot-diskon;
    clrscr();
    cout << "             ****RENTAL/SEWA MOBIL ANNAM&ANDI****           " << endl;
    cout << "                       ***GO CAR GO***                       " << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Nama Penyewa         : " <<nama<< endl;
    cout << "Kode Mobil (1/2/3)   : " <<pil<< endl;
    cout << "Jenis Mobil          : Sedan(honda civic)" << endl;
    cout << "Harga Sewa/Hari      : " <<h_sewa<< endl;
    cout << "Lama peminjaman      : " <<l_sewa<<" hari"<< endl;
    cout << "Sub Total            : Rp. " <<sub_tot<<",-"<< endl;
    cout << "Diskon               : Rp. " <<diskon<<",-"<< endl;
    cout << "Total Bayar          : Rp. " <<tot<<",-"<< endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar           = Rp. ";cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali         = Rp. " <<balik<<",-"<< endl;
    }
    else if (pil=='2') {
    int h_sewa,sub_tot,diskon,tot,bay,balik;
    h_sewa=500000;
    sub_tot=l_sewa*h_sewa;
        if (l_sewa>=7) (diskon=sub_tot*0.3);
        else (diskon=sub_tot*0);
    tot=sub_tot-diskon;
    clrscr();
    cout << "             ****RENTAL/SEWA MOBIL ANNAM&ANDI****           " << endl;
    cout << "                       ***GO CAR GO***                       " << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Nama Penyewa         : " <<nama<< endl;
    cout << "Kode Mobil (1/2/3)   : " <<pil<< endl;
    cout << "Jenis Mobil          : Mini Bus(Toyota Innova)" << endl;
    cout << "Harga Sewa/Hari      : " <<h_sewa<< endl;
    cout << "Lama peminjaman      : " <<l_sewa<<" hari"<< endl;
    cout << "Sub Total            : Rp. " <<sub_tot<<",-"<< endl;
    cout << "Diskon               : Rp. " <<diskon<<",-"<< endl;
    cout << "Total Bayar          : Rp. " <<tot<<",-"<< endl;
    cout<<"----------------------------------------------------------------";
    cout<<endl;
    cout<<"Uang Bayar           = Rp. ";cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali         = Rp. " <<balik<<",-"<< endl;
    }
    else if (pil=='3') {
    int h_sewa,sub_tot,diskon,tot,bay,balik;
    h_sewa=800000;
    sub_tot=l_sewa*h_sewa;
        if (l_sewa>=7) (diskon=sub_tot*0.3);
        else (diskon=sub_tot*0);
    tot=sub_tot-diskon;
    clrscr();
    cout << "             ****RENTAL/SEWA MOBIL ANNAM&ANDI****           " << endl;
    cout << "                       ***GO CAR GO***                       " << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Nama Penyewa         : " <<nama<< endl;
    cout << "Kode Mobil (1/2/3)   : " <<pil<< endl;
    cout << "Jenis Mobil          : Bus(Bus Mercedes Benz)" << endl;
    cout << "Harga Sewa/Hari      : " <<h_sewa<< endl;
    cout << "Lama peminjaman      : " <<l_sewa<<" hari"<< endl;
    cout << "Sub Total            : Rp. " <<sub_tot<<",-"<< endl;
    cout << "Diskon               : Rp. " <<diskon<<",-"<< endl;
    cout << "Total Bayar          : Rp. " <<tot<<",-"<< endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"Uang Bayar           = Rp. ";cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali         = Rp. " <<balik<<",-"<< endl;
    }
    else {
    cout<<"Tidak Bisa Dipersoses";
    cout<<endl;
    }
    cout<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"TERIMA KASIH TELAH MENGGUNAKAN JASA KAMI\n"<<endl;
    cout<<"Apakah Anda Ingin Menyewa Yang Lain  ? [Y/T] : ";
    cin>>yt;
    cout<<endl;

    if(yt=='Y' || yt=='y')
    {goto awal;}
    if(yt=='T' || yt=='t')
    {goto selesai;}
    selesai:

  return 0;
  getch();

}


