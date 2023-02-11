#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int A,B,X,Y,p,q;
	    cin>>A>>B>>X>>Y;
	    p = A*B;
	    q = X*Y;
	    if(p<=q)
	    cout<<"yes"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
