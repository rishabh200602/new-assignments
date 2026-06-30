#include<stdio.h>
int main()
{
int a[3][3],b[3][3],sum[3][3];
int i,j;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d",a[i][j]);

    }}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d",b[i][j]);

    }}
    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        sum[3][3]=a[3][3]+b[3][3];

    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d",sum[i][j]);

    }}
    return 0;
}