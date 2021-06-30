#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    const int check_s = 100000;
    bool check[check_s];
    for (int i = 0; i < check_s;i++){
        check[i] = false;
    }

    for (int i = 0; i < n;i++){
        if(arr[i]>=0){
            check[arr[i]] = true;
        }
    }
    int ans = -1;
    for (int i = 1; i < check_s;i++){
        if(!check[i]){
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}