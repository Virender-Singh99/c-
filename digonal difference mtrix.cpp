#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    int matrix[100][100];
    int i;
    cin>>i;
    for(int x=0;x<i;x++){
        for(int y=0;y<i;y++){
            cin>>matrix[x][y];
        }
    }
   int a,b;
a=0;b=0;
    for(int x=0;x<i;x++)
        {
        a=a+matrix[x][x];
    }
    for(int x=i-1;x>-1;x--)
        {
       
        b=(b+matrix[i-x-1][x]);   
    }
    int diff = a-b;
    if(diff<0){
        cout<<-(diff);
    }
    else
        cout<<diff;
    
    return 0;
}
