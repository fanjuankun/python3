#include <stdio.h>
int main()
{  
    int a,i;
    struct Student
    {
        char name[20];
        int age;
        int num;
        char Class;
        int score;
    };
    struct Student stu[i];
  
    printf("请输入要记录的学生人数：\n");
    scanf("%d",&i);
    for(a=1;a<=i;a++)
    {
        printf("请输入学生姓名：\n");
        scanf("%s",&stu[i].name);
        printf("请输入学生年龄：\n");
        scanf("%d",&stu[i].age);
        printf("请输入学生学号：\n");
        scanf("%d",&stu[i].num);
        printf("请输入学生班级：\n");
        scanf("%s",&stu[i].Class);
        printf("请输入学生成绩\n");
        scanf("%d",&stu[i].score);
    }
    for(a=i;a<i;a++)
    {
        printf("学生的姓名分别是%s,年龄是%d,学号是%d,班级是%s,成绩是%d\n",stu[i].name,stu[i].age,stu[i].num,stu[i].Class,stu[i].score);
    }
    return 0;
}