#include <stdio.h>
int main(){
    int a,b,c,d,z,i;
    z=0;
    printf("Nhap 4 gia tri: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b){
    i=a;
    a=b;
    b=i;
    }
    if(a<c){
    i=a;
    a=c;
    c=i;
    }
    if(a<d){
    i=a;
    a=d;
    d=i;
    }
    if(b<c){
    i=b;
    b=c;
    c=i;
    }
    if(b<d){
    i=b;
    b=d;
    d=i;
    }
    if(c<d){
    i=c;
    c=d;
    d=i;
    }
    while(z<3){
    printf("Moi ban nhap thao tac: ");
    scanf("%d",&z);
    
    if(z==1)
    printf("%d<%d<%d<%d\n",a,b,c,d);
    else if(z==2)
    printf("%d>%d>%d>%d\n",d,c,b,a);

    }
    printf("Ket thuc");


      

    return 0;
    
}