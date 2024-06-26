class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
            map<int,int>mp;
            for(int i=0;i<arr1.size();i++)
            {
                mp[arr1[i]]++;	
            }   
            vector<int>ans;
            int idx=0;
            while(idx<arr2.size())
            {
                int currele=arr2[idx];
                int freq=mp[currele];
                while(freq)
                {
                    ans.push_back(currele);
                    freq--;
                }
                mp.erase(currele);
                idx++;
            }         
            for(auto it=mp.begin();it!=mp.end();it++)
            {
                int currele=it->first;
                int freq=it->second;
                while(freq)
                {
                    ans.push_back(currele);
                    freq--;
                }
                mp.erase(currele);
            }
            return ans;  
    }
};