// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
   int left = 0, right = size - 1, count = 0; //границы массива
   while (left < right) {
      int middle = (left + right) / 2;
      if (value > arr[middle])
         left = middle + 1;
      else
         right = middle;
   }
   while (arr[left] == value) {
      count++;
      left++;
   }
   if (count != 0)
      return count;
   else
      return 0; // если ничего не найдено
}
