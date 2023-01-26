#include<stdio.h>
#include<string.h>

int main(){
    int v=0,c=0;
    char str[25]="hello,HOW ARE you";
    strcpy(str,strlwr(str));
    for (int i = 0; i < strlen(str); i++)
    {
    
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            v++;
        }
        else{
            c++;
        }
            
    }
    
    printf("vowels %d   consonants %d ",v,c);
    return 0;
}