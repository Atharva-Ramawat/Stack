#include <stdio.h>
#include <conio.h>
#define MAXSIZE 3

int top = -1;
int STACK[MAXSIZE];

void push();
void pop();
void display();

int main() {
    int choice;
    do {
        printf("\n----STACK MENU-----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 4);
    return 0;
}

void push() {
    int n;

 if (top== MAXSIZE-1){
    printf("Stack overflowed\n --------------------------------------\n ");
 }
 else{
    printf("\nEnter an element ");
     scanf("%d",&n);
     top++;
     STACK[top]=n;
 }
}
void pop() {
if(top==-1){
  printf("there is nothing to remove , Stack is empty ");
}else {
  printf("%d is removed from the stack  ",STACK[top]);
  top--;
}
}

void display() {
  if (top ==-1){
    printf("Stack is empty ");
  }
  else{
     printf("\n Elements of stack are : ");
    for(int i=top;i>=0;i--){
        printf("\n%d",STACK[i]);
    }
  }
}
