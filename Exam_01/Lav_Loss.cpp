<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,loss,lav;
    cin>>s>>loss>>lav;

    double costPrice=s / ( 1.0 - loss / 100.0);
    double sellingPrice=costPrice*(1.0+lav/100.0);

    cout<<fixed<<setprecision(2)<<sellingPrice<<endl;
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,loss,lav;
    cin>>s>>loss>>lav;

    double costPrice=s / ( 1.0 - loss / 100.0);
    double sellingPrice=costPrice*(1.0+lav/100.0);

    cout<<fixed<<setprecision(2)<<sellingPrice<<endl;
    return 0;
>>>>>>> a7c7a86f7c8cfe1fd8e24f10f5fd98cc0c62cbff
}