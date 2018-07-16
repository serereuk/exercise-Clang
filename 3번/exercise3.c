//
//  exercise3.c
//  ssh
//
//  Created by Wook-Young on 2018. 7. 12..
//  Copyright © 2018년 Wook-Young. All rights reserved.
//

#include <stdio.h>

int main(void){
    int num1, num2, small, temp = 1, temp1 = 0;
    printf("input\n");
    scanf("%d %d", &num1, &num2);
    small = (num1 > num2) ? num2 : num1;
    while(temp <= small){
        if(num1 % temp == 0 & num2 % temp == 0){
            temp1 = temp;
        }
        temp++;
    }
    printf("output : %d\n", temp1);
    return 0;
}
