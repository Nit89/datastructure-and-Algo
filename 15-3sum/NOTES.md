algorithm
1. First we sort the array
2. set i index to index 0 and increment uoto n-2
3. set two pointer start and end
4. check if start + end is equal to (int sum = 0 - nums[i];)
5. if equal go to 6 otherwise go to 7
6. push the elment to the temp vector push elements in temp vector as temp.push_back(nums[i]);           temp.push_back(nums[lo]);
temp.push_back(nums[high]);
7. if ( (nums[lo]+nums[high]) < sum) low++
8. other wise high--
9. return ans
​