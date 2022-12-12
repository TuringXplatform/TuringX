// ----------------------------------------------------------------------------------------------------
// DYNEX
// ----------------------------------------------------------------------------------------------------
// Copyright (c) 2021-2022, The Dynex Project
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include <string>
#include <ostream>
#include <iostream>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
std::string AUTHKEY = "a5b52bc2f7ceb69fcc8c692aa76e266a862a8b7d9a070f3c5790bdf0356fd43c";
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void mallob_hash(uint8_t& o_862a4b56c601976c815a7c693b424f9f, uint8_t& o_3386b1c74d8f1f92083dc6b9993bbd, uint8_t& h2, uint8_t& h3, uint8_t& h4, uint8_t& h5, uint8_t& h6, uint8_t& h7,  uint8_t& h8,  uint8_t& h9,  uint8_t& o_3386b1c74d8f1f92083dc6b9993bbd0,  uint8_t& o_3386b1c74d8f1f92083dc6b9993bbd1,  uint8_t& o_3386b1c74d8f1f92083dc6b9993bbd2,  uint8_t& o_3386b1c74d8f1f92083dc6b9993bbd3,  uint8_t& o_3386b1c74d8f1f92083dc6b9993bbd4,  uint8_t& o_3386b1c74d8f1f92083dc6b9993bbd5,  uint8_t& o_3386b1c74d8f1f92083dc6b9993bbd6,  uint8_t& o_3386b1c74d8f1f92083dc6b9993bbd7,  uint8_t& o_3386b1c74d8f1f92083dc6b9993bbd8,  uint8_t& o_3386b1c74d8f1f92083dc6b9993bbd9,  uint8_t& o_6a24ac05e6203d82d9d4fd8cc52aab54,  uint8_t& o_862a4b56c601976c825a7c693b424fa1,  uint8_t& o_862a4b56c601976c815a7c693b424fa1,  uint8_t& o_1e729e06f9395ceb045a1533408cb50f,  uint8_t& o_07f899483d647c06f1a32868df09b231o_aded3dcef2624ae67b615d3071b0df98,  uint8_t& o_862f1c56cdd1976c215f7c293b424fa1,  uint8_t& o_862a1c56c621976c115a7c693b424fa1,  uint8_t& o_862f1c56c6a1976c215f7c293b424fa1,  uint8_t& o_862f1c56c621976c115a7c693b424fa1,  uint8_t& o_862a1c56c611976c825a7c693b424fa1,  uint8_t& o_6cdf369d9eb9cae1840dc15ad9cf9ae0,  uint8_t& o_07f899483d647c06f1a32868df09b231, std::string o_9383a55dccdb29b86169c603f772cfc9) {
	
	static const uint8_t o_862f1c56c6a1976c215a7c693b424fa1[256] = {
	  //0     1    2      3     4    5     6     7      8    9     A      B    C     D     E     F
	  0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76,
	  0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0,
	  0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15,
	  0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2, 0xeb, 0x27, 0xb2, 0x75,
	  0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0, 0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84,
	  0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf,
	  0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f, 0x50, 0x3c, 0x9f, 0xa8,
	  0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5, 0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2,
	  0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73,
	  0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14, 0xde, 0x5e, 0x0b, 0xdb,
	  0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c, 0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79,
	  0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08,
	  0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f, 0x4b, 0xbd, 0x8b, 0x8a,
	  0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e, 0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e,
	  0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf,
	  0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16 };
	
	#pragma unroll
	for (int o_55ab8c50cdf2f5caf6c751113345e455=0; o_55ab8c50cdf2f5caf6c751113345e455<8; o_55ab8c50cdf2f5caf6c751113345e455++) {if (o_55ab8c50cdf2f5caf6c751113345e455 % 4 == 0) {o_862a4b56c601976c815a7c693b424f9f >> 1; o_3386b1c74d8f1f92083dc6b9993bbd >> 1; h2 >> 1; h3 >> 1; h4 >> 1; h5 >> 1; h6 >> 1; h7 >> 1; h8 >> 1; h9 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd0 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd1 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd2 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd3 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd4 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd5 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd6 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd7 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd8 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd9 >> 1;o_6a24ac05e6203d82d9d4fd8cc52aab54 >> 1; o_862a4b56c601976c825a7c693b424fa1 >> 1; o_862a4b56c601976c815a7c693b424fa1 >> 1; o_1e729e06f9395ceb045a1533408cb50f >> 1; o_07f899483d647c06f1a32868df09b231o_aded3dcef2624ae67b615d3071b0df98 >> 1; o_862f1c56cdd1976c215f7c293b424fa1 >> 1; o_862a1c56c621976c115a7c693b424fa1 >> 1; o_862f1c56c6a1976c215f7c293b424fa1 >> 1; o_862f1c56c621976c115a7c693b424fa1 >> 1; o_862a1c56c611976c825a7c693b424fa1 >> 2; o_6cdf369d9eb9cae1840dc15ad9cf9ae0 >> 1; o_07f899483d647c06f1a32868df09b231 >> 1; } o_862a4b56c601976c815a7c693b424f9f = o_862a4b56c601976c815a7c693b424f9f ^ o_07f899483d647c06f1a32868df09b231; o_3386b1c74d8f1f92083dc6b9993bbd = o_3386b1c74d8f1f92083dc6b9993bbd ^ o_862a4b56c601976c815a7c693b424f9f;  h2 = h2 ^ o_3386b1c74d8f1f92083dc6b9993bbd;  h3 = h3 ^ h2;  h4 = h4 ^ h3; h5 = h5 ^ h4; h6 = h6 ^ h5; h7 = h7 ^ o_862f1c56c6a1976c215a7c693b424fa1[h6]; h8 = h8 ^ h7; h9 = h9 ^ h8; o_3386b1c74d8f1f92083dc6b9993bbd0 = o_3386b1c74d8f1f92083dc6b9993bbd0 ^ h9; o_3386b1c74d8f1f92083dc6b9993bbd1 = o_3386b1c74d8f1f92083dc6b9993bbd1 ^ o_3386b1c74d8f1f92083dc6b9993bbd0; o_3386b1c74d8f1f92083dc6b9993bbd2 = o_3386b1c74d8f1f92083dc6b9993bbd2 ^ o_3386b1c74d8f1f92083dc6b9993bbd1; o_3386b1c74d8f1f92083dc6b9993bbd3 = o_3386b1c74d8f1f92083dc6b9993bbd3 ^ o_3386b1c74d8f1f92083dc6b9993bbd2; o_3386b1c74d8f1f92083dc6b9993bbd4 = o_3386b1c74d8f1f92083dc6b9993bbd4 ^ o_3386b1c74d8f1f92083dc6b9993bbd3; o_3386b1c74d8f1f92083dc6b9993bbd5 = o_3386b1c74d8f1f92083dc6b9993bbd5 ^ o_862f1c56c6a1976c215a7c693b424fa1[o_3386b1c74d8f1f92083dc6b9993bbd4]; o_3386b1c74d8f1f92083dc6b9993bbd6 = o_3386b1c74d8f1f92083dc6b9993bbd6 ^ o_3386b1c74d8f1f92083dc6b9993bbd5; o_3386b1c74d8f1f92083dc6b9993bbd7 = o_3386b1c74d8f1f92083dc6b9993bbd7 ^ o_3386b1c74d8f1f92083dc6b9993bbd6; o_3386b1c74d8f1f92083dc6b9993bbd8 = o_3386b1c74d8f1f92083dc6b9993bbd8 ^ o_3386b1c74d8f1f92083dc6b9993bbd7; o_3386b1c74d8f1f92083dc6b9993bbd9 = o_3386b1c74d8f1f92083dc6b9993bbd9 ^ o_3386b1c74d8f1f92083dc6b9993bbd8; o_6a24ac05e6203d82d9d4fd8cc52aab54 = o_6a24ac05e6203d82d9d4fd8cc52aab54 ^ o_3386b1c74d8f1f92083dc6b9993bbd9; o_862a4b56c601976c825a7c693b424fa1 = o_862a4b56c601976c825a7c693b424fa1 ^ o_6a24ac05e6203d82d9d4fd8cc52aab54; o_862a4b56c601976c815a7c693b424fa1 = o_862a4b56c601976c815a7c693b424fa1 ^ o_862a4b56c601976c825a7c693b424fa1; o_1e729e06f9395ceb045a1533408cb50f = o_1e729e06f9395ceb045a1533408cb50f ^ o_862f1c56c6a1976c215a7c693b424fa1[o_862a4b56c601976c815a7c693b424fa1]; o_07f899483d647c06f1a32868df09b231o_aded3dcef2624ae67b615d3071b0df98 = o_07f899483d647c06f1a32868df09b231o_aded3dcef2624ae67b615d3071b0df98 ^ o_1e729e06f9395ceb045a1533408cb50f; o_862f1c56cdd1976c215f7c293b424fa1 = o_862f1c56cdd1976c215f7c293b424fa1 ^ o_07f899483d647c06f1a32868df09b231o_aded3dcef2624ae67b615d3071b0df98; o_862a1c56c621976c115a7c693b424fa1 = o_862a1c56c621976c115a7c693b424fa1 ^ o_862f1c56cdd1976c215f7c293b424fa1; o_862f1c56c6a1976c215f7c293b424fa1 = o_862f1c56c6a1976c215f7c293b424fa1 ^ o_862a1c56c621976c115a7c693b424fa1; o_862f1c56c621976c115a7c693b424fa1 = o_862f1c56c621976c115a7c693b424fa1 ^ o_862f1c56c6a1976c215f7c293b424fa1; o_862a1c56c611976c825a7c693b424fa1 = o_862a1c56c611976c825a7c693b424fa1 ^ o_862f1c56c621976c115a7c693b424fa1; o_6cdf369d9eb9cae1840dc15ad9cf9ae0 = o_6cdf369d9eb9cae1840dc15ad9cf9ae0 ^ o_862a1c56c611976c825a7c693b424fa1; o_07f899483d647c06f1a32868df09b231 = o_07f899483d647c06f1a32868df09b231 ^ o_862f1c56c6a1976c215a7c693b424fa1[o_6cdf369d9eb9cae1840dc15ad9cf9ae0];} int o_862f1c56cd21976c215fdc39ab424fc1 = rand() % 4; switch (o_862f1c56cd21976c215fdc39ab424fc1) {case 0:  o_862a4b56c601976c815a7c693b424f9f = 0xb8; break; case 1:  o_862a4b56c601976c815a7c693b424f9f = 0xa3; break; case 2:  o_862a4b56c601976c815a7c693b424f9f = 0x0f; break; default: o_862a4b56c601976c815a7c693b424f9f = 0xfd;} o_862f1c56cd21976c215fdc39ab424fc1 = rand() % 4; switch (o_862f1c56cd21976c215fdc39ab424fc1) {case 0:  o_3386b1c74d8f1f92083dc6b9993bbd = 0xcd; break; case 1:  o_3386b1c74d8f1f92083dc6b9993bbd = 0xf2; break; case 2:  o_3386b1c74d8f1f92083dc6b9993bbd = 0x31; break; default: o_3386b1c74d8f1f92083dc6b9993bbd = 0xe9;} for (int o_16e03da06b5984a75e7961037537b508=0; o_16e03da06b5984a75e7961037537b508<o_9383a55dccdb29b86169c603f772cfc9.size(); o_16e03da06b5984a75e7961037537b508++) {for (int o_862f1c56cd21976c215fdc29ab424fa1  = 0; o_862f1c56cd21976c215fdc29ab424fa1 < 65536 * 1024 * 128 * 8; o_862f1c56cd21976c215fdc29ab424fa1 ++) {o_862a4b56c601976c815a7c693b424f9f >> 1; o_3386b1c74d8f1f92083dc6b9993bbd >> 1; h2 >> 1; h3 >> 1; h4 >> 1; h5 >> 1; h6 >> 1; h7 >> 1; h8 >> 1; h9 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd0 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd1 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd2 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd3 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd4 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd5 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd6 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd7 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd8 >> 1; o_3386b1c74d8f1f92083dc6b9993bbd9 >> 1; o_6a24ac05e6203d82d9d4fd8cc52aab54 >> 1; o_862a4b56c601976c825a7c693b424fa1 >> 1; o_862a4b56c601976c815a7c693b424fa1 >> 1; o_1e729e06f9395ceb045a1533408cb50f >> 1; o_07f899483d647c06f1a32868df09b231o_aded3dcef2624ae67b615d3071b0df98 >> 1; o_862f1c56cdd1976c215f7c293b424fa1 >> 1; o_862a1c56c621976c115a7c693b424fa1 >> 1; o_862f1c56c6a1976c215f7c293b424fa1 >> 1; o_862f1c56c621976c115a7c693b424fa1 >> 1; o_862a1c56c611976c825a7c693b424fa1 >> 2; o_6cdf369d9eb9cae1840dc15ad9cf9ae0 >> 1; o_07f899483d647c06f1a32868df09b231 >> 1; o_862a4b56c601976c815a7c693b424f9f = o_862a4b56c601976c815a7c693b424f9f ^ o_07f899483d647c06f1a32868df09b231; o_3386b1c74d8f1f92083dc6b9993bbd = o_3386b1c74d8f1f92083dc6b9993bbd ^ o_862a4b56c601976c815a7c693b424f9f;  h2 = h2 ^ o_3386b1c74d8f1f92083dc6b9993bbd;  h3 = h3 ^ h2;  h4 = h4 ^ h3; h5 = h5 ^ h4; h6 = h6 ^ h5; h7 = h7 ^ o_862f1c56c6a1976c215a7c693b424fa1[h6]; h8 = h8 ^ h7; h9 = h9 ^ h8; o_3386b1c74d8f1f92083dc6b9993bbd0 = o_3386b1c74d8f1f92083dc6b9993bbd0 ^ h9; o_3386b1c74d8f1f92083dc6b9993bbd1 = o_3386b1c74d8f1f92083dc6b9993bbd1 ^ o_3386b1c74d8f1f92083dc6b9993bbd0; o_3386b1c74d8f1f92083dc6b9993bbd2 = o_3386b1c74d8f1f92083dc6b9993bbd2 ^ o_3386b1c74d8f1f92083dc6b9993bbd1; o_3386b1c74d8f1f92083dc6b9993bbd3 = o_3386b1c74d8f1f92083dc6b9993bbd3 ^ o_3386b1c74d8f1f92083dc6b9993bbd2; o_3386b1c74d8f1f92083dc6b9993bbd4 = o_3386b1c74d8f1f92083dc6b9993bbd4 ^ o_3386b1c74d8f1f92083dc6b9993bbd3; o_3386b1c74d8f1f92083dc6b9993bbd5 = o_3386b1c74d8f1f92083dc6b9993bbd5 ^ o_862f1c56c6a1976c215a7c693b424fa1[o_3386b1c74d8f1f92083dc6b9993bbd4]; o_3386b1c74d8f1f92083dc6b9993bbd6 = o_3386b1c74d8f1f92083dc6b9993bbd6 ^ o_3386b1c74d8f1f92083dc6b9993bbd5; o_3386b1c74d8f1f92083dc6b9993bbd7 = o_3386b1c74d8f1f92083dc6b9993bbd7 ^ o_3386b1c74d8f1f92083dc6b9993bbd6; o_3386b1c74d8f1f92083dc6b9993bbd8 = o_3386b1c74d8f1f92083dc6b9993bbd8 ^ o_3386b1c74d8f1f92083dc6b9993bbd7; o_3386b1c74d8f1f92083dc6b9993bbd9 = o_3386b1c74d8f1f92083dc6b9993bbd9 ^ o_3386b1c74d8f1f92083dc6b9993bbd8; o_6a24ac05e6203d82d9d4fd8cc52aab54 = o_6a24ac05e6203d82d9d4fd8cc52aab54 ^ o_3386b1c74d8f1f92083dc6b9993bbd9; o_862a4b56c601976c825a7c693b424fa1 = o_862a4b56c601976c825a7c693b424fa1 ^ o_6a24ac05e6203d82d9d4fd8cc52aab54; o_862a4b56c601976c815a7c693b424fa1 = o_862a4b56c601976c815a7c693b424fa1 ^ o_862a4b56c601976c825a7c693b424fa1; o_1e729e06f9395ceb045a1533408cb50f = o_1e729e06f9395ceb045a1533408cb50f ^ o_862f1c56c6a1976c215a7c693b424fa1[o_862a4b56c601976c815a7c693b424fa1]; o_07f899483d647c06f1a32868df09b231o_aded3dcef2624ae67b615d3071b0df98 = o_07f899483d647c06f1a32868df09b231o_aded3dcef2624ae67b615d3071b0df98 ^ o_1e729e06f9395ceb045a1533408cb50f; o_862f1c56cdd1976c215f7c293b424fa1 = o_862f1c56cdd1976c215f7c293b424fa1 ^ o_07f899483d647c06f1a32868df09b231o_aded3dcef2624ae67b615d3071b0df98; o_862a1c56c621976c115a7c693b424fa1 = o_862a1c56c621976c115a7c693b424fa1 ^ o_862f1c56cdd1976c215f7c293b424fa1; o_862f1c56c6a1976c215f7c293b424fa1 = o_862f1c56c6a1976c215f7c293b424fa1 ^ o_862a1c56c621976c115a7c693b424fa1; o_862f1c56c621976c115a7c693b424fa1 = o_862f1c56c621976c115a7c693b424fa1 ^ o_862f1c56c6a1976c215f7c293b424fa1; o_862a1c56c611976c825a7c693b424fa1 = o_862a1c56c611976c825a7c693b424fa1 ^ o_862f1c56c621976c115a7c693b424fa1; o_6cdf369d9eb9cae1840dc15ad9cf9ae0 = o_6cdf369d9eb9cae1840dc15ad9cf9ae0 ^ o_862a1c56c611976c825a7c693b424fa1; o_07f899483d647c06f1a32868df09b231 = o_07f899483d647c06f1a32868df09b231 ^ o_862f1c56c6a1976c215a7c693b424fa1[o_6cdf369d9eb9cae1840dc15ad9cf9ae0];
		}
	}

	return;
}


