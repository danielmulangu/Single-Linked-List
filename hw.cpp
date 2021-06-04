#include<iostream>
#include<string.h>
using namespace std;
struct  person
{
    int empNo;
    char name[15];
    int age;
    char sex;
};
struct node
{
    struct person info;
    struct node *link;
}*snode;


void addNode(struct person x[]);
void display(int );
int main() {
struct person tenPerson[10]={
123, "Ahmet",21,'M',
234,"Sevgi",26,'F',
128,"Osman",18,'M',
432,"Mert",27,'M',
287,"Ayse",34,'F',
423,"Kemal",21,'M',
634,"Lale",16,'F',
828,"Sefer",15,'M',
252,"Meral",27,'F',
887,"Demet",34,'F'
};
int avg=0;
for(int j=0;j<10;j++)
{
 avg+=tenPerson[j].age;
}
avg=avg/10;
addNode(tenPerson);
display(avg);


return 0;
}
//add a node function
void addNode(struct person x[])
{
struct node *fNode, *temp;
snode= (struct node *)malloc(sizeof(struct node));
if(snode==NULL)
  {
     cout<<"could not allocate";
  }
else{
           fNode->info.age=x[0].age;
           fNode->info.empNo=x[0].empNo;
           strcpy(fNode->info.name,x[0].name);
           fNode->info.sex=x[0].sex;
    snode->link= NULL;
    temp=snode;
   for(int i=1;i<10;i++)
   {
       fNode= (struct node *)malloc(sizeof(struct node));
       if(fNode==NULL)
       {
           cout<<"Memory not allocated";
           break;
       }
       else{
           fNode->info.age=x[i].age;
           fNode->info.empNo=x[i].empNo;
           strcpy(fNode->info.name,x[i].name);
           fNode->info.sex=x[i].sex;
           fNode->link=NULL;
           temp->link=fNode;
           temp=temp->link;

       }
   }
}
}

void display(int a)
{
    struct node *temp;
    if(snode==NULL)
    {
        cout<<"List is empty";
    }
    else{
         temp=snode;
         while(temp!=NULL)
         {
             if(temp->info.age>a)
             {
                 cout<<temp->info.empNo<<" "<<temp->info.name<<" "<<temp->info.age<<" "<<temp->info.sex<<endl;
             }
             temp=temp->link;
         }
    }
}



