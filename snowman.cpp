#include "snowman.hpp"
#include <iostream>
using namespace std;
#include <string>

enum casees {
A = 1,
B = 2,
C = 3,
D = 4,
small = 11111111,
big = 44444444,
div1 = 10000000,
div2 = 1000000,
div3 = 100000,
div4 = 10000,
div5 = 1000,
div6 = 100,
div7 = 10, 
};


string ariel::snowman(int num){
    string temp = "magic";
    if(num<small||num>big){
        try
        {
        throw "not a snowman";
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    
    else{
        int a = num/div1; //hat
        int b = num/div2 -  a*div7;//nose
        int c = num/div3 - (a*div6+b*div7);//left eye
        int d = num/div4 - (a*div5+b*div6+   c*div7);//right eye
        int e = num/div5 - (a*div4+b*div5+  c*div6+d*div7);//left hand
        int f = num/div6 - (a*div3+b*div4+ c*div5+d*div6+e*div7);//right hand
        int g = num/div7 - (a*div2+b*div3+c*div4+d*div5+e*div6+f*div7);//torso
        int h = num - (a*div1+b*div2+c*div3+d*div4+e*div5+f*div6+g*div7);//base
        if(a>4||b>4||c>4||d>4||e>4||f>4||g>4||h>4){
            throw "too big number";
        }
        if(a<1||b<1||c<1||d<1||e<1||f<1||g<1||h<1){
            throw "too small";
    }
        string snow8 = "a";
        switch (a)
        {
        case A:
            snow8 =" _===_\n";
            break;
        case B:
            snow8 ="  ___ \n .....\n";
            break;
        case C:
            snow8 ="   _\n  /_\\\n";
            break;
        case D:
            snow8 ="  ___ \n (_*_)\n";
            break;
        }
        
        string snow7 = "b";//left eye first
        switch (c)
        {
        case A:
            snow7 ="(.";
            break;
        case B:
            snow7 ="(o";
            break;
        case C:
            snow7 ="(O";
            break;
        case D:
            snow7 ="(-";
            break;

    }
       string snow6 = "c";//nose
        switch (b)
        {
        case A:
            snow6 =",";
            break;
        case B:
            snow6 =".";
            break;
        case C:
            snow6 ="_";
            break;
        case D:
            snow6 =" ";
            break;
     
    }
       
       string snow5 = "d";//right eye
          switch (d)
        {
        case A:
            snow5 =".)";
            break;
        case B:
            snow5 ="o)";
            break;
        case C:
            snow5 ="O)";
            break;
        case D:
            snow5 ="-)";
            break;
    }
    
       string snow4 = "e";//left hand
          switch (e)
        {
        case A:
            snow4 ="<";
            break;
        case B:
            snow4 ="\\";
            break;
        case C:
            snow4 ="/";
            break;
        case D:
            snow4 =" ";
            break;

    }
    string snow3 = "f";//right arm
          switch (f)
        {
        case A:
            snow3 =">";
            break;
        case B:
            snow3 ="/";
            break;
        case C:
            snow3 ="\\";
            break;
        case D:
            snow3 =" ";
            break;
    }


    string snow2 = "g";//torso
          switch (g)
        {
        case A:
            snow2 ="( : )";
            break;
        case B:
            snow2 ="(] [)";
            break;
        case C:
            snow2 ="(> <)";
            break;
        case D:
            snow2 ="(   )";
            break;
    }
    
    string snow1 = "h";//base
          switch (h)
        {
        case A:
            snow1 =" ( : )";
            break;
        case B:
            snow1 =" (\" \")";
            break;
        case C:
            snow1 =" (___)";
            break;
        case D:
            snow1 =" (   )";
            break;

    }
        if(e==2&&f==2){
            temp = snow8 + snow4 + snow7 + snow6 + snow5 + snow3 + "\n" + " " + snow2 +"\n"+ snow1;
        }
        else if(e==2&&f!=2){
            temp = snow8 + snow4 + snow7 + snow6 + snow5 + "\n" + " " +snow2 + snow3 + "\n"  + snow1;
        }
        else if(f==2&&e!=2){
            temp = snow8 + " " + snow7 + snow6 + snow5 + snow3 + "\n"  + snow4 + snow2 +"\n"  + snow1;
        }
        else{
            temp = snow8  +" " + snow7 + snow6 + snow5 + " " + "\n" + snow4 + snow2 + snow3 + "\n" + snow1;
        }
       cout <<temp<< endl;
    }
    return temp;

}
