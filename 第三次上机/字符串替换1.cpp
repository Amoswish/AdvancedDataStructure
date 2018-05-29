#include<bits/stdc++.h>
using namespace std;
void replacespace(char *origin,int length){
    int spacetime = 0;
    //ÕÒµ½¿Õ¸ñÊý
    for(int i = 0;i<length;i++){
        if(origin[i] == ' ') spacetime++;
    }
    int finaldatalength = length + spacetime*2;
    //cout<<length<<"daf"<<finaldatalength<<"ssdf";
    int temp = length;
    for(int j = finaldatalength;j >=0 ;j--){
        if(origin[temp]!=' '){
            origin[j] = origin[temp];
        }
        else{
            origin[j] = '0';
            origin[--j] = '2';
            origin[--j] = '%';
        }
        temp--;
    }
    cout<<origin;
}
int main()
{
     char origin[100] ;
     gets(origin);
     int length = strlen(origin);
     replacespace(origin,length);
}
