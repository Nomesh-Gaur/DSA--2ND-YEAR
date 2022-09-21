https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true


#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string a,b,e,f;
    cin>>a>>b;
    int c,d;
    c=a.length();
    d=b.length();
    for (int i=1;i<c;i++){
        e+=a[i];
    }
    for(int j=1;j<d;j++){
        f+=b[j];
    }
    cout<<c<<" "<<d<<endl;
    cout<<a+b<<endl<<b[0]+e<<" "<<a[0]+f;
    return 0;
}

