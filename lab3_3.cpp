#include <iostream>
using namespace std;

int main(){
    float a,b,c,ans ;
    a=1;
    b=6;
    c=a/b;
    ans = 0;

    while(b<20){
        cout << ans+c << " ";
        ans = ans+c;
        b=b+1;
    }
    cout << "Ans = " << ans;
    return 0;
}
