#include<bits/stdc++.h>
using namespace std;

int main()
{
	int v,e;
	cout<<"Enter the number of vertice : ";
	cin>>v;
	cout<<"Enter the number of Edge : ";
	cin>>e;
	int a[v+1][v+1];
	memset(a,0,sizeof(a));
	int x,y;
	cout<<"Enter the Connected Edge : ";
	while(e--)
	{
		cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;
	}
	int ch;
	do
	{
		cout<<"Enter the vertices for check : ";
		cin>>x>>y;
		if(a[x][y]||a[y][x])
		cout<<"Vertices are connected\n";
		else cout<<"Vertices are not connected\n";
		cout<<"Do you want to Check More : (Press 1)";
		cin>>ch;
	}while(ch==1);
	
	}
