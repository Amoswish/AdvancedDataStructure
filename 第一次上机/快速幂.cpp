#include<bits/stdc++.h>
using namespace std;
double power(double base,int exponent){
    double result = 1;
    double init = base;
    if(exponent == 0 && base == 0){
        cout<<"0^0";
        result = 0;
        return result;
    }
    else if(exponent>0){
        //exponent 为正数
    }
    if(exponent < 0 ){
        //exponent 为负数
        exponent = abs(exponent);
        init = 1/base;
    }
    while(exponent != 0 ){
        if(exponent & 1 == 1){
            result = result*init;
        }
        init = init * init;
        exponent = exponent >> 1;
    }
    return result;
}
int main()
{
    double base;
    double exponent;
    cin>>base;
    cin>>exponent;
    double finalresult = power(base,exponent);
    cout<<"result:"<<finalresult;
}
