#include<bits/stdc++.h>
using namespace std;
vector<char>select;
void printsubstring(string origin,int isallselected[],int length){
    if(length == 0){
            //select.size() == origin.length()
        for(int i = 0;i<origin.length();i++){
            //char temp = select[i];
            cout<<origin[isallselected[i]-1];
            //select.pop_back();
            //cout<<select.size()<<"\n";
                //isallselected[i] = 0;
        }
       cout<<"\n";
        return ;
    }
    else {
        for(int i = 0;i<origin.length();i++){
            if(isallselected[i] == 0){
                isallselected[i] = length;
                //for(int j =0;j<origin.length();j++){
                //    cout<<isallselected[j];
                //}

                //select.push_back(origin[i]);
                printsubstring(origin,isallselected,length-1);
                for(int j =0;j<origin.length();j++){
                    if(isallselected[i]<=length){
                        isallselected[i] = 0;
                       // select.pop_back();
                    }
                    //cout<<isallselected[j];
                }
            }
        }
    }
}
int main()
{
    string origin;
    cin>>origin;
    int isallselected[origin.length()] = {0};
    //int tempaaa = sizeof(isallselected)/sizeof(isallselected[0]);
    //cout<<tempaaa;
    printsubstring(origin, isallselected,origin.length());

}
