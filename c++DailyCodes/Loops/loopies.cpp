#include<iostream>
using namespace std;

int main(){
    for(int i=5; i<=85; i+=10){
        cout << i << endl; 
    }

    int flag = 5;
    while(flag != 90){
        cout << flag << endl;
        flag += 10;
    }

    string flag2 = "notBoop";
    while(flag2 != "BOOP"){
        cout << "FORGLE" << endl;
        cin >> flag2; 
    }
    
}