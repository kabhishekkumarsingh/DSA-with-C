#include <stdio.h>
#define MAXSIZE 10
int stack[MAXSIZE],top=-1;

void push(){
    int n;
    if(top==MAXSIZE-1)
    printf("Stack is overflow.\n");
    else{
        printf("Enter an Element: ");
        scanf("%d",&n);
        top++;
        stack[top]=n;
        
    }
    
}
    void pop(){
        int n;
        if(top==-1)
        printf("Stack is Empty\n");
        else{
            n=stack[top];
            top--;
            printf("Pop Element is %d\n",n);
        }
    }
    void display(){
        if(top==-1)
        printf("Stack is Empty.");
        else{
            printf("Stack of Element.\n");
            for(int i=top;i>=0;i--){
                printf("%d\n",stack[i]);
            }
        }
    }


int main()
{
int choice; 
do{
printf("---------Stack Menu--------");
printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice){
    case 1: push(); break;
    case 2: pop(); break;
    case 3: display(); break;
    
}
}while(choice !=4);

return 0;
}
