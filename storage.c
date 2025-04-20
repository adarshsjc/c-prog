#include<stdio.h>
void auto_demo(){
    auto int a=1;
    printf("Auto storage class,a=%d\n",a);
    
}
void static_demo(){
    static int b=1;
    b++;
    printf("Static storage class,b=%d\n",b);
    
}
void register_demo(){
    register int c=1;
    printf("Register storage class,c=%d\n",c);
    
}
int d=1;
void external_demo(){
    extern int d;
    printf("External storage class ,d=%d\n",d);
}
int main(){
    auto_demo();
    static_demo();
    static_demo();
    register_demo();
    external_demo();
    return 0;

}
