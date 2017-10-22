#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> X;
    cout<<X.size()<<endl;
    int c;
    cin>>c;
    X.resize(c);
    for (vector<int>::iterator it = X.begin() ; it != X.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
    cout<<X.size();
    X.clear();

    cout<<X.size();

}