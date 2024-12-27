struct Node {
    int data;
    struct Node* next;
};

struct Node* createList(int n);
void printList(struct Node* head);
struct Node* insertList(struct Node* head, int value, int pos);