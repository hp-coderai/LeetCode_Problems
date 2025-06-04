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

bool findIntersectTop(object* obj, float height){
  float Radius = findRadius(&obj);
  return ((Radius - obj.y) <= (float)0.0);
}

bool FindSequenceRecursively(object* objA, object* objB, vector<int> visited) {
  
}
  
}
