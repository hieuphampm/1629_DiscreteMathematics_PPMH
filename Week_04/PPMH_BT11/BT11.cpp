#include <iostream>
using namespace std;

void checkP(int x){
    bool isTrue = (x == x*x);
    cout << "P(" << x << ") is: ";
    if(isTrue){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    cout << "  (Because " << x << " compare with " << (x * x) << ")" << endl;
}

int main(){
    checkP(0);
    checkP(1);  
    checkP(2);
    checkP(-1);

    // e
    bool existsXForP = false;
    for (int x = -1000; x <= 1000; x++) {
        if (x == x * x) {
            existsXForP = true;
            cout << "There exists an integer x such that P(x) is true." << endl;
            break;
        }
    }

    // f
    bool forAllX_P = true;
    for (int x = -1000; x <= 1000; x++) {
        if (x != x * x) {
            forAllX_P = false;
            cout << "It is not true that for all integers x, P(x) is true." << endl;
            break;
        }
    }
    return 0;
}