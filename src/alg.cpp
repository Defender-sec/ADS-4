// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int a=0;
  for(int i=0; i < len; i++){
    for(int j=0; j < len; j++){
      int c = arr[j]+arr[i];
      if(c == value){
        a++;
      }
    }
  }
  return a;
}
int countPairs2(int *arr, int len, int value) {
  	int a = 0;
	for (int i=0; i<(len - 1); i++){
		for (int j=(len - 1); j>i; j--){
			if ((arr[i] + arr[j]) == value){
				a++;
      }
		}
  }
  return a;
}
int countPairs3(int *arr, int len, int value) {
  int a = 0;
	for (int i = 0; i < len - 1; i++){
		int left = i, right = len;
		while (left < right-1){
			int mid = (left + right) / 2;
			if (arr[i] + arr[mid] == value){
				a++;
				int j = mid+1;
				while (arr[i] + arr[j] == value && j <right){
					a++;
					j++;
				}
				j = mid - 1;
				while (arr[i] + arr[j] == value && j>left){
					a++;
					j--;
				}
				break;
			}
			if (arr[i] + arr[mid] > value){
				right = mid;
      }
			else{
				left = mid;
      }
		}
	}
	return a;
}
