#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>

int main(){

char string[1501];
char word[101];
int i=0,j,a,b,c,e,p;
float soma=0,valor=0,f;


fgets(string,1501,stdin);

while(string[i]!='\0'){
    j=0;
    a=1;
    p=0;
while(string[i]!=' '&& string[i]!='\0'){
            word[j]=string[i];
            i++;
            j++;

    }
    i++;
    word[j]='\0';
    j=0;
    while(word[j]!='\0'){
        if(word[0]=='.'){
                a=0;
                break;
        }
        if(word[j]=='.')
		p++;

	if(word[j]=='.'&& word[j+1]=='\0'){
                a=0;
                break;
        }
        b=isalpha(word[j]);
        if(b!=0){
                a=0;
                break;
        }
        b=isalpha(word[j-1]);
        if(word[j]=='.' && b!=0){
            a=0;
            break;
        }
        b=isalpha(word[j+1]);
         if(word[j]=='.' && b!=0){
            a=0;
            break;
        }
        j++;
    }
    if(a==0)
        continue;
    if(p>1)
	continue;
    valor=atof(word);
    soma=soma+valor;



}

if(soma==0){
	printf("0\n");
	return 0;
}
e=soma/1;
f=soma-e;
if(f==0)
 printf("%.0f\n",soma);
else 
 printf("%.1f\n",soma);

return 0;
}
