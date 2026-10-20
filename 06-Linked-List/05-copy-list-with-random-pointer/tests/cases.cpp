#define NEETCODE_RANDOM_NODE
#include "../../../misc/include/test.hpp"
#ifdef NEETCODE_REFERENCE
#include "../misc/reference.hpp"
#else
#include "../solution.cpp"
#endif

int main() {
    nc::test("case 1", [] {
        Solution s; nc::eq(s.copyRandomList(nullptr),static_cast<Node*>(nullptr));
    });
    nc::test("case 2", [] {
        Solution s; auto* a=new Node(1); a->random=a; auto* b=s.copyRandomList(a); nc::check(b && b!=a); nc::eq(b->val,1); nc::eq(b->next,static_cast<Node*>(nullptr)); nc::check(b->random==b); nc::check(a->random==a && !a->next);
    });
    nc::test("case 3", [] {
        Solution s; vector<Node*> a; for(int v:{7,13,11,10,1}) a.push_back(new Node(v));
            for(int i=0;i<4;++i) a[i]->next=a[i+1]; vector<int> r={-1,0,4,2,0};
            for(int i=0;i<5;++i) if(r[i]>=0) a[i]->random=a[r[i]];
            auto* node=s.copyRandomList(a[0]); vector<Node*> b;
            while(node && b.size()<6){b.push_back(node);node=node->next;} nc::eq(b.size(),size_t(5)); nc::check(node==nullptr);
            for(int i=0;i<5;++i){nc::check(find(a.begin(),a.end(),b[i])==a.end(),"copy must use new nodes"); nc::eq(b[i]->val,a[i]->val); nc::check(b[i]->random==(r[i]<0?nullptr:b[r[i]])); nc::check(a[i]->next==(i==4?nullptr:a[i+1])); nc::check(a[i]->random==(r[i]<0?nullptr:a[r[i]]));}
    });
    return nc::finish();
}
