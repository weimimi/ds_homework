#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include"list.h"
int Delete_head(List plist)
{
	if(plist->next==NULL)
	{
		return 0;
	}
	Node*p=plist->next;
	plist->next=plist->next->next;
	free(p);
	return 1;
}



int Delete_tail(List plist)
{
if(plist->next==NULL)
{
return 0;
}
Node *p;
Node *q;
for(p=plist;p->next->next!=NULL;p=p->next);
q=p->next;
p->next=p->next->next;
free(q);
return 1;
}

int Delete_pos(List plist,int pos)
{
int i;
Node *p;
for(p=plist,i=0;p!=NULL||i<pos;i++,p=p->next)
{
;		
}
if(p==NULL||i<pos)
{
return 0;
}
Node*q=p->next;
p->next=q->next;
p->data=q->data;
free(q);
return 1;
}

