

#include<bits/stdc++.h>
using namespace std;
typedef pair <int,int> PII;
struct small
{
    bool operator() (int x,int y)
    {
        return y<x;
    }
};
struct compair
{
    bool operator() (PII &p1 ,PII &p2)
    {
        return p1.second>p2.second;
    }
};
int main()
{
    priority_queue<int, vector<int>, small > pq; /// increasing order
    pq.push(2);
    pq.push(21);
    pq.push(12);
    pq.push(1);
    pq.push(52);
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    priority_queue<PII,vector<PII>, compair> pq1;
    pq1.push(PII(2,4));
    pq1.push(PII(22,24));
    pq1.push(PII(21,43));
    pq1.push(PII(5,3));
    pq1.push(PII(6,7));
    while(!pq1.empty())
    {
        cout<<pq1.top().first<<" "<<pq1.top().second<<endl;
        pq1.pop();
    }


}
////class
////{
////public:
////
////};
//class prio
//{
//    public:
//    bool Operator(const PII& p1 , const PII& p2)
//    {
//        return p1.second < p2.second;
//    }
//};
//int main()
//{
//    priority_queue <PII , vector <PII>, prio > pq;
//    pq.push(PII (2 ,3));
//    pq.push(PII (23 , 32));
//    pq.push(PII (12 ,31));
//    while(!pq.empty())
//    {
//        cout<<pq.top().first<<endl;
//        cout<<pq.top().second<<endl;
//        pq.pop();
//
//    }
//}
//#include <iostream>
//#include <queue>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//struct Reverse {
//bool operator()(int x, int y) {
//return y < x;
//}
//};
//int main() {
//priority_queue<int, vector<int>, Reverse> pqi;
//// Could also say:
//// priority_queue<int, vector<int>,
//// greater<int> > pqi;
//srand(time(0));
//for(int i = 0; i < 100; i++)
//pqi.push(rand() % 25);
//while(!pqi.empty()) {
//cout << pqi.top() << ' ';
//pqi.pop();
//}
//}
