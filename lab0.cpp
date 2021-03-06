//Plamedi, Diakubama
//Lab0.cpp
//09/27/21

//The program prompts  the user to input 10 integers
//and store them into an array of fixed size.
//The code then output those integers in the order they were put in the array
//( print the index and the element at that specific index).
//The code also has a function that returns the maximum value inputed by the user

//Assumption: None

//Sources: None

#include<iostream>
using namespace std;

int largestNumber(int arr[], int sizeOfArray){
  int k;

  int largest=arr[0]; //initializing the largest element
  for(k=1; k<sizeOfArray; k++){
    if(arr[k]>largest){
      largest=arr[k];
    }
  }
  return largest;
}

int main (){
  cout<<"Hello, welcome to the integer game! "<< endl;
  int sizeOfArray=10;
  int arr[sizeOfArray];
  int i;
  int j;
  
  for(i=0; i<11; i++){
    cout<<"Plese enter integer number "<<i<<" : ";
    cin>>arr[i];
  }

  cout<<"Here is all the number you inputed in order: "<<endl;
  for(j=0; j<11; j++){
    cout<<"Index #"<<j<<": "<<arr[j]<<endl;
  }

  cout<<"Largest integer in the given array is: "<<largestNumber(arr, sizeOfArray);

  
  return 0;
}
