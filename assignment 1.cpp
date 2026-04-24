#include<iostream>
#include<fstream>
using namespace std;

void inputArray(int arr[],int length)
{
	cout<<"Enter "<<length<<" elements:"<<endl;
    for(int i=0;i<length;i++)
    {
		cin>>arr[i];
	}
}

void displayArray(int arr[],int length)
{
	cout<<"Array elements are:"<<endl;
    for(int i=0;i<length;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int calculateSum(int arr[],int length)
{
    int sum=0;
    for(int i=0;i<length;i++)
        sum=sum+arr[i];
    return sum;
}

void writeToFile(int arr[],int length)
{
    ofstream file("data.txt");
    if(!file)
    {
    	cout<<"file error"<<endl;
    	return;
	}
    for(int i=0;i<length;i++)
    {
	    file<<arr[i]<<" ";
    }
    file.close();
    cout<<"Data written to file"<<endl;
}

void readFromFile(int arr[],int length)
{
    ifstream file("data.txt");
    if(!file)
	{
	    cout<<"Error opening file"<<endl;
		return;	
	}
	cout<<"Data read from file"<<endl;
    for(int i=0;i<length;i++)
    {
	    file>>arr[i];
	    cout<<arr[i]<<" ";
    }
    cout<<endl;
    file.close();
}

int main()
{
    int arr[10];
    inputArray(arr,10);
    displayArray(arr,10);
    int sum=calculateSum(arr,10);
    cout<<"Sum = "<<sum<<endl;
    writeToFile(arr, 10);
    readFromFile(arr, 10);
    displayArray(arr, 10);

    return 0;
}
