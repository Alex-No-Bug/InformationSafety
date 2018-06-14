#include <bits/stdc++.h>
#define ll long long
#define fir first
#define se second
using namespace std;
const int maxn=1e5+10;
const ll mod=1e9+7;
const double eps=1e-7;
vector<int > v[30];
//������ppt�ϵı�
void initiate(){
    for (int i=0;i<26;i++){
        for (int j=i;j<26;j++) v[i].push_back(j);
        for (int j=0;j<i;j++) v[i].push_back(j);
    }
}

int main(){
    initiate();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0;i<str1.size();i++){
       // cout<<str2[i%3]-'a'<<" "<<str1[i]-'a'<<endl;
       // cout<<v[str2[i%3]-'a'][str1[i]-'a']<<endl;
        cout<<(char)(v[str2[i%str2.size()]-'a'][str1[i]-'a']+'a');
    }
    cout<<endl;
    return 0;
}
