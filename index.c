#include <iostream>
using namespace std;

int main() {
	int n=2,i,a[50];
	for(i=0;i<=n;i++)
	{
        cin>>a[i];
	}
	for(i=0;i<=n;i++)
	{
	cout<<i<<'\t'<<a[i]<<'\n';
	}
	return 0;
}
