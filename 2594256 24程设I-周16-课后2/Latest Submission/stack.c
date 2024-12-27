#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void initialize(struct stack* s){//初始化栈
    s->top = -1;
    s->elements = (int*)malloc(sizeof(int)*MAX_SIZE);

}

int pop(struct stack* s){// 弹出栈顶元素，并返回该元素，如果栈为空，返回-1
    if(s->top == -1){
        return -1;
    }
    int temp = s->elements[s->top];
    s->top--;
    return temp;

}

int push(struct stack* s, int number){// 向栈中增加元素，并返回该元素，如果栈已满，返回-1
    if(s->top >= MAX_SIZE - 1){
        return -1;
    }
    s->top++;
    s->elements[s->top] = number;
    return number;
}

int get_size(struct stack* s){// 返回栈的长度
        return s->top + 1;
}

int get_top(struct stack* s) {// 返回栈顶元素，如果栈为空，返回-1
    if(s->top == -1){
        return -1;
    }
    return s->elements[s->top];
}



int empty(struct stack* s){// 判断栈是否为空，若是，返回1，否则，返回0
    return s->top == -1;
}

void list(struct stack* s){// 输出栈，若栈为空，输出“Empty stack”
    if(s->top == -1){
        printf("Empty stack\n");
    } else{
        for(int i =s->top; i >= 0; i--){
            printf("%d ", s->elements[i]);
        }
        printf("\n");
    }

}