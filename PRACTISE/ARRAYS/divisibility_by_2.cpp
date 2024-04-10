#include<iostream>
using namespace std;
int main()
{

//taking input for length of array

int n;
cout<<"enetr the length of array : ";
cin>>n;

// declaring the aray

int array[n];


// taking array input in the arary

for(int i=0;i<n;i++)
{
    cin>>array[i];
}

// printing the array

for(int i=0;i<n;i++)
{
    cout<<array[i]<<endl;
}




cout<<"the no divisible by 2 are : "<<endl; //heading for the elements that will be printed which are divisible by 2


// checking divisibility by 2

for(int i=0;i<n;i++)
    {
        if(array[i]%2==0)
        {
            cout<<array[i]<<endl;
        }
    }

    
    
    
    
    
}