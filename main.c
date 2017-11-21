//
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
    
    /* new algorithm without the temp variable
    a = a+b;
    b = a-b;
    a = a-b;
    */
    printf("Your first number is now %d\n",temp);
    
    return 0;
}
