#include<iostream>
#include<string>
using namespace std;


int sumDigits(int num); 

double area(double length, double width);

bool isPrime(int num); 

bool isPrime(int num){
    if(num <= 1)
        return false; 

}


double area(double length, double width){
    double product = length * width; 
    return product; 
}

int sumDigits(int num){
 int digit = 0;

 while(num != 0){
    digit += num % 10; 
    num /=10;
 }
 return digit; 
}

int main(){
    int number;

    cout << "Enter a number" << endl; 
    cin >> number; 

    cout << "sum of digits is " << endl;
    cout << sumDigits(number); 

    double resposeLength;
    double responseWidth;

    cout << "enter a length" << endl;  
    cin >> resposeLength;

    cout << "enter a width";
    cin >> responseWidth;

    cout << "The total area is " << endl;
    cout << area(responseWidth, resposeLength); 

}

