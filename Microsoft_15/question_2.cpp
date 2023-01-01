class Solution {
private:
        vector<vector<int>> ans;
public:
    void solve(vector<int>& c, int k , int t ,int i ,vector<int> a){
        if(t == 0 && k ==0){
            ans.push_back(a);
            return;
        }
        if(t < 0 || i >= c.size() || k <0){
            return;
        }
        a.push_back(c[i]);
        solve(c , k-1, t-c[i] , i+1 ,a);
        a.pop_back();
        solve(c , k,t , i+1 , a);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v = {1,2,3,4,5,6,7,8,9};
        vector<int> a;
        solve(v , k ,n, 0 , a);
        return ans;
    }
};