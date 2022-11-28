#include <iostream>
using namespace std;

    int main() {
int n=0,x=1,y=0,z=0;
cin >> n;
        if (n>0){
            cout << x << endl;
            while (z<n){
                z=x+y;
                y=x;
                x=z;
                if(z<=n) {
                    cout << z << endl;
                }
            }

}
        return 0;
    }
