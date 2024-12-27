#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100

struct stack {
	int top;
	int* elements;
};

void initialize(struct stack* s);

int pop(struct stack* s);

int push(struct stack* s, int number);

int get_size(struct stack* s);

int get_top(struct stack* s);

int empty(struct stack* s);

void list(struct stack* s);

#endif