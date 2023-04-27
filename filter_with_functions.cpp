#include <iostream>

using namespace std;


void ArrayThreshold(int userArray[], int userThreshold, int &size)
{
	//Declare variable to get the integers(to display) to be less than.
    //Prompt user for threshold... which will print the integers less than the threshold.
    cout<<"What integer is your threshold: ";
    //Get the user Threshold
	cin>>userThreshold;
    //Print the numbers that is less than the user threshold
    cout<<"The following numbers are less than "<<userThreshold<<": "<<endl;
    //This for loop is being used to check to see what integers is less than the user threshold.
	for(int i = 0;i<size;i++)
    {
        if(userArray[i]<userThreshold)
        {
            cout<<userArray[i]<<",";
        }
    }
}

int main()
{
    //Declare index size
	int size;
	int userThreshold;
    //Prompt user to enter an integer for index size
    cout<<"Enter the size for your array(Must be between 0 and 50): ";
   //Get index size
    cin>>size;
    //Check to see if index size is valid (between 0 and 50)
	while(size<0||size>50)
    {
        cout<<"Your entry is invalid... Please enter a value between 0 and 50: ";
        cin>>size;
    }
    //declare an array with the size user entered
    int userArray[size];
    //using a for loop, Get the values of integers the user would like to put in the Array
    for(int i = 0; i<size; i++)
    {
        cout<<"Enter array value "<<i+1<<": "<<endl;
        cin>>userArray[i];
    }
    
  	ArrayThreshold(userArray,userThreshold,size);
    
    return 0;
}

