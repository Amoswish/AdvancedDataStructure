#include<bits/stdc++.h>
using namespace std;
int output[1000] = {0};
void printInteger(int j,int n){
    if(n <= 1) {
        for(int i = 0;i<10;i++){
            output[n-1] = i;
            int label = true;
            for(int temp1 = j-1;temp1>=0;temp1--){
                if(output[temp1] != 0 && label == true){
                    cout<<output[temp1];
                    label = false;
                }
                else if(label == false){
                    cout<<output[temp1];
                }
            }
            cout<<"\n";
        }
        return;
    }
    else{
        for(int k =0;k < 10;k++){
            output[n-1] = k;
            printInteger(j,n-1);
           // printf("\n");
        }

    }
}
void printtime(){

}
int main()
{
    int n = 0;
    cin>>n;
    printInteger(n,n);
}
