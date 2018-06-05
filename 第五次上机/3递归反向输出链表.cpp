#include<bits/stdc++.h>
using namespace std;
#define NULL 0
typedef struct node{
    int data;
    node *next;
}node,*linklist;
//·´ÏòÊä³ö
void reverseprint(node *temp){
    if(temp==NULL){
        return ;
    }
    else{
        int a = temp ->data;
        node *p = temp -> next;
        reverseprint(p);
        cout<<a<<" ";
    }
}
int main()
{
    node *l = (linklist)malloc(sizeof(node));
    node *p = l;
    for(int i = 0;i<10 ; i++){
        node *temp = (linklist)malloc(sizeof(node));
        temp ->data = i;
        p -> next  =temp;
        p = temp;
    }
    node *temphead = l ->next;
    reverseprint(l->next);
}
