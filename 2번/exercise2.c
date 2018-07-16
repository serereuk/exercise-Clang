//
//  exercise2.c
//  ssh
//
//  Created by Wook-Young on 2018. 7. 12..
//  Copyright © 2018년 Wook-Young. All rights reserved.
//

#include <stdio.h>

int gugudan(int num1, int num2);

int main(void){
    int temp1, temp2;
    printf("정수를 입력하세요\n");
    scanf("%d %d", &temp1, &temp2);
    gugudan(temp1, temp2);
}

int gugudan(int num1, int num2)
{
    int a, b, temp = 1;
    a = (num1 > num2) ? num1 : num2;
    b = (num1 > num2) ? num2 : num1;
    printf("%d, %d\n", a, b);
    while(b < a+1){
        temp = 1;
        while(temp < 10){
            printf("%d\n", temp*b);
            temp++;
        }
        b++;
    }
    return 0;
}
