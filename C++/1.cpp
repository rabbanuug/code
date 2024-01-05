
#include <bits/stdc++.h>

using namespace std;

void printv(vector<int> &v){
	for (int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}
	cout << "\n";
}

int main() {
    
    // vector<int> v({1, 2, 3});
    // std::vector<int> v1 = {1, 2, 4, 5};
    // v1.insert(v1.begin()+4, 8); //here 8 is in 0 index according to v1.end

    // v1.insert(v1.end(), 7);
    // v1.insert(v1.end()-1, 9);
    // v1.insert(v1.end(), 2, 0);
    // v1.insert(v1.begin(), 2, 0);
    // v1.insert(v1.begin()+1, 2, 1);
    // v1.pop_back();
    // v1.erase(v1.begin());
    // printv(v1);

    // cout << v1.front() << " " << v1.back() << "\n";

    // int *arra = v.data();
	// cout << arra[2] << "\n" ;	
	// cout << *max_element(v1.begin()+3, v1.end()-1) << "\n";

	// cout << min({3, 4, 5, 6, 1}) << "\n";

	// int arr[4] = {1, 3, 2, 5};
	// cout << *max_element(arr, arr+3)  << "\n" ;
	
	// cout << arr << " arr"<< "\n"; // print memory address of arr. arr is 0 indexed means printing memory address of index 0 of arr
	// cout << *arr << " arr"<< "\n"; // print value of arr 0 index
	// cout << *arr+1 << " *arr+1"<< "\n"; // print value of arr 1 index

	// cout << arr[1]-1 << " arr[1]-1"<< "\n"; //substract value from arr[1]-1 (3-1 = 2)
	// cout << arr[1] << " arr[1]" << "\n";
	// cout << arr[1]-*arr << " arr[1]-*arr" << "\n";
	// cout << arr[1]-*(arr+2) << " arr[1]-*(arr+2)" << "\n"; 
	
	// *(arr+3) = 2;
	// cout << *(arr+3) << " *(arr+3)" << "\n";

	// cout << max_element(arr, arr+3)-arr << "\n";
	
	

    // vector <int> a({1, 2, 3, 4}), b({5, 6, 7, 8, 9, 2});
    // a.erase(a.begin()+2, a.begin()+3); //range: starting and ending index. (ending index not included)
    // b.erase(b.begin()+2, b.end()-2);
    // printv(a);
    // printv(b);

    // // pair
    // pair <int, string> d;
    // d = {2, "abc"};
    // cout << d.first << " " << d.second;

    // Queue and Priority Queue
// does my code correct? it's not running
    // priority_queue < int > q; 
    // q.push(120);
    // q.push(432);
    // q.push(532);

    // while(!q.empty()){ // q.empty() returns 1 if queue is empty
    // 	cout << q.top() << "\n"; // q.top() returns the top element of the priority_queue
    //     //cout << q.front() << "\n"; // q.front() returns the front element of the queue
    // 	q.pop();
    // }
    // cout << q.empty() << "\n";

    // set
    // set <int> s;
    // s.insert(3); s.insert(2); s.insert(5); s.insert(4); s.insert(5);

    // // use for each loop
    // for(auto &s: s)
    //     cout << s << " ";
    // cout << "\n";
    // for(set<int>::iterator i = s.begin(); i != s.end(); ++i)
    // 	cout << *i << " ";

// comment all the line which has error


	

    // string
    string s0;                                   // s0 = ""
    string s1("Hello");                          // s1 = "Hello"
    string s2(s1);                                // s2 = "Hello"
    string s3(s1, 1, 2);                         // s3 = "el"
    string s4("Hello World", 5);                 // s4 = "Hello"
    string s5(5, '*');                           // s5 = "*****"
    string s6(s1.begin(), s1.begin() + 3);        // s6 = "Hel"
    string s7 = s1.substr(1, 2);                 // s7 = "el"
    string s8 = s1.substr(1);                    // s8 = "ello"
    string s9 = s1.substr(0);                    // s9 = "Hello"

    // print all strings line by line
    cout << s0 << "\n" 
    << s1 << "\n" << s2 << "\n" 
    << s3 << "\n" << s4 << "\n" 
    << s5 << "\n" << s6 << "\n" 
    << s7 << "\n" << s8 << "\n" 
    << s9 << "\n";

    s1.insert(1, "abc");                         // s1 = "Habcello"
    s1.erase(1, 3);                              // s1 = "Hello"
    s1.replace(1, 2, "xyz");                     // s1 = "Hxyzlo"

    cout << s1 << "Hxyzo?" << "\n";

    s1.push_back('A');                           // s1 = "HxyzoA"
    s1.pop_back();                               // s1 = "Hxyzo"
    s1.append(" World");                         // s1 = "Hxyz World"
    s1.append(s2, 0, 3);                         // s1 = "Hxyz WorldHel"
    s1.append(s2, 2, 3);                         // s1 = "Hxyz WorldHello"
    s1.append("Hello World", 5);                 // s1 = "Hxyz WorldHelloHello"
    s1.append("Hello World" + 6, 5);             // s1 = "Hxyz WorldHelloHelloWorld"
    s1.append(5, '!');                           // s1 = "Hxyz WorldHelloHelloWorld!!!!!"
    s1.append({'!', '@', '#', '$', '%'});        // s1 = "Hxyz WorldHelloHelloWorld!!!!!"
    s1 += "Hello";                               // s1 = "Hxyz WorldHelloHelloWorld!!!!!Hello"
    s1 += 'A';                                   // s1 = "Hxyz WorldHelloHelloWorld!!!!!HelloA"
    s1 += s2;                                    // s1 = "Hxyz WorldHelloHelloWorld!!!!!HelloAHello"
    s1 += {'!', '@', '#', '$', '%'};             // s1 = "Hxyz WorldHelloHelloWorld!!!!!HelloAHello!!!!!"
    s1.resize(13);                               // s1 = "Hxyz WorldHel"
    s1.resize(20, '!');                          // s1 = "Hxyz WorldHel!!!!!!"
    s1.resize(10);                               // s1 = "Hxyz Worl"
    s1.clear();                                  // s1 = ""
    s1 = "Hello";
    s2 = "World";
    s3 = s1 + s2;                                // s3 = "HelloWorld"
    s4 = s1 + "World";                           // s4 = "HelloWorld"
    s5 = "Hello" + s2;                           // s5 = "HelloWorld"
    s6 = s1 + 'A';                               // s6 = "HelloA"
    s7 = 'A' + s2;                               // s7 = "AWorld"
    s8 = s1 + " " + s2;                          // s8 = "Hello World"
    //s9 = "Hello" + " World";                     // s9 = "Hello World" // error
    s0 = s1.substr(0, 2) + s2.substr(0, 3);      // s0 = "HeWor"
    s0 = s1.substr(0, 2) + " World";             // s0 = "He World"
    s0 = "Hello" + s2.substr(0, 3);              // s0 = "HelloWor"
    // s0 = "Hello" + " World";                     // s0 = "Hello World" // error
    s0 = s1.substr(0, 2) + s2;                   // s0 = "HeWorld"
    s0 = s1.substr(0, 2) + 'A';                  // s0 = "HeA"
    s0 = 'A' + s2.substr(0, 3);                  // s0 = "AWor"
    s0 = 'A' + " World";                         // s0 = "A World"
    s0 = s1 + s2.substr(0, 3);                   // s0 = "HelloWor"
    s0 = s1 + 'A';                               // s0 = "HelloA"
    s0 = "Hello" + s2;                           // s0 = "HelloWorld"
    // usage of assign function
    s0.assign("Hello");                          // s0 = "Hello"
    s0.assign("Hello", 2);                       // s0 = "He"
    s0.assign("Hello World", 5);                 // s0 = "Hello"
    s0.assign(5, '*');                           // s0 = "*****"
    //usage of at function
    s0 = "Hello";
    s0.at(0) = 'J';                              // s0 = "Jello"
    // usage of compare function
    
    s0 = "Hello";
    s1 = "World";
    cout << s0.compare(s1) << "\n";              // -1
    cout << s1.compare(s0) << "\n";              // 1
    cout << s0.compare(s0) << "\n";              // 0
    cout << s0.compare(0, 2, s1, 0, 2) << "\n";  // 0
    cout << s0.compare(0, 2, s1, 0, 3) << "\n";  // -1
    cout << s0.compare(0, 3, s1, 0, 2) << "\n";  // 1
    cout << s0.compare("Hello") << "\n";         // 0
    cout << s0.compare("Hello World") << "\n";   // -1

    // cout << s0.compare("Hello World", 5) << "\n";// 0
    // cout << s0.compare("Hello World", 6) << "\n";// -1
    // cout << s0.compare("Hello World", 7) << "\n";// -1
    // cout << s0.compare("Hello World", 8) << "\n";// -1
    // cout << s0.compare("Hello World", 9) << "\n";// -1

    // usage of copy function
    // s0 = "Hello";
    // char buf[20];
    // s0.copy(buf, 3);                             // buf = "Hel"
    // cout << buf << "\n";
    // s0.copy(buf, 3, 1);                          // buf = "ell"
    // s0.copy(buf, 3, 2);                          // buf = "llo"
    // s0.copy(buf, 3, 3);                          // buf = "lo"
    // s0.copy(buf, 3, 4);                          // buf = "o"
    // s0.copy(buf, 3, 5);                          // buf = ""
    // s0.copy(buf, 3, 6);                          // buf = ""
    
    // usage of c_str function
    // s0 = "Hello";
    // const char *p = s0.c_str();                   // p = "Hello"
    // s0 = "World";
    // cout << p << "\n";                            // p = "Hello"

    // usage of data function
    // s0 = "Hello";
    
    // char *q = s0.data();                          // q = "Hello"
    // s0 = "World";
    // cout << q << "\n";                            // q = "Hello"
    
    // usage of empty function
    // s0 = "fe";
    // cout << s0.empty() << "\n";                   // 0

    // usage of length function
    
    // cout << s0.length() << "\n";                  // 2

    //list

    list<int> li(5, 100);
    cout << *li.end();
    
    return 0;
}
