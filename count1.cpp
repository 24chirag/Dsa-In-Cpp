#include <iostream>

using namespace std;
int count1(int n )
{
    int temp=n;
    int number=0;
    while(temp>0)
    {
        int rem=temp%2;
        number=number*10+rem;
        temp=temp/2;
    }
    int temnum=number;
    int count=0;
    while(temnum>0)
    {
        if(temnum%10==1)
        {
            count++;
        }
        temnum=temnum/10;
    }
    return count;
    // return number;
}

int main()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<"number of 1s in number is "<<count1(n)<<endl;

    return 0;
}