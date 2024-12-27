#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
	int n = 0, op = 0, op_number = 0;
	scanf("%d", &n);
	struct stack s;
	initialize(&s);
	while(n--){
		scanf("%d", &op);
		switch(op){
			case 1:{
				int res = pop(&s);
				if(res == -1){
					printf("Pop failed!\n");
				}
				else{
					printf("Pop %d successfully!\n", res);
				}
				break;
			}
				
			case 2:{
				scanf("%d", &op_number);
				int res = push(&s, op_number);
				if(res == -1){
					printf("Push failed!\n");
				}
				else{
					printf("Push %d successfully!\n", res);
				}
				break;
			}
				
			case 3:{
				printf("Size of stack is %d\n", get_size(&s));
				break;
			}
				
			case 4:{
				int res = get_top(&s);
				if(res == -1){
					printf("Stack is empty!\n");
				}
				else{
					printf("Top element of stack is %d\n", res);
				}
				break;
			}
				
			case 5:{
				int res = empty(&s);
				if(res){
					printf("Stack is empty!\n");
				}
				else{
					printf("Stack is not empty!\n");
				}
				break;
			}	
			default:
				printf("Wrong op! Curr stack is: ");
				list(&s);
		}
	}
	list(&s);
	free(s.elements);
	return 0;
}