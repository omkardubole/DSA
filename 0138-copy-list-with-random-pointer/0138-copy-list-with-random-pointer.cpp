/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

    if(head == NULL) {
        return NULL;
    }

//1. Insert the new nodes in between the original linked list
Node* curr = head;
while(curr != NULL) {
    Node* currNext = curr->next;
    curr->next = new Node(curr->val);
    curr->next->next = currNext;

    curr = currNext;
}

//2. Deep copy of the random pointers

curr = head;
while(curr != NULL) {
    if(curr->random == NULL) {
        curr->next->random = NULL;
    } else {
        curr->next->random = curr->random->next;
    }
    curr = curr->next->next;
}

//3. Seperate the Linked list

curr = head;
Node* newHead = curr->next;
Node* newCurr = curr->next;

while(curr != NULL && newCurr != NULL){

    curr->next = curr->next == NULL ? NULL : curr->next->next;

    newCurr->next = curr->next == NULL ? NULL : newCurr->next->next;

    curr = curr->next;
    newCurr = newCurr->next;
    
    }

return newHead;
    }
};