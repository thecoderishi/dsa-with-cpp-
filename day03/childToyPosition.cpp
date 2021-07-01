#include<iostream>
using namespace std;

int getPosition(int child, int toys, int startPos){
    for (int i = startPos; startPos <= toys;i++){
        if(startPos>child){
            child = 1;
        }
    }
}

int main(){

    int child, toys, startPos;
    cin >> child >> toys >> startPos;
    cout << getPosition(child, toys, startPos);
    return 0;
}