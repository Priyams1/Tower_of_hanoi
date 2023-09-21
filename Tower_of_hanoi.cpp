#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void TowerOfHanoi(int n, char src, char dest, char helper){  // src = source , dest = destination, n = no of rings 

    if(n==0)  //base case
    {
        return;
    }
     
     TowerOfHanoi(n-1,src,helper,dest);  // recursive first call
     cout<<"move ring "<<n<<" from "<<src<<" to "<<helper<<endl;  
     TowerOfHanoi(n-1,helper,dest,src);  // recursive second call

}

int main(){

    TowerOfHanoi(4,'A','C','B');

    return 0;
    
}
