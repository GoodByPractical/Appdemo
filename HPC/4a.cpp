#include<iostream>
#include<omp.h>
using namespace std;
int main(){
   cout<<"For Matrix 1:"<<endl;
    cout<<"Enter rows ";
    int r,c,r2,c2;
    cin>>r;
    
    cout<<"Enter cols: ";
    cin>>c;
     r2=c;
    cout<<"For Matrix 2: "<<endl;
    cout<<"Enter cols: ";
    cin>>c2;
    
    int mat[r][c],mat2[r2][c2],ans[r][c2];
    for(int i=0;i<r;i++){
    
	    for(int j=0;j<c;j++){
	     
                 cin>>mat[i][j];
	    }
    }
    cout<<"Enter for mat2: "<<endl;
    for(int i=0;i<r2;i++){

	                for(int j=0;j<c2;j++){

				                 cin>>mat2[i][j];
						             }
			    }
    for(int i=0;i<r;i++){

	                            for(int j=0;j<c;j++){

					                                                     cout<<mat[i][j]<<" ";
											                                                                  }cout<<endl;				                                }
    for(int i=0;i<r;i++){

	                            for(int j=0;j<c;j++){

					                                                     cout<<mat2[i][j]<<" ";
											                                                                  }cout<<endl;
				                                }
#pragma omp parallel for
    for(int i=0;i<r;i++){
     
	    for(int j=0;j<c2;j++){
	        ans[i][j]=0;
	       	 for(int k=0;k<c;k++){
		    ans[i][j]+=mat[i][k]+mat2[k][j];
		 
		 }
	    }
    }
    cout<<"------------";
    for(int i=0;i<r;i++){

	                for(int j=0;j<c;j++){

				                 cout<<ans[i][j]<<" ";
						             }cout<<endl;
			    }

}
