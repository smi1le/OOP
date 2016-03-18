#include "stdafx.h"
#include "..\Lab1_6\VectorProcessor.h"

using namespace std;

// ������� ProcessVector
BOOST_AUTO_TEST_SUITE(ProcessVector_function)

	// ������� ������ ������ �� ������� �������
	BOOST_AUTO_TEST_CASE(makes_empty_vector_from_empty_vector)
	{
		vector<double> emptyVector;
		ConversionVectorElements(emptyVector);
		BOOST_CHECK(emptyVector.empty());
	}

	// �� �������� ���������� �������, ������� �� �������� ������������� �����
	BOOST_AUTO_TEST_CASE(does_not_change_vector_containing_no_positive_numbers)
	{
		vector<double> numbers = { -4, 4, 5, 8};
		vector<double> reference = { 8, -8, -10, -16 };
		ConversionVectorElements(numbers);
		BOOST_CHECK(numbers == reference);
	}

	// ������ �������� ��� ����� �� ���� ��������� �������
	BOOST_AUTO_TEST_CASE(should_add_this_number_to_each_element)
	{
		vector<double> numbers = { 1, 1, 1, 1, 1 };
		auto copy(numbers);
		ConversionVectorElements(numbers);
		BOOST_CHECK(numbers == copy);
	}
	
BOOST_AUTO_TEST_SUITE_END()