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

    int mindx = INT_MAX;
    const int idx_size = 100000;
    int idx[idx_size];
    for (int i = 0; i < idx_size;i++){
        idx[i] = -1;
    }

    for (int i = 0; i < n;i++){
        if(idx[arr[i]]!=-1){
            mindx = min(mindx, idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;
        }
    }

    if(mindx==INT_MAX){
        cout << "-1" << endl;
    }
    else{
        cout << mindx << endl;
    }
        return 0;
}