#include<bits/stdc++.h>
using namespace std;

unsigned long N[26], D[26];

void init() {
	int i = 1;
	int v = 24;
	
	N[1] = 1;
	D[1] = 2;
	
	while(v--) {
		i++;
		D[i] = D[i-1] * 2;
		N[i] = D[i-1] - N[i-1];
		//cout << N[i] << " " << D[i] << " ";
		
	}
	//cout <<  endl;
}

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
	 
	init();
	long T;
	long A;
	
	cin >> T;
	while(T--){
	    cin >> A;
	    cout << N[A] << " " << D[A] << " ";
	}
	
	return 0;
}
