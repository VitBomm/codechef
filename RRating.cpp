#include <stack>
#include <queue>
#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;
    while (cin>>n) {
    priority_queue<int> pqmax;
    priority_queue <int,vector<int>,greater<int> > pqmin;
    bool test = false;
        while (n--) {
            int a;
            cin>>a;
            switch (a) {
                case 1:
                    count++;
                    int b;
                    cin>>b;
                    if(!pqmin.empty() && pqmin.top()< b)
                        {
                            pqmax.push(pqmin.top());
                            pqmin.pop();
                            pqmin.push(b);
                        }
                    else
                        {
                            pqmax.push(b);
                        }
                    if(count%3 == 0)
                        {
                            test = true;
                            pqmin.push(pqmax.top());
                            pqmax.pop();
                        }
                    break;
                case 2:
                    if(!test)
                    {
                        cout<<"No reviews yet"<<endl;
                    }
                    else
                    {
                        cout<<pqmin.top()<<endl;
                    }
                    break;
            }
        }
    }
    return 0;
}
