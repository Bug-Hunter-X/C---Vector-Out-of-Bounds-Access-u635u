std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

for (int i = 0; i < vec.size(); ++i) {
  // Access vec[i] without checking bounds in other parts of the code. 
}

int lastElement = vec.back(); //This is fine in this case