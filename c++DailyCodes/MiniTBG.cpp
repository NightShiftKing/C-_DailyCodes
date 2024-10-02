#include<iostream> 
using namespace std;

int main(){
int room = 1;
char answer;
do{
    switch(room){
        case 1:
            cout << "you are in room 1, you can go (e)ast." << endl;
            cin >> answer;
            if(answer == 'e')
                room = 2;
                break; 
        case 2:
            cout << "you are in room 2, you can go (e)ast, (w)est, or (n)orth." << endl;
            cin >> answer;
            if(answer == 'e')
                room = 3;
            else if (answer == 'w')
                room = 1;
            else if (answer == 'n')
                room = 4;
            break;
        case 3:
            cout << "you are in room 3, you can go (e)ast." << endl;
            cin >> answer;
            if(answer == 'e')
                room = 2;
            break;
        case 4:
            cout << "you are in room 4, you can go (n)orth or (s)outh." << endl;
            cin >> answer;
            if(answer == 'n')
                room = 5;
            else if (answer == 's')
                room = 2; 
            break;
        case 5:
            cout << "you are in room 3, you can go (s)outh." << endl;
            cin >> answer;
            if(answer == 's')
                room = 4;
            break;
    }
} while (answer != 'q'); 
}
