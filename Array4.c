#include<stdio.h>
#include<conio.h>
///find maximum in 1D Array
int main(){
    int num[100],n;
    printf("Enter many number:");
    scanf("%d",&n);
    printf("Enter %d integer:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    int max = num[0];
    for(int i=1;i<n;i++){
        if(max<num[i]){
            max = num[i];
        }
    }
    printf("Maximum %d\n",max);
    getch();
}
