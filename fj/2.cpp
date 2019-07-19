#include <iostream>
using namespace std ;
int main()
{
    for( int i=0;i<128;i++ ) 
        cout << (char)i<<" : " << i <<endl ;
    for( unsigned char ch=0;ch<128;ch++ )
        cout << ch<<" : " << (int)ch <<endl ;
    return 0;
}

