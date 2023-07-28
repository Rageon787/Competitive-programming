 class TrieNode {
    public:
    map<char,TrieNode*> child;  
    bool EndofWord = false; 
};
class Trie {
public:
    TrieNode* root; 
    Trie() 
    {
        root = new TrieNode();  
    }

    string longestPrefix(string s)
    {
        TrieNode* node = root; 
        string ans = ""; 
        for(int i=0;i<s.size();i++)
        {
            if(node->child.size() == 1)
            {
                ans += s[i]; 
                node = node->child[s[i]]; 
            } 
            else break; 
        }
        return ans; 
    }
    void insert(string word) 
    {
        TrieNode* node = root; 
        for(int i=0;i<word.size();i++)
        {
            if(node->child[word[i]] == NULL) node->child[word[i]] = new TrieNode();
            node = node->child[word[i]];  
        }
        node->EndofWord = true; 
    }
    
    bool search(string word) 
    {
        TrieNode* node = root; 
        for(int i=0;i<word.size();i++)
        {
            if(node->child[word[i]] == NULL) return false; 
            node = node->child[word[i]]; 
        }
        return (node->EndofWord); 
    }
    
    bool startsWith(string prefix) 
    {
        TrieNode* node = root; 
        for(int i=0;i<prefix.size();i++) 
        {
            if(node->child[prefix[i]] == NULL) return false; 
            node = node->child[prefix[i]]; 
        }
        return true; 
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        Trie* trie = new Trie(); 
        int smallestStringSize = INT_MAX;
        string smallestString = ""; 
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size() < smallestStringSize) 
            {
                smallestStringSize = strs[i].size(); 
                smallestString = strs[i]; 
            }
        }
        for(int i=0;i<strs.size();i++) trie->insert(strs[i]);
        return trie->longestPrefix(smallestString); 
    }
};


 
