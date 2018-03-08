#pragma once
#define true 1
#define false 0
#include<stdbool.h>
typedef struct Node
{
	int data;
	struct Node *next;
}Node,*List;
void InitList(List plist);
int  Insert_tail(List plist,int val);
int  Insert_head(List plist,int val);
int  Insert_pos(List plist,int pos,int val);
void Show(List plist);
int  Delete_pos(List plist,int key);
int  Delete_head(List plist);
int  Delete_tail(List plist);
int Isempty(List plist);
void Reverse(List plist);
void Destroy(List plist);
void clear(List plist);
