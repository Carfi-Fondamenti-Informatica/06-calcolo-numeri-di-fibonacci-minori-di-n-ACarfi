#include <iostream>
using namespace std;

int main() {
    int n=0;
    int a=1;
    int b=1;
    cin >> n;
    cout << b << " " << b << " ";
    while(true){
        a += b;
        int c = b;
        b = a;
        a = c;
        cout << b << " ";
        if(b > n){
            break;
        }
    }
    return 0;
}
