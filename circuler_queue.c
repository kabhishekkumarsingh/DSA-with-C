#include <stdio.h>
#define MAXSIZE 10
int cqueue[MAXSIZE],rear=-1,front=-1;

void insert(){
    int n;
    if((rear+1)%MAXSIZE==front)
    printf("\n circuler queue is overflow");
    else{
        int n;
        printf("\nEnter an element:");
        scanf("%d",&n);
        if(front==-1 && rear==-1){
            front=0;
            rear=0;
        }
        else
        rear=(rear+1)%MAXSIZE;
        cqueue[rear]=n;
    }
}

void display(){
    int i;
    if(rear==-1 && front==-1)
    printf("\nQueue is empty");
    else{
        printf("\nElements of queue:\n");
        for(i=front;i!=rear;(i=(i+1)%MAXSIZE)){
            printf("%5d\n",cqueue[i]);
        }
        printf("%5d\n",cqueue[i]);
    }
}

void detete(){
    int n;
    if(rear==-1 && front==-1)
        printf("\nQueue is empty");
        else{
            n=cqueue[front];
                    printf("\nDeleted element is %d",n);
                    if(front==rear){
                        front=-1;
                        rear=-1;
                    }
                    front=(front+1)%MAXSIZE;

        }
    
}

int main()
{
int choice;
do{
    printf("\n--------Circuler Queue Menu--------");
    printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: insert(); break;
        case 2: detete(); break;
        case 3: display(); break;
        //default : printf("inviled input");
    }
} while(choice !=4);
    return 0;
}
