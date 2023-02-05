class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
         vector<int> res;
         priority_queue<pair<int,int>> maxh;
        
         // traverse the array
         for(int i=0;i<arr.size();i++)
         {
           int key=abs(arr[i]-x);
           maxh.push({key,arr[i]});
            
           if(maxh.size()>k)  maxh.pop();
         }
    
        while(maxh.size()>0){
            res.push_back(maxh.top().second);
            maxh.pop();
        }


        // this is because we have to return res in ascending order 
        sort(res.begin(),res.end());
        return res;
    }
};
