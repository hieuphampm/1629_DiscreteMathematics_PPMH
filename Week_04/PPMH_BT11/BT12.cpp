#include <iostream>
using namespace std;

bool checkQ(int x){
    return (x + 1 > 2 * x);
}

int main(){
    // a
    cout << "Check Q(0):" << (checkQ(0) ? "True" : "False") << endl;
    // b
    cout << "Check Q(-1):" << (checkQ(-1)? "True" : "False") << endl;
    //c
    cout << "Check Q(1):" << (checkQ(1)? "True" : "False") << endl;
    // d
    bool existsXForQ = false;
    for (int x = -1000; x <= 1000; x++) {
        if (x+1 > 2*x) {
            existsXForQ = true;
            cout << "There exists an integer x such that Q(x) is true." << endl;
            break;
        }
    };

    // e
    bool forAllX_Q = true;
    for (int x = -1000; x <= 1000; x++) {
        if (x+1 <= 2*x) {
            forAllX_Q = false;
            cout << "It is not true that for all integers x, Q(x) is true." << endl;
            break;
        }
    };

    // f
    bool existsXForNotQ = false;
    for (int x = -1000; x <= 1000; x++) {
        if (!checkQ(x)) { 
            existsXForNotQ = true;
            cout << "Found x = " << x << " so !Q(x) is True." << endl;
            break; 
        }
    }
    if (!existsXForNotQ) {
        cout << "No x found in range that makes Q(x) False." << endl;
    }
    // g
    bool forAllX_NotQ = true; 
    for (int x = -1000; x <= 1000; x++) {
        if (checkQ(x)) { 
            forAllX_NotQ = false;
            cout << "Found counter-example x = " << x << " so !Q(x) is False." << endl;
            break;
        }
    }
    if (forAllX_NotQ) {
        cout << "All x in range make Q(x) False." << endl;
    }
    return 0;
};