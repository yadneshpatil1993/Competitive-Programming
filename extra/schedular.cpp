// #pragma once
// class Reflection {
// public:
//    extern "C" {
//      static void exec(int& func_addr);
//    }
// }
#include <bits/stdc++.h>
//#pragma once
//#include "reflection.h"
using namespace std;

//http://stackoverflow.com/questions/19473313/how-to-call-a-function-by-its-name-stdstring-in-c
// class MyBaseClass
// {
// public:
//     virtual void doSomething() = 0;
// };
int action1()
{
    cout<<"action1 executed"<<endl;
    return 0;
}

int action2()
{
    cout<<"action2 executed"<<endl;
    return 0;
} 

int action3()
{
    cout<<"action3 executed"<<endl;
    return 0;
} 


typedef int (*FnPtr)();
 
    

// void callFunction(string action) {
//     if(action=="action1")return action1();
//     else if (action=="action2") return action2();
//     else;
// }

void schedule(string t, string task,string action)
{
	string ct = "";
    std::chrono::system_clock::time_point time_now = std::chrono::system_clock::now();
    time_t c_time_format2 = std::chrono::system_clock::to_time_t(time_now);
    ct = std::ctime(& c_time_format2);
    sleep(difftime(t,time_now));
    

    //static shared_ptr<MyBaseClass> CreateInstance(string task); //class instance
    //task.class.getConstructor(task.class).newInstance(Some.class); //constructor instance
    //cout<<action<<" for "<<task<<" executed"<<endl;
    //Reflection.exec(map.decode(action); //execute the method named as string action 		
    std::map<std::string, FnPtr> myActions;
    myActions["action1"] = action1;
    myActions["action2"] = action2;
    myActions["action3"] = action3;

    myActions[action]();
}

// string lastdate(string date, int validity)
// {
//     int day = int((string)date[0]+(string)date[1]);
//     int month = int((string)date[3]+(string)date[4]);
//     int year  = int((string)date[6]+(string)date[7]+(string)date[8]+(string)date[9]);
//     int hr    = int((string)date[11]+(string)date[12]);
//     int min   = int((string)date[14]+(string)date[14]);
//     int sec   = int((string)date[16]+(string)date[17]);
//     year += validity/(365*24*3600);
//     validity = validity%(365*24*3600);
//     month += validity/(30*24*3600);
//     validity = validity%(30*24*3600);
//     day += validity/(24*3600);
//     validity = validity%(24*3600);
//     hr  += validity%3600;
//     validity = validity%3600;
//     min += validity/60;
//     validity = validity%60;
//     sec += validity; 
//     string last = string(day)+'-'+string(month)+'-'+string(year)+'.'+hr+'-'+min+'-'+sec;
//     return last;
// }

int main()
{
    string task,action;
    cin>>task>>action;
    int validitysec=0;
    cin>>validitysec;
    
    
    std::chrono::system_clock::time_point time_now = std::chrono::system_clock::now();
    time_now += std::chrono::seconds(validitysec);
    time_t c_time_format = std::chrono::system_clock::to_time_t(time_now);
    std::string str_time = std::ctime(& c_time_format);
    schedule(str_time,task,action);
	return 0;
}