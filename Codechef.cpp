#include<bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(long long i=a;i<b;i++)
#define rf(i,a,b) for(long long i=a;i>=b;i--)
#define ll long long
#define mp make_pair
#define pb push_back
#define vll vector<long long>        
#define vvl vector<vll>
#define pll pair<ll,ll>
#define vc vector
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL),cout.tie(NULL) 

int main() {
	ll t;
	cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vll a(n);
        f(i,0,n)
            cin >> a[i];
            
        sort(all(a));
        int ans = 0;
        
        f(i,1,n) {
            if(a[i] == a[i-1] ){
                ans++;
            }
        }
        if((n%2 == 0 && ans <= n/2) || (n%2 != 0 && ans <= ((n/2)+1))) {
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}
