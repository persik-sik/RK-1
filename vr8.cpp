#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 2;
    float s = 0;
    while(n< 2+6){
        s += (log(3)/log(n));
        cout<<(log(3)/log(n))<<endl;
        ++n;
    }
    cout<<s<<endl;
    return 0;
}
