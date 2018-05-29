#include<bits/stdc++.h>
#define NULL 0
using namespace std;
typedef struct node{
    int data;
    struct node *next;

}node,*linklist;

void deletePoint(node *l,node *point){
    node *temp = l;
    if(point->next){
        point ->data = point ->next -> data;
        temp = point ->next;
        point ->next = temp ->next;
        free(temp);
    }
    else if(point->next == NULL){
        point =NULL;
    }
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
    p = l;
    //找到需要删除的结点
    int needdeletenodeposition = 1;
    cin>>needdeletenodeposition;
    for(int i = 0;i<needdeletenodeposition;i++){
        p = p->next;
    }
    deletePoint(l,p);
    p = l->next;
    while(p){
        cout<<p->data;
        p = p->next;
    }
    return 0;
}
