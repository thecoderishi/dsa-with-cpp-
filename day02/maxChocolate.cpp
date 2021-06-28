#include<iostream>
using namespace std;

int main(){
    int rupee = 50;
    cin >> rupee;
        int waffer;
        int chocolate;
        chocolate = rupee;
        waffer = chocolate;
    while (waffer>0)
    {   
        if(waffer<3){
            break;
        }
        chocolate += waffer / 3;
        int tempWaffer;
        tempWaffer = waffer;
        waffer = tempWaffer / 3;
        waffer =  waffer + (tempWaffer % 3);
    }
    cout << chocolate;
}