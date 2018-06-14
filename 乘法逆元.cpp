#include <bits/stdc++.h>
#define ll long long
#define fir first
#define se second
using namespace std;

ll searchNumber(ll a,ll b){
    return (b==0?a:searchNumber(b,a%b));
}
//����ŷ������
ll B(ll n){
    ll resssss=n;
    for (ll i=2;i*i<=n;i++){
        if (n%i==0){
            resssss/=i;
            resssss*=(i-1);
            while (n%i==0) n/=i;
        }
    }
    if (n>1){
        resssss/=n;
        resssss*=(n-1);
    }
    return resssss;
}
//������
ll qpow(ll a,ll b,ll p){
    ll resssss=1;
    while (b){
        if (b&1) resssss=resssss*a%p;
        b>>=1;
        a=a*a%p;
    }
    return resssss;
}
int main(){
    freopen("inv.txt","w",stdout);
    ll a,p;
    cin>>a>>p;
    if (searchNumber(a,p)!=1){
        printf("searchNumber!=1\n");
        return 0;
    }
    ll resssss=qpow(a,B(p)-1,p);
    printf("ans=%lld\n",resssss);
    return 0;
}
