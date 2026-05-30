#include <iostream>
using namespace std;
int main(){
    char inter = 'y';
    while (inter == 'y'){
        float san1, san2;
        float res;
        char sign;
        cout << "Write the first number: "; cin >> san1;
        cout << "Write the second number: "; cin >> san2;
        cout << "What do you want to do: "; cin >> sign;
        if (san2 != 0) {
            switch (sign) {
                case '*':
                    res = san1 * san2;
                    break;
                case '/':
                    res = san1 / san2;
                    break;
                case '+':
                    res = san1 + san2;
                    break;
                case '-':
                    res = san1 - san2;
                    break;
                default:
                    cout << "Error";
                    break;
            } cout << "The answer is: " << res << endl;
        }
        else {
            cout << "Error";
        }
        char ans;
        cout << "Do you want to continue;"; cin >> ans;
        switch (ans) {
            case 'y':
                inter = 'y';
                break;
            case 'Y':
                inter = 'y';
                break;
            case 'n':
                inter = 'n';
                break;
            case 'N':
                inter = 'n';
                break;
            default:
                cout << "Write only Y or N" << endl;
                break;
        }
    }
    return 0;
}
