#include <iostream>
#include <string>
using namespace std;
int main() {
int *p,*q,*r;
int data,y;

//p-pointer
p=&data;
*p=100;
p=&y;
*p=200;

//q-pointer
q=&data;
*q=100;
q=&y;
*q=200;

//r-pointer
r=&data;
*r=100;
r=&y;
*r=200;

    return 0;
}
