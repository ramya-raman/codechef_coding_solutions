#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
	long N;
	long r, R;
	
	cin >> N >> r;
	while(N--){
	    cin >> R ;
	    if(R >= r){
	        cout << "Good boi" << endl;
	    }
	    else {
	        cout << "Bad boi" << endl;
	    }
	}
	
	return 0;
}
