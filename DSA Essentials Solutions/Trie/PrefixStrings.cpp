#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    char ch;
    unordered_map<char,node*> next;
    bool isTerminal;
    node(char a){
        ch=a;
        bool isTerminal=false;
    }
};
class Trie{
    public:
    node*root= new node('\0');
    
    void insert(string str){

        node*temp=root;
        for(int i=0; i<str.length(); i++){
           if(temp->next.count(str[i])==0){
               temp->next[str[i]]=new node(str[i]);
           }
           temp=temp->next[str[i]];
        }
        temp->isTerminal=true;
        return;
    }
    void dfs(node*temp, vector<string> &v, string word ){
        if(temp->isTerminal){
            v.push_back(word);
        }
        if(temp->next.empty()){
            return;
        }
        for(auto p:temp->next){
          word.push_back(p.first);
          dfs(temp->next[p.first],v,word);
          word.pop_back();
        }
        return;
    }

    

    vector<string> find(string str){
        vector<string> v;
        node* temp=root;
        string word="";
        for(int i=0; i<str.length(); i++){
           if(temp->next.count(str[i])==0){
               return v;
           }
           word.push_back(str[i]);
           temp=temp->next[str[i]];
        }
        if(temp->isTerminal){
            v.push_back(word);
        }
        dfs(temp,v,word);
        sort(v.begin(),v.end());
        return v;
    }

    
    

};



vector<string> findPrefixStrings(vector<string> words, string prefix){
        Trie t;
        for(auto s:words){
            t.insert(s);
        }
        vector<string> res=t.find(prefix);
        return res;
    }
