#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int n = 1; n <= N; ++n){
        int r =  (n * n * n - n) % 6;
        cout << r << endl;

        if(n % 6 == 0){
            cout << "n is a multiple of 6" << endl;
        } else if (n % 6 == 1){
            cout << "n gives a remainder of 1 when divided by 6" << endl;
        } else if (n % 6 == 2){
            cout << "n gives a remainder of 2 when divided by 6" << endl;
        } else if (n % 6 == 3){
            cout << "n gives a remainder of 3 when divided by 6" << endl;
        } else if (n % 6 == 4){
            cout << "n gives a remainder of 4 when divided by 6" << endl;
        } else if (n % 6 == 5){
            cout << "n gives a remainder of 5 when divided by 6" << endl;
        };
    };
};