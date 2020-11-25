// Problem Link : https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem
bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode *slow = head;
SinglyLinkedListNode *fast = head;
if(head == NULL || head->next==NULL) 
{
    return false;
}
while( fast!=NULL&&fast->next!=NULL) 
{
    slow = slow->next; 
    fast = fast->next->next; 
    if(slow==fast) 
    {
        return true;
        break;
    }

}
return false;
}
