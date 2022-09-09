#include<stdio.h>
#include<conio.h>
int main(){
    int a[6],sum = 0;
    printf("Enter an 6 integer: ");
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<6;j++)
    {
        sum = sum+ a[j];    ///21
    }

    printf("Sum:%d\n",sum);
    printf("Average:%.2f\n",(float)sum/6);

    getch();
}
