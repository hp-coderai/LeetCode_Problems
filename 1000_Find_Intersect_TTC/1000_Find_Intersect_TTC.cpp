class Vectors:
   flaot x;
   float y;

bool findIntersect(Vectors* VecA, Vectors* VecB) {
  bool Intersect  = false;
  float SampleTime = 0.1;
  unordered_map<int, pair<int, int>> map;
  for(int i = 0; i<VecA.size(); i++){
    map[i] = {VecA[i].x, VecA[i].y};
  }
  for(int i = 0; i<VecB.size(); i++){
    if (map[i] == {VecB[i].x, VecB[i].y}) {
      Intersect = true;
      int idxB = i; 
    }
  }

  for(int i = 0; i<VecB.size(); i++){
    if (map[idxB] == {VecA[i].x, VecA[i].y}) { 
      int idxA = i;   
    }
  }

TTC = abs(idxA - idxB)*SampleTime;
  
}
