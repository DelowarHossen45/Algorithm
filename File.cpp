#include<bits/stdc++.h>
using namespace std;
int main()
{
	string word;
	fstream write;
	ifstream read;
	write.open("file.txt",ios::in|ios::out|ios::app);
	getline(cin,word);
	write<<word;
	write>>word;
	cout<<word;
}
