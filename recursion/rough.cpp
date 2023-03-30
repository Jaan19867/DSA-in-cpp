void lastIndexHelper(int input[], int index, int size, int x, int &occ){
  if(size<=0){
    return;
  }

  if(input[index]==x){
    occ = index;
  }

  lastIndexHelper(input,index+1, size-1,x, occ);
}

int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  int occ = -1;
  int index = 0;
  lastIndexHelper(input,index, size, x,occ);
  return occ;

}
