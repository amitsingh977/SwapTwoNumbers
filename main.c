//swapping two numbers using reference

//  main.c
//  SwapTwoNumbers
//
//  Created by Eun Jae Lee on 21/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  Temporary variable

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a,b,temp;
    
    printf("Enter Two Numbers \n");
    scanf("%d%d", &a,&b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("Your first number is now %d\n",temp);
    
    return 0;
}
