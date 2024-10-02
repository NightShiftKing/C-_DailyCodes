#include<iostream>
using namespace std;

int main(){
   int User_Response;
   cout << "How many fish do you have?" << endl; 
   cin >> User_Response; 

   if(User_Response < 5){
    cout << "you do not have enough fish" << endl; 
   }
   else{
    cout << "you are fishy" << endl; 
   }

   }