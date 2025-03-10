//Viết chương trình nhập vào 2 chuỗi (có độ dài tối đa 100 kí tự) 
//có các kí tự trong chuỗi đã được sắp xếp tăng dần theo bảng mã ASCII. 
//Tạo ra 1 chuỗi mới trong đó các kí tự cũng được sắp xếp tăng dần từ 2 chuỗi trên và xuất ra màn hình.
#include <stdio.h>
#include <string.h>
char convertString(char s2[3]){
    switch(opera) {
     case '+':
         printf("%d + %d = %d", a, b, a + b);
         break;
     case '-':
         printf("%d - %d = %d", a, b, a - b);
         break;
     case '*':
         printf("%d * %d = %d", a, b, a * b);
         break;
     case '/': 
         if(b == 0){
             printf("Khong the chia cho 0!");
         }else{
             printf("%d / %d = %.2f", a, b, (float)a / b);
         }
         break;
   
     default:
     printf("Khong co phep toan %c!", opera);
         break;
   }
}


int main() {
    char s1[100],s2[3],s3[100],t;
    int a;
    scanf("%s%s", s1);
    for (int i = 0; i < strlen(s1); i++) {
        s2[i]=s1[i];
        a=i;    
    }
    for (int i = a + 1; i < a + 1 + strlen(s1); i++) {
        s3[i]=s2[i-a-1];
    }
    
    printf("%s", s3);
}
