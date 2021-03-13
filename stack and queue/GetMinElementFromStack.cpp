// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){

       int qt;
       cin>>qt;

       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }

}


// } Driver Code Ends


/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
int _stack :: getMin()
{
    //Your code here
    if(s.size() <= 0){
        return -1;
    }
    return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
    //Your code here
    if(s.size() <= 0){
        return -1;
    }
    if(s.top() >= minEle){
        int a= s.top();
        s.pop();
        return a;
    }else{
        int a = s.top();
        int b = minEle;
        minEle = 2*minEle - a;
        s.pop();
        return b;
    }
}

/*push element x into the stack*/
void _stack::push(int x)
{
    //Your code here
    if(s.size() == 0){
        minEle = x;
        s.push(x);
    }else if(x < minEle){
        s.push(2*x - minEle);
        minEle = x;
    }else{
        s.push(x);
    }
}
