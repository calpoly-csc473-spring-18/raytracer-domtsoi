//
//  Sphere.hpp
//  raytrace
//
//  Created by Dominic Tsoi on 4/11/18.
//

#ifndef Sphere_hpp
#define Sphere_hpp

#include <stdio.h>
#include <glm/glm.hpp>
#include "Material.hpp"
#include "Object.hpp"
#include "Intersection.hpp"
#include "Ray.hpp"

class Sphere:public Object
{
public:
    glm::vec3 center;
    float radius;
    glm::vec3 translate;
    glm::vec3 normal;
    void printInfo();
    void printObjectType();
    void printObjectColor();
    float checkIntersect(const Ray * ray);
};

#endif /* Sphere_hpp */
