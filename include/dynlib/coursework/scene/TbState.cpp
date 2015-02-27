//---------------------------------------------------------------------------
#pragma hdrstop
#include "TbState.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
namespace dynlib
{
	namespace coursework
	{
		namespace scene
		{
			int TbState::getId()const
			{
				return id;
			}

			void TbState::setId(const int &id)
			{
				this->id = id;
            }
		}
	}
}
//---------------------------------------------------------------------------

