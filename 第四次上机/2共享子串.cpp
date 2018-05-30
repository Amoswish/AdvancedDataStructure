#include<bits/stdc++.h>
using namespace std;
#define NULL 0
typedef struct node{
    char data;
    node* next;
}node,*linklist;
int listlength(node *head){
    int length = 0;
    node *p = head;
    while(p->next){
        length++;
        p = p->next;
    }
    return length;
}
node *createlist(string str){
    node * head = (linklist)malloc(sizeof(node));
    //*head->next = NULL;
    node *temphead;
    temphead = head;
    for(int i = 0;i<str.length();i++){
        node *temp = (linklist)malloc(sizeof(node));
        temp -> data = str[i];
        temphead ->next = temp;
        temphead = temp;
    }
    return head;
}
node *getsamebegin(node *str1head,node *str2head){
    int str1length = listlength(str1head);
    int str2length = listlength(str2head);
    node *p = str1head;
    node *q = str2head;
    while(true){
        if(p->data==q->data) return p;
        if(str1length >=str2length){
            p = p->next;
            //cout<<p->data;
            str1length--;
        }
        else if(str1length <str2length){
            q = q ->next;
            str2length--;
        }
        if(str1length== 0 && str2length==0){
            break;
        }
    }
    return NULL;
}
int main()
{
    string str1 = "loading";
    string str2 = "being";
    node *str1head = createlist(str1);
    node *str2head = createlist(str2);
    node *temp = getsamebegin(str1head,str2head);
    if(temp){
        cout<<"首子串位置字符为"<<temp ->data;
    }
    else cout<<"无子串";

}
