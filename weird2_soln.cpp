#include <bits/stdc++.h>
using namespace std;

unsigned long A[1000005];

int main() {
	// your code goes here
	
	ios::sync_with_stdio(false);
	
	int tc, T;
	
	int N;
	
	int i, j;
	
	map<unsigned long, unsigned long> mmap;
	map<unsigned long, unsigned long>::iterator it, it0;
	
	unsigned long result = 0;
	
	cin >> T;
	
	for(tc = 0; tc < T; ++tc){
		cin >> N;
		result = 0;
		
		for(i = 0; i < N; ++i){
			cin >> A[i];
			//cout << A[i] << " ";
			it = mmap.find(A[i]);
			if(it == mmap.end()) {
				mmap[A[i]] = 1;
			}
			else {
				mmap[A[i]]++;
			}
			if(mmap[A[i]] == A[i]){
				//cout << A[i] << " : " << mmap[A[i]] << endl;
				result++;
			}
		}
		
		for(it=mmap.begin(); it!=mmap.end(); ++it){
			it0 = it;
			++it0;
			for(; it0!=mmap.end(); ++it0) {
				if(it0->first > it->second) {
					break;
				}
				if((it->first <= it0->second) && (it0->first <= it->second)) {
					//cout << it->first << " : " << it-> second << endl;
					//cout << it0->first << " : " << it0-> second << endl;
					result += 2;
				}
			}
		}
		
		mmap.clear();
		
		cout << result <<endl;
		
	}
	
	
	return 0;
}
