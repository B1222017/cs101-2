#include <stdio.h>

int multi(int i,int j){
    if(j == 1){
        printf("%d * %d = %d ",i,j,i*j);
        return 0;
    }else{
        multi(i, j-1);
        printf("%d * %d = %d ", i, j, i*j);
        

    }
}
int main(){
    for(int i=1;i <= 9;i++){
        multi(i,9);
        printf("\n");
    }
    return 0;
}
