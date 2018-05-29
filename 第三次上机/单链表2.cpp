#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    int element;
    struct node *next;
}node,*linklist;
int main()
{
    /*vector<int> data;
    vector<int>::iterator dataiterator;
    data.push_back(1);
    data.push_back(2);
    data.push_back(3);
    data.push_back(4);
    data.push_back(5);
    data.push_back(6);
    for(dataiterator = data.begin();dataiterator!= data.end();++dataiterator){
        cout<<*dataiterator;
    }*/

    //创建一个单链表

    node *head = (linklist)malloc(sizeof(node));
    //*head->next = NULL;
    node *temphead;
    temphead = head;
    for(int i = 0;i<5;i++){
        node *temp = (linklist)malloc(sizeof(node));
        temp -> element = i;
        temphead ->next = temp;
        temphead = temp;
    }
    temphead = head ->next;
    //获得长度
    int length = 0;
    while(temphead){
        length++;
        //cout<<temphead ->element<<" ";
        temphead  = temphead -> next;
    }
    int n = 0;
    cin>>n;
    //输出单链表
    temphead = head ->next;
    for(int j = 0; j<length-n;j++){
        //cout<<temphead ->element<<" ";
        temphead  = temphead -> next;
    }
    cout<<temphead->element;
}
