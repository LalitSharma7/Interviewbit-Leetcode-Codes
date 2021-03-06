ListNode* Solution::partition(ListNode* A, int B) {
    
    ListNode front(0);
    ListNode end(0);
    ListNode *f = &front, *e = &end;
   while(A != NULL)
   {
      if(A->val < B)
        {
             f->next = A;
             f = f->next;
        }
      else
        {
            e->next = A;
            e = e->next;
         }
    A = A->next;
  }
   e->next = NULL;
   f->next = end.next;
   return front.next;
}
