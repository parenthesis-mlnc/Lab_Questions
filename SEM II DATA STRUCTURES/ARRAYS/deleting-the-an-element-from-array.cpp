#include <iostream>
using namespace std;
int main()
{

int n;
cin>>n;
int array[n];


//taking array input

for(int i=0;i<n;i++)
{
    cin>>array[i];
}


//asking for position of elements to be deleted

int x;
cout<<"enter the position of the element to be deleted : ";
cin>>x;



//running loops for shiftung the numbers one step to left frm the position of the element to be deleted which will which will overwrite the elements 

for(int i=x;i<n;i++)
    {
        array[i-1]=array[i];
    }

n=n-1;      //this is done because lenght of the array will be reduced by 1 because 1 element has been deleted


// Now runnig the loop with i=0 because all the elements have to bw printed from start

for(int i=0;i<n;i++)
{
    cout<<array[i]<<endl;
}
}#include<iostream>
using namespace std;
int main()
{

int n;
cin>>n;
int array[n];


//taking array input

for(int i=0;i<n;i++)
{
    cin>>array[i];
}


//asking for position of elements to be deleted

int x;
cout<<"enter the position of the element to be deleted : ";
cin>>x;



//running loops for shiftung the numbers one step to left frm the position of the element to be deleted which will which will overwrite the elements 

for(int i=x;i<n;i++)
    {
        array[i-1]=array[i];
    }

n=n-1;      //this is done because lenght of the array will be reduced by 1 because 1 element has been deleted


// Now runnig the loop with i=0 because all the elements have to bw printed from start

for(int i=0;i<n;i++)
{
    cout<<array[i]<<endl;
}
}