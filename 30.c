/*
	C Program to create Student Structure and accept name, roll no and marks of 3 subjects and print in descending order
	Author: PracsPedia		www.pracspedia.com
*/
#include<stdio.h>
struct student
{
	char name[40];
	int rollno;
	int sub[3];
	int total;
};

void main()
{
	int i, n, j;
	struct student st[20], temp;
	printf("Enter number of students data you want to enter:\n");
	scanf("%d",&n);
	for(i=0;i < n;i++)
	{
        printf("Enter name of student %d\n",(i+1));
		scanf("%s",&st[i].name);
		printf("Enter Roll No of student %d\n",(i+1));
		scanf("%d",&st[i].rollno);
		printf("Enter marks for 3 subjects of student %d\n",(i+1));
		scanf("%d%d%d",&st[i].sub[0],&st[i].sub[1],&st[i].sub[2]);
		st[i].total = (st[i].sub[0]+st[i].sub[1]+st[i].sub[2]);
		printf("Total Marks of %d student = %d\n",(i+1), st[i].total);
	}
	for(i=0;i < (n-1);i++)
	{
		for(j=0;j < (n-i-1);j++)
		{
			if(st[j].total > st[j+1].total)
			{
				temp = st[j];
				st[j] = st[j+1];
				st[j+1] = temp;
			}
		}
	}
	printf("\n\n\n\t\t******Sorted in assending order******");
	for(i=0; i < n;i++)
	{
		printf("\nName of student: %s",st[i].name);
		printf("\nRoll No of student: %d",st[i].rollno);
		printf("\nTotal of student: %d\n",st[i].total);
	}
}