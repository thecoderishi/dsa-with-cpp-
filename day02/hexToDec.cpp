#include <bits/stdc++.h>
using namespace std;

int hexToDec(string n){
    int ans = 0;
    int hex = 1;
    int size = n.size();

    for (int i = size - 1; i >= 0;i--){
        if(n[i]>= '0' && n[i]<='9'){
            ans += hex * (n[i] - '0');
        }
        if(n[i]>='A' && n[i]<='F'){
            ans += hex * (n[i] - 'A' + 10);
        }
        hex *= 16;
    }
    return ans;
}

int32_t main(){
    string n;
    cin >> n;
   cout<< hexToDec(n);
}