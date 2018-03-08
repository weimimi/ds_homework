#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include"list.h"
void InitList(List plist)
{
	//assert(plist!=NULL);
	if(plist==NULL)
	{	
		return;
	}
	plist->next=NULL;
}
void Show(List plist)
{
	Node *p;
	for(p=plist->next;p!=NULL;p=p->next)
	{
		printf("%d\n",p->data);
	}
	printf("\n");
}
void Destroy(List plist)
{
	Node *p;
	while(plist->next != NULL)
	{
		p = plist->next;
		plist->next = p->next;
		free(p);
       }

	plist->next = NULL;
}
void Clear(List plist)
{
	Destroy(plist);
}
int main()
{
	Node head;
	InitList(&head);
	//int i;
//	for(i=0;i<9;i++)
//	{
		//Insert_head(&head,i);
	       //Insert_tail(&head,i);
//	}
	Insert_pos(&head,0,1);
	Insert_pos(&head,1,2);
	Insert_pos(&head,2,3);
	Insert_pos(&head,3,4);
       	Show(&head);
	//Delete_head(&head);
	//Show(&head);
	//Delete_tail(&head);
	//Show(&head);
	//Delete_pos(&head,2);
	//Show(&head);
        //Reverse(&head);
   	//Show(&head);
	Destroy(&head);
        Destroy(&head);
	Clear(&head);
}

