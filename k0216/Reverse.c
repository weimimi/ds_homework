#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include"list.h"
void Reverse(List plist)
{
	if(plist==NULL||plist->next==NULL||plist->next->next==NULL)
	{
		return;
	}
	Node *p=plist->next;
	Node *q;
	plist->next=NULL;
	while(p!=NULL)
	{
		q=p->next;
		p->next=plist->next;
		plist->next=p;
		p=q;
	}
}
