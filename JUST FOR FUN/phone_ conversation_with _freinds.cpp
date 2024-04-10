//  ------------------------------------------  Average conversation on call with Bro  -----------------------------------------------------------

#include<iostream>
using namespace std;
int main()
{
char dost_ko_call_lgai;                
cout<<"agar_dost_ne_call_uthai : ";    // Press a for dost ne call uthai ; b for dost  ne call nhi uthai
cin>>dost_ko_call_lgai;

int dost_ka_response;
cout<<"kaha hai : ";                  // Press 1 for ghar pe hun ; 2 for ghar pe nhi hun
cin>>dost_ka_response;

for(dost_ko_call_lgai == 'a')
{
    if(dost_ka_response == 1)
    {
        cout<<"a_rha_hun";
        break;
    }
    else
    {
        cout<<"koi_ni_milte_hai_fir";
    }
}

}

