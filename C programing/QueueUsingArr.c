#include <stdio.h>
#include <stdlib.h>
#define max_size 5
int queue[max_size];
int front=-1,rear=-1;
int value;

void enqueue(){
      printf("Enter the value : ");
      scanf("%d",&value);
      if(front!=max_size){
            if(front==-1){
                  front++;
                  rear++;
                  queue[rear]=value;
            }
            else{
                  rear++;
                  queue[rear]=value;
            }
      }
      else{
            printf("Queue Overflow!");
      }
      printf("Element inserted successfully!\n");
}
void dequeue(){
	if(front==-1 && rear==-1){
		printf("Queue Underflow!");
	}
	else if(front==rear){
		printf("Deleted element is : %d",queue[front]);
		front=-1;
		rear=-1;
	}
	else{
		printf("Deleted element is : %d",queue[front]);
		front++;
	}
}
void display(){
	int i;
	printf("The elements in the queue are :\n");
	for(i=front;i<=rear;i++){
		printf("%d\n",queue[i]);
	}
}
int main(){
      int choice;
      do{
            printf("\nOPERATIONS\n");
            printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
            printf("Enter the choice : ");
            scanf("%d",&choice);
            switch(choice){
                  case 1:
                        enqueue();
                        break;
                  case 2:
                        dequeue();
                        break;
                  case 3:
                        display();
                        break;
                  case 4:
                        exit(1);
                        break;
                  default:
                        printf("Invalid option...Enter a valid option (1-4)");
            }
      }while(1);
      return 0;
}
