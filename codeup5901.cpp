//回文串经典
#include<cstdio>
#include<cstring>
int main(){
    char s[260];
    scanf("%s",s);
    int l= strlen(s);
    int i=0;
    for(i=0;i<l/2;++i){
        if(s[i]!=s[l-i-1])
        {
            printf("FALSE");
            break;
        }
    }
    if(i==l/2){
        printf("YES");
    }
    return 0;
}