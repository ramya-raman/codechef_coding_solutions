#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
	long N, Q, K;
	
	map<long, long > mmap;
	map<long, long >::iterator it;
	
	deque<long> A;
	string s;
	
	long c, c0;
	int i, j;
	long l, cnt = 0;
	
	cin >> N >> Q >>K ;
	
	for(i =0; i<N; ++i) {
	    cin >> c;
	    if(c == 1) {
	        cnt++;
	    }
	    else {
	        if(cnt > 0) {
	            A.push_back(cnt) ;
	            mmap[cnt]++;
	        }
	        A.push_back(0);
	        cnt = 0;
	    }
	}
	if(cnt > 0) {
	    A.push_back(cnt);
	    mmap[cnt]++;
	}
    /*for(auto v : A) {
    cout << v  ;}
    cout << endl;
	for(auto p: mmap) {
	    cout << p.first << " : " << p.second << endl;
	}*/
	cin >> s;
	for(i = 0; i < Q; ++i) {
	    if(s[i] == '?') {
	        //max sequence of 1s
	        if(mmap.size() == 1 && A.size() == 1) {
	            cout << K << endl;
	            continue;
	        }
	        if(mmap.size() == 0) {
	            cout << "0" << endl;
	            continue;
	        }
	        it = prev(mmap.end(), 1);
	        l = it->first;
	        if(l > K) {
	            cout << K << endl;
	        }
	        else {
	            cout << l <<endl;
	        }
	    }
	    else {
	        //shift
	       
	        l = A.size()-1;
	        if(mmap.size() == 1 && l ==0 ) {
	            continue;
	        }
	        if(mmap.size() == 0) {
	            continue;
	        }
	        c = A.back();
	        c0 = A.front();
	        
	        //manage end 
	        if(c == 0) {
	            A.pop_back();
	            A.push_front(0);
	        }
	        else {
	           if(c == 1){
	                A.pop_back();
	           }
	           else {
	               A[l]--;
	           }
	           if(mmap[c] > 1) {
	               mmap[c]--;
	           }
	           else {
	               mmap.erase(c);
	           }
	           
	           mmap[c-1]++;
	           
	           //manage beginning
	            mmap[c0 + 1]++;
	            if(c0 == 0) {
	               A.push_front(1);
	            }
	            else {
	                A[0]++;
	            }
	            if(mmap[c0] > 1) {
	                mmap[c0 ]--;
	            }
	            else {
	                  mmap.erase(c0 );
	            }
	        }
	        
	        /*for(auto v : A) {
                cout << v  ;
	        }
            cout << endl;
	        for(auto p: mmap) {
	            cout << p.first << " : " << p.second << endl;
	        }*/
	    }
	}
	
	
	return 0;
}
