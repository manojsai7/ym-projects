//just not being funny
#include <stdio.h>
void main(){
 int age,
  salary;
int job; 
int house;
printf("Enter age\n");
scanf("%d",&age);

printf("Enter salary\n");
scanf("%d",&salary);

printf("Enter job : type '1' for yes '0' for no\n");
scanf("%d",&job);

printf("Enter house type '1' for yes '0' for no\n");
scanf("%d",&house);

if (age>=18&&age<=30)
{
  if (salary>=30000)
  {
    if (house==1)
    {
      if (job==1)
      {printf("you are Selected !\n");}
      else {printf("Not accepted, as you dont have a job\n");}
    } 
    else {printf("Not accepted as you dont own a house yet\n");}
  }
  else {printf("You're rejected because of low income than expected");}

}
 else {printf("not accpeted, your age is incompatible");}
//return 0; 
}


