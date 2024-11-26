#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
using namespace std;
class Phone{
    private:
        string phoneNumber1, name, phoneNumber2;
    public:
        Phone(){

        }
        Phone(string pn1, string n, string pn2){
            phoneNumber1 = pn1;
            name = n;
            phoneNumber2 = pn2;
        }
        time_t timestamp;
        void addContact(){
            cout<<"Enter Name: "<<endl;
            getline(cin, name);
            cout<<"Enter Phone Number: "<<endl; 
            cin >> phoneNumber1;
            time(&timestamp);
            cin.ignore();
            cout<<"Press enter to continue..."<<endl;
            cin.ignore();
        }
        void viewInformation(){
            cout<<"Name: "<<name<<endl;
            cout<<"Phone Number: "<<phoneNumber1<<endl;
            cout<<"Created: "<<ctime(&timestamp)<<endl;
            cin.ignore();
            cout<<"Press enter to continue..."<<endl;
            cin.ignore();

        }
        


};
int main(){
    int choice = 0;
    Phone p;
    while(choice != 4){
            cout << R"(
 ________  ___  ___  ________  ________   _______           ________  ________  ________  ___  __       
|\   __  \|\  \|\  \|\   __  \|\   ___  \|\  ___ \         |\   __  \|\   __  \|\   __  \|\  \|\  \     
\ \  \|\  \ \  \\\  \ \  \|\  \ \  \\ \  \ \   __/|        \ \  \|\ /\ \  \|\  \ \  \|\  \ \  \/  /|_   
 \ \   ____\ \   __  \ \  \\\  \ \  \\ \  \ \  \_|/__       \ \   __  \ \  \\\  \ \  \\\  \ \   ___  \  
  \ \  \___|\ \  \ \  \ \  \\\  \ \  \\ \  \ \  \_|\ \       \ \  \|\  \ \  \\\  \ \  \\\  \ \  \\ \  \ 
   \ \__\    \ \__\ \__\ \_______\ \__\\ \__\ \_______\       \ \_______\ \_______\ \_______\ \__\\ \__\
    \|__|     \|__|\|__|\|_______|\|__| \|__|\|_______|        \|_______|\|_______|\|_______|\|__| \|__|
            Welcome to the Phonebook Application!
            ----------------------------------------
            1. Add new contacts
            2. Search for contacts
            3. Delete contacts
            4. Exit
        )" << endl;

        cout << "Enter option..." << endl;
        cin>>choice;
        cin.ignore();
        switch (choice){
            case 1:
                p.addContact();
                cout<<"Contact entered." << endl;
                break;
            case 2:
                p.viewInformation();
                break;
            case 3:
                cout<<"WIP";
                break;
            case 4:
                cout<<"Bye!"<<endl;
                break;
            
        }
    }
    return 0;
}