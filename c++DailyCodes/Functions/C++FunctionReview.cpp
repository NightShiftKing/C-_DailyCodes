#include<iostream>
using namespace std;

void Midpoint(float x1, float y1, float x2, float y2); //declaration

int main(){
    int x1;
    int x2;
    int y1;
    int y2;

    cout<<"enter x1, y1, x2, y2"<<endl;
    cin>>x1;
    cin>>x2;
    cin>>y1;
    cin>>y2;
//call
Midpoint(x1, y1, x2, y2);
}

//definition
void Midpoint(float x1, float y1, float x2, float y2){

float xpos;
xpos= (x1+x2)/2;

cout<<xpos<<endl;
       
float ypos;
ypos= (y1+y2)/2;

cout<<ypos<<endl;
}