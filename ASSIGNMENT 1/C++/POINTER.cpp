https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

#include <stdio.h>
#include <iostream>
using namespace std;
void update(int *a,int *b) {
    // Complete this function 
    int c,d;
    c=*a+*b;
    d=abs(*a-*b);
    cout<<c<<endl<<d;   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    

    return 0;
}
