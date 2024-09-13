#include<iostream>
#include<Windows.h>
using namespace std;

int main(){

        
    for(int i = 0; i < 99999999; i++){
        int num = rand() % 21; 

        for(int j = 0; j < num; j++)
            cout << " ";//end of inner loop
            
        cout << "❤️";  
        
        
        

    }//end of outer loop
}