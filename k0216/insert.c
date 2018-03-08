#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include"list.h"

int Insert_head(List plist,int val)
{
	Node*p=(Node*)malloc(sizeof(Node));
	p->data=val;
	p->next=plist->next;
	plist->next=p;
	return 1;
}
int Insert_tail(List plist,int val)
{
	Node *p;
	for(p=plist;p->next!=NULL;p=p->next) ;//找尾巴

	Node *q = (Node *)malloc(sizeof(Node));
	q->data = val;

	//将q插入在p的后面
	q->next = p->next;//q->next = NULL;
	p->next = q;

	return 1;
}


int Insert_pos(List plist,int pos,int val)
{

	Node*p;
	int i;
	for(p=plist,i=0;p!=NULL&&i<pos;i++,p=p->next)
	{
	;
	}
	if(i<pos||p==NULL)
	{
	return 0;
	}
	Node*q=(Node*)malloc(sizeof(Node));
	q->data=val;
	q->next=p->next;
	p->next=q;
	return 1;
}
