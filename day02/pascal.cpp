#include<iostream>
using namespace std;

int fact(int num){
    int factorial=1;
    for (int i = 2; i <= num;i++){
        factorial = factorial * i;
    }
    return factorial;
}
int ncr(int i, int j){
    return (fact(i) / (fact(j) * fact(i - j)));
}


int main(){

    int n;
    cin >> n;

    for (int i = 1; i <= n;i++){
        for (int j = 0; j <= i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout << endl;
    }

}