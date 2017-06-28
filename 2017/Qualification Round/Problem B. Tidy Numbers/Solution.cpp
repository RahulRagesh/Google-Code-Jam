/*
https://code.google.com/codejam/contest/dashboard?c=3264486#s=p1
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int t,len;
	string s;
	cin>>t;
	for(int l = 1 ; l<=t ; l++){
		cin>>s;
		len = s.length();
		loop:
		for(int i = 0 ; i < len-1 ; i++){
			if(s[i] > s[i+1]){
				if(s[i] > 0){
					s[i] = s[i] - 1;
					for(int j = i+1 ; j < len ; j++){
						s[j] = '9';
					}
					goto loop;
				}
			}
		}
		stringstream geek(s);
		long long res = 0;
		geek >> res;
		cout<<"Case #"<<l<<": "<<res<<"\n";
	}
	return 0;
}
