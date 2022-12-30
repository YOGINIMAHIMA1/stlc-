#include <bits/stdc++.h>
using namespace std;
int main()
{
 pair<int,int>p={1,3};
 
   cout<<p.first<<" ,"<<p.second<<endl;
   pair<pair<int,char>,string>p1={{1,'a'},"xyz"};
   cout<<p1.first.first<<" ,"<<p1.first.second<<" ,"<<p1.second<<endl;
   pair<pair<int,char>,pair<string,string>>p2={{1,'a'},{"xxx","yyy"}};
   cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
   
   }
