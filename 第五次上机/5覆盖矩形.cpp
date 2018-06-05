#include<bits/stdc++.h>
using namespace std;
int rectCover(int number) {
  if(number<=0) return 0;
    if(number==1) return 1;
    if(number==2) return 2;
    int num1=1;
    int num2=2;
    int result=0;
    number=number-2;
    while(number--){
        result=num1+num2;
        num1=num2;
        num2=result;
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    cout<<rectCover(n);
}
