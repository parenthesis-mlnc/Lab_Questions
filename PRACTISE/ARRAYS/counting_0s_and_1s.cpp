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




// counting 0s and 1s

int x=0,y=0;

cout<<"no of zeros in the array : ";   // heading for the number of zeros


for(int i=0;i<n;i++)
    {
        if(array[i]==0)
        {
            x=x+1;
        }
        if(array[i]==1)
        {
            y=y+1;
        }
    }


cout<<x<<endl;
cout<<y;   

}
