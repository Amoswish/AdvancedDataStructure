#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
using namespace std;
int get1Number(){
    int inputInteger = 0;
    int numof1 = 0;
    cout<<"ÇëÊäÈëÊı×Ö";
    cin>>inputInteger;
    inputInteger = abs(inputInteger);
    int nownumber = 0;
    while(inputInteger!=0){
        if(inputInteger & 1){
            numof1++;
        }
        inputInteger = inputInteger>> 1;
    }
    return numof1;

}
int main()
{
    int i = get1Number();
    cout<<i;
}

