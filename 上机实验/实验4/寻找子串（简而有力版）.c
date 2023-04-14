#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[105], str2[105];
    gets(str1);
    gets(str2);     //输入和储存两字符串
    int book = 1;   //设置标记变量book,初始为true
    for (int i = 0; i < strlen(str1); i++){
        if (str1[i] == str2[0]){   
            //以两字符串本次检测到的相同字符位置为起点，判断后续字符是否相同
            for (int j = 0; j < strlen(str2); j++){
                if (str1[i + j] != str2[j])
                    book = 0;   //后续字符有异，book值为false
                if (j == strlen(str2) - 1)
                    if (book == 1){
                        printf("%d", i + 1);
                        return 0;
                    }   //检查str2最后一位；book为true则输出位数，否则跳出循环,继续检测
            }       
        }   
    }           
    printf("-1");   //遍历，如果在两字符串没有找到相同的字符，则输出-1
    return 0;   
}