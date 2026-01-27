#include<iostream>
using namespace std;
int main()
{
 
    int e = 0, p = 0, n = 0, o = 0, i = 0, m = 0;
    cin >> i;
    while (i--)
    {
 
        cin >> m;
        if (m > 0)
        {
            p++;
            if (m % 2 == 0)
                e ++ ;
            else 
                o++;
        }
        else if (m == 0)
        {
            e++;
        }
        
        else {
        
            n++;
            if (m % 2 == 0)
                e++;
            else
                o++;
        }
        
         
 
 
    }
    
 
    cout << "Even: " << e << endl;
    cout << "Odd: " << o << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << n << endl;
       
    
    
}
