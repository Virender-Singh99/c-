#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int x(int a, int b) {
   return a+b;
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = x(num1,num2);
  cout<< sum;
  return 0; 

}