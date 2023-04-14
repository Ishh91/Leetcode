#include<stdio.h>
#include<stdlib.h>
struct Node
{
    char data;
    struct Node *next;
}*top = NULL;

void push(char x){
    struct Node *t;
    t = (struct Node*)malloc(sizeof(struct Node));
    if(t == NULL){
        printf("stack is full\n");
    }
   else{
        t->data = x;
        t->next = top;
        top = t;
    }
}
char pop(){
   struct Node *p;
    char x = -1;
    if(top == NULL){
        printf("Stack is Empty:");
    }
    else{
        p = top;
        top = top->next;
        x = p->data;
        free(p);
    }
    printf("\n");
    return x;
}
void Display(){
    struct Node *p = top;
    while (p!=NULL)
    {
        printf("%d",p->data);
        p = p->next;
    }
    printf("\n");
}

int isBalance(char *exp){
    int i;
    for ( i = 0; exp[i] !='\0'; i++)
    {
        if(exp[i] == '('){
            push(exp[i]);
        }
        else if(exp[i] == ')'){
            if(top == NULL){
                return 0;
            }
            pop();
        }
        /* code */
    }
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
    

}
int main(){
   char *exp = "((a+b)*(a-d))"; 
   printf("%d ",isBalance(exp));
    return 0;
}