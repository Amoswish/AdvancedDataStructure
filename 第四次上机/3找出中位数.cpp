#include<bits/stdc++.h>
using namespace std;
int main()
{
    int seq1[] = {11,13,15,17,19};
    int seq2[] = {2,4,6,8,20};
    int startseq1 = 0;
    int startseq2 = 0;
    int endseq1 = sizeof(seq1)/sizeof(seq1[0])-1;
    int endseq2 = sizeof(seq2)/sizeof(seq2[0])-1;
    //cout<<endseq2;
    while(true){
        int mid1 = (endseq1+startseq1)/2;
        int mid2 = (endseq2+startseq2)/2;
        //cout<<mid1<<" "<<mid2<<"\n";
        //cout<<startseq2<<" s "<<endseq2<<"\n";
        if(seq1[mid1] == seq2[mid2]){
            cout<<seq1[mid1];
            return 0;
        }
        if(seq1[mid1]<seq2[mid2]){
            if ((startseq1 + endseq1) % 2 == 0){
                startseq1 = mid1;  //舍弃A中间点以前的部分且保留中间点
                endseq2 = mid2;  //舍弃B中间点以后的部分且保留中间点
            }
            else {
                startseq1 = mid1 + 1;  //舍弃A中间点及中间点以前部分
                endseq2 = mid2;  //舍弃B中间点以后部分且保留中间点
            }
        }
        if(seq1[mid1]>seq2[mid2]){
            if ((startseq2 + endseq2) % 2 == 0){
                startseq2 = mid2;
                endseq1 = mid1;
            }
            else {
                startseq2 = mid2 + 1;
                endseq1 = mid1;
            }
        }
        if(mid1 == 0 || mid2 == 0){
            if(seq1[startseq1]>seq2[startseq2]){
                cout<<seq2[startseq2];
                //cout<<startseq2;
            }
            else{
                cout<<seq1[startseq1];
            }
            break;
        }
    }
}
