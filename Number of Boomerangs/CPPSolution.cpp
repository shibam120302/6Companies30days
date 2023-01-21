class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        
        int n = points.size();
        int ans = 0;
        if(n < 3){
            return ans;
        }
        for(int i=0;i<n;i++){
            map<int,int>m;
            for(int j=0;j<n;j++){
                  
                int dis = (points[i][0] - points[j][0])*(points[i][0] - points[j][0]) + (points[i][1] - points[j][1])*(points[i][1] - points[j][1]);
                
                m[dis]++;
                
            }
            
            for(auto x : m){
                ans += (x.second * (x.second-1));
            }
            
        }
        
        return ans;
    }
};
