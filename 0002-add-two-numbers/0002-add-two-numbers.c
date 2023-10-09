/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/*
#include<stdlib.h>
struct ListNode* reverse(struct ListNode* head)
{
    struct ListNode* curr =head;
    struct ListNode* prev = NULL;
    struct ListNode* fwd = NULL;
    while(curr!=NULL)
    {
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
        
    }
    return prev;
}
struct ListNode* anslist(struct ListNode* head,struct ListNode* tail,int digit)
{
    struct ListNode* temp = (struct ListNode* )malloc(sizeof(struct ListNode ));
    temp->val = digit ;
    
    if(head==NULL)
    {
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
        
    }
    return tail;
}
struct ListNode* add(struct ListNode* first ,struct ListNode* second )
{   struct ListNode* anshead = NULL;
    struct ListNode* anstail =NULL;
    int carry = 0;
    while(first!=NULL&&second!=NULL)
    {
       int  sum = carry + first->val+second->val;
        int carry = sum/10;
        int digit = sum%10;
        struct ListNode* temp = anslist(&anshead,&anstail,digit);
        first = first->next ;
        second=second->next;
    }
    if(first!=NULL)
    {
       int  sum = carry+first->val;
        int digit = sum%10;
        struct ListNode* temp = anslist(anshead,anstail,digit);
        int carry = sum/10;
        first=first->next;
    }
    if(second!=NULL)
    {
       int  sum = carry+second->val;
        int digit = sum%10;
        struct ListNode* temp = anslist(anshead,anstail,digit);
        int carry = sum/10;
        second=second->next;
    }
    if(carry!=NULL)
    {
        int sum = carry ;
        int digit=sum%10;
        int carry = sum/10;
        struct ListNode* temp = anslist(anshead,anstail,digit);
    }
    return anshead;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

    
    struct ListNode*  first = reverse(l1);
    struct ListNode* second = reverse(l2);
    struct ListNode* sum = add(first,second);
    sum = reverse(sum);
    return sum;
    */
    struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode temp;
    temp.val = 0; temp.next = NULL;
    struct ListNode* curr = &temp;
    int remainder = 0, sum;
    while (l1 != NULL || l2 != NULL || remainder != 0) {
        sum = remainder + (l1 == 0 ? 0 : l1->val) + (l2 == 0 ? 0: l2->val);
        remainder = sum/10;
        sum %= 10;
        curr->next = malloc(sizeof(struct ListNode));
        curr->next->next = NULL;
        curr->next->val = sum;
        curr = curr->next;
        l1 = (l1 == 0 ? 0 : l1->next);
        l2 = (l2 == 0 ? 0 : l2->next);
    }
    return temp.next;
}