#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
	long T;
	long tr, dr, ts, ds, v;
    int i, j;
	set<long> ramT;
	set<long> ramD;
	bool canRam;
	
	cin >> T;
	while(T--){
	    cin >> tr;
	    canRam = true;
	    
	    for(i=0; i<tr; ++i) {
	        cin >> v;
	        ramT.insert(v);
	    }
	    cin >> dr;
	    
	    for(i=0; i<dr; ++i) {
	        cin >> v;
	        ramD.insert(v);
	    }
	    cin >> tr;
	    
	    for(i=0; i<tr; ++i) {
	        cin >> v;
	        if(canRam && ramT.find(v) == ramT.end()) {
	            cout << "no" << endl;
	            canRam = false;
	        }
	    }
	    cin >> dr;
	    
	    for(i=0; i<dr; ++i) {
	        cin >> v;
	        if(canRam && ramD.find(v) == ramD.end()) {
	            cout << "no" << endl;
	            canRam = false;
	            
	        }
	    }
	    if(canRam) {
	        cout << "yes" << endl;
	    }
	    ramT.clear();
	    ramD.clear();
	}
	
	return 0;
}
