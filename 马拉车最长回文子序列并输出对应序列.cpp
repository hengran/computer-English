#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
using namespace std; 
	void longestPalindrome(string s) {
        int len=s.size();
        vector<char>str;
        str.push_back('&');
        int k=1;
        for(int i=0;i<len;i++){
            str.push_back('#');
            char y=s[i];
            str.push_back(y);
        }
        str.push_back('#');
        len=str.size();
        int id=0;
       string Len;
        int sum=0;
        int mx=0;
        vector<char> ans;
        for(int i=1;i<len;i++){
            if(i<mx)
            {
                int p=Len[2*id-i];
                Len[i]=min(mx-i,p);
            }
            else
            Len[i]=1;
            while(str[i-Len[i]]==str[i+Len[i]])
            Len[i]++;
            if(Len[i]+i>mx){
                mx=Len[i]+i;
                id=i;
                int p=Len[i];
                sum=max(sum,p);
                if(sum==p){
                	ans.clear();
                if(str[i]!='#'){
                    for(int j=i-Len[i]+1;j<i+Len[i];j++){
                    if(str[j]!='#'){
                    	char p=str[j];
                    	ans.push_back(p);
                    }
                    
                    }
                }
                }
                
            }
        }
        string pl;
        for(int i=0;i<ans.size();i++){
        	char an=ans[i];
        	  
        }
        cout<<pl<<endl;
    }
int main(){
	string s;
	cin>>s;
	longestPalindrome(s);
	
}
