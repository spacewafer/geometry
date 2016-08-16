// Boost.Geometry
// Unit Test

// Copyright (c) 2016 Oracle and/or its affiliates.

// Contributed and/or modified by Adam Wulkiewicz, on behalf of Oracle

// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_GEOMETRY_TEST_INTERSECTION_CASES_HPP
#define BOOST_GEOMETRY_TEST_INTERSECTION_CASES_HPP

struct coordinates
{
    double lon;
    double lat;
};

struct expected_result
{
    double lon;
    double lat;
};

struct expected_results
{
    coordinates p1;
    coordinates p2;
    coordinates q1;
    coordinates q2;
    expected_result gnomonic_karney;
    expected_result gnomonic_vincenty;
    expected_result gnomonic_thomas;
    expected_result sjoberg_karney;
    expected_result sjoberg_vincenty;
    expected_result sjoberg_thomas;
    expected_result sjoberg_andoyer;
    expected_result elliptic;
    expected_result great_elliptic;
};

expected_results expected[] =
{
    {
        { -1, -1 },{ 1, 1 },
        { -1, 1 },{ 1, -1 },
        { 0.0000000000000000, 0.0000000000000002 },
        { 0.0000000000000000, 0.0000000000000000 },
        { 0.0000000000000000, 0.0000000000000000 },
        { 0.0000000000633173, 0.0000000000000003 },
        { 0.0000000000626537, -0.0000000000000000 },
        { -0.0000000187861002, -0.0000000000000000 },
        { -0.0000055778585615, -0.0000000000000000 },
        { 0.0000000000000000, 0.0000000000000000 },
        { -0.0000000000000000, -0.0000000000000000 }
    },{
        { 1, 1 },{ -1, -1 },
        { -1, 1 },{ 1, -1 },
        { 0.0000000000000000, 0.0000000000000002 },
        { 0.0000000000000000, 0.0000000000000000 },
        { 0.0000000000000000, 0.0000000000000000 },
        { 0.0000000000000000, 0.0000000000633274 },
        { 0.0000000000000000, 0.0000000000626632 },
        { -0.0000000000000006, -0.0000000187889745 },
        { -0.0000000000000001, -0.0000055787431353 },
        { 0.0000000000000000, 0.0000000000000000 },
        { -0.0000000000000000, 0.0000000000000000 }
    },{
        { -1, -1 },{ 1, 1 },
        { 1, -1 },{ -1, 1 },
        { 0.0000000000000000, 0.0000000000000002 },
        { 0.0000000000000000, 0.0000000000000000 },
        { 0.0000000000000000, 0.0000000000000000 },
        { -0.0000000000000000, -0.0000000000633268 },
        { -0.0000000000000000, -0.0000000000626632 },
        { -0.0000000000000004, 0.0000000187889746 },
        { 0.0000000000000001, 0.0000055787431353 },
        { 0.0000000000000000, 0.0000000000000000 },
        { 0.0000000000000000, 0.0000000000000000 }
    },{
        { 1, 1 },{ -1, -1 },
        { 1, -1 },{ -1, 1 },
        { 0.0000000000000000, 0.0000000000000002 },
        { 0.0000000000000000, 0.0000000000000000 },
        { 0.0000000000000000, 0.0000000000000000 },
        { -0.0000000000633173, 0.0000000000000003 },
        { -0.0000000000626537, -0.0000000000000000 },
        { 0.0000000187860994, 0.0000000000000001 },
        { 0.0000055778585615, -0.0000000000000000 },
        { 0.0000000000000000, 0.0000000000000000 },
        { -0.0000000000000000, 0.0000000000000000 }
    },{
        { 0, 0 },{ 1, 1 },
        { 0, 1 },{ 1, 0 },
        { 0.5000000000000000, 0.5000573755188484 },
        { 0.5000000000000000, 0.5000573755188470 },
        { 0.5000000000000000, 0.5000573755109839 },
        { 0.5000000000316606, 0.5000573755188390 },
        { 0.5000000000313266, 0.5000573755188389 },
        { 0.4999999906069524, 0.5000573755152582 },
        { 0.4999972102164753, 0.5000573755151276 },
        { 0.5000000000000001, 0.5000573754962017 },
        { 0.4999999999999999, 0.5000571197534014 }
    },{
        { 1, 1 },{ 0, 0 },
        { 0, 1 },{ 1, 0 },
        { 0.5000000000000000, 0.5000573755188484 },
        { 0.5000000000000000, 0.5000573755188470 },
        { 0.5000000000000000, 0.5000573755109839 },
        { 0.5000000000000000, 0.5000573755505008 },
        { 0.5000000000000000, 0.5000573755501669 },
        { 0.4999999999999996, 0.5000573661218464 },
        { 0.4999999999999999, 0.5000545856093679 },
        { 0.5000000000000001, 0.5000573754962017 },
        { 0.4999999999999999, 0.5000571197534014 }
    },{
        { 0, 0 },{ 1, 1 },
        { 1, 0 },{ 0, 1 },
        { 0.5000000000000000, 0.5000573755188484 },
        { 0.5000000000000000, 0.5000573755188470 },
        { 0.5000000000000000, 0.5000573755109839 },
        { 0.5000000000000001, 0.5000573754871773 },
        { 0.4999999999999999, 0.5000573754875109 },
        { 0.4999999999999999, 0.5000573849086647 },
        { 0.5000000000000000, 0.5000601654208935 },
        { 0.5000000000000001, 0.5000573754962017 },
        { 0.4999999999999999, 0.5000571197534014 }
    },{
        { 1, 1 },{ 0, 0 },
        { 1, 0 },{ 0, 1 },
        { 0.5000000000000000, 0.5000573755188484 },
        { 0.5000000000000000, 0.5000573755188470 },
        { 0.5000000000000000, 0.5000573755109839 },
        { 0.4999999999683394, 0.5000573755188390 },
        { 0.4999999999686731, 0.5000573755188389 },
        { 0.5000000093930521, 0.5000573755152582 },
        { 0.5000027897835244, 0.5000573755151276 },
        { 0.5000000000000001, 0.5000573754962017 },
        { 0.4999999999999999, 0.5000571197534014 }
    }
};

size_t const expected_size = sizeof(expected) / sizeof(expected_results);

#endif // BOOST_GEOMETRY_TEST_INTERSECTION_CASES_HPP
