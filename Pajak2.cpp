#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {    
   int i;  
   string pass_input, user_input, pajak;  
   int nilai,diskon,tarif,dpp,hasil,hasil2;
   double tarif2;
   char ulang;
    
   
   cout << "==========================================\n";    
   cout << "             SIMULASI PAJAK\n";    
   cout << "==========================================\n";  
   string username ="admin";    
   string password = "123456";    
   string login = "block";    
   i = 1;    
   
   do {
       cout << "Username = "; cin>>user_input;        
       cout << "Password = "; cin>>pass_input;        
       if (user_input == username && pass_input == password) {    
           do {
           system("cls"); 
           cout<<"Jenis Pajak : "<<endl;
           cout<<endl;
           cout<<"1. PPN [11%]"<<endl;
           cout<<"2. PPh 4 (2) [20%]"<<endl;
           cout<<"3. PPh 23 Jasa [2%]"<<endl;
           cout<<"4. Tarif Pajak Lain"<<endl;
           cout<<endl;
     
           cout<<"Pilihlah kebutuhan Anda.."<<endl;
           cin>>tarif;
     
           cout<<"HARGA  : ";
           cin>>nilai;
     
           cout<<"DISKON : ";
           cin>>diskon;
    
           cout<<endl;
           cout<<endl;
    
           switch(tarif){
		   case 1 : dpp=nilai-diskon;
                 hasil=dpp*11/100;
		         hasil2=hasil+dpp;
		         pajak="PPN       :  ";
				break;
           case 2 : dpp=nilai-diskon;
                 hasil=dpp*-20/100;
                 hasil2=hasil+dpp;
                 pajak="PPh 4 (2) : ";
				break;
		   case 3 : dpp=nilai-diskon;
                 hasil=dpp*-2/100;
		         hasil2=hasil+dpp;
		         pajak="PPh 23    : ";
				break;
		   case 4 : cout<<"Tarif :";
		         cin>>tarif2;
                 dpp=nilai-diskon;
                 hasil=dpp*tarif2/100;
		         hasil2=hasil+dpp;
		         pajak="Pajak     :  ";
				break;
           default : tarif2=0;
                 dpp=nilai-diskon;
                 hasil=dpp*tarif2/100;
		         hasil2=hasil+dpp;
		         pajak="Pajak     :  ";
				break;
		
		   }
          cout<<"--------------------------------"<<endl;
          cout<<endl;
          cout<<endl;
	      cout<<"HARGA     :  "<<nilai<<endl;
	      cout<<"DISKON    :  "<<diskon<<endl;
	      cout<<"DPP       :  "<<dpp<<endl;
	      cout<<pajak<<hasil<<endl;
	      cout<<"KAS       :  "<<hasil2<<endl;
	      cout<<endl;
	      cout<<"Want to input other (y/t)? ";
          cin>>ulang;
          }
          while (ulang!= 't');
          cout<<"Good Luck!!";
          cout<<endl; 
          i = 4;
          login = "SIMULASI";        
       } 
       else {            
           cout << "\n===========================\n";            
           cout << "Username / Password Salah! ("<<i<<"x)\n";
		   cout << "=============================\n\n";
           i = i +1;
       }   
    } while (i <= 3);
	
    if(login != "SIMULASI"){
       cout<<"Anda telah 3x salah login.\n";       
       cout<<"Terima Kasih..\n\n";      
	}   
   system("pause");


}
