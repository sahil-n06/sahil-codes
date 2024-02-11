#include<stdio.h>
#include<math.h>
void main(){
  int n,rem,i;
  printf("Enter the number : ");
  scanf("%d",&n);
  int a[n];
  i=0;
  while(n){
    rem = n%2;
    n=n/2;
    a[i]=rem;
    i++;
  }
  for(int j=i-1;j>=0;j--)
  {
    printf("%d",a[j]);
  }
}
//anushka
#include<stdio.h>

int main() {
  int i = 0, n, s, a[7]
  scanf("%d",&n);
  if (n==0) {
    printf("0");
  }

  while (n!= 0) {
    s=n%2;
    a[i]=s;
    i++;
    n=n/2;
  }

  for (i=6;i>=0;i--)
    printf("%d",a[i]);

  return 0;
}
