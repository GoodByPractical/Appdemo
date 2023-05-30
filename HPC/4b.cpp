#include<omp.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
	cout<<"Enter number of Elements: ";
	int n;
	cin>>n;
/*
        int *v1 = new int[n];
	int* v2 = new int[n];
	int* ans = new int[n];*/
         vector<int> v1(n);
	 vector<int> v2(n);
	 vector<int> ans(n);
 
        #pragma omp parallel for
	for(int i=0;i<n;i++){
	
		v1[i]=rand()%10;
		v2[i]=rand()%10;
	}
        cout<<"[";
	for(int i=0;i<n;i++){
	
		cout<<v1[i]<<" ";
	}
	 cout<<"]"<<endl<<"["<<endl;
cout<<"[";
        for(int i=0;i<n;i++){

		                cout<<v2[i]<<" ";
				        }
	         cout<<"]"<<endl<<"["<<endl;
 #pragma omp parallel for
	for(int i=0;i<n;i++){
	
		ans[i]=v1[i]+v2[i];
	}
	
	for(int i=0;i<n;i++){
	    cout<<ans[i]<<" ";

	}
	cout<<endl;


	
}
