void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{

   int i=0;
   int j=0;
   int k=0;

   while(i<size1 and j<size2)
   {
       if(arr1[i]<arr2[j])
       {
           ans[k]=arr1[i];
           i++;
           k++;
       }
       else
       {
           ans[k]=arr2[j];
           j++;
           k++;
       }
   }

  while(i<size1)
  {
      ans[k]=arr1[i];
      i++;
      k++;
  }
    
 while(j<size2)
 {
     ans[k]=arr2[j];
     j++;
     k++;
 }
    //Write your code here    
    // int i=0; 
    // int j=0;
    // for( int k=0;k<(size1+size2) ;k++)
    // {
    //     if(arr1[i]>arr2[j])
    //     { 
    //         ans[k]= arr2[j];
    //         j++;
    //     }
    //     else
    //     { 
    //         ans[k]=arr1[i];
    //         i++;
    //     }
    // }
}

// arr1=1 2 3 4 
// arr2= 5 6 7 8