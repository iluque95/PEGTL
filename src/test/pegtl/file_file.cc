// Copyright (c) 2015-2017 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#include "test.hh"

#include "verify_file.hh"

namespace tao
{
   namespace TAOCPP_PEGTL_NAMESPACE
   {
      void unit_test()
      {
         verify_file< file_parser >();
      }

   } // namespace TAOCPP_PEGTL_NAMESPACE

} // namespace tao

#include "main.hh"
