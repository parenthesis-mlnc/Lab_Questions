#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"Enter the length of array : ";
cin>>n;

//Declaring the array with a large length so while increasing the value, we have to face no problems 
//length of array can be further adjusted as per need

int array[100];


//taking array input

for(int i=0;i<n;i++)
{
    cin>>array[i];
}

//Printing the array

for(int i=0;i<n;i++)
{
    cout<<array[i]<<endl;
}


//asking for position of the elements to be inserted

int position;
cout<<"enter the position of the element to be inserted : ";
cin>>position;

//for asking the element to be inserted

int element;
cout<<"enter the no to be inserted : ";
cin>>element;


//shifting the elements a step formward so that the element can be inserted in the middle

for(int i=n;i>position;i--)
    {
        array[i]=array[i-1];
    }

array[position]=element; // the element y that will be inserted will be placed on position x in the index 

n=n+1;                  // the no of elements in the array will be increased by 1 because 1 element is inserted



// now the loop will be runned from i=0 because the entire array along with inserted no is to be printed

for(int i=0;i<n;i++)
{
    cout<<array[i]<<endl;
}

    
    

    
    
}
