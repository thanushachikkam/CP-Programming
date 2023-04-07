#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
int m;
cin>>m;
int b[m];
for(int i=0;i<m;i++){
	cin>>b[i];
}
int o=0;
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		int s=a[i]+b[j];
		for(int d=0;d<n;d++){
			if(s==a[d])
			break;
		}
		for(int e=0;e<m;e++){
			if(s==b[e])
			break;
		}
		cout<<a[i]<<" "<<b[j];
		o++;
		break;
		
	}
	if(o>0) break;
	
}
		
	
	
}
