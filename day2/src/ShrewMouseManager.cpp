#include "ShrewMouseManager.h"

ShrewMouseManager::ShrewMouseManager(Ogre::SceneManager* sm)
    :_sm(sm)
{
    using namespace Ogre;
    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 3; ++j)
        {
            Entity *ent = _sm->createEntity("head" + Ogre::StringConverter::toString(i + j * 3), "ogrehead.mesh");
            SceneNode *rsn = _sm->getRootSceneNode();
            SceneNode * node = rsn->createChildSceneNode(Ogre::Vector3(100 * i, 0, 100*j));
            node->attachObject(ent);
        }
    }

}

ShrewMouseManager::~ShrewMouseManager()
{

}
