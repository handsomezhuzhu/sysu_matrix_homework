#include <stdio.h>
#include <string.h> 

char s[100000], m[100000];
int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("%s", s, 100000);
		scanf("%s", m, 100000);
		int s_len = strlen(s);
		int m_len = strlen(m);
		
		int i, j, max = 0;
		for(i = 0; i < s_len; i++){
			int not_match = 1;
			for(j = 0; j < s_len - i; j++){
				if(s[i + j] != m[j % m_len]){
					not_match = 0;
					break;
				}
			}
			if(j / m_len && max < j){
				max = j;
			}
		}
		
		printf("%d\n", max);
	}
	
	return 0;
}
