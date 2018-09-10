/****************************************************************************
**
** This file is part of the Ponder library, formerly CAMP.
**
** The MIT License (MIT)
**
** Copyright (C) 2015-2018 Nick Trout.
**
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to deal
** in the Software without restriction, including without limitation the rights
** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
** copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:
** 
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
** 
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
** THE SOFTWARE.
**
****************************************************************************/

#include "test.hpp"

#include <ponder/classbuilder.hpp>
#include <ponder/uses/runtime.hpp>
#include <iostream>

PONDER_TYPE(doc::Class)

// static void declare()
// {
//     ponder::Class::declare<A>("A")
//         .constructor<int>()
//         .property("value", &A::getValue)
//         ;
// }
//
// static void inspect()
// {
//     //! [classIterator]
//     for (auto&& cls : ponder::classIterator())
//     {
//         std::cout << "Class " << cls.first << std::endl;
//     }
//     //! [classIterator]
// }
//

// static void reportAll()
// {
//     ponder::uses::reportAll();
// }

TEST_CASE("declare types")
{
//    SECTION("args")
//    {
//        doc::Class obj;
//
//        //! [doc_args1]
//        ponder::Args args(1, true, "string", 5.24, &obj);
//        //! [doc_args1]
//
//        //! [doc_args2]
//        ponder::Args args;
//        //! [doc_args2]
//    }
}


