//
//  exercise4.c
//  ssh
//
//  Created by Wook-Young on 2018. 7. 12..
//  Copyright © 2018년 Wook-Young. All rights reserved.
//

#include <stdio.h>

int main(void){
    int money = 3500, cream = 500, shrimp = 700, coke = 400, temp = 1, temp1 = 1, min, min2, min3;
    min = (money - shrimp - coke - cream)/cream;
    while(temp < min + 2){
        min2 = (money - cream*temp - shrimp - coke)/shrimp;
        while(temp1 < min2 + 2){
            if((money - cream*temp - shrimp*temp1 - coke) % coke == 0){
                min3 = (money - cream*temp - shrimp*temp1 - coke)/coke;
                printf("cream %d, shrimp %d, coke %d\n", temp, temp1, min3+1);
                temp1++;
            }
            else
                temp1++;
        }
        temp++;
        temp1 = 1;
        min3 = 0;
    }
    return 0;
}
