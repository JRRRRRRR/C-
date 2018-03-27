//
//  main.cpp
//  11
//
//  Created by JR Chen on 2018/3/20.
//  Copyright © 2018年 JR Chen. All rights reserved.
//

#include<iostream>
#include<cmath>
using namespace std;
int power(int x, int n); //declaration
void hello(int x);

int main(){
    /*char alphabet;
    cout << "enter a alphabet: " << endl;
    cin >> alphabet;
    if((alphabet >= 'A') && (alphabet <= 'Z')){
        cout << alphabet << " is a upper case" << endl;
    }else if((alphabet >= 'a') && (alphabet <= 'z')){
        cout << alphabet << " is a lower case" << endl;
    }else{
        cout << " not a alphabet" << endl;
    }*/
    int x = power(2,3);
    int y = power(4,2);
    hello(5);
    cout << x + 1 << endl;
    cout << y + 1 << endl;
    return 0;
}

int power(int x,int n){
    int ans = 1;
    for(int i=0; i<n; i++){
        ans = ans * x;
    }
    
    hello(ans);
        return ans;
    
}

void hello(int x){
    cout<<"Hi Jiarong"<<x<<endl;
}
