/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void Preorder(node *root) {
    int length = 1, last = 0;
    node stack[1000];
    stack[0] = *root;
    while(length > 0) {
        node current = stack[last];
        last = last > 0 ? last - 1 : 999;
        length--;
        printf("%d ",current.data);
        if(current.right != NULL) {
            last = last < 999 ? last + 1 : 0;
            stack[last] = *current.right;
            length++;
        }
        if(current.left != NULL) {
            last = last < 999 ? last + 1 : 0;
            stack[last] = *current.left;
            length++;
        }
    }
}

