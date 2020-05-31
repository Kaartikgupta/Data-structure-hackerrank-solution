SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp;
    temp = head;
node->data = data;
node->next = NULL;

if(head == NULL){
    head = node;
    return head;
}

else{
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
    return head;
}


    
}
