#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int check =0 ;
		for(int i =0;i<s.length();i++){
			for(int j =i ;j<s.length();j++){
				if(s[i]==s[j]) check++;
			}
		}
		cout<<check<<endl;
	} 
}
