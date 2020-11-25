// Problem Link : https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem
bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode *slow = head;
SinglyLinkedListNode *fast = head;
if(head == NULL || head->next==NULL) // Condition 1
{
    return false;
}
while( fast!=NULL&&fast->next!=NULL) // Condition 2
{
    slow = slow->next; // Tortoise node
    fast = fast->next->next; // Hare node
    if(slow==fast)  // Condition 3
    {
        return true;
        break;
    }

}
return false;
}
