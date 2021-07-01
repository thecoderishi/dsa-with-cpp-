#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){
    int curSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        curSum += arr[i];
        if(curSum<0){
            curSum = 0;
        }
        maxSum = max(curSum, maxSum);
    }
    return maxSum;
}

int main(){

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadane(arr, n);

    int curSum = 0;
    for (int i = 0; i < n; i++)
    {
        curSum += arr[i];
        arr[i] = -arr[i];
    }


    wrapSum = curSum + kadane(arr, n);

    int ans;
    ans = max(wrapSum, nonWrapSum);
    cout << ans << endl;
    return 0;
}