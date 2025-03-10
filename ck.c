#include <stdio.h>
#include <string.h>
void sort (char s[]) {
	char t;
	for(int i=0; i<strlen(s) - 1; i++) {
		for(int j=i+1; j<strlen(s); j++) {
		if(s[i] > s[j]) {
			t = s[i];
			s[i] = s[j];
			s[j] = t;
		}
	}
	}
}
void deletez (char s[]){
	char t;
	for(int i=0; i<strlen(s) - 1; i++) {
		if(s[i] == s[i+1]){
			for(int j= i+1; j<strlen(s); j++) {
				s[j]=s[j+1];
			}

		}
		
	}
}
int main() {
	char s[256];
	int count = 1;
	while(1){
		gets(s);
		for(int i = 0; i < strlen(s); i++) {
			if((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ) continue;
			else {
				count = 0;
				break;
			}
		}
		if(count == 1) break;
	
	}
	sort(s);
	printf("%s\n", s);
	deletez(s);
	printf("%s", s);
	
}