#include <iostream>
using namespace std;
int main(){
    int san1, san2;
    char sign;
    cout << "Write the first number: "; cin >> san1;
    cout << "Write the second number: "; cin >> san2;
    cout << "What do you want to do: "; cin >> sign;
    if (sign == '*') {
        cout << "Answer is: " << san1 * san2 << endl;
    }
    else if (sign == '/') {
        cout << "Anser is: " << san1 / san2 << endl;
    }
    else if (sign == '+') {
        cout << "Anser is: " << san1 + san2 << endl;
    }
    else if (sign == '-') {
        cout << "Anser is: " << san1 - san2 << endl;
    }
    else {
        cout << "Error" << "\n";
    }
    return 0;
}
