#include <iostream>
#include <vector>

std::vector<int> merge(std::vector<int> f, std::vector<int> s){
// merge(r1, r2){
// walk down r1 and r2 copying the smaller one into result until combined.
// }
    int sum = f.size() + s.size();
    std::vector<int> merged(sum);
  
  //looping by the num of elements 
    for(int i = 0; i < sum; i++){

        //if both vectors have elements add the smaller one 
        if(f.size() > 0 && s.size() >0){

        
            if(f[i] < s[i]){
                merged[i] = f[i];
            }else if(f[i] > s[i]){
                merged[i] = s[i];
            }else{
                //in case they're the same num 
                merged[i] = f[i];
            }

        }else{
            //if one of them doesn't add all the elements from the other. 
            if(f.size() > 0){
                merged[i] = f[i] ;
            }else{
                merged[i] = s[i] ;
            }
            
        }
    }

    return merged; 
}




std::vector<int> msort(std::vector<int> unsorted) {
  std::vector<int> firstHalf, secondHalf, resultFirstHalf, resultSecondHalf;

  if (unsorted.size() <= 1) {
    return unsorted;
  }

    for (int i = 0; i < unsorted.size()/2; i++) {
        firstHalf.push_back(unsorted[i]);
    }
    resultFirstHalf = msort(firstHalf);

    for (int j = unsorted.size()/2; j < unsorted.size(); j++) {
        secondHalf.push_back(unsorted[j]);
    }
    resultSecondHalf = msort(secondHalf);

    return merge(resultFirstHalf, resultSecondHalf);
}

int main()
{
  std::vector<int> vec = {1,4,55,-1,-230,14,66,4};
  vec = msort(vec);
  for(int i = 0; i < vec.size(); i++)
    std::cout << vec[i] << ", ";
  std::cout << std::endl;
  return 0;
}
