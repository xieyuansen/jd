#include<bits/stdc++.h>
using namespace std;
set<int> &
setPlus(set<int> &A,set<int> &B){
	if(A.size()>B.size()){
		for(set<int>::iterator it=B.begin();it!=B.end();++it){
			A.insert(*it);
		}
        return A;
	}
	else{
		for(set<int>::iterator it=A.begin();it!=A.end();++it){
            B.insert(*it);
		}
	    return B;	
	}
}
int
main(){
    int a,b,tmp;
    set<int> A,B;
    while(cin>>a>>b){
        A.clear();B.clear();
        for(int i=0;i<a;++i){
            cin>>tmp;
            A.insert(tmp);
        }
        for(int i=0;i<b;++i){
            cin>>tmp;
            B.insert(tmp);
        }
        set<int> &C=setPlus(A,B);
        for(set<int>::iterator it=C.begin();it!=C.end();++it){
            cout<<*it<<' ';
        }
        cout<<endl;
    }
    return 0;
}
