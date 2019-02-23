#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
	long T;
	long S, E, L, R ;
	string sS , sE;
	long d;
	int cnt,dur;
	map<string, int> days = {{ "saturday",1}, 
	    {"sunday",2},
	    {"monday",3},
	    {"tuesday",4},
	    {"wednesday",5},
	    {"thursday",6},
	    {"friday",7}};
	
	cin >> T;
	while(T--){
	    cin >> sS >> sE >> L >> R;
	    S = days[sS];
	    E = days[sE];
	    d = E < S? E+8-S:E-S+1;
	    cnt = 0;
	    if(R < d){
	        cout << "impossible" << endl;
	    }
	    else {
	        if(L <= d) {
	            dur = d;
	            cnt++;
	        }
	        else {
	            if((L-d)%7 == 0) {
	                dur = L;
	                cnt++;
	            }
	            else {
	                dur = L + (7 -((L-d)%7));
	                if(dur <= R) {
	                    cnt++;
	                }
	                else {
	                    cout << "impossible" << endl;
	                }
	            }
	        }
	        if(cnt==1 && dur+7 <=R) {
	            cout << "many" << endl;
	        }
	        else if(cnt == 1) {
	            cout << dur << endl;
	        }
	    }
	}
	
	return 0;
}
