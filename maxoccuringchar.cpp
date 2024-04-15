#include <bits/stdc++.h>
using namespace std;

char getMaxOccurringChar(string str)
{ 
	unordered_map<char,int>mp;
	
	// to store length of string
	int n = str.length();
	
	// to store answer 
	char ans;
	
	// to check count of answer character is less or greater
	// than another elements count
	int cnt=0;
	
	// traverse the string 
	for(int i=0 ;i<n ; i++){
		// push element into map and increase its frequency 
		mp[str[i]]++;
		
		if(cnt < mp[str[i]]){
			ans = str[i];
			cnt = mp[str[i]];
		}
	}
	
	return ans;
}

int main()
{
	string str = "sample string";
	cout << "Max occurring character is: "
		<< getMaxOccurringChar(str);
}
