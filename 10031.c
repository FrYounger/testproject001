/*
题目内容描述：

程序填空，不要改变与输入输出有关的语句。
输入若干个学生的信息（学号、姓名、成绩），当输入学号为0时结束，用单向链表组织这些学生信息后，再按顺序输出。
输入输出示例：括号内为说明
输入：
1 zhang 78
2 wang 80
3 li 75
4 zhao 85
0
输出：
1 zhang 78
2 wang 80 
3 li 75
4 zhao 85
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stud_node
{
     int    num;
     char  name[20];
     int    score;
     struct stud_node *next;
};
void main()
{
	struct stud_node *head,*tail, *p;
	int num, score, start=1, i=0;
	char name[20];
	int size = sizeof(struct stud_node);

	head=tail=NULL;
	scanf("%d", &num);	
  	while(num != 0)
  	{
		if(start==0)
		{
			tail->next=(struct stud_node *)malloc(size);
			tail=tail->next;
		}
		if(start==1)
		{
			head=tail=(struct stud_node *)malloc(size);
		}
		tail->num=num;
		scanf("%s", name);
		for(i=0;i<=19;i++)
			tail->name[i]=name[i];
		scanf("%d", &score);
		tail->score=score;
		tail->next=NULL;
		scanf("%d", &num);
		start=0;
	}
	for(p=head; p!=NULL; p=p->next)  
		printf("%d %s %d\n", p->num,p->name,p->score);
}


