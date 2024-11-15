#include<iostream>
using namespace std;

void monsterGen(); 

int main(){
    srand(time(NULL)); 


monsterGen(); 
monsterGen();
monsterGen(); 
monsterGen();
monsterGen(); 
monsterGen();
monsterGen(); 
monsterGen();
}

void monsterGen(){
    int num = rand()%100+1;


    if(num < 15){
        cout << "skeley bones" << endl;
    }
    else if (num < 20){
        cout << "brain" << endl;
    }
    else if(num < 50){
        cout << "creepy crawly" << endl; 
    }
    else if (num < 75){
        cout << "blob" << endl;
    }
    else{
        cout << "you die" << endl; 
    }
}