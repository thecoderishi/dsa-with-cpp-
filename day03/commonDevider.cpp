#include<iostream>
using namespace std;

int getComDivider(int x, int y){
        int mn;
        mn = min(x, y);
        int ans;
        for (int i = 1; i <= mn;i++)
        {
            if(x%i==0 && y%i==0){
                ans = i;
            }
        }
        return ans;
    }

int main(){

    cout<< getComDivider(2, 4);
}