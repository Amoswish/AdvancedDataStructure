#include<bits/stdc++.h>
using namespace std;
int times = 0;
int height = 3;
void jumpup(int step,int sum){
    int tempsum = sum + step;
    if(tempsum == height){
        times++;
        return;
    }
    else if(tempsum > height){
        return ;
    }
    else if(tempsum < height){
        for(int i =1;i<=height;i++){
            jumpup(i,tempsum);
        }

    }
}
int main()
{
    for(int i =1;i<=height;i++){
        jumpup(i,0);
    }
    cout<<times;
}
