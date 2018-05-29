#include<bits/stdc++.h>
bool IsExitsLoop(slist *head)
{
    slist *slow = head, *fast = head;
    while ( fast && fast->next )
    {
        slow = slow->next;
        fast = fast->next->next;
        if ( slow == fast ) break;
    }
    return !(fast == NULL || fast->next == NULL);
}
slist* FindLoopPort(slist *head)
{
    slist *slow = head, *fast = head;
    while ( fast && fast->next )
    {
        slow = slow->next;
        fast = fast->next->next;
        if ( slow == fast ) break;
    }
    if (fast == NULL || fast->next == NULL)
        return NULL;
    slow = head;
    while (slow != fast)
    {
         slow = slow->next;
         fast = fast->next;
    }
    return slow;
}
int main()
{

}
