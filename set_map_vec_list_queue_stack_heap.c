//set: only key
unordered_set <string> stringset;
stringset.insert("key");


//map: key+value
map<string, int>;
unordered_map<string, int> umap;
umap["Name"]=Key;
umap.insert(make_pair("e, 2.718"));
umap.insert({4,5});


//vecter: 连续的mem;
vector<int> v={7,4,43,15};
v.push_back(25);
v[2]=5;


//list: 不连续的mem;
list<int> l={1,2,3,4,5}
l.push_front(25);
l.push_back(13);
auto it=std::find(l.begin(); l.end(); 16);
if(it!=l.end())l.insert(it, 42);


//dequeue:
deque <int> gquiz;
gquiz.push_back();
gquiz.push_front();

queue <int> gquiz;
gquiz.push(key);
gquiz.back();
gquiz.pop();



//stack:
stack <int> s;
s.push(key);
s.pop();


//heap:
#include<iostream> 
#include<algorithm> // for heap  
#include<vector> 
using namespace std; 
  
// comparator function to make min heap 
struct greaters{ 
  bool operator()(const long& a,const long& b) const{ 
    return a>b; 
  } 
}; 
  
int main() 
{ 
    // initializing vector; 
    vector<int> vi = { 15, 6, 7, 9, 11, 45 }; 
      
    // using make_heap() to transform vector into 
    // a min heap 
    make_heap(vi.begin(),vi.end(), greaters()); 
      
    // checking if heap using  
    // front() function 
    cout << "The minimum element of heap is : "; 
    cout << vi.front() << endl; 
      
} 






