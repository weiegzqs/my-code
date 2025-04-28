#include<iostream>
using namespace std;
int longth[100005];
int idx;
int wei;
long long ans;
int main()
{
	string s;
	cin>>s;
	int len=s.size();
	for (int i=1;i<len;i++)
	{
		if (s[i]==s[i-1]||s[i]==s[i-1]+1) continue;
		longth[++idx]=i-wei;
		wei=i;
	}
	longth[++idx]=len-wei;
	for (int i=1;i<=idx;i++)
	{
		ans+=(long long)longth[i]*(longth[i]-1)/2+longth[i];
		ans+=(long long)longth[i]*longth[i-1];
	}
	cout<<ans<<endl;
	return 0;
}
