/**
 * @file
 * @brief This file contains the hard-coded curve parameters
 *          for common ECC
 * @copyright Copyright (c) 2016-2018 Silex Insight. All Rights reserved
 */



#include "sx_ecc_curves.h"
#include "ba414ep_config.h"


uint32_t sx_ecc_build_pk_flags(enum sx_ecc_curve_type curve_type)
{
   uint32_t flags = BA414EP_SELCUR_NO_ACCELERATOR;

   if (curve_type == sx_ecc_curve_prime)
      flags |= BA414EP_CMD_OPFLD(BA414EP_OPFLD_PRIME);
   else if (curve_type == sx_ecc_curve_binary)
      flags |= BA414EP_CMD_OPFLD(BA414EP_OPFLD_BINARY);
   else if (curve_type == sx_ecc_curve_edwards)
      flags |= BA414EP_CMD_EDWARDS(1);
   else if (curve_type != sx_ecc_curve_unspecified)
      CRYPTOLIB_ASSERT(0, "Not a recognized field option");

   return flags;
}

uint32_t sx_ecc_curve_bytesize(const sx_ecc_curve_t *curve)
{
   return curve->bytesize;
}



static const ALIGNED  uint8_t ecc_p192_params[] = {
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,     //q
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0xde, 0xf8, 0x36, 0x14, 0x6b, 0xc9, 0xb1, 0xb4, 0xd2, 0x28, 0x31,     //n
   0x18, 0x8d, 0xa8, 0x0e, 0xb0, 0x30, 0x90, 0xf6, 0x7c, 0xbf, 0x20, 0xeb, 0x43, 0xa1, 0x88, 0x00, 0xf4, 0xff, 0x0a, 0xfd, 0x82, 0xff, 0x10, 0x12,     //gx
   0x07, 0x19, 0x2b, 0x95, 0xff, 0xc8, 0xda, 0x78, 0x63, 0x10, 0x11, 0xed, 0x6b, 0x24, 0xcd, 0xd5, 0x73, 0xf9, 0x77, 0xa1, 0x1e, 0x79, 0x48, 0x11,     //gy
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,    //a
   0x64, 0x21, 0x05, 0x19, 0xe5, 0x9c, 0x80, 0xe7, 0x0f, 0xa7, 0xe9, 0xab, 0x72, 0x24, 0x30, 0x49, 0xfe, 0xb8, 0xde, 0xec, 0xc1, 0x46, 0xb9, 0xb1 };  //b
const sx_ecc_curve_t sx_ecc_curve_p192 = {
   .params  = BLOCK_T_CONV(ecc_p192_params, sizeof(ecc_p192_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_PRIME) | BA414EP_SELCUR_ACCEL_P192,
   .bytesize = 24,
};


static const ALIGNED  uint8_t ecc_p224_params[] = {
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,     //q
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x16, 0xa2, 0xe0, 0xb8, 0xf0, 0x3e, 0x13, 0xdd, 0x29, 0x45, 0x5c, 0x5c, 0x2a, 0x3d,     //n
   0xb7, 0x0e, 0x0c, 0xbd, 0x6b, 0xb4, 0xbf, 0x7f, 0x32, 0x13, 0x90, 0xb9, 0x4a, 0x03, 0xc1, 0xd3, 0x56, 0xc2, 0x11, 0x22, 0x34, 0x32, 0x80, 0xd6, 0x11, 0x5c, 0x1d, 0x21,     //gx
   0xbd, 0x37, 0x63, 0x88, 0xb5, 0xf7, 0x23, 0xfb, 0x4c, 0x22, 0xdf, 0xe6, 0xcd, 0x43, 0x75, 0xa0, 0x5a, 0x07, 0x47, 0x64, 0x44, 0xd5, 0x81, 0x99, 0x85, 0x00, 0x7e, 0x34,     //gy
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,    //a
   0xb4, 0x05, 0x0a, 0x85, 0x0c, 0x04, 0xb3, 0xab, 0xf5, 0x41, 0x32, 0x56, 0x50, 0x44, 0xb0, 0xb7, 0xd7, 0xbf, 0xd8, 0xba, 0x27, 0x0b, 0x39, 0x43, 0x23, 0x55, 0xff, 0xb4 };  //b
const sx_ecc_curve_t sx_ecc_curve_p224 = {
   .params  = BLOCK_T_CONV(ecc_p224_params, sizeof(ecc_p224_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_PRIME) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 28,
};


static const ALIGNED  uint8_t ecc_p256_params[] = {
   0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,     //q
   0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbc, 0xe6, 0xfa, 0xad, 0xa7, 0x17, 0x9e, 0x84, 0xf3, 0xb9, 0xca, 0xc2, 0xfc, 0x63, 0x25, 0x51,     //n
   0x6b, 0x17, 0xd1, 0xf2, 0xe1, 0x2c, 0x42, 0x47, 0xf8, 0xbc, 0xe6, 0xe5, 0x63, 0xa4, 0x40, 0xf2, 0x77, 0x03, 0x7d, 0x81, 0x2d, 0xeb, 0x33, 0xa0, 0xf4, 0xa1, 0x39, 0x45, 0xd8, 0x98, 0xc2, 0x96,     //gx
   0x4f, 0xe3, 0x42, 0xe2, 0xfe, 0x1a, 0x7f, 0x9b, 0x8e, 0xe7, 0xeb, 0x4a, 0x7c, 0x0f, 0x9e, 0x16, 0x2b, 0xce, 0x33, 0x57, 0x6b, 0x31, 0x5e, 0xce, 0xcb, 0xb6, 0x40, 0x68, 0x37, 0xbf, 0x51, 0xf5,     //gy
   0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,    //a
   0x5a, 0xc6, 0x35, 0xd8, 0xaa, 0x3a, 0x93, 0xe7, 0xb3, 0xeb, 0xbd, 0x55, 0x76, 0x98, 0x86, 0xbc, 0x65, 0x1d, 0x06, 0xb0, 0xcc, 0x53, 0xb0, 0xf6, 0x3b, 0xce, 0x3c, 0x3e, 0x27, 0xd2, 0x60, 0x4b };  //b
const sx_ecc_curve_t sx_ecc_curve_p256 = {
   .params  = BLOCK_T_CONV(ecc_p256_params, sizeof(ecc_p256_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_PRIME) | BA414EP_SELCUR_ACCEL_P256,
   .bytesize = 32,
};


static const ALIGNED  uint8_t ecc_p384_params[] = {
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,     //q
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x63, 0x4d, 0x81, 0xf4, 0x37, 0x2d, 0xdf, 0x58, 0x1a, 0x0d, 0xb2, 0x48, 0xb0, 0xa7, 0x7a, 0xec, 0xec, 0x19, 0x6a, 0xcc, 0xc5, 0x29, 0x73,     //n
   0xaa, 0x87, 0xca, 0x22, 0xbe, 0x8b, 0x05, 0x37, 0x8e, 0xb1, 0xc7, 0x1e, 0xf3, 0x20, 0xad, 0x74, 0x6e, 0x1d, 0x3b, 0x62, 0x8b, 0xa7, 0x9b, 0x98, 0x59, 0xf7, 0x41, 0xe0, 0x82, 0x54, 0x2a, 0x38, 0x55, 0x02, 0xf2, 0x5d, 0xbf, 0x55, 0x29, 0x6c, 0x3a, 0x54, 0x5e, 0x38, 0x72, 0x76, 0x0a, 0xb7,     //gx
   0x36, 0x17, 0xde, 0x4a, 0x96, 0x26, 0x2c, 0x6f, 0x5d, 0x9e, 0x98, 0xbf, 0x92, 0x92, 0xdc, 0x29, 0xf8, 0xf4, 0x1d, 0xbd, 0x28, 0x9a, 0x14, 0x7c, 0xe9, 0xda, 0x31, 0x13, 0xb5, 0xf0, 0xb8, 0xc0, 0x0a, 0x60, 0xb1, 0xce, 0x1d, 0x7e, 0x81, 0x9d, 0x7a, 0x43, 0x1d, 0x7c, 0x90, 0xea, 0x0e, 0x5f,     //gy
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xfc,    //a
   0xb3, 0x31, 0x2f, 0xa7, 0xe2, 0x3e, 0xe7, 0xe4, 0x98, 0x8e, 0x05, 0x6b, 0xe3, 0xf8, 0x2d, 0x19, 0x18, 0x1d, 0x9c, 0x6e, 0xfe, 0x81, 0x41, 0x12, 0x03, 0x14, 0x08, 0x8f, 0x50, 0x13, 0x87, 0x5a, 0xc6, 0x56, 0x39, 0x8d, 0x8a, 0x2e, 0xd1, 0x9d, 0x2a, 0x85, 0xc8, 0xed, 0xd3, 0xec, 0x2a, 0xef };  //b
const sx_ecc_curve_t sx_ecc_curve_p384 = {
   .params  = BLOCK_T_CONV(ecc_p384_params, sizeof(ecc_p384_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_PRIME) | BA414EP_SELCUR_ACCEL_P384,
   .bytesize = 48,
};


static const ALIGNED  uint8_t ecc_p521_params[] = {
   0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,     //q
   0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x51, 0x86, 0x87, 0x83, 0xbf, 0x2f, 0x96, 0x6b, 0x7f, 0xcc, 0x01, 0x48, 0xf7, 0x09, 0xa5, 0xd0, 0x3b, 0xb5, 0xc9, 0xb8, 0x89, 0x9c, 0x47, 0xae, 0xbb, 0x6f, 0xb7, 0x1e, 0x91, 0x38, 0x64, 0x09,     //n
   0x00, 0xc6, 0x85, 0x8e, 0x06, 0xb7, 0x04, 0x04, 0xe9, 0xcd, 0x9e, 0x3e, 0xcb, 0x66, 0x23, 0x95, 0xb4, 0x42, 0x9c, 0x64, 0x81, 0x39, 0x05, 0x3f, 0xb5, 0x21, 0xf8, 0x28, 0xaf, 0x60, 0x6b, 0x4d, 0x3d, 0xba, 0xa1, 0x4b, 0x5e, 0x77, 0xef, 0xe7, 0x59, 0x28, 0xfe, 0x1d, 0xc1, 0x27, 0xa2, 0xff, 0xa8, 0xde, 0x33, 0x48, 0xb3, 0xc1, 0x85, 0x6a, 0x42, 0x9b, 0xf9, 0x7e, 0x7e, 0x31, 0xc2, 0xe5, 0xbd, 0x66,     //gx
   0x01, 0x18, 0x39, 0x29, 0x6a, 0x78, 0x9a, 0x3b, 0xc0, 0x04, 0x5c, 0x8a, 0x5f, 0xb4, 0x2c, 0x7d, 0x1b, 0xd9, 0x98, 0xf5, 0x44, 0x49, 0x57, 0x9b, 0x44, 0x68, 0x17, 0xaf, 0xbd, 0x17, 0x27, 0x3e, 0x66, 0x2c, 0x97, 0xee, 0x72, 0x99, 0x5e, 0xf4, 0x26, 0x40, 0xc5, 0x50, 0xb9, 0x01, 0x3f, 0xad, 0x07, 0x61, 0x35, 0x3c, 0x70, 0x86, 0xa2, 0x72, 0xc2, 0x40, 0x88, 0xbe, 0x94, 0x76, 0x9f, 0xd1, 0x66, 0x50,     //gy
   0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,    //a
   0x00, 0x51, 0x95, 0x3e, 0xb9, 0x61, 0x8e, 0x1c, 0x9a, 0x1f, 0x92, 0x9a, 0x21, 0xa0, 0xb6, 0x85, 0x40, 0xee, 0xa2, 0xda, 0x72, 0x5b, 0x99, 0xb3, 0x15, 0xf3, 0xb8, 0xb4, 0x89, 0x91, 0x8e, 0xf1, 0x09, 0xe1, 0x56, 0x19, 0x39, 0x51, 0xec, 0x7e, 0x93, 0x7b, 0x16, 0x52, 0xc0, 0xbd, 0x3b, 0xb1, 0xbf, 0x07, 0x35, 0x73, 0xdf, 0x88, 0x3d, 0x2c, 0x34, 0xf1, 0xef, 0x45, 0x1f, 0xd4, 0x6b, 0x50, 0x3f, 0x00 };  //b
const sx_ecc_curve_t sx_ecc_curve_p521 = {
   .params  = BLOCK_T_CONV(ecc_p521_params, sizeof(ecc_p521_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_PRIME) | BA414EP_SELCUR_ACCEL_P521,
   .bytesize = 66,
};


static const ALIGNED  uint8_t ecc_b163_params[] = {
   0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc9,     //q
   0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x92, 0xfe, 0x77, 0xe7, 0x0c, 0x12, 0xa4, 0x23, 0x4c, 0x33,     //n
   0x03, 0xf0, 0xeb, 0xa1, 0x62, 0x86, 0xa2, 0xd5, 0x7e, 0xa0, 0x99, 0x11, 0x68, 0xd4, 0x99, 0x46, 0x37, 0xe8, 0x34, 0x3e, 0x36,     //gx
   0x00, 0xd5, 0x1f, 0xbc, 0x6c, 0x71, 0xa0, 0x09, 0x4f, 0xa2, 0xcd, 0xd5, 0x45, 0xb1, 0x1c, 0x5c, 0x0c, 0x79, 0x73, 0x24, 0xf1,     //gy
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,    //a
   0x02, 0x0a, 0x60, 0x19, 0x07, 0xb8, 0xc9, 0x53, 0xca, 0x14, 0x81, 0xeb, 0x10, 0x51, 0x2f, 0x78, 0x74, 0x4a, 0x32, 0x05, 0xfd };  //b
const sx_ecc_curve_t sx_ecc_curve_b163 = {
   .params  = BLOCK_T_CONV(ecc_b163_params, sizeof(ecc_b163_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_BINARY) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 21,
};


static const ALIGNED  uint8_t ecc_b233_params[] = {
   0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,     //q
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0xe9, 0x74, 0xe7, 0x2f, 0x8a, 0x69, 0x22, 0x03, 0x1d, 0x26, 0x03, 0xcf, 0xe0, 0xd7,     //n
   0x00, 0xfa, 0xc9, 0xdf, 0xcb, 0xac, 0x83, 0x13, 0xbb, 0x21, 0x39, 0xf1, 0xbb, 0x75, 0x5f, 0xef, 0x65, 0xbc, 0x39, 0x1f, 0x8b, 0x36, 0xf8, 0xf8, 0xeb, 0x73, 0x71, 0xfd, 0x55, 0x8b,     //gx
   0x01, 0x00, 0x6a, 0x08, 0xa4, 0x19, 0x03, 0x35, 0x06, 0x78, 0xe5, 0x85, 0x28, 0xbe, 0xbf, 0x8a, 0x0b, 0xef, 0xf8, 0x67, 0xa7, 0xca, 0x36, 0x71, 0x6f, 0x7e, 0x01, 0xf8, 0x10, 0x52,     //gy
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,    //a
   0x00, 0x66, 0x64, 0x7e, 0xde, 0x6c, 0x33, 0x2c, 0x7f, 0x8c, 0x09, 0x23, 0xbb, 0x58, 0x21, 0x3b, 0x33, 0x3b, 0x20, 0xe9, 0xce, 0x42, 0x81, 0xfe, 0x11, 0x5f, 0x7d, 0x8f, 0x90, 0xad };  //b
const sx_ecc_curve_t sx_ecc_curve_b233 = {
   .params  = BLOCK_T_CONV(ecc_b233_params, sizeof(ecc_b233_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_BINARY) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 30,
};


static const ALIGNED  uint8_t ecc_b283_params[] = {
   0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xa1,     //q
   0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x90, 0x39, 0x96, 0x60, 0xfc, 0x93, 0x8a, 0x90, 0x16, 0x5b, 0x04, 0x2a, 0x7c, 0xef, 0xad, 0xb3, 0x07,     //n
   0x05, 0xf9, 0x39, 0x25, 0x8d, 0xb7, 0xdd, 0x90, 0xe1, 0x93, 0x4f, 0x8c, 0x70, 0xb0, 0xdf, 0xec, 0x2e, 0xed, 0x25, 0xb8, 0x55, 0x7e, 0xac, 0x9c, 0x80, 0xe2, 0xe1, 0x98, 0xf8, 0xcd, 0xbe, 0xcd, 0x86, 0xb1, 0x20, 0x53,     //gx
   0x03, 0x67, 0x68, 0x54, 0xfe, 0x24, 0x14, 0x1c, 0xb9, 0x8f, 0xe6, 0xd4, 0xb2, 0x0d, 0x02, 0xb4, 0x51, 0x6f, 0xf7, 0x02, 0x35, 0x0e, 0xdd, 0xb0, 0x82, 0x67, 0x79, 0xc8, 0x13, 0xf0, 0xdf, 0x45, 0xbe, 0x81, 0x12, 0xf4,     //gy
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,    //a
   0x02, 0x7b, 0x68, 0x0a, 0xc8, 0xb8, 0x59, 0x6d, 0xa5, 0xa4, 0xaf, 0x8a, 0x19, 0xa0, 0x30, 0x3f, 0xca, 0x97, 0xfd, 0x76, 0x45, 0x30, 0x9f, 0xa2, 0xa5, 0x81, 0x48, 0x5a, 0xf6, 0x26, 0x3e, 0x31, 0x3b, 0x79, 0xa2, 0xf5 };  //b
const sx_ecc_curve_t sx_ecc_curve_b283 = {
   .params  = BLOCK_T_CONV(ecc_b283_params, sizeof(ecc_b283_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_BINARY) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 36,
};


static const ALIGNED  uint8_t ecc_b409_params[] = {
   0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,     //q
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe2, 0xaa, 0xd6, 0xa6, 0x12, 0xf3, 0x33, 0x07, 0xbe, 0x5f, 0xa4, 0x7c, 0x3c, 0x9e, 0x05, 0x2f, 0x83, 0x81, 0x64, 0xcd, 0x37, 0xd9, 0xa2, 0x11, 0x73,     //n
   0x01, 0x5d, 0x48, 0x60, 0xd0, 0x88, 0xdd, 0xb3, 0x49, 0x6b, 0x0c, 0x60, 0x64, 0x75, 0x62, 0x60, 0x44, 0x1c, 0xde, 0x4a, 0xf1, 0x77, 0x1d, 0x4d, 0xb0, 0x1f, 0xfe, 0x5b, 0x34, 0xe5, 0x97, 0x03, 0xdc, 0x25, 0x5a, 0x86, 0x8a, 0x11, 0x80, 0x51, 0x56, 0x03, 0xae, 0xab, 0x60, 0x79, 0x4e, 0x54, 0xbb, 0x79, 0x96, 0xa7,     //gx
   0x00, 0x61, 0xb1, 0xcf, 0xab, 0x6b, 0xe5, 0xf3, 0x2b, 0xbf, 0xa7, 0x83, 0x24, 0xed, 0x10, 0x6a, 0x76, 0x36, 0xb9, 0xc5, 0xa7, 0xbd, 0x19, 0x8d, 0x01, 0x58, 0xaa, 0x4f, 0x54, 0x88, 0xd0, 0x8f, 0x38, 0x51, 0x4f, 0x1f, 0xdf, 0x4b, 0x4f, 0x40, 0xd2, 0x18, 0x1b, 0x36, 0x81, 0xc3, 0x64, 0xba, 0x02, 0x73, 0xc7, 0x06,     //gy
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,    //a
   0x00, 0x21, 0xa5, 0xc2, 0xc8, 0xee, 0x9f, 0xeb, 0x5c, 0x4b, 0x9a, 0x75, 0x3b, 0x7b, 0x47, 0x6b, 0x7f, 0xd6, 0x42, 0x2e, 0xf1, 0xf3, 0xdd, 0x67, 0x47, 0x61, 0xfa, 0x99, 0xd6, 0xac, 0x27, 0xc8, 0xa9, 0xa1, 0x97, 0xb2, 0x72, 0x82, 0x2f, 0x6c, 0xd5, 0x7a, 0x55, 0xaa, 0x4f, 0x50, 0xae, 0x31, 0x7b, 0x13, 0x54, 0x5f };  //b
const sx_ecc_curve_t sx_ecc_curve_b409 = {
   .params  = BLOCK_T_CONV(ecc_b409_params, sizeof(ecc_b409_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_BINARY) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 52,
};


static const ALIGNED  uint8_t ecc_b571_params[] = {
   0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x25,     //q
   0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe6, 0x61, 0xce, 0x18, 0xff, 0x55, 0x98, 0x73, 0x08, 0x05, 0x9b, 0x18, 0x68, 0x23, 0x85, 0x1e, 0xc7, 0xdd, 0x9c, 0xa1, 0x16, 0x1d, 0xe9, 0x3d, 0x51, 0x74, 0xd6, 0x6e, 0x83, 0x82, 0xe9, 0xbb, 0x2f, 0xe8, 0x4e, 0x47,     //n
   0x03, 0x03, 0x00, 0x1d, 0x34, 0xb8, 0x56, 0x29, 0x6c, 0x16, 0xc0, 0xd4, 0x0d, 0x3c, 0xd7, 0x75, 0x0a, 0x93, 0xd1, 0xd2, 0x95, 0x5f, 0xa8, 0x0a, 0xa5, 0xf4, 0x0f, 0xc8, 0xdb, 0x7b, 0x2a, 0xbd, 0xbd, 0xe5, 0x39, 0x50, 0xf4, 0xc0, 0xd2, 0x93, 0xcd, 0xd7, 0x11, 0xa3, 0x5b, 0x67, 0xfb, 0x14, 0x99, 0xae, 0x60, 0x03, 0x86, 0x14, 0xf1, 0x39, 0x4a, 0xbf, 0xa3, 0xb4, 0xc8, 0x50, 0xd9, 0x27, 0xe1, 0xe7, 0x76, 0x9c, 0x8e, 0xec, 0x2d, 0x19,     //gx
   0x03, 0x7b, 0xf2, 0x73, 0x42, 0xda, 0x63, 0x9b, 0x6d, 0xcc, 0xff, 0xfe, 0xb7, 0x3d, 0x69, 0xd7, 0x8c, 0x6c, 0x27, 0xa6, 0x00, 0x9c, 0xbb, 0xca, 0x19, 0x80, 0xf8, 0x53, 0x39, 0x21, 0xe8, 0xa6, 0x84, 0x42, 0x3e, 0x43, 0xba, 0xb0, 0x8a, 0x57, 0x62, 0x91, 0xaf, 0x8f, 0x46, 0x1b, 0xb2, 0xa8, 0xb3, 0x53, 0x1d, 0x2f, 0x04, 0x85, 0xc1, 0x9b, 0x16, 0xe2, 0xf1, 0x51, 0x6e, 0x23, 0xdd, 0x3c, 0x1a, 0x48, 0x27, 0xaf, 0x1b, 0x8a, 0xc1, 0x5b,     //gy
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,    //a
   0x02, 0xf4, 0x0e, 0x7e, 0x22, 0x21, 0xf2, 0x95, 0xde, 0x29, 0x71, 0x17, 0xb7, 0xf3, 0xd6, 0x2f, 0x5c, 0x6a, 0x97, 0xff, 0xcb, 0x8c, 0xef, 0xf1, 0xcd, 0x6b, 0xa8, 0xce, 0x4a, 0x9a, 0x18, 0xad, 0x84, 0xff, 0xab, 0xbd, 0x8e, 0xfa, 0x59, 0x33, 0x2b, 0xe7, 0xad, 0x67, 0x56, 0xa6, 0x6e, 0x29, 0x4a, 0xfd, 0x18, 0x5a, 0x78, 0xff, 0x12, 0xaa, 0x52, 0x0e, 0x4d, 0xe7, 0x39, 0xba, 0xca, 0x0c, 0x7f, 0xfe, 0xff, 0x7f, 0x29, 0x55, 0x72, 0x7a };  //b
const sx_ecc_curve_t sx_ecc_curve_b571 = {
   .params  = BLOCK_T_CONV(ecc_b571_params, sizeof(ecc_b571_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_BINARY) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 72,
};


static const ALIGNED  uint8_t ecc_k163_params[] = {
   0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc9,     //q
   0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x08, 0xa2, 0xe0, 0xcc, 0x0d, 0x99, 0xf8, 0xa5, 0xef,     //n
   0x02, 0xfe, 0x13, 0xc0, 0x53, 0x7b, 0xbc, 0x11, 0xac, 0xaa, 0x07, 0xd7, 0x93, 0xde, 0x4e, 0x6d, 0x5e, 0x5c, 0x94, 0xee, 0xe8,     //gx
   0x02, 0x89, 0x07, 0x0f, 0xb0, 0x5d, 0x38, 0xff, 0x58, 0x32, 0x1f, 0x2e, 0x80, 0x05, 0x36, 0xd5, 0x38, 0xcc, 0xda, 0xa3, 0xd9,     //gy
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,    //a
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 };  //b
const sx_ecc_curve_t sx_ecc_curve_k163 = {
   .params  = BLOCK_T_CONV(ecc_k163_params, sizeof(ecc_k163_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_BINARY) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 21,
};


static const ALIGNED  uint8_t ecc_k233_params[] = {
   0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,     //q
   0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x9D, 0x5B, 0xB9, 0x15, 0xBC, 0xD4, 0x6E, 0xFB, 0x1A, 0xD5, 0xF1, 0x73, 0xAB, 0xDF,     //n
   0x00, 0x00, 0x01, 0x72, 0x32, 0xba, 0x85, 0x3a, 0x7e, 0x73, 0x1a, 0xf1, 0x29, 0xf2, 0x2f, 0xf4, 0x14, 0x95, 0x63, 0xa4, 0x19, 0xc2, 0x6b, 0xf5, 0x0a, 0x4c, 0x9d, 0x6e, 0xef, 0xad, 0x61, 0x26,     //gx
   0x00, 0x00, 0x01, 0xdb, 0x53, 0x7d, 0xec, 0xe8, 0x19, 0xb7, 0xf7, 0x0f, 0x55, 0x5a, 0x67, 0xc4, 0x27, 0xa8, 0xcd, 0x9b, 0xf1, 0x8a, 0xeb, 0x9b, 0x56, 0xe0, 0xc1, 0x10, 0x56, 0xfa, 0xe6, 0xa3,     //gy
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    //a
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 };  //b
const sx_ecc_curve_t sx_ecc_curve_k233 = {
   .params  = BLOCK_T_CONV(ecc_k233_params, sizeof(ecc_k233_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_BINARY) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 30,
};


static const ALIGNED  uint8_t ecc_k283_params[] = {
   0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xa1,     //q
   0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE9, 0xAE, 0x2E, 0xD0, 0x75, 0x77, 0x26, 0x5D, 0xFF, 0x7F, 0x94, 0x45, 0x1E, 0x06, 0x1E, 0x16, 0x3C, 0x61,     //n
   0x05, 0x03, 0x21, 0x3f, 0x78, 0xca, 0x44, 0x88, 0x3f, 0x1a, 0x3b, 0x81, 0x62, 0xf1, 0x88, 0xe5, 0x53, 0xcd, 0x26, 0x5f, 0x23, 0xc1, 0x56, 0x7a, 0x16, 0x87, 0x69, 0x13, 0xb0, 0xc2, 0xac, 0x24, 0x58, 0x49, 0x28, 0x36,     //a
   0x01, 0xcc, 0xda, 0x38, 0x0f, 0x1c, 0x9e, 0x31, 0x8d, 0x90, 0xf9, 0x5d, 0x07, 0xe5, 0x42, 0x6f, 0xe8, 0x7e, 0x45, 0xc0, 0xe8, 0x18, 0x46, 0x98, 0xe4, 0x59, 0x62, 0x36, 0x4e, 0x34, 0x11, 0x61, 0x77, 0xdd, 0x22, 0x59,     //b
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    //gx
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 };  //gy
const sx_ecc_curve_t sx_ecc_curve_k283 = {
   .params  = BLOCK_T_CONV(ecc_k283_params, sizeof(ecc_k283_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_BINARY) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 36,
};


static const ALIGNED  uint8_t ecc_k409_params[] = {
   0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,     //q
   0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x5F, 0x83, 0xB2, 0xD4, 0xEA, 0x20, 0x40, 0x0E, 0xC4, 0x55, 0x7D, 0x5E, 0xD3, 0xE3, 0xE7, 0xCA, 0x5B, 0x4B, 0x5C, 0x83, 0xB8, 0xE0, 0x1E, 0x5F, 0xCF,     //n
   0x00, 0x60, 0xf0, 0x5f, 0x65, 0x8f, 0x49, 0xc1, 0xad, 0x3a, 0xb1, 0x89, 0x0f, 0x71, 0x84, 0x21, 0x0e, 0xfd, 0x09, 0x87, 0xe3, 0x07, 0xc8, 0x4c, 0x27, 0xac, 0xcf, 0xb8, 0xf9, 0xf6, 0x7c, 0xc2, 0xc4, 0x60, 0x18, 0x9e, 0xb5, 0xaa, 0xaa, 0x62, 0xee, 0x22, 0x2e, 0xb1, 0xb3, 0x55, 0x40, 0xcf, 0xe9, 0x02, 0x37, 0x46,     //gx
   0x01, 0xe3, 0x69, 0x05, 0x0b, 0x7c, 0x4e, 0x42, 0xac, 0xba, 0x1d, 0xac, 0xbf, 0x04, 0x29, 0x9c, 0x34, 0x60, 0x78, 0x2f, 0x91, 0x8e, 0xa4, 0x27, 0xe6, 0x32, 0x51, 0x65, 0xe9, 0xea, 0x10, 0xe3, 0xda, 0x5f, 0x6c, 0x42, 0xe9, 0xc5, 0x52, 0x15, 0xaa, 0x9c, 0xa2, 0x7a, 0x58, 0x63, 0xec, 0x48, 0xd8, 0xe0, 0x28, 0x6b,     //gy
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    //a
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 };  //b
const sx_ecc_curve_t sx_ecc_curve_k409 = {
   .params  = BLOCK_T_CONV(ecc_k409_params, sizeof(ecc_k409_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_BINARY) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 52,
};


static const ALIGNED  uint8_t ecc_k571_params[] = {
   0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x25,     //q
   0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x18, 0x50, 0xE1, 0xF1, 0x9A, 0x63, 0xE4, 0xB3, 0x91, 0xA8, 0xDB, 0x91, 0x7F, 0x41, 0x38, 0xB6, 0x30, 0xD8, 0x4B, 0xE5, 0xD6, 0x39, 0x38, 0x1E, 0x91, 0xDE, 0xB4, 0x5C, 0xFE, 0x77, 0x8F, 0x63, 0x7C, 0x10, 0x01,     //n
   0x02, 0x6e, 0xb7, 0xa8, 0x59, 0x92, 0x3f, 0xbc, 0x82, 0x18, 0x96, 0x31, 0xf8, 0x10, 0x3f, 0xe4, 0xac, 0x9c, 0xa2, 0x97, 0x00, 0x12, 0xd5, 0xd4, 0x60, 0x24, 0x80, 0x48, 0x01, 0x84, 0x1c, 0xa4, 0x43, 0x70, 0x95, 0x84, 0x93, 0xb2, 0x05, 0xe6, 0x47, 0xda, 0x30, 0x4d, 0xb4, 0xce, 0xb0, 0x8c, 0xbb, 0xd1, 0xba, 0x39, 0x49, 0x47, 0x76, 0xfb, 0x98, 0x8b, 0x47, 0x17, 0x4d, 0xca, 0x88, 0xc7, 0xe2, 0x94, 0x52, 0x83, 0xa0, 0x1c, 0x89, 0x72,     //gx
   0x03, 0x49, 0xdc, 0x80, 0x7f, 0x4f, 0xbf, 0x37, 0x4f, 0x4a, 0xea, 0xde, 0x3b, 0xca, 0x95, 0x31, 0x4d, 0xd5, 0x8c, 0xec, 0x9f, 0x30, 0x7a, 0x54, 0xff, 0xc6, 0x1e, 0xfc, 0x00, 0x6d, 0x8a, 0x2c, 0x9d, 0x49, 0x79, 0xc0, 0xac, 0x44, 0xae, 0xa7, 0x4f, 0xbe, 0xbb, 0xb9, 0xf7, 0x72, 0xae, 0xdc, 0xb6, 0x20, 0xb0, 0x1a, 0x7b, 0xa7, 0xaf, 0x1b, 0x32, 0x04, 0x30, 0xc8, 0x59, 0x19, 0x84, 0xf6, 0x01, 0xcd, 0x4c, 0x14, 0x3e, 0xf1, 0xc7, 0xa3,     //gy
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    //a
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 };  //b
const sx_ecc_curve_t sx_ecc_curve_k571 = {
   .params  = BLOCK_T_CONV(ecc_k571_params, sizeof(ecc_k571_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_BINARY) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 72,
};


static const ALIGNED  uint8_t ecc_e521_params[] = {
   0x01, 0xff, 0xff, 0xff,0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,   //q
   0x00, 0x7f, 0xff, 0xff,0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x15, 0xb6, 0xc6, 0x47, 0x46, 0xfc, 0x85, 0xf7, 0x36, 0xb8, 0xaf, 0x5e, 0x7e, 0xc5, 0x3f, 0x04, 0xfb, 0xd8, 0xc4, 0x56, 0x9a, 0x8f, 0x1f, 0x45, 0x40, 0xea, 0x24, 0x35, 0xf5, 0x18, 0x0d, 0x6b,   //n
   0x00, 0x75, 0x2c, 0xb4,0x5c, 0x48, 0x64, 0x8b, 0x18, 0x9d, 0xf9, 0x0c, 0xb2, 0x29, 0x6b, 0x28, 0x78, 0xa3, 0xbf, 0xd9, 0xf4, 0x2f, 0xc6, 0xc8, 0x18, 0xec, 0x8b, 0xf3, 0xc9, 0xc0, 0xc6, 0x20, 0x39, 0x13, 0xf6, 0xec, 0xc5, 0xcc, 0xc7, 0x24, 0x34, 0xb1, 0xae, 0x94, 0x9d, 0x56, 0x8f, 0xc9, 0x9c, 0x60, 0x59, 0xd0, 0xfb, 0x13, 0x36, 0x48, 0x38, 0xaa, 0x30, 0x2a, 0x94, 0x0a, 0x2f, 0x19, 0xba, 0x6c,   //gx
   0x00, 0x00, 0x00, 0x00,0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c,   //gy
   0x01, 0xff, 0xff, 0xff,0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x43, 0x31 }; //d
const sx_ecc_curve_t sx_ecc_curve_e521 = {
   .params  = BLOCK_T_CONV(ecc_e521_params, sizeof(ecc_e521_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_PRIME) | BA414EP_CMD_EDWARDS(1) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 66,
};

/**********************************************************
** Curve25519 - (Little-endian)
**********************************************************/
static const ALIGNED uint8_t ecc_curve25519_params[] = {
   0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F,   // p
   0x06, 0x6d, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // a
   0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};  // x
const sx_ecc_curve_t sx_ecc_curve_curve25519 = {
   .params  = BLOCK_T_CONV(ecc_curve25519_params, sizeof(ecc_curve25519_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_PRIME) | BA414EP_SELCUR_ACCEL_X25519,
   .bytesize = 32,
};

/**********************************************************
** Curve448 - (Little-endian)
**********************************************************/

static const ALIGNED uint8_t ecc_curve448_params[] = {
   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,  //p
   0xA6, 0x62, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //a
   0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; //x
const sx_ecc_curve_t sx_ecc_curve_curve448 = {
   .params  = BLOCK_T_CONV(ecc_curve448_params, sizeof(ecc_curve448_params)),
   .pk_flags = BA414EP_CMD_OPFLD(BA414EP_OPFLD_PRIME) | BA414EP_SELCUR_NO_ACCELERATOR,
   .bytesize = 56,
};
