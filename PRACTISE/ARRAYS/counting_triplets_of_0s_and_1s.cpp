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


int x=0,y;
int a=0,b;

// counting triplets of 0s

for(int i=0;i<n;i++)
    {   // counting triplets of 0s
        
        if(array[i]==0)         // by loop this ww will check if the element in the array is 0 or not
        {
            x=x+1;              // x is initially 0, so if any 0 will be found in the array +1 will be done to the the x
            
            if(x==3)            // if x=3 (meaning there are 3 zeros found consecutively)
            {                   
                y=y+1;          // than 1 will be added to y(which is nomber of triplets of zeros) y was initially 0
                x=0;            // one three 0s are found and considered as a triplet 
            }
        }
        else
        {
            x=0;                // if 3 zeros will be found, than will be considered as an array, than no. of 0s -
                                // - found will again be zero (x=0) to start counting of array again.
        }
    
    
    
    // couting triplets of 1 

    if(array[i]==1)        
        {
            a=a+1;         
            
            if(a==3)       
            {                   
                b=b+1;     
                a=0; 
            }
        }
        else
        {
            a=0;   
    
    }
}

cout<<"no of triplets of 0s in the array : "<<y<<endl;
cout<<"no of triplets of 1s in the array : "<<b;
    


}