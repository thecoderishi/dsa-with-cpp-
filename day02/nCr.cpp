#include<iostream>
using namespace std;

int fact(int num){
    int factorial=1;
    for (int i = 2; i <= num;i++){
        factorial = factorial * i;
    }
    return factorial;
}

int main(){

    int n, r;
    cin >> n >> r;

    cout << fact(n) / (fact(r) * fact(n - r)) << endl;
}