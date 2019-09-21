#include<iostream>
using namespace std;
int g,b,n,k;
int x1,x2,x3,y1,y2,y3;
void solve1()
{
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	cout<<3<<endl;
	cout<<x2-x1+x3<<" "<<y2-y1+y3<<endl;
	cout<<x1-x2+x3<<" "<<y1-y2+y3<<endl;
	cout<<x2-x3+x1<<" "<<y2-y3+y1<<endl;

}
int main()
{
	solve1();
	return 0;
}