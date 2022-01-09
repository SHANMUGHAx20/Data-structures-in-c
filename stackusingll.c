#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{int data;
 struct node *next;
}*p,*tmp,*tmp1,*end;
void insert_end(int);
void display();
void delete_end();
void isEmpty();
int main()
{ 
  int val,n;
  p=NULL;
  do
	{printf("\n************************* MENU ************************");
	 printf("\n1.PUSH");
	 printf("\n2.POP");
	 printf("\n3 IS EMPTY");
	 printf("\n4.DISPLAY");
	 printf("\n5.EXIT");
	 printf("\nenter ur choice : ");
	 scanf("%d",&n);
	 switch(n)
		{
		 case 1: 
		     printf("\nenter the value ");
			 scanf("%d",&val);
			 insert_end(val);
			 break;
		 case 2: 
			 delete_end();
			 break;
		 
		case 3: 
			 isEmpty();
			 break;
		 case 4: display();
		 		 break;
		 case 5: exit(0);
		 		 break;
		 default: printf("\n Wrong Choice!");
		 		  break;
		}
	 printf("\ndo u want to cont... ");
	}while('y'==getch());

 }

 void insert_end(int ele)
 {
	  tmp=p;
	  tmp1=(struct node*)malloc(sizeof(struct node));
	  tmp1->data=ele;
	  tmp1->next=NULL;
	  if(p==NULL)
		p=tmp1;
	  else
		{
			while(tmp->next!=NULL)
				tmp=tmp->next;
		 	tmp->next=tmp1;
		 }
	  end=tmp1;
 }


void delete_end()
{	
	tmp=p;
	struct node* pre;
	if(p==NULL)
		printf("\n no element to be deleted!! ");
	else if(p->next==NULL)
	{
		printf("\nelement deleted - %d", p->data);
		p=NULL;
		end=NULL;

	}
		
	else
	{
		while(tmp->next!=NULL){
			pre=tmp;
			tmp=tmp->next;
		}
		pre->next=NULL;
		end=pre;
		printf("\nelement deleted - %d", tmp->data);
		
	}

 }
 


void isEmpty(){
	
 	if(p==NULL)
 		printf("Stack is Empty");
 	else
 	{
 		printf("Stack is Not Empty");
	 }	
}
void display()
{
	tmp=p;
 	while(tmp!=NULL)
		{printf("\n %d",tmp->data);
	 	tmp=tmp->next;
		}
}