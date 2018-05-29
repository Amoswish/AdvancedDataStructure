#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    int data;
    struct node *next;

}node,*linklist;

node *getMiddlePoint(node *l,int length){
    int middlelength = (length+1)/2;

    node *temp = l;
    for(int i = 0;i<middlelength;i++){
        temp = temp->next;
    }
    return temp;
}
int main()
{
    node *l = (linklist)malloc(sizeof(node));
    node *p = l;
    //初始链表赋值
    int n = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        node * temphead = (linklist)malloc(sizeof(node));
        temphead -> data = i;
        p -> next = temphead ;
        p = temphead;
    }
    //求链表长度
    int length = 0;
    p = l ->next;
    while(p){
        p = p->next;
        length++;
    }
    //cout<<length<<'d';
    node *finalp = getMiddlePoint(l,length);
    cout<<finalp->data;
    return 0;
}
