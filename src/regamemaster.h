#include "amxxmodule.h" //this is the SDK file

struct CreateForward    //We will use this to store some info
{
	int forwardID;
	String name;
};

extern int TouchForward;
extern CVector<CreateForward> CreateForwards;