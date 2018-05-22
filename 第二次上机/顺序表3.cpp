#include<bits/stdc++.h>
using namespace std;

void Reverse(int* data,int start,int close){
    int i = start;
    int j = close;
    int temp;
    while(i<j){
        temp = data[i];
        data[i] = data[j];
        data[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int n = 10;
    int original[] = {1,2,3,4,5,6,7,8,9};
    int length = sizeof(original)/sizeof(original[0]);
    int movetime = 0;
    cin >> movetime;
    Reverse(original,0,movetime-1);
    Reverse(original,movetime,length-1);
    Reverse(original,0,length-1);
    for(int i = 0;i<length;i++){
        cout<<original[i]<<" ";
    }
}
