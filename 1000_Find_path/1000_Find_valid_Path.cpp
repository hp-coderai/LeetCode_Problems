Class object:
  public:
    float x;
    float y;
    float findRadius(object* obj){
      return sqrt(obj.x*obj.x + obj.y*obj.y);
    }

float findDistance(object* objA, object* objB) {
  return(sqrt((objA.x - objB.x)*(objA.x - objB.x) + (objA.y - objB.y)*(objA.y - objB.y));
}

bool findIntersection(object* objA, object* objB) {
  float RadiusA = findRadius(&objA);
  float RadiusB = findRadius(&objB);
  float distance = findDistance(&objA, &objB);

  return(distance< (RadiousA+RadiusB));
}

bool findIntersectTop(object* obj, float height){
  float Radius = findRadius(&obj);
  return (height< (Radius + obj.y));
}

bool findIntersectBottom(object* obj, float height){
  float Radius = findRadius(&obj);
  return ((Radius - obj.y) <= (float)0.0);
}

bool findIfVisited(vector<int>* visited, int idx) {
  for(int i = 0; i<visisted.size(); i++) {
    if (idx == visited[i]) {
      return true;
    }
  }
  return false;
}

bool FindSequenceRecursively(int i, object* objA, object* objB, vector<int> visited) {
  if(findIntersectTop(&objB[i], &height){
    return true;
  }  
  if (findIfVisited(i, &visited) == false) {
    visited.push_back(i);
    return FindSequenceRecursively(i, &objA[i], &objB[i], &visited); 
  }
  i++;
  return false;
}
  
bool FindValidPath( object* objA, object* objB) {
  bool isValidPath;
  for (int j = 0; j< objA.size(); j++) {
    if(findIntersectBottom(&objB[i], &height){
      vector<int> visited = {};
      visited.push_back(j);
      isValidPath = FindSequenceRecursively(j, &objA, &objB, &visited)
    } 
  }
  return isValidPath;
}
