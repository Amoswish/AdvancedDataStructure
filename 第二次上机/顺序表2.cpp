#include<bits/stdc++.h>
using namespace std;

bool ispositive(int input){
    //>0 为真 <0 为假
    if(input>0 )return true;
    else return false;
}
bool isodd(int input){
    //== 1 奇数 ==0 偶数
    if(input&1 == 1) return true;
    else return false;
}
bool isdevidedby3(int input){
    if(input%3 == 0) return true;
    else return false;
}
int *listchange(int *data,bool (*f)(int a),int length){
    //int length = sizeof(data)/sizeof(data[0]);
    int i = 0;
    int j = length-1;
    while(true){
        while(f(data[i]) == true){
            i++;
        }
        while(f(data[j]) == false){
            j--;
        }
        if(i<j){
            int temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
        else break;
    }
    return data;
}

int main()
{
    //bool (*p)(int) = ispositive; 函数指针
    int original[] = {-1,1,2,2,1,3,-5,-4,9};
    int length = sizeof(original)/sizeof(original[0]);
    //int *finaldata = listchange(original,ispositive,length);
    //int *finaldata = listchange(original,isodd,length);
    int *finaldata = listchange(original,isdevidedby3,length);
    for(int i = 0;i<length;i++){
        cout<<finaldata[i]<<" ";
    }
}
