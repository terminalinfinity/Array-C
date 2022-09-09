#include<stdio.h>
#include<conio.h>
///Fibonacci series using array
int main(){
    int a[30],n;
    printf("How many fibonacci number(max 30): ");
    scanf("%d",&n);
    a[0]= 0;
    a[1]= 1;
    for(int i=2;i<n;i++){
        a[i] = a[i-1] + a[i-2];
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf(" %d\n",a[i]);
    }
    getch();
}
