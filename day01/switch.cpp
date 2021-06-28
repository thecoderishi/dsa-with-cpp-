#include<iostream>
using namespace std;

int main(){
    float a, b;
    char op;
    cin >> a >> b;
    cout << "Operator" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b<<endl;
        break;
    case '-':
        cout << a - b<<endl;
        break;
    case '*':
        cout << a * b<<endl;
        break;
    case '/':
        cout << a / b<<endl;
        break;
    
    default:
        break;
    }
}