#include <stdio.h>
#include <stdlib.h>

struct node_s
{
	char *name;
	int num;
	struct node_s *next;
};

struct node_s *head = NULL;
struct node_s *current = NULL;

void printLIist()
{
	struct node_s *ptr = head;
	
	while(ptr != NULL)
	{
		printf("[ %s , %d] - ",ptr->name,ptr->num);
		ptr = ptr->next;
	}
}


void insertHead(char *name, int num)
{
	struct node_s *list = (struct node_s*)malloc(sizeof(struct node_s));
	
	list->name = name;
	list->num = num;
	list->next = head;
	
	head = list;
	
}

struct node_s *removeList()
{
	struct node_s *p_head = head;
	
	p_head = p_head->next;
	
	return p_head;
}

int main()
{
	int N = 2;
	char *tung = "tung";
	char *ty = "ty";
	int num[N] = {1,2};
	
	insertHead(tung, num[0]);
	insertHead(ty,num[1]);
	
	printLIist();
	
	return 0;
}
