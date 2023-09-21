 #include<stdio.h>
void main()
{
int i,j;
char x= 'A';
for(i=1;i<=4;i++)
{

for(j=1;j<=4;j++)
{
if(i==2||i==3)
{
if(j==2||j==3)
{
printf("%c",x);
x++;
}

else
printf("*");
}


else
printf("*");

}



    printf("\n");
  }
  }
