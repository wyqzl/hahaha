//
//  main.cpp
//  hahaha
//
//  Created by wyq on 15/11/25.
//  Copyright (c) 2015年 wyq. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int *a;
    a=(int *)malloc(4);
    if(a==0)
        exit(0);
    *a=100;
    printf("a=%x *a=%x\n,a,*a");
    return 0;
}
