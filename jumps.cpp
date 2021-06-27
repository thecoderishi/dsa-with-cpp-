#include<iostream>
using namespace std;

int main(){
    int poketMoney = 2600;

    for (int i = 1; i <= 30;i++){
        if(i%2!=0){
            continue;
        }
        if(poketMoney <= 0){
            break;
        }
        cout << i << endl;
        poketMoney -= 200;

    }
    cout << poketMoney;
}