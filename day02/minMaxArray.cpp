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
    int minNum = INT_MAX;
    int maxNum = INT_MIN;

    for (int i = 0; i < n;i++){
        minNum = min(minNum, arr[i]);
        maxNum = max(maxNum, arr[i]);
    }

    cout << "Min is:" << minNum << endl;
    cout << "Max is:" << maxNum << endl;

}