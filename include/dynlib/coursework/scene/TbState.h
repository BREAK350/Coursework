//---------------------------------------------------------------------------
#ifndef TbStateH
#define TbStateH
//---------------------------------------------------------------------------
// classes
namespace dynlib
{
	namespace coursework
	{
		namespace scene
		{
			class TbState;
		}
	}
}
//---------------------------------------------------------------------------
// includes
#include "TbIdable.h"
//---------------------------------------------------------------------------
namespace dynlib
{
	namespace coursework
	{
		namespace scene
		{
			class TbState: public utils::TbIdable
			{
				private:
					int id;
				public:
					virtual int getId()const;
					virtual void setId(const int &id);
            };
		}
	}
}
//---------------------------------------------------------------------------
#endif
