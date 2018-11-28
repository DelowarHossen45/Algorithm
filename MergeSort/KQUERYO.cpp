#include <bits/stdc++.h>
using namespace std;

int n,q, ar[30005];
vector<int> v[100005];

void build(int node ,int l ,int r )
{
	if(r == l )
	{
		v[node].push_back(ar[l]);
		return ;
	}
	int mid = (l+r)/2;
	build(2 * node, l, mid);
	build(2*node+1, mid+1, r);
	merge(v[2 * node].begin(), v[2 * node].end(), v[2 * node + 1].begin(), v[2 * node + 1].end(), back_inserter(v[node]));
}

int query(int x,int y,int k,int node ,int l ,int r )
{

	if(x > r || l > y)
		return 0;
	if(x <= l && r <= y)
	{
		return v[node].size() - (upper_bound(v[node].begin(), v[node].end(), k) - v[node].begin());
	}
	int mid = (l+r)/2;

	return query(x, y, k, 2 * node, l, mid) +
		   query(x, y, k, 2*node+1, mid+1, r) ;
}


int main()
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &ar[i]);

	build(1,0,n-1);
	scanf("%d", &q);

	int prev = 0;
	while(q--)
	{
		int a,b,c;
		scanf("%d%d%d", &a, &b, &c);
		int i = a^prev;
		int j = b^prev;
		int k = c^prev;

		prev = query(i-1,j-1,k,1,0,n-1);
		printf("%d\n", prev);
	}
	return 0;
}
