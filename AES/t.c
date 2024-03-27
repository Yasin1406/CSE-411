#include<stdio.h>
int main(){
    unsigned char ch='K';
    unsigned char row=ch>>4;
    unsigned char col=ch&0x0F;
    printf("%X %X\n",row,col);
    return 0;
}