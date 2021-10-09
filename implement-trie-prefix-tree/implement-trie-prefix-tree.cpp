class Trie {
public:
    Trie* child[26] = {};
     bool isWord  = false;
    Trie() {
        // isWord = false;
        // for(auto i : child)
        //     i = nullptr;
    }
    
    void insert(string word) {
        
        Trie* cur = this;
        for(auto c : word)
        {
            c -= 'a';
            if(cur->child[c] == nullptr)
            {
                cur->child[c] = new Trie();
            }
            cur = cur->child[c];
        }
        cur->isWord = true;
    }
    
    bool search(string word) {
        Trie* cur = this;
        for(auto c : word)
        {
            c -= 'a';
            if(cur->child[c] == nullptr)
                return false;
            cur = cur->child[c];
        }
        return cur->isWord;
        
    }
    
    bool startsWith(string prefix) {
        Trie* cur = this;
        for(auto c : prefix)
        {
            c -= 'a';
            if(cur->child[c] == nullptr)
                return false;
            cur = cur->child[c];
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */