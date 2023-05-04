#include <iostream>
using namespace std;

int main() {
    int n=0;
    int a=1;
    int b=1;
    cin >> n;
    cout << b << endl << b << endl;
    while(true){
        a += b;
        int c = b;
        b = a;
        a = c;
        if(b > n){
            break;
        }
        cout << b << endl;
    }
    return 0;
}
