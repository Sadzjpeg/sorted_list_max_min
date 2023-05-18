#include <stdio.h>
    /*we change the order from largest to smallest object*/
void sort(int niz[],int n){
  int i,j,tmp;
  for(i=0;i<n;i++){
    for (j=0;j<n-i-1;j++){
      if (niz[j]<niz[j+1]){
        tmp=niz[j];
        niz[j]=niz[j+1];
        niz[j+1]=tmp;
      }
    }
  }
  /*and now we print the final version of the list, and print the first (largest) and last (smallest) object*/
  printf("novi niz:");
  for (i=0;i<n;i++){
    printf("%d",niz[i]);
  }
  printf("%d",niz[0]);
  printf("%d",niz[n-1]);

}

int main(void) {
    /*you enter a list of five objects*/
  int i,n=5,a,niz[5];
  for (i=0;i<5;i++){
    scanf("%d",&a);
    niz[i]=a;
  }
  /*we call a function that sorts the list in descending order*/
  sort(niz,n);

  return 0;
}
