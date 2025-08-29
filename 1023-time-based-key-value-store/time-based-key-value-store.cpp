class TimeMap {
private:
    map<string, vector<pair<int, string>> > time_map;

public:
    TimeMap() {
        time_map = {};
    }
    void set(string key, string value, int timestamp) {
        time_map[key].push_back({timestamp, value});
    }
    string get(string key, int timestamp) {
        int n = time_map[key].size();
        int left = 0, right = n-1, mid, index = -1;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (time_map[key][mid].first <= timestamp) index = mid;
            
            if (time_map[key][mid].first < timestamp) {
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        if (index == -1) {
            return "";
        } else {
            return time_map[key][index].second;
        }
    }
};

