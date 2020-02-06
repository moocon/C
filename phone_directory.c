//用链表做一个电话目录
//可以增删查
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//定义bool类型
#define true 1
#define false 0
typedef unsigned int bool_type;

//定义电话项目
typedef struct item {
  char name[10];
  char phonenumber[12];
} ITEM;
//定义节点，用来连接各个项目
typedef struct node {
  ITEM item;
  struct node *next;
} NODE;

//定义头指针和尾指针
NODE *head = NULL;
NODE *tail = NULL;

//添加节点
void AddNode (void);
//添加项目
void AddItem (ITEM *pitem);

//删除节点 
void DelNode (void);

//查找项目 
void LookItem (void); 

//显示所有项目
void ShowAll (void);

//选择菜单 
char SelMenu (void);

//删除所有项目
void DelAll (void); 

int main (void)
{
  char sel;
  while ((sel = SelMenu()) != 'q')
  {
    switch (sel) 
    {
      case 'a': AddNode ();
        break;
      case 'd': DelNode ();
        break;
      case 'l': LookItem ();
        break;
      case 's': ShowAll ();
        break;
      default : puts ("Error input! Please select again\n");
    }
  }
  system ("cls");
  DelAll ();
  puts ("program is end"); 

}


//添加节点
void AddNode (void)
{
  NODE *pnode;
  pnode = (NODE*)malloc(sizeof(NODE));
  AddItem (&pnode->item);
  if (head == NULL)
    head = pnode;
  else
    tail->next = pnode;  //上一个节点存储本节点的地址，将节点链接在一起。
  tail = pnode;  //将本节点地址放在尾指针里。
  pnode->next = NULL;
}
//添加项目
void AddItem (ITEM *pitem)
{
  puts ("Please input name:");
  gets (pitem->name);
  puts ("Please input phone number:");
  gets (pitem->phonenumber);
}


//删除节点
void DelNode (void)
{
  char name[10];
  NODE *temp_del;
  NODE *temp_pre;
  temp_del = head;
  ShowAll ();
  if (head != NULL)
  {
    puts ("Please select the member's name:");
    gets(name);
    while (strcmp(name, temp_del->item.name) != 0)
    {
      temp_pre = temp_del;
      temp_del = temp_del->next;
    }
    if (temp_del == head)
      head = temp_del->next;
    else
    {
      temp_pre->next = temp_del->next;
      free(temp_del);
    }
    ShowAll ();
  }
}


//查找项目 
void LookItem (void)
{
  char name[10];
  NODE *temp;
  temp = head;
  if (head !=0)
  {
    puts ("Please input the member'name:");
    gets (name);
    while (strcmp(name, temp->item.name) != 0)
      temp = temp->next;
    printf ("The phone number of %s is: %s\n", temp->item.name, temp->item.phonenumber);
  }
  else
    puts("You don't create phone list");
}


//显示所有项目
void ShowAll (void)
{
  NODE *temp;
  temp = head;
  if (head == NULL)
    puts("You don't create phone list");
  else
  {
    printf ("The phone list as fllow:\n");
    while (temp != NULL)
    {
      printf ("%s: %s\n", temp->item.name, temp->item.phonenumber);
      temp = temp->next;
    }
  }
}


//选择菜单 
char SelMenu (void)
{
  int temp;
  puts ("\n---------------------------");
  puts ("Please select your operation");
  puts ("a: add a member");
  puts ("d: delete a member");
  puts ("l: look for a member");
  puts ("s: show all members");
  puts ("q: quit");
  puts ("==========================");
  temp = getchar();
  fflush(stdin);
  return temp;
}


//删除所有项目
void DelAll (void)
{
  NODE *temp;
  while (head != NULL)
  {
    temp = head->next;
    free(head);
    head = temp;
  }
}


