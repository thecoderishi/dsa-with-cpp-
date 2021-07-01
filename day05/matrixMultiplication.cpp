#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n1,n2,n3;
    // cin >> n1 >> n2 >> n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    int matrix1[n1][n2];
    int matrix2[n2][n3];
    //Matrix1
    for (int i = 0; i < n1;i++){
        for (int j = 0; j < n2;j++){
             cin >> matrix1[i][j];
        }
    }

    //Matrix2
    for (int i = 0; i < n2;i++){
        for (int j = 0; j < n3;j++){
             cin >> matrix2[i][j];
        }
    }

    int ansMatrix[n1][n3];

    for (int i = 0; i < n1;i++){
        for (int j = 0; j < n3;j++){
             ansMatrix[i][j] = 0;
        }
    }

    for (int i = 0; i < n1;i++){
        for (int j = 0; j < n3;j++){
            for (int k = 0; k < n2;k++){
                ansMatrix[i][k] = matrix1[i][k] * matrix2[k][i];
            }
        }
    }

    for (int i = 0; i < n1;i++){
        for (int j = 0; j < n3;j++){
             cout<< ansMatrix[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
/*
3 4 3
2 4 1 2
8 4 3 6
1 7 9 5
1 2 3
4 5 6
7 8 9
4 5 6
*/