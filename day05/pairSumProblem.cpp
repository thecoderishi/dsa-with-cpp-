#include<iostream>
#include<climits>
using namespace std;

int findSum(int arr[], int n, int k){
    int min = 0;
    int max = n - 1;

    while (min<max){
        if(arr[min]+arr[max]==k){
            cout << min << " " << max << endl;
            return true;
        }
        else if(arr[min]+arr[max]>k){
            max--;
        }
        else{
            min++;
        }
    }
    return false;
}

int main(){

    int n,k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cin >> k;
    // int n = 5;
    // int arr[n] = {2, 3, 3, 4, 5};
    // int k = 6;

    cout<<findSum(arr, n, k);

    return 0;
}