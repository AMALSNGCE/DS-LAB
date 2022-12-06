#include<stdio.h>
void main()
{
int a[10],b[20],n,m,i,j,k=0,c[20],s;
printf("enter the 1 array limit");
scanf("%d",&n);
printf("enter the 1 array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the 2 array limit");
scanf("%d",&m);
printf("2 array elements");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}


i=0;j=0;
while(i<=n-1 && j<=m-1)
{
if(a[i]>b[j])
{
c[k]=b[j];

k++;
j++;
}
else if(b[j]>a[i])
{
c[k]=a[i];

k++;
i++;
}
else 
{
c[k]=a[i];

k++;
j++;
i++;
}
}
while(i<=n-1)
{
c[k]=a[i];

k++;
i++;
}
while(j<=m-1)
{
c[k]=b[j];
k++;
j++;
}
s=k;
printf("\nmerged array :");
for(k=0;k<s;k++)
{
printf("%d",c[k]);
}
}



