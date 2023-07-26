class Solution {
public:
    string longestCommonPrefix(vector<string>& x) {
    if(x.empty()) return "";
    if(x.size() == 1) return x[0];
	vector <string> l,r;
	for(int i=0;i<x.size()/2;i++) l.push_back(x[i]);
	for(int i=x.size()/2;i<x.size();i++) r.push_back(x[i]);
	string a = longestCommonPrefix(l);
	string b = longestCommonPrefix(r);
	string c = "";
	int i = 0;
	while(i<a.size() && i<b.size() && a[i] == b[i]){
        c = c + a[i];
		i++;
	}
	return c;

    }
};
