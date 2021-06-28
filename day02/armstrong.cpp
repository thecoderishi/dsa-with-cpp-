#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, tempN, last, sum;
    cin >> n;
    tempN = n;
    sum = 0;
    while(n>0){
        last = n % 10;
        // sum = sum + (last *last*last);
        sum = sum + round(pow(last,3)); 
        n = n / 10;
    }
    if(sum==tempN){
        cout << "Armstrong";
    }
    else{
        cout << "Not Armstrong";
    }
}