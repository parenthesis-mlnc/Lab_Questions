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


// asking for the element to be searched

int x;
cout<<"enter the element to be searched : ";
cin>>x;


//comparing the element to be searched 

for(int i=0;i<n;i++)
    {
        if(array[i]==x)
        {
            cout<<"index of the element : "<<i;
            break;
        }
    }

    
    
    
    
    
}