 #include<stdio.h>
// int fact(int n)
// {
//   int fact=1,i;
//   for(i=1;i<=n;i++)
//   {
//     fact=fact*i;
//   }
//     return fact;
// }
void main()
{
  int n,t,sum=0,mul=1;
  printf("Enter the number : ");
  scanf("%d",&n);
  int temp=n;
  while(n!=0){
    t=n%10;
    mul=1;
    for(int i=1;i<=t;i++){
       mul=mul*i;
    }
    sum=sum+mul;
    n=n/10;
  }
  if(sum==temp)
  printf("It is a strong number");
  else
  printf("It is not a strong number");
}
