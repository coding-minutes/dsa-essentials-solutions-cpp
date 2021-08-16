
#include<bits/stdc++.h>
using namespace std;

void merge_row(vector<vector<int>> &mat,int i, int cs, int cm, int ce){
   vector<int> sorted;
   int x=cs;
   int y=cm+1;
   //cout<<x<<" "<<cm<<" "<<y<<" "<<ce<<endl;
   while(x<=cm && y<=ce){
       if(mat[i][x]<mat[i][y]){
           sorted.push_back(mat[i][x]);
           x++;
       }
       else{
           sorted.push_back(mat[i][y]);
           y++;
       }
   }
   
   
   while(x<=cm){
       sorted.push_back(mat[i][x]);
       x++;
   }
   while(y<=ce){
       sorted.push_back(mat[i][y]);
       y++;
   }
   int k=0;
   for(int j=cs; j<=ce; j++){
       mat[i][j]=sorted[k];
       k++;
   }
   return;
}
void merge_col(vector<vector<int>> &mat,int j, int rs, int rm, int re){
       vector<int> sorted;
   int x=rs;
   int y=rm+1;
   while(x<=rm && y<=re){
       if(mat[x][j]<mat[y][j]){
           sorted.push_back(mat[x][j]);
           x++;
       }
       else{
           sorted.push_back(mat[y][j]);
           y++;
       }
   }
   while(x<=rm){
       sorted.push_back(mat[x][j]);
       x++;
   }
   while(y<=re){
       sorted.push_back(mat[y][j]);
       y++;
   }
   int k=0;
   for(int i=rs; i<=re; i++){
       mat[i][j]=sorted[k];
       k++;
   }
   return;
}


void merge(int m, int n, vector<vector<int>> &mat, int rs, int rm, int re,int cs, int cm, int ce){
    
    
    
    //for sorting rows
    for(int i=rs; i<=re; i++){
        merge_row(mat,i,cs,cm,ce);
    }
    
    //for sorting columns
    for(int j=cs; j<=ce; j++){
        merge_col(mat,j,rs,rm,re);
    }
    return;

}

void merge_sort(int m, int n, vector<vector<int>> &mat, int rs, int re, int cs, int ce){
    //cout<<rs<<" "<<re<<endl;
    //cout<<cs<<" "<<ce<<endl;
     if(rs>=re && cs>=ce){
         return;
     }


     int rm=(rs+re)/2;
     int cm=(cs+ce)/2;
      
    // cout<<rs<<" "<<rm<<" "<<re<<" "<<cs<<" "<<cm<<" "<<ce<<endl; 
     
     
     //for dividing into subarrays
     merge_sort(m,n,mat,rs,rm,cs,cm);
     merge_sort(m,n,mat,rm+1,re,cs,cm);
     merge_sort(m,n,mat,rs,rm,cm+1,ce);
     merge_sort(m,n,mat,rm+1,re,cm+1,ce);

     
    //for merging sorted subarrays
     merge(m,n,mat,rs,rm,re,cs,cm,ce);
     return;
}

vector<vector<int>> mergeSort(int m, int n, vector<vector<int>> v){
    merge_sort(m,n,v,0,m-1,0,n-1);
    return v;
}
