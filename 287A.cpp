#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int main(){
	int n=0,k=0;
	cin>>n>>k;
	vector<int> V(n);
	vector<int> R(n);
	vector<int> Ans;
	int ans=0;
	int it;
	vector<int>::iterator itr;
	for(int i=0;i<n;i++){
		cin>>V[i];
		R[i]=V[i];
	}
	sort(V.begin(),V.end());
	int j=0;
	for(int i=0;i<n;i++){
		if(V[i]<=k){
			k-=V[i];
			itr=find (R.begin(), R.end(), V[i]);
			it = itr-R.begin();
			Ans.push_back(it+1);
			R.erase(itr);
			R.insert(itr,0);
		}
	}
	cout<<Ans.size()<<endl;
	for(int i=0;i<Ans.size();i++){
		cout<<Ans[i]<<" ";
	}
	if(Ans.size()>0)
	cout<<endl;
	return 0;
}