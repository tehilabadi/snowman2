#include "snowman.cpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <cstdlib> 
using namespace std;
// enum mine{
// div1 = 10000000,
// div2 = 1000000,
// div3 = 100000,
// div4 = 10000,
// div5 = 1000,
// div6 = 100,
// div7 = 10, 
// };

int main(){
    int first;
    int ans;
    cout<<"in this highly sefisticated progrem, \nwe will try to portrate you and your best qualities,\nwe have the most talented crew and the best painters in the world. \ndo not rush, and take this exam seriously. \nconsider yourself warned.\n enter 1 to proceed"<<endl;
    cin>>ans;
    if(ans!=1){
        throw "such a shame, you just lost once-in-a-lifetime opportunity";
    }
    cout<<"enter the matching number:\nif you could choose one place to visit, which place would it be?\n 1:I would like to stay home\n2:America\n3:Africa\n4:Europe"<<endl;
    cin>>first;
    if(first!=1||first!=2||first!=3||first!=4){
        throw "such a shame";
    }
    else{
        ans=first*div1;
    }
    cout<<"enter the matching number:\nhow much choclate do you eat?\n1:one package every day\n2:one package per week\n3: I don't know\n4:I don't even like chcolate"<<endl;
    cin>>first;
    if(first!=1||first!=2||first!=3||first!=4){
        throw "such a shame";
    }
    else{
        ans+=(first*div2);
    }
    cout<<"enter the matching number:\nwhich glasses would you prefer?\n1:sun glasses\n2:regular glasses\n3:eye contact\n4:no glasses at all"<<endl;
    cin>>first;
    if(first!=1||first!=2||first!=3||first!=4){
        throw "such a shame";
    }
    else{
        ans+=(first*div3);
        ans+=(first*div4);
    }
    cout<<"enter the matching number:\nwhich kind of dance would you prefer?\n1:jazz\n2:hip hop\n3:ballet\n4:hate dancing in jeneral"<<endl;
    cin>>first;
    if(first!=1||first!=2||first!=3||first!=4){
        throw "such a shame";
    }
    else{
        ans+=(first*div5);
        ans+=(first*div6);
    }
    cout<<"enter the matching number:\nchoose the cloth you can't live without:\n1:tie\n:jaket\n3:T-shirt\n4:whatever is clean"<<endl;
      cin>>first;
    if(first!=1||first!=2||first!=3||first!=4){
        throw "such a shame";
    }
    else{
        ans+=(first*div7);
        ans+=(first);
    }
    cout<<"are you ready? the result is almost here\nenter 1 to proceed"<<endl;
    cin>>ans;
    if(ans!=1){
        throw "such a shame, you just lost once-in-a-lifetime opportunity";
    }
    else{
    string snow = ariel::snowman(ans);
    cout <<snow<< endl;
    }
    return 0;
    // int temp = 1;
    // int ans = 0;
    // for (int i = 0; i < 8; i++)
    // {
    //     int x = (int) rand()*4+1;
    //     ans+=x*temp;
    //     temp*=10;
    // }
    // string snow = ariel::snowman(ans);
    // cout <<ans<< endl;
    // cout <<snow<< endl;
    // return 0;
}