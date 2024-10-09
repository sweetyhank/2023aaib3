//week05-3.c
#include <stdio.h>
#include <string>
#include <ctype.h>
int main()
{
	char s[]="1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	while(scanf("%c",&c)==1){
		c=tolower(c);
		if(c==' '|| c=='\n') printf("%c",c);
		else{
			for(int i=0;s[i]!=0;i++){
				if(c==s[i]) printf("%c",s[i-2]);
				}
			}
			
			
			
	}
}