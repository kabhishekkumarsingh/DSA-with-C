#include <stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE],front=0,rear=-1;

void insert(){
    int n;
    if(rear==MAXSIZE-1)
    printf("Queue is overflow.\n");
    else{
        printf("Enter an Element: ");
        scanf("%d",&n);
        rear++;
        queue[rear]=n;
        
    }
    
}
    void delete(){
        int n;
        if(front>rear)
        printf("Queue is Empty\n");
        else{
            n=queue[front];
            
            printf("Deleted Element is %d\n",n);
            front++;
        }
    }
    void display(){
        if(front>rear)
        printf("Queue is Empty.");
        else{
            printf("Queue Elements.\n");
            for(int i=rear;i>=front;i--){
                printf("%d\n",queue[i]);
            }
        }
    }


int main()
{
int choice; 
do{
printf("---------Queue--------");
printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice){
    case 1: insert(); break;
    case 2: delete(); break;
    case 3: display(); break;
    default : printf("Invilid input\n");
}
}while(choice !=4);

return 0;
}
