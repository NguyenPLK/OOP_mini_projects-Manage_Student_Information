#include "SinhVien.h"

StudentSpace::SinhVien::SinhVien() : StudentInfo() {
	std::cout << "This is SinhVien Constructor without arguments !" << std::endl;
}

StudentSpace::SinhVien::SinhVien(const STRING m_maSo, const STRING m_hoVaTen, const STRING m_lop, const FL m_GPA){
	StudentInfo.maSo = m_maSo;
	StudentInfo.hoVaTen = m_hoVaTen;
	StudentInfo.lop = m_lop;
	std::cout << "This is SinhVien Constructor with arguments !" << std::endl;
}