//https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string t;
    cin>>t;
    string h,m,s;
    h=t[0];
    h+=t[1];
    m=t[3];
    m+=t[4];
    s=t[6];
    s+=t[7];
    if(t[8]=='A'){
        if(h=="12"){
            h="00";
            cout<<h<<":"<<m<<":"<<s;
        }
        else{
            cout<<h<<":"<<m<<":"<<s;
        }
    }
    
    else if(h=="12"){
        cout<<h<<":"<<m<<":"<<s;
    }
    
    else{
        int a=stoi(h);
        h=to_string(a+12);
        cout<<h<<":"<<m<<":"<<s;
    }
    return 0;
}
