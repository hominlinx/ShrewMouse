#include "ShrewMouseApplication.h"

using namespace Ogre;

ShrewMouseApplication::ShrewMouseApplication()
    :_miceManager()
{

}
ShrewMouseApplication::~ShrewMouseApplication()
{
    //if (_miceManager)
    //{
        //delete _miceManager;
    //}

}

void
ShrewMouseApplication::createScene()
{
    mSceneMgr->setAmbientLight(ColourValue(0.5, 0.5, 0.5));
    Light* l = mSceneMgr->createLight("MainLight");
    l->setPosition(20, 80, 50);

    mCamera->setPosition(94.3f, 194.3f, 373.3f);
    mCamera->setOrientation(Ogre::Quaternion(0.9f, -0.3f, -0.08f, -0.002f));
    _miceManager = SpShrewMouseManager( new ShrewMouseManager(mSceneMgr));
   //_miceManager = new ShrewMouseManager(mSceneMgr);
}

void
ShrewMouseApplication::createFrameListener()
{
    mFrameListener = new ShrewMouseFrameListener(_miceManager, mWindow, mCamera);
    mRoot->addFrameListener(mFrameListener);
}
