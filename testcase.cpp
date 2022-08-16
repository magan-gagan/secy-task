#include<bits/stdc++.h>
using namespace std; 
class Solution{
    public:
  void frequencyCount(vector<int>& arr,int N, int P)
    {  map<int,int> mp;
        vector<int> v;
     for(int i=0;i<N;i++){
            
                mp[arr[i]]++;
            
        }
     
        
        for(int i=1;i<=N;i++){
            if(mp.find(i)!=mp.end()){
                arr[i-1]=mp[i];
            }
            else{
                arr[i-1]=0;
            }
                  }
        
    }
};
int main() 
{ 
	long long t;
		cin >> t;
	
	while(t--){
	    
	    int N, P;
    cin >> N; 
	    
	    vector<int> arr(N);
    
     for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
    	ob.frequencyCount(arr, N, P); 
		 for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}
