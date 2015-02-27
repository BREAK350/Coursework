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
						virtual ~TbIdable() {}
						virtual int getId()const = 0;
						virtual void setId(const int &id) { }
				};
			}
		}
	}
}
//---------------------------------------------------------------------------
#endif
