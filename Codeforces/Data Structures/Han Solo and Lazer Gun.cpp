#include <bits/stdc++.h>
  using namespace std;
 
    int main()
    {
        double n , x0 , y0 ,count=0 , x , y , m ;
        cin>>n>>x0>>y0;
        set<double> s;
        for(int j=0 ; j<n ; j++)
        {
            cin>>x>>y;
            if( x - x0 != 0 ){m = ( y - y0 ) / ( x - x0 ); s.insert(m);}
         
            else if( x - x0 == 0 )
            {
                count=1;
            }
        }
        cout<<s.size()+count<<endl;
        return 0;
    }
