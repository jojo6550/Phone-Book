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
            cout<<"Press enter to continue..."<<endl;
            cin.ignore();
        }
        void viewInformation(){
            cout<<"Name: "<<name<<endl;
            cout<<"Phone Number: "<<phoneNumber1<<endl;
            cout<<"Created: "<<ctime(&timestamp)<<endl;
            cout<<"Press enter to continue..."<<endl;
            cin.ignore();

        }
        


};
int main(){
    int choice = 0;
    Phone p;
    while(choice != 4){
            cout << R"(
    __          __          _   _               _    
    \ \        / /         | | | |             | |   
    \ \  /\  / /__  _ __ | |_| |__   ___  ___| | __
        \ \/  \/ / _ \| '_ \| __| '_ \ / _ \/ __| |/ /
        \  /\  / (_) | | | | |_| | | |  __/ (__|   < 
        \/  \/ \___/|_| |_|\__|_| |_|\___|\___|_|\_\
                                                        
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