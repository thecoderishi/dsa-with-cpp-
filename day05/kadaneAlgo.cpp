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

    int curSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        curSum += arr[i];
        if(curSum<0){
            curSum = 0;
        }
        maxSum = max(maxSum, curSum);
    }

    cout << maxSum << endl;

    return 0;
}