//---------------------------------------------------------------------------
#ifndef TbStateActionH
#define TbStateActionH
//---------------------------------------------------------------------------
// includes
#include "TbState.h"
//---------------------------------------------------------------------------
namespace dynlib
{
	namespace coursework
	{
		namespace scene
		{
			namespace utils
			{
				class TbStateAction
				{
					public:
						virtual ~TbStateAction() {}
						virtual void action(TbState *state) = 0;
				};
			}
		}
	}
}
//---------------------------------------------------------------------------
#endif
