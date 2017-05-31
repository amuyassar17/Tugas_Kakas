#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <conio.h>

using namespace std;

void mainmenu();


int pilih;
bool cinfail;
int konfirmasi;
string username, password, password2;

void writetofile(string username){
    ofstream writefile;
    string file = username+".txt";
    writefile.open(file.c_str());
    writefile << password;
    writefile.close();
    cout<<"Anda Telah Berhasil Melakukan Pengimputan";
        getch();
        system("cls");
        mainmenu(); }

void login(){
    int i;
char ch;
system("cls");
cout << " -------Tugas Praktikum Kakas-------\n";
	cout << "| Nama  : Ahmad Muyassar Ibrahim    |\n";
	cout << "| Nim   : 60200114065               |\n";
	cout << "| Kelas : C                         |\n";
	cout << " -----------------------------------\n\n";
cout << "============================\n";
cout << "Selamat Datang di Form Login \n";
cout << "============================\n";
    for (i=1; i<=3; i++) {
       string user = "";
       string pass = "";
       cout << "Username : "; cin >> user;
       cout << "Password : ";
            ch = _getch();
            while(ch != 13){
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
            }

       if (user == "muyassar" && pass == "12345") {
         cout << "\n\nAnda berhasil login. \n" << endl;
         //return (0);
         getch();
         system ("cls");
         mainmenu();
      } else {
         cout << "\n\nMaaf Username & Password anda masukan salah.\n\n";
      }
   }
   while (i <= 3);

   cout << "Anda telah 3x memasukan Username & Password yang salah.\n";
   cout << "Mohon maaf akun anda kami blokir untuk sementara. \n";
   cout << "Silahkan hubungi kami melalui e-mail support@email.com, Terima Kasih..";
   getch();
}

void registerpassword(){
    cout << "Masukkan password:" << endl;
    cin >> password;
    cout << "Masukkan Ulang password Anda:" << endl;
    cin >> password2;
    if (password == password2){
        cin.clear();
        cin.ignore(10000,'\n');
        writetofile(username);
        
    }
    else;{
        cout << "Password Salah" << endl;
        registerpassword();
    }}


void registerme(){
	system("cls");
	cout << " -------Tugas Praktikum Kakas-------\n";
	cout << "| Nama  : Ahmad Muyassar Ibrahim    |\n";
	cout << "| Nim   : 60200114065               |\n";
	cout << "| Kelas : C                         |\n";
	cout << " -----------------------------------\n\n";
	cout << "=====================================\n";
	cout << "          FORM REGISTRASI\n";
	cout << "=====================================\n";
    cout << "Masukkan username Anda: " << endl;
    getline(cin, username);
    cout << "\nUsername -  \""<< username << "\"\nKonfirmasi? \n\n[1] Yes\n[2] No" << endl;
    cin >> konfirmasi;
    if (konfirmasi == 1){
        registerpassword();
    }

    else; {
        cout << "Username yang anda masukkan salah, ulang sekali lagi" << endl;
        cin.clear();
        cin.ignore(10000,'\n');
        registerme();
    }}


void exit(){
    exit(0);}

void mainmenu(){ 
	cout << " -------Tugas Praktikum Kakas-------\n";
	cout << "| Nama  : Ahmad Muyassar Ibrahim    |\n";
	cout << "| Nim   : 60200114065               |\n";
	cout << "| Kelas : C                         |\n";
	cout << " -----------------------------------\n\n";
	cout << "Hai, Apakah anda ingin Login atau Registrasi\n[1] Login\n[2] Register\n[3] Exit" <<endl; cin >> pilih; do{
    cinfail = cin.fail();
    cin.clear();
    cin.ignore(10000,'\n');

    }while(cinfail == true);{
        switch(pilih){
            case 1:
                login();
                break;

            case 2:
                registerme();
                break;

            case 3:
                exit();}}}

main(){
mainmenu();
}
