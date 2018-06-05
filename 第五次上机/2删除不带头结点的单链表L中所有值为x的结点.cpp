#include<bits/stdc++.h>
using namespace std;
#define NULL 0
typedef struct node{
    int data;
    node *next;
}node,*linklist;
//删除不带头结点的单链表L中所有值为x的结点
node* deletenode(node *nownode,int x){
    if(nownode==NULL){
        return NULL;
    }
    else{
        int a = nownode ->data;
        node *temp = nownode;
        node *nextnode = deletenode(nownode -> next,x);
        //cout<<nextnode->data<<"\n";
        if(nextnode!=NULL && nextnode ->data == x){
            nownode ->next = nextnode ->next;
            free(nextnode);
        }
        return nownode;
    }
}
int main()
{
    node *l = (linklist)malloc(sizeof(node));
    node *p = l;
    for(int i = 0;i<10 ; i++){
        node *temp = (linklist)malloc(sizeof(node));
        temp ->data = i%2;
        p ->next =temp;
        p = p->next;
    }
    l = l->next;
    deletenode(l,1);
    node *temphead = l;
    //node *a = NULL;
    while(temphead!=NULL){
        cout<<temphead ->data<<" ";
        temphead  = temphead -> next;
    }
}
