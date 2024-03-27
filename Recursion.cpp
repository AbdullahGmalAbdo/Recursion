#include <iostream>
using namespace std;
int fact(int x ){     //Find Factorial function
    if(x==1){
        return 1 ;
    }
    else 
    return (x * fact(x-1));
}

int poww(int x , int y){  //Find power function
    if(y==0){
        return 1;
    }
    else{
        return x * poww(x ,(y-1));
    }
}

int main()
{
 
   int n1 = 3 ;
   int n2 = 3 ;
    cout << fact (n2) <<endl; //Find Factorial
    cout << poww(n1,n2) <<endl; // find power
}
