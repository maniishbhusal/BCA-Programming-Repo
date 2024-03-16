// stack implementation
#include<stdio.h>
int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);


	
int main() {
	top = -1;
	printf("\nEnter the size of STACK[MAX=100]: ");
	scanf("%d", &n);
	printf("\n\t STACK OPERATIONS USING ARRAY");
	printf("\n\t--------------------");
	printf("\n\t1. PUSH\n\t2. POP\n\t3. DISPLAY\n\t4. EXIT");
	
	do {
		printf("\nEnter the Choice: ");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1:
				push();
				break;
			
			case 2:
				pop();
				break;
			
			case 3:
				display();
				break;
			
			case 4:
				printf("\n\t EXIT POINT ");
				break;
				
			default:
				printf("Invalid choice, please select 1/2/3/4: ");
		} 
	}
		while(choice != 4);
		return 0;
}

	void push() {
		if (top == n-1) {
			printf("\n\tSTACK is overflow");
		} else {
			printf(" Enter a value to be pushed:");
			scanf("%d", &x);
			top++;
			stack[top] = x;
		}
	}
	
	void pop() {
		if (top == -1) {
			printf("\n\tSTACK is underflow");
		} else {
			printf("Value poped from stack is %d", stack[top]);
			top--;
		}
	}
	
	void display() {
		if (top == -1) {
			printf("STACK is empty");
		} else {
				for(i=top;i>=0;i--) {
				printf("%d", stack[i]);
		}
		}
	}
