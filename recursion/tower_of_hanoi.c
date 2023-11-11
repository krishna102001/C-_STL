#include<stdio.h>
void TOH(int disk,int t1,int t2,int t3){
    if(disk>0){
    TOH(disk-1,t1,t3,t2);
    printf("from %d to %d\n",t1,t3);
    TOH(disk-1,t2,t1,t3);
    }
}
int main(){
    TOH(3,1,2,3);
}