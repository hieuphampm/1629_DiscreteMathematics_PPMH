#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int n = 1; n <= N; ++n){
        int r =  (n * n * n - 4 * n) % 3;
        cout << r << endl;

        if (n % 3 == 0){
            cout << "n is a multiple of 3" << endl;
        } else if (n % 3 == 1){
            cout << "n gives a remainder of 1 when divided by 3" << endl;
        } else if (n % 3 == 2){
            cout << "n gives a remainder of 2 when divided by 3" << endl;

        }
    }
}