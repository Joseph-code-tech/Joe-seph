#include<stdio.h>
#include<stdbool.h>
int main(void)
{    int A[100], B[100], C[200], n;//the size of array A
      int m;//size of array B
      n + m;// Size of array c
    printf("PLEASE KINDLY ENTER THE SIZE OF ARRAY A = ");
    scanf("%d", &n);
    printf("ENTER THE %d ELEMENT HERE = ", n);
    for(int i = 0; i < n; i++)
    {
    scanf("%d", &A[i]);
    printf("");
    }printf("PLEASE KINDLY ENTER THE SIZE OF ARRAY B = ");
    scanf("%d", &m);
    printf("INSERT %d ELEMENTS IN ARRAY B =", m);
    for(int b = 0; b < m; b++){
       scanf("%d", &B[b]);}
       //ALGORITHM TO MERGE ARRAY A AND ARRAY B
       int e=0, c=0, b=0;
       while(e < n){
       C[c] = A[e];
       e = e+1;
       c = c+1;}
       while(b < m){
       C[c] = B[b];
       c++;
       b++;}       printf("MERGING A AND B WE WILL HAVE = ");
       for(e=0; e < (n+m); e++){
       printf("%d\n", C[e]);}
       
    //Linear search
   int x, i=0; 
    bool found = false;
    printf("\nKINDLY ENTER THE NUMBER TO SEARCH FOR USING LINEAR SEARCH = ", x);
    scanf("%d", &x);
       while (i < n+m) {
         if(C[i] == x){
         found = true;
         printf("\nFOUND %d AT INDEX %d", C[i], i);
         printf("\n");
         i++;
         ;}
         else{
         i++;
          }
          }
        if(found == false){
             printf("\nOOOPS SORRY NUMBER NOT FOUND");
             printf("\n");}
        //BUBBLE SORT     
         int j=0, k; bool swapped;
         printf("BUBBLE SORTING THE ABOVE ARRAY, WE HAVE = \n");
         do{ 
          swapped = false;
              for(k=0; k < (n+m)-1; k++){
                    if(C[k+1] < C[k]){
                    swapped = true;
                     int temp = C[k];
                     C[k] = C[k+1];
                     C[k+1] = temp;}}
               j = j+1;}
               while(swapped == true && j < n+m);
               for(k=0; k<n+m; k++){
               printf("%d\n", C[k]);}
     //BINARY SEARCH
      int low = 0, high = (n+m)-1, middle;
      k=0;
        while(low <= high){ 
        found = false;
              middle = (low + high)/2;
            if(C[middle] == x){
               printf("FOUND %d AT INDEX %d", x, middle);
               found = true;
               break;
               }
            else{
            if(C[middle] > x){
            high = middle - 1;
            }else{
            low = middle + 1;
            }}   
        }if(found == false){
        printf("OOOPS SORRY, NUMBER NOT FOUND ");}
           return 0; 
     }              