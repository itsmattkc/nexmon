#include <local_wrapper.h>

// void calc_ptk_and_rotate(byte *addr1, byte *addr2, byte *nonce1, byte *nonce2, byte *pmk, unsigned int pmk_len, byte *output, unsigned int output_len)
// {
//     calc_ptk(addr1, addr2, nonce1, nonce2, pmk, pmk_len, output, output_len);
    
//     byte rotate_data[3];
// 	memcpy(rotate_data, output, 3);
// 	memmove(output, output + 3, output_len - 3);
// 	memcpy(output + output_len - 3, rotate_data, 3);
// }

// // Hook call to fp_apply_patches in c_main
// __attribute__((at(0x843200, "", CHIP_VER_BCM43430a1, FW_VER_7_45_41_46)))
// BLPatch(calc_ptk, calc_ptk_and_rotate);

// __attribute__((at(0x86d3ea, "", CHIP_VER_BCM43430a1, FW_VER_7_45_41_46)))
// BLPatch(calc_ptk, calc_ptk_and_rotate);

__attribute__((at(HNDRTE_RECLAIM_0_END_PTR, "", CHIP_VER_BCM43430a1, FW_VER_7_45_41_46)))
GenericPatch4(RSN_CIPHER_SUITE_CCMP, 0x87c338)