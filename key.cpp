#include <bits/stdc++.h>
#define ll long long
#define fir first
#define se second
using namespace std;
vector<char> v[30];
const int maxn=1e5+10;
char str[maxn];
char str1[maxn];
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    gets(str);
    cin>>str1;
    string temp;
    temp.clear();
    int len=strlen(str);
    int len1=strlen(str1);
    for (int i=0;i<len;i++){
        if (str[i]==' '||str[i]=='.'||str[i]==',') continue;
        temp+=str[i];
    }
    for (int i=0;i<temp.size();i++){
        v[str1[i%len1]-'a'].push_back(temp[i]);
    }
    for (int i=0;i<26;i++){
        if (v[i].size()==0) continue;
        for (int j=0;j<v[i].size();j++) cout<<v[i][j];
        cout<<endl;
    }
    return 0;
}
