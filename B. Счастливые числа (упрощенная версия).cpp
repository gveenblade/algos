#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long n;
vector<long long> v;
long long inf=(long long) 1e11;
bool check(long long x){

  	long long k=0,l=0;
  	while(x!=0){
        if(x%10==4) k++;
        if(x%10==7) l++;
        x/=10;
  	}
  	if(k==l) return true;
  	else return false;
  }
void go(long long k){
	if(check(k)) v.push_back(k);
    if(k * 10 + 4 <= inf) go(k * 10 + 4);
    if(k * 10 + 7 <= inf) go(k * 10 + 7);
}

int main(){
	long long x;
    cin>>n;
   go(4);
   go(7);
   sort(v.begin(),v.end());

   for(int i=0; i<v.size(); i++){
   	if(v[i] >= n){
   		x = v[i];
   		break;
   	}
   }
   cout<<x;
		return 0;
}