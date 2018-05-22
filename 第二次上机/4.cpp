#include<bits/stdc++.h>
using namespace std;
int finallength = 0;
int *deleteelement(int *a,int needdeletedelement,int length){
    int i = 0;
    int times = 0;
    int b = sizeof(a)/sizeof(a[0]);
    while(i<length){
        if((i+times) <= length){
            if(a[i] == needdeletedelement){
            times++;
            }
            if(times>0){
                a[i-times+1] = a[i+1];
            }
        }
        else{
            if(a[i] == needdeletedelement){
            times++;
            }
        }
         i++;
    }
    finallength = length - times;
    return a;
}
int main(){
    int a[]={1,2,3,4,2,5,6,2,5,2,2,2};
    int needdeletedelement = 0;
    int *b;
    cin>>needdeletedelement;
    int length = sizeof(a)/sizeof(a[0]);
    b = deleteelement(a,needdeletedelement,length);
    int k =0;
    for(int k = 0 ;k<finallength;k++){
        printf("%d\n",b[k]);
    }
}
