#include <iostream>
#include <string.h> 
using namespace std;
#define ll long long

char s[200005];
char t[200005];

bool isequal(char *sb,int slen,char *tb,int tlen){
    if(slen!=tlen)
        return 0;
    if(slen==1){
        return (*sb)==(*tb);
    }

    if(slen%2){
        if(strncmp(sb,tb,slen)==0)
            return 1;
        else
            return 0;
    }
    bool q1=isequal(sb,slen/2,tb,slen/2)&&isequal(sb+slen/2,slen/2,tb+slen/2,slen/2);
    if(q1)
        return 1;
    bool q2=isequal(sb,slen/2,tb+slen/2,slen/2)&&isequal(sb+slen/2,slen/2,tb,slen/2);
    if(q2)
        return 1;
    return 0;
}

int main(){
    scanf("%s",s);
    scanf("%s",t);
    if(isequal(s,strlen(s),t,strlen(t))){
        puts("YES");
    }
    else{
        puts("NO");
    }
}
// g++ -std=c++11 main.cpp
// CodeForces 559B : Equivalent Strings