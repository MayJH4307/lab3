#include <iostream>
using namespace std;

int main(){
    float a,b,ans,c;
    a = 1;
    b = 2;
    c = a/b;
    ans = 0;
    while(b<70){
        cout << ans+c << " " ;
        ans = ans+c;
        b = b+1;

    }
    cout << "Ans = " << ans ;
    return 0;
}
