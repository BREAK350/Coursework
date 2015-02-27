//---------------------------------------------------------------------------
#ifndef TbIdableH
#define TbIdableH
//---------------------------------------------------------------------------
namespace dynlib
{
	namespace coursework
	{
		namespace scene
		{
			namespace utils
			{
				class TbIdable
				{
					public:
						virtual int getId() = 0;
						virtual void setId(const int &id) { }
				};
			}
		}
	}
}
//---------------------------------------------------------------------------
#endif
