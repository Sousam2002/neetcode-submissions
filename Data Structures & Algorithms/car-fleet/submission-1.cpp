class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>v;

        for(int i=0; i< position.size(); i++){
            v.push_back({position[i], speed[i]});
        }

        sort(v.rbegin(), v.rend());
        stack<double>s;
        s.push((double)(target - v[0].first)/v[0].second);

        for(int i=1; i< v.size(); i++){
            double time = (double)(target - v[i].first)/v[i].second;
            cout << time << '\n';
            if(time > s.top()) s.push(time); 
        }

        return s.size();
    }
};
