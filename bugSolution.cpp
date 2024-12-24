std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

for (int i = 0; i < vec.size(); ++i) {
  // Always check if index i is less than vec.size() before accessing vec[i].
  if (i < vec.size()) {
    // Safe access to vec[i]
  } else {
    //Handle the case
  }
}

int lastElement = vec.back(); //This is fine in this case