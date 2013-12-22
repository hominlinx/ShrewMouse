#include<Ogre.h>
#include <boost/shared_ptr.hpp>
class ShrewMouseManager
{
public:
    ShrewMouseManager(Ogre::SceneManager* sm);
    ~ShrewMouseManager();
protected:
    Ogre::SceneManager* _sm;
};

typedef boost::shared_ptr<ShrewMouseManager> SpShrewMouseManager;
