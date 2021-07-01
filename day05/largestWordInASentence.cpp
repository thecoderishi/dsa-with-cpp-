#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin >> n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);

    int i = 0;
    int curSum = 0, maxSum = 0;
    int st = 0, maxSt=0;
    while (1)
    {
        if(arr[i] == ' ' || arr[i]=='\0'){
            if(curSum>maxSum){
                maxSum = curSum;
                maxSt = st;
            }
            curSum = 0;
            st = i + 1;
        }
        else{
            curSum++;
        }

        if(arr[i] == '\0'){
            break;
        }
        i++;
    }

    cout << maxSum << endl;

    for (int i = 0; i < maxSum;i++){
        cout<<arr[maxSt + i];
    }

        return 0;
}