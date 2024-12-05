# test-generator

## for tree :
  g++ main.cpp -o main.exe && main.exe tree -n (max size of tree) -hasw (1 if want to have a weighted tree otherwise 0) -l (left bound of weight) -r (right bound of weight) -t (number of testcases per .in file) -tl (test file name begins from) -tr (test file name ends)

## for array :
  g++ main.cpp -o main.exe && main.exe array -n (max size of array) -l (left bound of elements) -r (right bound of elements) -t (number of testcases per .in file) -tl (test file name begins from) -tr (test file name ends)

## for graph :
  g++ main.cpp -o main.exe && main.exe graph -n (max size of tree) -hasw (1 if want to have a weighted tree otherwise 0) -l (left bound of weight) -r (right bound of weight) -t (number of testcases per .in file) -tl (test file name begins from) -tr (test file name ends)
