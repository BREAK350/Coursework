//---------------------------------------------------------------------------
#ifndef TbStateContainerH
#define TbStateContainerH
//---------------------------------------------------------------------------
// classes
namespace dynlib
{
	namespace coursework
	{
		namespace scene
		{
			namespace utils
			{
				class TbStateContainer;
            }
		}
	}
}
//---------------------------------------------------------------------------
// includes
#include <map.h>
#include "TbState.h"
#include "TbStateAction.h"
//---------------------------------------------------------------------------
namespace dynlib
{
	namespace coursework
	{
		namespace scene
		{
			namespace utils
			{
				class TbStateContainer
				{
					// fields
					private:
						map<int, TbState*> *states_;
					public:
						TbStateContainer();
						virtual ~TbStateContainer();

						TbState* createNewState();
						TbState* getState(const int &id)const;
						int getStateCount()const;

						void forEach(TbStateAction *stateAction);
						void forEach_(TbStateAction *&stateAction_);
						void removeAllState();
				};

				class TbRemoveStateAction: public TbStateAction
				{
					public:
						virtual ~TbRemoveStateAction() {}
						virtual void action(TbState *state)
						{
                            delete state;
                        }
                };

			}
		}
	}
}
//---------------------------------------------------------------------------
#endif
