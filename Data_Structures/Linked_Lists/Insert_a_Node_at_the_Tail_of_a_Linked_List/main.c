/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
  Node* node = (Node*)malloc(sizeof(Node));
  node->data = data;
  Node* aux = head;
  if(head == NULL) {
      return node;
  }
  while(aux->next != NULL) {
    aux = aux->next;
  }
  aux->next = node;
  return head;
}

