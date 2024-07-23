#include <iostream>

using namespace std;

void mySwap(void *ptr1, void *ptr2, size_t t_size)
{
    //Temporary array of 8 bytes so that it can accommodate almost all data types
    char temp[8];
    memcpy(temp,ptr1,t_size);
    memcpy(ptr1,ptr2,t_size);
    memcpy(ptr2,temp,t_size);
}

int main()
{
    cout << "***** Generic Swap Implementation **** \n" << endl;

    /*** Example - Usage of char ***/
    char a ='A', b='B';

    cout<<"Char::\na="<<a<<" b="<<b<<endl;
    mySwap(&a,&b,sizeof(char));
    cout<<"a="<<a<<" b="<<b<<endl;

    /*** Example - Usage of int ***/
    int a1 =10, b1=20;

    cout<<"\nInt::\na1="<<a1<<" b1="<<b1<<endl;
    mySwap(&a1,&b1,sizeof(int));
    cout<<"a1="<<a1<<" b1="<<b1<<endl;

    /*** Example - Usage of float ***/
    float a2 =6.23, b2=8.24;

    cout<<"\nFloat::\na2="<<a2<<" b2="<<b2<<endl;
    mySwap(&a2,&b2,sizeof(float));
    cout<<"a2="<<a2<<" b2="<<b2<<endl;


    return 0;
}
