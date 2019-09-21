#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack <int> ss;
	string s;
	while(cin>>s)
	{
		if(s=="push")
		{
			int n;
			cin>>n;
			ss.push(n);
			cout<<"ok"<<endl;
		 } 
		 else if(s=="pop")
		{
			
			ss.pop();
			cout<<endl;
		 }
		/* else if(s=="back")
		{
			
			cout<<ss.<<endl;
		 }  */
		 else if(s=="size")
		 {
		 	cout<<ss.size()<<endl;
		 }
	}
}
