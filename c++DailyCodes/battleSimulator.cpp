#include<iostream>
using namespace std;


void BattleSim();

int PlayerHealth = 20;


int main(){
    srand(time(NULL)); 

    int room = 1;
    char input;

    while(PlayerHealth > 0){ // start of game loop

    switch (room)
    {
    case 1:
        cout << "You are in room 1, you can go (s)outh" << endl;
        cin  >> input;
        if(input == 's')
            room = 2;
        break;
    case 2:
        BattleSim();
        cout << "You are in room 2, you can go (e)ast, you can go (n)orth" << endl;
        cin  >> input;
        if(input == 'e')
            room = 3;
        else if(input == 'n')
            room = 1;
        break;
    case 3:
        cout << "You are in room 3, you can go (w)est" << endl;
        cin  >> input;
        if(input == 'w')
            room = 2;
        break;
    
    default:
        
        break;
    }


    }// end of game loop



}// end of main


void BattleSim(){
    int MonsterHealth = 10;
    int damage;
    char dummy;
    cout << endl << endl << "----------buzz buzz----------" << endl;
    cout << "a Roomba appears!!" << endl; 
    while(PlayerHealth > 0 && MonsterHealth > 0){

        //monster fight
        damage = rand() % 11;

        cout << "Roomba hits you for " << damage << " dmg" << endl;
        PlayerHealth -= damage;
        cout << "press any key to continue " << endl;
        cin >> dummy;


        // player fight
        damage = rand() % 5 + 2;
        cout << "you smack Roomba for " << damage << " dmg" << endl;
        MonsterHealth -= damage;
        cout << "press any key to continue " << endl;
        cin >> dummy;

        if(PlayerHealth > 0){
        cout << "Your Health: " << PlayerHealth << endl;
        }
        else
            cout << "you died" << endl; 

        if(MonsterHealth > 0){
        cout << "Roomba Health: " << MonsterHealth << endl;
        }
        else
            cout << "Roomba died" << endl; 


    }

    if(PlayerHealth > 0){
        cout << "you win" << endl;

    }
    else 
        cout << "you lose" << endl;
    cout << endl << endl << "-------------Battle end-------------" << endl;

}