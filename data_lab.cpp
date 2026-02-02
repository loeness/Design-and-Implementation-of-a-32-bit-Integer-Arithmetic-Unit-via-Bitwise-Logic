#include "data_lab.hpp"
#include <cstdint>

namespace data_lab {

int32_t add(int32_t a, int32_t b) {
    int32_t XOR_0 = a ^ b;  //get the sum don't care carry eg:1^1=0,0^0=0,1^0=1
    int32_t Carry_0 = static_cast<int32_t>(static_cast<uint32_t>(a & b) << 1); //carry step:left move for 1 step

    int32_t XOR_1 = XOR_0 ^ Carry_0;
    int32_t Carry_1 = static_cast<int32_t>(static_cast<uint32_t>(XOR_0 & Carry_0) << 1);

    int32_t XOR_2 = XOR_1 ^ Carry_1;
    int32_t Carry_2 = static_cast<int32_t>(static_cast<uint32_t>(XOR_1 & Carry_1) << 1);

    int32_t XOR_3 = XOR_2 ^ Carry_2;
    int32_t Carry_3 = static_cast<int32_t>(static_cast<uint32_t>(XOR_2 & Carry_2) << 1);

    int32_t XOR_4 = XOR_3 ^ Carry_3;
    int32_t Carry_4 = static_cast<int32_t>(static_cast<uint32_t>(XOR_3 & Carry_3) << 1);

    int32_t XOR_5 = XOR_4 ^ Carry_4;
    int32_t Carry_5 = static_cast<int32_t>(static_cast<uint32_t>(XOR_4 & Carry_4) << 1);

    int32_t XOR_6 = XOR_5 ^ Carry_5;
    int32_t Carry_6 = static_cast<int32_t>(static_cast<uint32_t>(XOR_5 & Carry_5) << 1);

    int32_t XOR_7 = XOR_6 ^ Carry_6;
    int32_t Carry_7 = static_cast<int32_t>(static_cast<uint32_t>(XOR_6 & Carry_6) << 1);

    int32_t XOR_8 = XOR_7 ^ Carry_7;
    int32_t Carry_8 = static_cast<int32_t>(static_cast<uint32_t>(XOR_7 & Carry_7) << 1);

    int32_t XOR_9 = XOR_8 ^ Carry_8;
    int32_t Carry_9 = static_cast<int32_t>(static_cast<uint32_t>(XOR_8 & Carry_8) << 1);

    int32_t XOR_10 = XOR_9 ^ Carry_9;
    int32_t Carry_10 = static_cast<int32_t>(static_cast<uint32_t>(XOR_9 & Carry_9) << 1);

    int32_t XOR_11 = XOR_10 ^ Carry_10;
    int32_t Carry_11 = static_cast<int32_t>(static_cast<uint32_t>(XOR_10 & Carry_10) << 1);

    int32_t XOR_12 = XOR_11 ^ Carry_11;
    int32_t Carry_12 = static_cast<int32_t>(static_cast<uint32_t>(XOR_11 & Carry_11) << 1);

    int32_t XOR_13 = XOR_12 ^ Carry_12;
    int32_t Carry_13 = static_cast<int32_t>(static_cast<uint32_t>(XOR_12 & Carry_12) << 1);

    int32_t XOR_14 = XOR_13 ^ Carry_13;
    int32_t Carry_14 = static_cast<int32_t>(static_cast<uint32_t>(XOR_13 & Carry_13) << 1);

    int32_t XOR_15 = XOR_14 ^ Carry_14;
    int32_t Carry_15 = static_cast<int32_t>(static_cast<uint32_t>(XOR_14 & Carry_14) << 1);

    int32_t XOR_16 = XOR_15 ^ Carry_15;
    int32_t Carry_16 = static_cast<int32_t>(static_cast<uint32_t>(XOR_15 & Carry_15) << 1);

    int32_t XOR_17 = XOR_16 ^ Carry_16;
    int32_t Carry_17 = static_cast<int32_t>(static_cast<uint32_t>(XOR_16 & Carry_16) << 1);

    int32_t XOR_18 = XOR_17 ^ Carry_17;
    int32_t Carry_18 = static_cast<int32_t>(static_cast<uint32_t>(XOR_17 & Carry_17) << 1);

    int32_t XOR_19 = XOR_18 ^ Carry_18;
    int32_t Carry_19 = static_cast<int32_t>(static_cast<uint32_t>(XOR_18 & Carry_18) << 1);

    int32_t XOR_20 = XOR_19 ^ Carry_19;
    int32_t Carry_20 = static_cast<int32_t>(static_cast<uint32_t>(XOR_19 & Carry_19) << 1);

    int32_t XOR_21 = XOR_20 ^ Carry_20;
    int32_t Carry_21 = static_cast<int32_t>(static_cast<uint32_t>(XOR_20 & Carry_20) << 1);

    int32_t XOR_22 = XOR_21 ^ Carry_21;
    int32_t Carry_22 = static_cast<int32_t>(static_cast<uint32_t>(XOR_21 & Carry_21) << 1);

    int32_t XOR_23 = XOR_22 ^ Carry_22;
    int32_t Carry_23 = static_cast<int32_t>(static_cast<uint32_t>(XOR_22 & Carry_22) << 1);

    int32_t XOR_24 = XOR_23 ^ Carry_23;
    int32_t Carry_24 = static_cast<int32_t>(static_cast<uint32_t>(XOR_23 & Carry_23) << 1);

    int32_t XOR_25 = XOR_24 ^ Carry_24;
    int32_t Carry_25 = static_cast<int32_t>(static_cast<uint32_t>(XOR_24 & Carry_24) << 1);

    int32_t XOR_26 = XOR_25 ^ Carry_25;
    int32_t Carry_26 = static_cast<int32_t>(static_cast<uint32_t>(XOR_25 & Carry_25) << 1);

    int32_t XOR_27 = XOR_26 ^ Carry_26;
    int32_t Carry_27 = static_cast<int32_t>(static_cast<uint32_t>(XOR_26 & Carry_26) << 1);

    int32_t XOR_28 = XOR_27 ^ Carry_27;
    int32_t Carry_28 = static_cast<int32_t>(static_cast<uint32_t>(XOR_27 & Carry_27) << 1);

    int32_t XOR_29 = XOR_28 ^ Carry_28;
    int32_t Carry_29 = static_cast<int32_t>(static_cast<uint32_t>(XOR_28 & Carry_28) << 1);

    int32_t XOR_30 = XOR_29 ^ Carry_29;
    int32_t Carry_30 = static_cast<int32_t>(static_cast<uint32_t>(XOR_29 & Carry_29) << 1);

    int32_t XOR_31 = XOR_30 ^ Carry_30;
    int32_t Carry_31 = static_cast<int32_t>(static_cast<uint32_t>(XOR_30 & Carry_30) << 1); 
    return XOR_31;
}

int32_t subtract(int32_t a, int32_t b) {
    int32_t negative_b = add(~b,1);
    return add(a,negative_b);
}

int32_t multiply(int32_t a, int32_t b) {  
    int32_t result = 0;
    uint32_t multiplier = static_cast<uint32_t>(b);  // logical shifts to avoid sign-bit smearing
    int32_t count = 32;
    while (count) {
        int32_t lowest = static_cast<int32_t>(multiplier & 1);
        int32_t lowest_2s_complement = add(~lowest, 1);  // 0->0, 1->-1
        int32_t partial = a & lowest_2s_complement;
        result = add(result, partial);

        a = static_cast<int32_t>(static_cast<uint32_t>(a) << 1);
        multiplier >>= 1;  // logical shift to peel original bits only
        count = subtract(count, 1);
    }
    return result;
}

int32_t divide(int32_t a, int32_t b) {
    //quotient sign is sign(a) xor sign(b)
    int32_t sign_a = a >> 31;
    int32_t sign_b = b >> 31;
    int32_t sign_q = sign_a ^ sign_b;

    int32_t abs_a = subtract(a ^ sign_a, sign_a);
    int32_t abs_b = subtract(b ^ sign_b, sign_b);

    uint32_t dividend = static_cast<uint32_t>(abs_a);
    uint32_t divisor = static_cast<uint32_t>(abs_b);

    uint32_t quotient = 0;
    uint32_t remainder = 0;

    int32_t count = 32;  // process 32 bits
    while (count) {
        remainder = (remainder << 1) | (dividend >> 31);
        dividend <<= 1;

        // If remainder >= divisor, subtract and set quotient bit to 1 (no comparison operators)
        int32_t diff = subtract(static_cast<int32_t>(remainder), static_cast<int32_t>(divisor));
        int32_t borrow = diff >> 31;  // 0 when remainder>=divisor, -1（111...11) when remainder<divisor
        if (!borrow) {
            remainder = static_cast<uint32_t>(diff);
            quotient = (quotient << 1) | 1;
        } 
        else {
            quotient <<= 1;
        }

        count = subtract(count, 1);
    }

    // Apply sign to quotient
    int32_t signed_quotient = static_cast<int32_t>(quotient);
    signed_quotient = subtract(signed_quotient ^ sign_q, sign_q);
    return signed_quotient;
}

int32_t modulo(int32_t a, int32_t b) {
    int32_t sign_a = a >> 31;
    int32_t sign_b = b >> 31;

    int32_t abs_a = subtract(a ^ sign_a, sign_a);
    int32_t abs_b = subtract(b ^ sign_b, sign_b);

    uint32_t dividend = static_cast<uint32_t>(abs_a);
    uint32_t divisor = static_cast<uint32_t>(abs_b);

    uint32_t remainder = 0;
    int32_t count = 32;
    while (count) {
        remainder = (remainder << 1) | (dividend >> 31);
        dividend <<= 1;

        int32_t diff = subtract(static_cast<int32_t>(remainder), static_cast<int32_t>(divisor));
        int32_t borrow = diff >> 31;
        if (!borrow) {
            remainder = static_cast<uint32_t>(diff);
        }

        count = subtract(count, 1);
    }

    int32_t signed_remainder = static_cast<int32_t>(remainder);
    signed_remainder = subtract(signed_remainder ^ sign_a, sign_a);  // remainder sign follows dividend
    return signed_remainder;
}

}  // namespace data_lab