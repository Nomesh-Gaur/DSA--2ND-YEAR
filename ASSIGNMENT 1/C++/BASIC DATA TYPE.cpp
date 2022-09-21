https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/submissions/code/290228932

#include <iostream>
#include <cstdio>
using namespace std;

int main () {
    int myNum =3;
    long Lon =12345678912345;
    char mychar ='a';
    float F=334.230;
    double D=14049.304930000;
    
 scanf("%d %ld %c %f %lf",&myNum,&Lon,&mychar,&F,&D);
 printf("%d\n",myNum);
 printf("%ld\n",Lon);
 printf("%c\n",mychar);
 printf("%.3f\n",F);
 printf("%.9lf\n",D);
 
 return 0;
 
    


  
}
