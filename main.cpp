//
//  main.cpp
//  c++_learning01
//
//  Created by 王海刚 on 02/07/17.
//  Copyright © 2017年 王海刚. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

double root(double x, double y)
{
    if (x>=y) {
        return sqrt(x-y);
    } else {
        return 0;
    }
}

int main()

{
    double a,b;
    cin >> a >> b;
    cout << root(a, b) << endl;
    
}
