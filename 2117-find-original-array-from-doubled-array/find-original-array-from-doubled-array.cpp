class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(),changed.end());
        int siz=changed.size();
vector<int> original;
unordered_map<int,int> umap;
if(siz%2==1)
return {};
for(auto num: changed){
    umap[num]++;
}
        for(int i=0;i<siz;i++){
            
            if(umap[changed[i]]==0)
            continue;
            if(umap[changed[i]*2]==0) return {};
            original.push_back(changed[i]);
            umap[changed[i]]--;
            umap[changed[i]*2]--;
        }
        return original;
    }
};