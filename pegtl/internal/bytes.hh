// Copyright (c) 2014-2015 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/ColinH/PEGTL/

#ifndef PEGTL_INTERNAL_BYTES_HH
#define PEGTL_INTERNAL_BYTES_HH

namespace pegtl
{
   namespace internal
   {
      template< unsigned Num >
      struct bytes
      {
         using internal_t = bytes;

         template< typename Input >
         static bool match( Input & in )
         {
            if ( in.size() >= Num ) {
               in.bump( Num );
               return true;
            }
            return false;
         }
      };

   } // internal

} // pegtl

#endif
