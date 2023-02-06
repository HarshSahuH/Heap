class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<vector<int>> v;
        priority_queue < pair<int,pair<int,int>> > maxh;

        int row = points.size(); 
        for(int i=0;i<row;i++){
            int key = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            maxh.push({ key,{points[i][0], points[i][1]} } );
            if(maxh.size()>k){
                maxh.pop();
            }
        }

        while(maxh.size()>0){
            
            v.push_back({maxh.top().second.first,maxh.top().second.second});
            maxh.pop();
        }
        return v;
    }
};
