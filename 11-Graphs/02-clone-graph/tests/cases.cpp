#define NEETCODE_GRAPH_NODE
#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s; nc::check(s.cloneGraph(nullptr)==nullptr);
    });
    nc::test("case 2", [] {
        Solution s; auto* a=new Node(1); auto* b=s.cloneGraph(a); nc::check(b && b!=a); nc::eq(b->val,1); nc::eq(b->neighbors.size(),size_t(0));
    });
    nc::test("case 3", [] {
        Solution s; vector<Node*> nodes; for(int i=1;i<=4;++i) nodes.push_back(new Node(i));
            nodes[0]->neighbors={nodes[1],nodes[3]}; nodes[1]->neighbors={nodes[0],nodes[2]}; nodes[2]->neighbors={nodes[1],nodes[3]}; nodes[3]->neighbors={nodes[0],nodes[2]};
            auto* copy=s.cloneGraph(nodes[0]); nc::check(copy && copy->val==1);
            queue<Node*> q; q.push(copy); unordered_map<int,Node*> seen; seen[1]=copy;
            while(!q.empty()){auto* v=q.front();q.pop(); nc::check(v->val>=1 && v->val<=4);
                nc::check(find(nodes.begin(),nodes.end(),v)==nodes.end(),"clone reuses an input node");
                vector<int> actual,expected; for(auto* w:nodes[v->val-1]->neighbors) expected.push_back(w->val);
                for(auto* w:v->neighbors){nc::check(w!=nullptr);actual.push_back(w->val);if(seen.count(w->val))nc::check(seen[w->val]==w,"duplicate clone for one node");else{seen[w->val]=w;q.push(w);}}
                nc::eq(nc::sorted(actual),nc::sorted(expected));} nc::eq(seen.size(),size_t(4));
            nc::eq(nodes[0]->neighbors,vector<Node*>({nodes[1],nodes[3]}));
    });
    return nc::finish();
}
