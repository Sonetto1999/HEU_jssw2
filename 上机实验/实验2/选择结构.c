#include <stdio.h>
#include <math.h>
float a;
int i;
int s[3]={0};							//声明全局变量
void Choose(){
	switch(s[i]){
	case 1:
        printf("%.2f\n\n", -a);
        break;
    case 2:
        printf("%.2f\n\n", sqrt(a));
        break;
    case 3:
        printf("%.2f\n\n", a * a);
        break;		
	}
}										//封装选择函数
int main(){
    scanf("%f", &a);
    for (i=0;i<3;i++){
		scanf("%d", &s[i]);
	}									//存储输入的数字 和 选择分支
    for (i=0;i<3;i++){
		Choose();
	}									//运行多次判断
    return 0;
}