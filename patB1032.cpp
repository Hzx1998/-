#include<cstdio>
int main(){
    int n;
    int scId,score;
    scanf("%d",&n);
    int *school=new int [n]{0};
    for(int i=0;i<n;++i){
        scanf("%d%d",&scId,&score);
        school[scId]+=score;
    }
    int item=0,k;
    for(int i=0;i<n;++i){
        if(school[i]>item){
            item=school[i];
            k=i;
        }
    }
    printf("%d %d\n",k,item);
    return 0;
}
