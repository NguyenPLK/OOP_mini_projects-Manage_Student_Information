#ifndef _SINHVIEN_

#ifndef _STDLIB_
	#include <iostream>
	using STRING = std::string;
	using FL = float;
#endif

namespace StudentSpace{
	namespace nutshell {
		typedef struct StudentInformation {
			StudentInformation() {
				maSo = "Unknown";
				hoVaTen = "Unknown";
				lop = "Unknown";
				GPA = 0;
				std::cout << "HHELLLOOOO" << std::endl;
			}

			STRING maSo, hoVaTen, lop;
			FL GPA;
		};
	}

class SinhVien
{
private:
	nutshell::StudentInformation StudentInfo;
public:
	SinhVien();
	SinhVien(const STRING m_maSo, const STRING m_hoVaTen, const STRING m_lop, const FL m_GPA);

	STRING getName() {
		return StudentInfo.hoVaTen;
	}

};
}
#endif
