#include<iostream>
using namespace std;


void Menu();

int main(){

void Menu(); 
}

void Menu(){
    char input;
    cout << "Press Q to quit, Press I to view inventory, Press S to read background story, Press E to view current quest" << endl;

    cin >> input;

    switch (input)
    {
    case 'q':
        cout << "bye bye" << endl;
        break;
    case 'i':
        cout << "you have nothing in inventory";
        break;
    case 's':
        cout << "Blah Blah Blah, Do you really need this?";
        break;
    case 'e':
        cout << "I dont know dude, Im just the menu.";
        break;
    default:
        break;
    }
}