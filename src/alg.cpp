// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int a;
  for(int i=0; i < len; i++){
    for(int j=0; j < len; j++){
      if(i != j){
        int c = arr[j]+arr[i];
        if(c == value){
          a++;
        }
      }
    }
  }
  return a;
}
int countPairs2(int *arr, int len, int value) {
  return 0;
}
int countPairs3(int *arr, int len, int value) {
  return 0;
}
