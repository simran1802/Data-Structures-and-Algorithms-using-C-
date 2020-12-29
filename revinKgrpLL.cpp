
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
#include <stdio.h>
#include <stdlib.h>
 
// Data Structure to store a linked list node
struct Node
{
    int data;
    struct Node* next;
};
 
// Helper function to print given linked list
void printList(struct Node* head)
{
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("NULL\n");
}
 
// Helper function to insert new Node in the beginning of the linked list
void push(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
 
    *head = newNode;
}
 
// Iterative function to reverse first k nodes of linked list
struct Node* reverseK(struct Node** current, int k)
{
    struct Node* prev = NULL;
    int count = 0;
 
    // Iterate through the list and move/insert each node to the
    // front of the result list (like a push of the node)
    while (*current && count++ < k)
    {
        // tricky: note the next node
        struct Node* next = (*current)->next;
 
        // move the current node onto the result
        (*current)->next = prev;
 
        // update previous pointer to current node
        prev = *current;
 
        // move to next node in the list
        *current = next;
    }
 
    // return last processed node
    return prev;
}
 
// Function to reverse every group of k nodes in given linked list
struct Node *reverseInGroups(struct Node *head, int k)
{
    // base case
    if (head == NULL)
        return NULL;
 
    // start with current node
    struct Node* current = head;
 
    // reverse next k nodes
    struct Node* prev = reverseK(&current, k);
 
    // recur for remaining nodes
    head->next = reverseInGroups(current, k);
 
    // important - return previous (to link every group of k nodes)
    return prev;
}
 
// main method
int main(void)
{
    // input keys
    int keys[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int n = sizeof(keys)/sizeof(keys[0]);
 
    struct Node *head = NULL;
    for (int i = n - 1; i >=0; i--)
        push(&head, keys[i]);
 
    head = reverseInGroups(head, 3);
 
    printList(head);
 
    return 0;
}