#include<bits/stdc++.h>
using namespace std;
typedef struct everynode{
    int data;
    int n;
    int x;
}node;
vector<node> mystack;
int p(int n){
    if(n==1) return 2;
    if(n==0) return 1;
    else{
        int tempn1 = p(n-1);
        int tempn2 = p(n-2);
        int result = 2*tempn1-2*(n-1)*tempn2;
        return result;
    }
}
int main()

{
    int n = 0;
    int x = 1;
    cin>>n;
    node a={0,0,0};
    //mystack.push_back(1);
    for(int i = n;i>=0;i--){
        a.n = i;
        a.x = x;
        if(i==0){
            a.data = 1;
        }
        if(i==1){
            a.data = x*2;
        }
        cout<<i<<"s";
        cout<<a.data<<"\n";
        mystack.push_back(a);
    }
    cout<<p(n)<<"\n";
    while(mystack.size()>=3){
        node tempn2 = mystack.back();

        mystack.pop_back();
        node tempn1 = mystack.back();
        mystack.pop_back();
        node result = mystack.back();
        mystack.pop_back();
        cout<<tempn1.data<<" ss "<<tempn2.data<<" bb "<<result.n<<"\n";
        result.data = 2*tempn1.data-2*(result.n)*tempn2.data;
        mystack.push_back(result);
        mystack.push_back(tempn1);
    }
    //mystack.pop_back();
    node finalresult = mystack.back();
    cout<<finalresult.data;
}


