#include<iostream>
using namespace std;

int main(){

char userResponse; 
cout << "would you like more coffee? y/n" << endl;
cin >> userResponse; 

while(userResponse == 'y'){
    cout << "here you go!! Would you like more coffee? y/n" << endl;
    cin >> userResponse; 
}
}