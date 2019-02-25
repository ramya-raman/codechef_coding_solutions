#include<bits/stdc++.h>
using namespace std;

map <long, vector<int>> A;

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
	long T;
	long N;
	
	int i, j;
	
	cin >> T;
	while(T--){
	    cin >> N;
	    for(i=1; i<N+1; ++i){
	    	cin >> j;
	    	A[j].push_back(i);
	    	
	    }
	    int cntr = 0;
	    for(auto p: A){
	    	cntr = 0;
	    	for(auto v : p.second){
	    		//cout << v << " " ;
	    		if(A.find(v) != A.end()){
	    			//cout << "FOUND!!" << endl;
	    			cntr++;
	    			if(cntr == 2){
	    				break;
	    			}
	    		}/*
	    		else {
	    			cout << "NOT FOUND!!!" << endl;
	    		}*/
	    		
	    	}
	    	if(cntr == 2){
	    		break;
	    	}
	    }
	    if(cntr == 2){
	    	cout <<"Truly Happy" << endl;
	    }
	    else {
	    	cout << "Poor Chef" << endl;
	    }
	    A.clear();
	}
	
	return 0;
}
