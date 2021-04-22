#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,x,y;
	cin>>n>>x>>y;
	for(int i=1;i<n;++i){
		if(i%x==0 && i%y!=0) cout<<i<<" ";
	}
}

int main(){
	int tc; cin>>tc;
	while(tc--){
		solve();
		cout<<"\n";
	}
	return 0;
}
