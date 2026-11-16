#include<stdio.h>
struct student
{
    char regNo[20];
    char name[50];
    float marks;
};
int main(void)
{
struct student s[50];
int n,i;
printf("enter number of students(1-50):");
scanf("%d",&n);
if(n<1||n>50)
{
printf("invalid number of students.\n");
return 0;
}

for(i=0;i<n;i++)
{
printf("\nStudent %d\n",i+1);
printf("Register number:");
scanf("%19s",s[i].regNo);
printf("Name:");
scanf("%49s",s[i].name);
printf("Marks:");
scanf("%f",&s[i].marks);
}
printf("\n%-20s %-25s %f\n","Register No.","name", "marks");
for(i=0;i<n;i++)
printf("%-20s %-25s %.2f\n",s[i].regNo,s[i].name,s[i].marks);
return 0;
}


