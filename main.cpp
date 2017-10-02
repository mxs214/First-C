/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Micky
 *
 * Created on September 18, 2017, 6:46 PM
 */

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <limits.h>

using namespace std;

void swap1(int & a, int &b);
void swap2(int* a, int* b);

void g(void) 
{
    int arr[10];
    for (int i = 0; i < 10; i++) 
        arr[i] = i;
    
    int i = 5;
    int* ptr = &(arr[i]);
    while (ptr <= &(arr[9])) 
    {
        *ptr = 2 * i;
        ptr = ptr + 1;
        i = i + 1;
    }    
    
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;
    
}


void swap0(int x, int y) 
{
    int temp = x;
    x = y;
    y = temp;
}
 
void swap1(int &x, int &y) 
{
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int* x, int* y) 
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char** argv)   
{
    g();
    
    int m = 9; 
    int n = 4;
    cout << "Before things are swapped, we start with 9 and 4" << endl;
    swap0(m, n);
    cout << m << " " << n << endl;
    swap1(m, n);
    cout << m << " " << n << endl;
    swap2(&m, &n);
    cout << m << " " << n << endl;
    
}

