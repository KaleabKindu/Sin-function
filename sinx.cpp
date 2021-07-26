#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
#define PI 3.1415
using namespace std;
long double fact(int);
long double powr(long double , int);
int main()
{
    long double ang;
    long double sinx;
    long double sum1=0.0;
    long double sum2=0.0;
    cout<<"please enter enter an angle in degree."<<endl;
    cin>>ang;
    ang=(ang*PI)/180.0;
    for (int p=3; p<=100; p+=4)
        sum1+=(powr(ang,p)/fact(p));
    for (int h=1; h<=100; h+=4)
        sum2+=(powr(ang,h)/fact(h));
    sinx=sum2-sum1;
    cout<<sinx;
}
long double fact(int n)
{
    return n==0?1:n*fact(n-1);
}
long double powr(long double x, int n)
{
    long double lok=1.0L;
    for (int k=1; k<=n; k++)
        lok*=x;
    return lok;
}
