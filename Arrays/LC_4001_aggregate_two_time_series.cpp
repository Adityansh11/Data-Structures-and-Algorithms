// use these test cases for better understanding

// series1 =
// [[1,3]]
// series2 =
// [[2,2],[4,1],[5,2]]
// Expected
// [[1,5],[2,2],[4,1],[5,2]]

// series1 =
// [[1,3],[2,3]]
// series2 =
// [[3,2],[4,1],[5,2]]
// Expected
// [[1,5],[2,5],[3,2],[4,1],[5,2]]

// series1 =
// [[16,49]]
// series2 =
// [[16,28]]
// Expected
// [[16,77]]

class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        int n=series1.size();
        int m=series2.size();
        int i=0;
        int j=0;
        vector<vector<int>> ans;
      while(i<n && j<m){
        if(series1[i][0]==series2[j][0]){
            ans.push_back({series1[i][0],series1[i][1]+series2[j][1]});
            i++;
            j++;
        }
        else if(series1[i][0]<series2[j][0]){
            ans.push_back({series1[i][0],series1[i][1]+series2[j][1]});
            i++;
        }else{
           ans.push_back({series2[j][0],series1[i][1]+series2[j][1]});
            j++; 
        }

      }
      while(i<n){
        ans.push_back(series1[i++]);
      }
       while(j<m){
        ans.push_back(series2[j++]);
      }
        return ans;
        
    }
};