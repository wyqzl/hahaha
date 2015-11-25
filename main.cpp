//
//  main.cpp
//  hahaha
//
//  Created by wyq on 15/11/25.
//  Copyright (c) 2015年 wyq. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
    int m;
    int x[5],t;
    for(int m=0;m<5;m++)
    {
        cin>>x[m];
    }
    for(int i=0;i<m-1;m++)
    {
        for(int j=0;j<m-1-i;j++)
        {
            if(x[j+1]>x[j])
            {
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
}
    for(int m=0;m<5;m++)
    {
        cout<<x[m]<<endl;
    }
    return 0;
}