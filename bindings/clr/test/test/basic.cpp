//  (C) Copyright Johan Ditmar, Karel Hruda, Paul O'Neill & Luke Stedman 2009.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).

#include <boost/test/test_tools.hpp>
#include <boost/test/unit_test.hpp>  

using boost::unit_test::test_suite;    

using namespace protean::clr;

BOOST_AUTO_TEST_SUITE(clr_suite);

BOOST_AUTO_TEST_CASE(test_clr_basic)
{
    protean::clr::Variant^ v = gcnew Variant(gcnew System::String("hello"));

    System::Console::WriteLine(v->ToString());
}

BOOST_AUTO_TEST_SUITE_END()