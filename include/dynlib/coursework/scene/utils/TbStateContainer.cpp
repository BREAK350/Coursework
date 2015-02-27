//---------------------------------------------------------------------------
#pragma hdrstop
#include "TbStateContainer.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
namespace dynlib
{
	namespace coursework
	{
		namespace scene
		{
            namespace utils
			{
				TbStateContainer::TbStateContainer()
				{
					states_ = new map<int, TbState*>();
				}

				TbStateContainer::~TbStateContainer()
				{
					removeAllState();
					delete states_;
                }

				TbState* TbStateContainer::createNewState()
				{
					TbState *newState_ = new TbState();
					int id = getStateCount();
					newState_->setId(id);
					(*states_)[id] = newState_;
					return newState_;
				}

				TbState* TbStateContainer::getState(const int &id)const
				{
					TbState *state = NULL;
					map<int, TbState*>::iterator it;
					it = states_->find(id);
					if(it != states_->end())
					{
						state = it->second;
					}
					return state;
                }

				int TbStateContainer::getStateCount()const
				{
					return states_->size();
				}

				void TbStateContainer::forEach(TbStateAction *stateAction)
				{
					if(states_ && stateAction)
					{
						for(map<int, TbState*>::iterator it = states_->begin();
							it != states_->end(); ++it)
						{
							stateAction->action(it->second);
						}
					}
				}

				void TbStateContainer::forEach_(TbStateAction *&stateAction_)
				{
					if(stateAction_)
					{
						forEach(stateAction_);
						delete stateAction_;
						stateAction_ = NULL;
                    }
				}

				void TbStateContainer::removeAllState()
				{
					TbStateAction *stateAction_ = new TbRemoveStateAction();
					forEach_(stateAction_);
					states_->clear();
                }
			}
		}
	}
}
//---------------------------------------------------------------------------
