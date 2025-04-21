#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int data;
    struct Node* next;
};



int getCount(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
    // write code here
}



struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) { 
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* createLinkedList(int arr[], int n) {
    if (n == 0)
        return NULL;

    struct Node* head = createNode(arr[0]);
    struct Node* tail = head;

    for (int i = 1; i < n; i++) {
        tail->next = createNode(arr[i]);
        tail = tail->next;
    }

    return head;
}

void trimNewline(char* str) {
    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }
}

int main() {
    int t;
    scanf("%d\n", &t); 
    while (t--) {
        size_t buffer_size = 1000000; 
        char* input = (char*)malloc(buffer_size * sizeof(char));

        if (input == NULL) { 
            printf("Memory allocation failed\n");
            exit(1);
        }

        fgets(input, buffer_size, stdin); 
        trimNewline(input);

        int arr[100000], n = 0; 
        char* token = strtok(input, " ");
        while (token != NULL) {
            arr[n++] = atoi(token);
            token = strtok(NULL, " ");
        }

        struct Node* head = createLinkedList(arr, n);

        printf("%d\n", getCount(head));

        struct Node* temp;
        while (head != NULL) {
            temp = head;
            head = head->next;
            free(temp);
        }

        free(input);
        printf("~\n");
    }

    return 0;
}

