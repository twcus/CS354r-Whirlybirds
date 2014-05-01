#ifndef __rocket__
#define __rocket__

#include "Simulator.h"
#include <Ogre.h>

class Heli;

class Rocket : public GameObject {
protected:
    void updateNode(Ogre::String);
    Heli* parent;
    
public:
    Rocket(
        Ogre::String nym, 
        Ogre::SceneManager* mgr, 
        Simulator* sim, 
        Ogre::Real scale, 
        Ogre::Real m, 
        Ogre::Vector3 pos, 
        Ogre::Matrix3 ax,
        float vel,
        //Ogre::Real restitution, 
        //Ogre::Real friction,
	   //Heli* p,
        Ogre::String
        );

    Ogre::Vector3 pos2;
    float velocity;
    bool fired;
    virtual void updateTransform(Ogre::Real delta);
    void move();//(Ogre::Real x, Ogre::Real y, Ogre::Real z);
    //void addToSimulator();
    void explode();
};

#endif