#include<stdio.h>
//THIS FUNCTION IS FOR CALL BY REFERENCE
void swapcr(int*a,int*b);
//THIS FUNCTION IS FOR CALL BY VALUE
void swapcv(int a, int b);

//BODY OF MAIN FUNCTION
void main(){
    int x,y;
    x=4,y=5;
    printf("the value of x and y befor swapping is %d and %d\n",x,y);
    swapcv(x,y);
    printf("the value of x and y after swapping by using call by value is  is %d and %d\n",x,y);
    swapcr(&x,&y);
    printf("the value of x and y after swapping by using call by reference  is %d and %d\n",x,y);

}

//FUNCTION CALL FOR BOTH
void swapcr(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

void swapcv(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;

    


}