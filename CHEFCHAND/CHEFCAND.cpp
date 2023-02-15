#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N,X,Y,quotient,remainder;
	    cin>>N>>X ;
	    Y = N-X ;
	    quotient = Y/4;
	    remainder = Y % 4;
	    if(Y <= 0)
	    cout<< 0 <<endl;
	    else
	    cout<< (Y-1)/4+1 <<endl;
	    
	    
	}
	return 0;
}
