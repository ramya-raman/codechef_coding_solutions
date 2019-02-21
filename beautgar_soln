#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
	long T;
	string s;
    long i, l;
    int cR, cG;
	bool isBeauty;
	
	cin >> T;
	while(T--){
	    cR = cG = 0;
	    isBeauty = true;
	    cin >> s;
	    l = strlen(s.c_str());
	    
	    for(i = 1; i < l; ++i) {
	        if(s[i] == s[i-1] ) {
	            if(s[i] == 'R') {
	                cR++; 
	                if(cR > 1) {
	                    isBeauty = false;
	                    break;
	                }
	            }
	            else {
	                cG++;
	                if(cG > 1) {
	                    isBeauty = false;
	                    break;
	                }
	            }
	        }
	    }
	    if(isBeauty && s[0] == s[l-1] ) {
	        if(s[0] == 'R'){
	            cR++;
	            if(cR > 1) {
	                isBeauty = false;
	            }
	        }
	        else {
	            cG++;
	            if(cG > 1) {
	                isBeauty = false;
	            }
	        }
	    }
	    if(cR == 1) {
	        if(cG != 1){ 
	            isBeauty = false;
	        }
	    }
	    else if(cG == 1) {
	        isBeauty = false;
	    }
	    
	    if(isBeauty) {
	        cout << "yes" << endl;
	    }
	    else {
	        cout << "no" << endl;
	    }
	}
	
	return 0;
}
