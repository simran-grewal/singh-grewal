#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
//struct node *start=NULL;
void push(struct node **head,int new_data)
{
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->next=*head;
    new_node->data=new_data;
    *head=new_node;
}
void show(struct node *head)
{
   while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
   
}
void append(struct node **head,int new_data)
{
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->next=NULL;
    struct node *ptr=*head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    new_node->data=new_data;
    ptr->next=new_node;
    
    
}
void ins_after(struct node **head,int i,int f)
{
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    struct node *ptr=*head;
    while(ptr->data!=f)
        {
         ptr=ptr->next;    
        }
    
    new_node->data=i;
    new_node->next=ptr->next;
    ptr->next=new_node;
    
}
void ins_before(struct node **head,int i,int b)
{
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    struct node *ptr=*head;    
    struct node *postptr=*head;
    postptr=postptr->next;
    while(postptr->data!=b)
    {
        postptr=postptr->next;
        ptr=ptr->next;
    }
    new_node->data=i;
    new_node->next=ptr->next;
    ptr->next=new_node;
    
}
void delete_node(struct node **head,int del_node)
{
    struct node *ptr=*head;
    struct node *preptr=*head;
    if(preptr!=NULL&&preptr->data==del_node)
    {
        *head=preptr->next;
        free(preptr);
        return;
    }
    ptr=ptr->next;
    while(ptr!=NULL&&ptr->data!=del_node)
    {
        ptr=ptr->next;
        preptr=preptr->next;
    }
    if(ptr==NULL) return;
    preptr->next=ptr->next;
    free(ptr);    
}
void count(struct node *head)
{
    int c=0;
    struct node *ptr=head;
    while(ptr!=NULL){c++;ptr=ptr->next;}
    cout<<c<<endl;
}
void sort(struct node ***head)
{
    struct node *ptr;
    struct node *ptr1;
    for(ptr=**head;ptr->next!=NULL;ptr=ptr->next)
        {

        for(ptr1=ptr->next;ptr1!=NULL;ptr1=ptr1->next)
            {
                    if(ptr->data>ptr1->data)
                    {
                        int temp=ptr->data;
                            ptr->data=ptr1->data;
                            ptr1->data=temp;
                    }
                            
            }

        }
}
void removedupli(struct node **head)
{
    sort(&head);
   struct node *prepreptr=*head;
   struct node *preptr=*head;
   struct node *ptr=*head;
 while(prepreptr!=NULL)
        {
            while(prepreptr->next!=NULL&&prepreptr->data==prepreptr->next->data)
            {
                prepreptr->next=prepreptr->next->next;
            }   
             prepreptr=prepreptr->next;
        }
       
     /*   prepreptr=*head;
       while(prepreptr!=NULL)
            {
                preptr=prepreptr;
                ptr=preptr->next;
               while(ptr!=NULL&&preptr->next!=NULL)
               {
                  if(prepreptr->data==ptr->data)
 
                 {
                        preptr->next=ptr->next;
                       
                  }    
                   
                  preptr=ptr;
                  ptr=ptr->next;
               }

                prepreptr=prepreptr->next;  
            }

       */   
        
      
            
}
int main()
{
    struct node *start=NULL;
    push(&start,1);
    push(&start,2);
    push(&start,3);
    push(&start,5);
    push(&start,7);
    push(&start,9);
    push(&start,9);    
    append(&start,12);
    append(&start,9);
    append(&start,5);
    append(&start,3);
    append(&start,13);
    append(&start,14);
    append(&start,2); 
    append(&start,2);
    append(&start,2);    
    append(&start,2);
    append(&start,2);
    append(&start,2);
    append(&start,2);
    removedupli(&start);    
    //append(&start,15);
    //ins_after(&start,25,13);
    //ins_before(&start,35,15);
   // delete_node(&start,1);
      show(start);
      //count(start);
    
}
