// problem link : https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem
int findMergeNode(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2) {
    SinglyLinkedListNode *tmp2;
    while(head1 != NULL){
        tmp2 = head2;
        while(tmp2!=NULL){
            if(tmp2 == head1){
                return tmp2->data;
            }
       tmp2 = tmp2->next;
       }
       head1 = head1->next;
   }
   return head1->data;
}
