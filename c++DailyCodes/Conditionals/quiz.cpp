#include<iostream>
#include<vector>
using namespace std;
//What starfinder class would you be quiz by Ezri & Michael
//Sep 19 2024
//a quiz to that determines what StarFinder Ancestry, Background, and Class you are!!!




// Struct to represent a Starfinder class with its name and subclasses
struct SubBase {
    string name;
    int points;



};

struct Base {
    string className;
    vector<SubBase> subclasses;  // Vector to store subclasses
      
};

void printQ(vector<SubBase> question);

int main() {

    vector<SubBase> question = {
        {"cleaner",0}, {"athlete",0}, {"comedian",0}, {"brutaris player",0}, {"corporate agent",0}, {"city slicker",0},
    };

    printQ()

}
   
void printQ(vector<SubBase> question){
        cout<< question[0].name << endl; 
    }

