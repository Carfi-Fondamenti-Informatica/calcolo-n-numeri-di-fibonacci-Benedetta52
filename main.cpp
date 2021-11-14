#include <iostream>
using namespace std;

int main() {
    int n=0, n1=1, n2=1, n3;
    cin >> n;

    if (n<2) {
        cout << "errore" << endl;
    } else {
        cout << "1" << endl;
        for (int i=0; i<=(n-2); i++) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            cout << n3 << endl;
        }

    }
   return 0;
}
