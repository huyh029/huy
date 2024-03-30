#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int value;
    struct node *next;
} node;
node *head=NULL;
node* makenode(int key)
{
    node *tmp=(node*)malloc(sizeof(node));
    if(tmp==NULL)
    {
        printf("error");
        exit(1);
    }
    tmp->value=key;
    tmp->next=NULL;
    return tmp;
}
void printlist()
{
    for(node *a=head;a!=NULL;a=a->next) printf("%d ",a->value);
}
int main()
{
    node* tmp=NULL;
    node* oldnode=NULL;
    for(int i=1;i<1e4;i++)
    {
        tmp=makenode(i);
        if(i==1) 
        {
            head=tmp;
        }
        else{
            oldnode->next=tmp;
        }
        oldnode=tmp;
    }
    printlist();
    printf("\n");
    system("pause");
    return 0;
}