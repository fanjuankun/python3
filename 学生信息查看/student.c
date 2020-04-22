#include <stdio.h>
int main()
{  
    int a,i;
    struct Student //建立一个包含学生信息的结构体
    {
        char name[20];
        int age;
        int num;
        char Class;
        int score;
    };
    struct Student stu[i]; //定义结构体数组，由用户输入数组大小
  
    printf("请输入要记录的学生人数：\n");
    scanf("%d",&i);
    for(a=1;a<=i;a++)  //循环输入数据，直至用户指定的数量
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
    for(a=i;a<=i;a++) //将用户输入的数据整体输出
    {
        printf("学生的姓名分别是%s,年龄是%d,学号是%d,班级是%s,成绩是%d\n",stu[i].name,stu[i].age,stu[i].num,stu[i].Class,stu[i].score);
    }
    return 0;
}