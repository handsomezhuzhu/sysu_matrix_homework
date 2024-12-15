#include<stdio.h>
#include<string.h>
int main()
{
    char s[105];
    scanf("%s", s);
    char ans[210];
    char ch = s[0];
    int temp = 1;
    int j = 0;
    for(int i=1; i<strlen(s); i++){
    	if(ch == s[i]){
    		temp++;
		}
		else{
			ans[j++] = ch;
			ans[j++] = (temp+'0');
			ch = s[i];
			temp = 1;
		}
	}
	ans[j++] = ch;
	ans[j++] = (temp+'0');
	ans[j] = '\0';
	if(j>=strlen(s))
	{
		printf("%s\n", s);
	}
	else {
		printf("%s\n", ans);
	}
    return 0;
}

