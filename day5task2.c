#include <stdio.h>
#include <stdlib.h>

#define MAX 100
struct Stack {
    int arr[MAX];
    int top;
};
struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1; 
    return stack;
}


int isFull(struct Stack* stack) {
    return stack->top == MAX - 1; 
}


int isEmpty(struct Stack* stack) {
    return stack->top == -1; 
}

void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow\n");
    } else {
        stack->arr[++stack->top] = value; 
        printf("Pushed %d into the stack\n", value);
    }
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return -1; 
    } else {
        int value = stack->arr[stack->top--];
        printf("Popped %d from the stack\n", value);
        return value;
    }
}

void printStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Current stack: ");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}


void freeStack(struct Stack* stack) {
    free(stack); 
}

int main() {
    struct Stack* stack = createStack();


    push(stack, 2);
    push(stack, 3);
    push(stack, 3);
    push(stack, 0);
    push(stack, 0);
    push(stack, 3);
    push(stack, 2);

    printStack(stack); 

  
    pop(stack);
    pop(stack);

    printStack(stack); 

    freeStack(stack);
    return 0;
}
