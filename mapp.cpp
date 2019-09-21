#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int n,mx=-1;
int main(){

	string goal,ans="";
	while(getline(cin,goal))
	{
		
		map<char,int > m;
		for(int j=0;j<goal.size();j++)
		{
			if(goal[j]>=97&&goal[j]<=122)
			m[goal[j]]++;
			
		}
		for(int it=97;it<=122;it++)
		{
			cout<<char(it)<<":"<<m[char(it)]<<endl;
		}
		/*
		map<char, int>:: iterator it;
		for(it = m.begin(); it != m.end(); ++it){
			char key = (*it).first;
			int  value = m[key];
			cout << key << " : " << value << endl;
		}*/
		cout<<endl;
	}

	
	return 0;
}
