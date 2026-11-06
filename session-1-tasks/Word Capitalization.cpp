#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin>>s;
    if(s[0]>='a' && s[0]<='z') s[0]=toupper(s[0]); 
    /* طريقة ثانية للحل :
    لتحويل الحرف من -> small to capital : s[0]-=32;

    Note that : you must use ( bits/stdc++.h ) to use [ toupper( ) function ] .
    */
    cout<<s;
    return 0;
}
