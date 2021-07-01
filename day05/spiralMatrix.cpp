#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,m;
    cin >> n>>m;
    int arr[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
             cin >> arr[i][j];
        }
    }
    int rowStart = 0;
    int rowEnd = n - 1;
    int colStart = 0;
    int colEnd = m - 1;

    while (rowStart<rowEnd || colStart<colEnd){
        //Col Start to End
        for (int col = colStart; col <= colEnd;col++){
            cout << arr[rowStart][col] << " ";
        }
        rowStart++;

        //Row Start to End
        for (int row = rowStart; row <= rowEnd;row++){
            cout << arr[row][colEnd] << " ";
        }
        colEnd--;
        
        //Row End to Start
        for (int col = colEnd; col >= colStart;col--){
            cout << arr[rowEnd][col]<<" ";
        }
        rowEnd--;
        
        //Col End to Start
        for (int row = rowEnd; row >= rowStart;row--){
            cout << arr[row][colStart] << " ";
        }
        colStart++;
    }

    return 0;
}