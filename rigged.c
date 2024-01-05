#include <bits/stdc++.h>
using namespace std;

void printv(const vector<int> &a){
    for(int p : a) cout << p << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// now i'll write note of stl
// vector
// and all method of vector
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    printv(v);

    vector<int> v2(3, 50);
    cout << "v2 \n";
    printv(v2);

    vector<int> v3(v2.begin(), v2.end());
    cout << "v3 \n";
    printv(v3);

    vector<int> v4(v3);
    cout << "v4 \n";
    printv(v4);

    int a[] = {1, 2, 3, 4, 5};
    vector<int> v5(a, a+sizeof(a)/sizeof(int));
    printv(v5);

    cout << v5.size() << "\n";

    cout << v5.capacity() << " capacity \n";

    cout << v5.max_size() << " max size \n";

    cout << v5.empty() << " empty \n";

    v5.resize(10);

    v5.resize(20, 100);
    cout << "line 48 \n";
    printv(v5);

    v5.reserve(100);

    cout << v5.capacity() << "\n";

    for(int i=0; i<10; i++) v5.push_back(i+1);

    printv(v5);

    cout << v5.size() << "\n";

    // now write more method of vector

    v5.pop_back();

    printv(v5);

    cout << v5.size() << "\n";

    cout << v5.front() << "\n";

    cout << v5.back() << "\n";

    cout << v5.at(3) << "\n";

    cout << v5[3] << "\n";

    cout << v5[10] << "\n";

    cout << v5[11] << "\n";


    // now write more method of vector

    vector<int> v6(10, 3);

    printv(v6);

    v6.clear();

    printv(v6);

    v6.assign(5, 10);

    printv(v6);


    // now write another stl container
    // deque

    deque<int> d;

    d.push_back(1);

    d.push_front(2);

    d.push_back(3);

    d.push_front(4);

    for(int i=0; i<d.size(); i++) cout << d[i] << " ";

    cout << "\n";

    d.pop_back();

    d.pop_front();

    for(int i=0; i<d.size(); i++) cout << d[i] << " ";

    cout << "\n";

    cout << d.front() << "\n";

    cout << d.back() << "\n";

    // now write another stl container 
    // list

    list<int> l;

    l.push_back(1);

    l.push_front(2);

    l.push_back(3);

    l.push_front(4);

    for(auto it=l.begin(); it!=l.end(); it++) cout << *it << " ";

    cout << "\n";

    l.pop_back();

    l.pop_front();

    for(auto it=l.begin(); it!=l.end(); it++) cout << *it << " ";

    cout << "\n";

    cout << l.front() << "\n";

    cout << l.back() << "\n";

    // now write another stl container
    // stack

    stack<int> s;

    s.push(1);

    s.push(2);

    s.push(3);  

    cout << s.size() << "\n";

    cout << s.top() << "\n";

    s.pop();

    cout << s.top() << "\n";

    // now write another stl container
    // queue

    queue<int> q;

    q.push(1);

    q.push(2);

    q.push(3);

    cout << q.size() << "\n";

    cout << q.front() << "\n";

    cout << q.back() << "\n";

    q.pop();

    cout << q.front() << "\n";

    // now write another stl container

    // priority_queue

    priority_queue<int> pq;

    pq.push(1);

    pq.push(2);

    pq.push(3);

    cout << pq.size() << "\n";

    cout << pq.top() << "\n";

    pq.pop();

    cout << pq.top() << "\n";

    // now write another stl container

    // set

    set<int> st;

    st.insert(1);

    st.insert(2);

    st.insert(3);

    st.insert(4);

    st.insert(5);

    // now write more usage of set

    cout << st.size() << "\n";

    cout << st.count(1) << "\n";

    cout << st.count(2) << "\n";

    cout << st.count(3) << "\n";

    cout << st.count(4) << "\n";

    // more usage of set

    set<int>::iterator it = st.find(3);

    cout << *it << "\n";

    set<int>::iterator it2 = st.find(4);

    cout << *it2 << "\n";

    set<int>::iterator it3 = st.find(5);

    cout << *it3 << "\n";

    // more usage of set

    set<int>::iterator it4 = st.lower_bound(5);

    cout << *it4 << "\n";

    set<int>::iterator it5 = st.upper_bound(5);

    cout << *it5 << "\n";

    //now write another stl container

    // multiset

    multiset<int> ms;

    ms.insert(1);

    ms.insert(2);

    ms.insert(2);

    ms.insert(3);

    // now write more usage of multiset

    cout << ms.size() << "\n";

    cout << ms.count(1) << "\n";

    cout << ms.count(2) << "\n";

    cout << ms.count(3) << "\n";

    // more usage of multiset

    multiset<int>::iterator it6 = ms.find(2);

    cout << *it6 << "\n";

    multiset<int>::iterator it7 = ms.find(3);

    cout << *it7 << "\n";

    // more usage of multiset

    multiset<int>::iterator it8 = ms.lower_bound(2);

    cout << *it8 << "\n";

    multiset<int>::iterator it9 = ms.upper_bound(2);

    cout << *it9 << "\n";

    // now write another stl container

    // map

    map<int, int> mp;

    mp[1] = 100;

    mp[2] = 200;    

    mp[3] = 300;

    mp[4] = 400;

    // now write more usage of map

    cout << mp.size() << "\n";

    cout << mp.count(1) << "\n";

    cout << mp.count(2) << "\n";

    cout << mp.count(3) << "\n";

    cout << mp.count(4) << "\n";

    // more usage of map

    map<int, int>::iterator it10 = mp.find(2);

    cout << it10->first << " " << it10->second << "\n";         

    map<int, int>::iterator it11 = mp.find(3);

    cout << it11->first << " " << it11->second << "\n";

    // more usage of map

    map<int, int>::iterator it12 = mp.lower_bound(2);

    cout << it12->first << " " << it12->second << "\n";

    map<int, int>::iterator it13 = mp.upper_bound(2);

    cout << it13->first << " " << it13->second << "\n";

    // now write another stl container

    // multimap

    multimap<int, int> mmp;

    mmp.insert(make_pair(1, 100));

    mmp.insert(make_pair(2, 200));

    mmp.insert(make_pair(2, 300));

    mmp.insert(make_pair(3, 400));

    // now write more usage of multimap

    cout << mmp.size() << "\n";

    cout << mmp.count(1) << "\n";

    cout << mmp.count(2) << "\n";

    cout << mmp.count(3) << "\n";

    // more usage of multimap

    multimap<int, int>::iterator it14 = mmp.find(2);

    cout << it14->first << " " << it14->second << "\n";

    multimap<int, int>::iterator it15 = mmp.find(3);

    cout << it15->first << " " << it15->second << "\n";

    // more usage of multimap

    multimap<int, int>::iterator it16 = mmp.lower_bound(2);

    cout << it16->first << " " << it16->second << "\n";

    multimap<int, int>::iterator it17 = mmp.upper_bound(2);

    cout << it17->first << " " << it17->second << "\n";

    // now write another stl container

    // unordered_set

    unordered_set<int> ust;

    ust.insert(1);

    ust.insert(2);

    ust.insert(3);

    ust.insert(4);

    // now write more usage of unordered_set

    cout << ust.size() << "\n";

    cout << ust.count(1) << "\n";

    cout << ust.count(2) << "\n";

    cout << ust.count(3) << "\n";

    cout << ust.count(4) << "\n";

    // more usage of unordered_set

    unordered_set<int>::iterator it18 = ust.find(2);

    cout << *it18 << "\n";

    unordered_set<int>::iterator it19 = ust.find(3);

    cout << *it19 << "\n";

    // now write another stl container

    // unordered_multiset

    unordered_multiset<int> umst;

    umst.insert(1);

    umst.insert(2);

    umst.insert(2);

    umst.insert(3);

    // now write more usage of unordered_multiset

    cout << umst.size() << "\n";

    cout << umst.count(1) << "\n";

    cout << umst.count(2) << "\n";

    cout << umst.count(3) << "\n";

    // more usage of unordered_multiset

    unordered_multiset<int>::iterator it20 = umst.find(2);

    cout << *it20 << "\n";

    unordered_multiset<int>::iterator it21 = umst.find(3);

    cout << *it21 << "\n";

    // now write another stl container

    // unordered_map

    unordered_map<int, int> ump;

    ump[1] = 100;

    ump[2] = 200;

    ump[3] = 300;

    ump[4] = 400;

    // now write more usage of unordered_map

    cout << ump.size() << "\n";

    cout << ump.count(1) << "\n";

    cout << ump.count(2) << "\n";

    cout << ump.count(3) << "\n";

    cout << ump.count(4) << "\n";

    // more usage of unordered_map

    unordered_map<int, int>::iterator it22 = ump.find(2);

    cout << it22->first << " " << it22->second << "\n";

    unordered_map<int, int>::iterator it23 = ump.find(3);

    cout << it23->first << " " << it23->second << "\n";

    // now write another stl container

    // unordered_multimap

    unordered_multimap<int, int> ummp;

    ummp.insert(make_pair(1, 100));

    ummp.insert(make_pair(2, 200));

    ummp.insert(make_pair(2, 300));

    ummp.insert(make_pair(3, 400));

    // now write more usage of unordered_multimap

    cout << ummp.size() << "\n";

    cout << ummp.count(1) << "\n";  

    cout << ummp.count(2) << "\n";

    cout << ummp.count(3) << "\n";

    // more usage of unordered_multimap

    unordered_multimap<int, int>::iterator it24 = ummp.find(2);

    cout << it24->first << " " << it24->second << "\n";

    unordered_multimap<int, int>::iterator it25 = ummp.find(3);

    cout << it25->first << " " << it25->second << "\n";

    // now write another stl container

    // pair

    pair<int, int> p;

    p.first = 1;

    p.second = 2;

    cout << p.first << " " << p.second << "\n";

    pair<int, int> p2 = make_pair(3, 4);

    cout << p2.first << " " << p2.second << "\n";

    // now write another stl container

    // bitset

    bitset<10> b;
    b[1] = 1;
    b[3] = 1;
    b[4] = 1;
    b[7] = 1;

    cout << b[1] << "\n";
    cout << b[2] << "\n";
    cout << b[3] << "\n";
    cout << b[4] << "\n";
    cout << b[5] << "\n";
    cout << b[6] << "\n";
    cout << b[7] << "\n";
    cout << b[8] << "\n";
    cout << b[9] << "\n";

    // now write more about bitset

    cout << b.size() << "\n";

    cout << b.count() << "\n";

    cout << b.size() - b.count() << "\n";

    // now write another stl container

    // string

    string s1 = "hello";
    string s2 = "world";
    string s3 = s1 + " " + s2;
    cout << s3 << "\n";
    cout << s3.size() << "\n";
    cout << s3.length() << "\n";
    cout << s3.substr(0, 5) << "\n";
    cout << s3.substr(6, 5) << "\n";
    cout << s3.find("hello") << "\n";
    cout << s3.find("world") << "\n";
    cout << s3.find("hello world") << "\n";
    cout << s3.find("hello world!") << "\n";
    cout << s3.find("hello world!!") << "\n";
    cout << s3.find("hello world!!!") << "\n";

    // more about it

    cout << s3.find("hello") << "\n";

    cout << s3.find("world") << "\n";

    // more about it

    // now write another stl container

    // algorithm

    int arr[] = {1, 2, 3, 4, 5};

    reverse(arr, arr+5);
    cout << "reverse \n";
    for(int i=0; i<5; i++) cout << arr[i] << " ";
    cout << "\n";

    int arr2[] = {1, 2, 3, 4, 5};
    rotate(arr2, arr2+2, arr2+5);
    cout << "rotate \n";
    for(int i=0; i<5; i++) cout << arr2[i] << " ";
    cout << "\n";

    int arr3[] = {1, 2, 3, 4, 5, 6};
    int cnt = 0;
    cout << "next_permutation \n";
    do{
    	for(int i=0; i<(sizeof(arr3)/sizeof(arr3[0])); i++)++cnt, cout << arr3[i] << " ";
    	cout << "\n" ;
    }while(next_permutation(arr3, arr3+(sizeof(arr3)/sizeof(arr3[0]))));
    cout << "\n" << cnt/6 << "\n";
    
    // print factorial of n
    int n = 6;
    int fact = 1;
    for(int i=1; i<=n; i++) fact *= i;
    cout << fact << "\n";


    int arr4[] = {1, 2, 3, 4, 5};
    prev_permutation(arr4, arr4+5);
    cout << "prev_permutation \n";
    for(int i=0; i<5; i++) cout << arr4[i] << " ";
    cout << "\n";

    int arr5[] = {1, 6,7, 3, 5, 8, 2, 6};
    sort(arr5, arr5+(sizeof(arr5)/sizeof(arr5[0])));
    cout << "sorted array \n";
    for(int i=0; i<sizeof(arr5)/sizeof(arr5[0]); i++) cout << arr5[i] << " ";
    cout << "\n";

    int arr6[] = {1, 2, 3, 4, 5};
    random_shuffle(arr6, arr6+5);
    cout << "random_shuffle \n";
    for(int i=0; i<5; i++) cout << arr6[i] << " ";
    cout << "\n";


    // now write another stl container

    // iterator

    vector<int> v7;

    v7.push_back(1);
    v7.push_back(2);
    v7.push_back(3);
    v7.push_back(4);

    // now write more about iterator

    vector<int>::iterator it26 = v7.begin();
    cout << *it26 << "*it26 \n";

    //mina mina mina I like someone I gonna spend whole life with her. I will not replace her. This is my promise to her. She is the cutest, sweetest, prettiest girl ever seen. I am lucky to have her in my life.  Her smile I see something more beautiful than the stars. I love her more than I can express or can ever hope to express. 
    //Her voice is music to my ears and 

    vector<int>::iterator it27 = v7.end();
    cout << *it27 << " *it27 \n";

    vector<int>::iterator it28 = v7.begin();
    it28++;
    cout << *it28 << " *it28\n";

    // more about iterator

    vector<int>::iterator it29 = v7.begin();

    it29 += 2;

    cout << *it29 << " *it29 \n";

    // next_permutation

    vector<int> v8;

    v8.push_back(1);
    v8.push_back(2);
    v8.push_back(3);

    // now write more about next_permutation

    cout << "next_permutation \n";
    do{

        //for(int i=0; i<v8.size(); i++) cout << v8[i] << " ";
    	for(auto i: v8) cout << i << " ";
        cout << "\n";
        
    }while(next_permutation(v8.begin(), v8.end()));


    // now write another stl container

    // prev_permutation

    vector<int> v9;

    v9.push_back(3);
    v9.push_back(2);
    v9.push_back(1);

    // now write more about prev_permutation
    cout << "prev_permutation \n";
    do{

        for(int i=0; i<v9.size(); i++) cout << v9[i] << " ";

        cout << "\n";

    }while(prev_permutation(v9.begin(), v9.end()));

    // now write another stl container

    // now write another stl container

    // random_shuffle

    vector<int> v11;

    v11.push_back(1);
    v11.push_back(2);
    v11.push_back(3);

    // now write more about random_shuffle

    random_shuffle(v11.begin(), v11.end());
    cout << "random_shuffle \n";
    for(int i=0; i<v11.size(); i++) cout << v11[i] << " ";

    cout << "\n";

    // now write another stl container

    // lower_bound

    vector<int> v12;

    v12.push_back(1);
    v12.push_back(2);
    v12.push_back(3);

    // now write more about lower_bound

    vector<int>::iterator it31 = lower_bound(v12.begin(), v12.end(), 2);

    cout << *it31 << " lower bound\n";

    // now write another stl container

    // upper_bound

    vector<int> v13;

    v13.push_back(1);

    v13.push_back(2);

    v13.push_back(3);

    // now write more about upper_bound

    vector<int>::iterator it32 = upper_bound(v13.begin(), v13.end(), 2);

    cout << *it32 << " upper bound \n";

    // now write another stl container

    // binary_search

    vector<int> v14;

    v14.push_back(1);
    v14.push_back(2);
    v14.push_back(3);

    // now write more about binary_search
    cout << "binary_search \n";
    cout << binary_search(v14.begin(), v14.end(), 2) << "\n";

    cout << binary_search(v14.begin(), v14.end(), 4) << "\n";

    // now write another stl container

    // now write a program where all the stl container is used
    
    //now write all the stl container names here together

    // vector, deque, list, stack, queue, priority_queue, 
    //set, multiset, unordered_set, unordered_multiset,
    // map, multimap, unordered_map, unordered_multimap, 
    // pair, bitset, 
    // string, iterator, 
    // next_permutation, prev_permutation, 
    // sort, random_shuffle, 
    // lower_bound, upper_boun,d 
    // binary_search

    // now list all the method of  stl

    
    
    
    return 0;
    

}
