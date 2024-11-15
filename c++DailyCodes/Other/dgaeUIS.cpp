#include<iostream>
#include<string>
using namespace std;

int main(){

 char input[225] {};
 cout << "input a number" << endl;
 cin.getline(input, size(input));

 int num = stoi(input);

 num = num * 26; 

 

 


}

int main()
{
    char rolls[255] {}; // declare array large enough to hold 254 characters + null terminator
    std::cout << "Enter your rolls: ";
    std::cin.getline(rolls, std::size(rolls));
    std::cout << "You entered: " << rolls << '\n';

    return 0;
}