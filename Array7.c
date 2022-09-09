#include<stdio.h>
#include<conio.h>
///array copy all elements
int main(){
    int array1[5]={10,20,30,40,50};
    int array2[5];
    printf("\t\tArray One\n");
    for(int i=0;i<5;i++){
        printf("%d ",array1[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        array2[i] = array1[i];
    }
    printf("\t\tArray Two\n");
    for(int i=0;i<5;i++){
        printf("%d ",array2[i]);
    }
    getch();
}
