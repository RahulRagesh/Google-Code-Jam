/*
https://code.google.com/codejam/contest/dashboard?c=3264486
*/
#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main() {
	int n,k,t;
	char s[1000];
	cin>>t;
	for(int i = 1 ; i <= t ; i++){
	    cin>>s>>k;
	    n = strlen(s);
	    int count = 0;
	    int flag = 1;
	    for(int j = 0 ; j < n- k + 1 ; j++){
			if(s[j]=='-'){
				count++;
				for(int l = 0 ; l < k ; l++ ){
					if(s[j+l] == '+')
						s[j+l] = '-';
					else
						s[j+l] = '+';
				}
			}
	    }
	    for(int j = n-k+1 ; j < n ; j++){
	    	if(s[j]=='-'){
	    		printf("Case #%d: IMPOSSIBLE\n",i);
	    		flag = 0;
	    		break;
	    	}
	    }
	    if(flag == 1)
	    	printf("Case #%d: %d\n",i,count);
	}
	return 0;
}
