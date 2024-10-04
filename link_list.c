#include<stdio.h>
#include<malloc.h>
struct node
{

int data;
struct node *next;

};

struct node *start=NULL;
void disp();
void create_sll();
void inst_beg();
int main()

{

int choice=0;
while(choice<=4)

{

puts("\n-----Select the operation you want to perform-----");
puts("1 Create list\n2 Insert a node at first.\n3 Display list.\n4 Exit.");
scanf("%d",&choice);
switch(choice)

{
case 1:
create_sll();
puts("\nLinked List created");
break;
case 2:
inst_beg();
break;
case 3:
disp();
break;
case 4:
puts("Program terminated.");
break;
}

}

return 0;

}
void disp()
{
if(start==NULL)
{
puts("List is empty, it can't be displayed.");
}
else
{
struct node *ptr;
ptr=start;
while(ptr!=NULL)
{
printf("\t %d",ptr->data);
ptr=ptr->next;
}
}
}
void create_sll()
{
struct node *new_node, *ptr;
int num;
puts("Enter -1 to end.");
puts("Enter the data :");
scanf("%d",&num);
while(num!=-1)
{
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=num;
if(start==NULL)
{
new_node->next=NULL;
start=new_node;
}
else
{
ptr=start;
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next=new_node;
new_node->next=NULL;
}
puts("Enter data :");
scanf("%d",&num);
}
}

        void inst_beg()
        {
        if(start==NULL)
        {
        puts("List is empty, first create a list.");
        }
        else
        {
        struct node *new_node;
        int num;
        puts("Enter the data :");
        scanf("%d",&num);
        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->data=num;
        new_node->next=start;
        start=new_node;
        }
        }
// void inst_end() 
// {
//     struct node *new_node, *ptr;
//     int num;
//     puts("Enter the data to insert at the end:");
//     scanf("%d",&num);
    
//     new_node = (struct node*)malloc(sizeof(struct node));
//     new_node->data = num;
//     new_node->next = NULL;

//     if(start == NULL)
//     {
//         start = new_node;
//     }
//     else
//     {
//         ptr = start;
//         while(ptr->next != NULL)
//         {
//             ptr = ptr->next;
//         }
//         ptr->next = new_node;

//     }
// }

