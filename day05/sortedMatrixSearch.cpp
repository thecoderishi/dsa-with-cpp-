#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n,m;
    // cin >> n,m;
    cin >> n;
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
             cin >> arr[i][j];
        }
    }
    int target;
    cin >> target;

    int row = 0;
    int col = m - 1;

    while (row < n && col>=0){
        if(arr[row][col] == target){
            cout << "Found at " << row <<" "<< col << endl;
            break;
        }
        if(arr[row][col]<target){
            row++;
        }
        else{
            col--;
        }
    }

    return 0;
}