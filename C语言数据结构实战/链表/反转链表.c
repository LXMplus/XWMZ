struct ListNode {
  int val;
  struct ListNode *next;
};
struct ListNode* reverseList(struct ListNode* head){
  struct ListNode *newHead = NULL, *temp;
  while(head){
    temp = head->next;
    head->next = newHead;
    newHead = head;
    head = temp;
  }
  return newHead;
}

