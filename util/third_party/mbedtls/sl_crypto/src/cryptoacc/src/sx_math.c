/**
 * @file
 * @brief Math functions
 * @copyright Copyright (c) 2016-2018 Silex Insight. All Rights reserved
 */

#include "sx_math.h"
#include "cryptolib_def.h"
#include "sx_errors.h"

void sx_math_u64_to_u8array(uint64_t in, uint8_t *out, enum sx_endianness endian)
{
   uint32_t i = 0;
   if (endian == sx_little_endian) {
      for(i = 0; i < 8; i++) out[i] = (in >>  8*i)&0xFF;
   } else {
      for(i = 0; i < 8; i++) out[7-i] = (in >>  8*i)&0xFF;
   }
}

uint32_t sx_math_array_is_not_null(uint8_t *in, uint32_t length)
{
   uint32_t i;
   uint32_t is_null = 1;

   for(i = 0; i < length-1; i++) {
      is_null &= (in[i] == 0);
   }

   return !is_null;
}



uint32_t sx_math_array_nbits(uint8_t *a, const size_t length)
{
   CRYPTOLIB_ASSERT_NM(a);

   uint32_t i,j;
   uint32_t nbits = 8*length;

   for(i=0;i<length;i++) {
      if(a[i]==0) {
         nbits -= 8;
      } else {
         for(j=7;j>0;j--) {
            if(a[i]>>j)
               break;
            else
               nbits--;
         }
         break;
      }
   }
   return nbits;
}


int32_t sx_math_array_incr(uint8_t *a, const size_t length, int8_t value)
{
   CRYPTOLIB_ASSERT_NM(a);
   CRYPTOLIB_ASSERT_NM(length >= 1);

   int32_t carry = value;
   /* The LSB are at the end of the array so start there. */
   for (int i = length - 1; i >= 0; i--) {
      int32_t byte = a[i];
      int32_t sum = byte + carry;
      a[i] = (uint8_t) (sum & 0xFF);
      carry = sum >> 8;
   }
   return carry;
}

void sx_math_array_add(uint8_t *a, const size_t alen, const uint8_t *b, const size_t blen)
{
   CRYPTOLIB_ASSERT_NM(a);
   CRYPTOLIB_ASSERT_NM(alen >= 1);
   CRYPTOLIB_ASSERT_NM(b);
   CRYPTOLIB_ASSERT_NM(blen >= 1);

   uint32_t tmp = 0;
   size_t i = 0;

   for(; i < blen; i++) {
      tmp += a[alen - i - 1] + b[blen - i - 1];
      a[alen - i - 1] = tmp & 0xFF;
      tmp >>= 8;
   }

   for (; tmp != 0 && i < alen; i++) {
      tmp += a[alen - i - 1] ;
      a[alen - i - 1] = tmp & 0xFF;
      tmp >>= 8;
   }
}

bool sx_math_less_than(
      const uint8_t *lhs,
      const uint8_t *rhs,
      const size_t len,
      const enum sx_endianness endian)
{
   if (!lhs || !rhs)
      return CRYPTOLIB_INVALID_PARAM;

   int step = (endian == sx_big_endian) ? 1 : -1;
   int start = (endian == sx_big_endian) ? 0 : (int)(len - 1);
   int stop =  (endian == sx_big_endian) ? (int)len : -1;

   for (int i = start; i != stop; i += step) {
      if (lhs[i] < rhs[i])
         return true;
      else if (lhs[i] > rhs[i])
         return false;
   }

   // If we arrive here, both numbers are strictly equal, so return false
   return false;
}
