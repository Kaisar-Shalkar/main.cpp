#include <iostream>
using namespace std;
int main(){
    cout << "If you want to calculator write c " << endl;
    int san1, san2;
    char sign;
    cout << "Write the first number: "; cin >> san1;
    cout << "Write the second number: "; cin >> san2;
    cout << "What do you want to do: "; cin >> sign;
    if (san2 != 0) {
        switch (sign) {
            case '*':
                cout << "Answer: " << san1 * san2;
                break;
            case '/':
                cout << "Answer: " << san1 / san2;
                break;
            case '+':
                cout << "Answer: " << san1 + san2;
                break;
            case '-':
                cout << "Answer: " << san1 - san2;
                break;
            default:
                cout << "Error";
                break;
        }
    }
    else {
        cout << "Error";
    }
    return 0;
}
