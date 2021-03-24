# computer-English
##  Introduction
click here [Introduction](iNTRO.md)。
## The test uses local images
![picture](001.png)
## The test uses linked images
[![baidu](baidu.png)](https://baidu.com.cn)
### arithmetic
    
> The horse-drawn carriage algorithm reduces the time complexity of solving the longest echo substring to O(N), although it also sacrifices part of the space, and its space complexity is O(N), but the cleverness of its algorithm is still worth learning and reference
> 
>test  <br> 

<hr/>

The horse-drawn carriage algorithm reduces the time complexity of solving the longest echo substring to **O(N)**, although it also *sacrifices part of the space*, and its space complexity is O(N), but the cleverness of its algorithm is still worth learning and reference

<hr/>  


###  steps

| one | two | there |
| ------ | ------ | ------ |
| becomes an odd(~~even~~) string | Loop through each character to find the **maximum radius** |get the *result* |

### The main algorithm
- Hash
- KMP
- manacher  
1.EX_KMP
2.SAM
_________________________________________________________________________________________________________________________________________________________________________________
#### main code

 ``` C++
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
    ```

    
    
    




