#include<cstdio>

int main(){
    char word[90][90];
    int row=0;
    while(scanf("%s",word[row])!=EOF){
        row++;
    }
    for(int i=row-1;i>-1;--i){
        printf("%s",word[i]);
        if(i>0){
            printf(" ");
        }
    }
    return 0;
}