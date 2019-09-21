#include <iostream>
#include <algorithm> 
using namespace std;

const int MAX_SIZE = 100001; 
long long int dp[MAX_SIZE][2];
 
void input(int *a, int *b, int size) {
    for(int i = 1; i <= size; ++i) {
        cin >> a[i];
    }
    for(int i = 1; i <= size; ++i)
    {
    	cin>> b[i];
    }
}
 
void solve1(int *array1, int *array2, int size) {
    
    for (int i = 1; i <= size; i++)
    {
    	dp[i][1] = max(dp[i - 1][2] + array1[i], dp[i - 1][1]);
    	dp[i][2] = max(dp[i - 1][1] + array2[i], dp[i - 1][2]);
    }
 
    cout << max(dp[size][1], dp[size][2]) << endl;
}
 
int main() {
    int a[MAX_SIZE], b[MAX_SIZE], n; 
    cin >> n;
    input(a,b,n);
    solve1(a,b,n);
    return 0;
}