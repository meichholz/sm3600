ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2953[812.1] */
RegWrite(0x43, 1, 0x03);    /* #2954[812.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2955[812.1] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #2956[812.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2957[812.1] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #2958[812.1] */
RegWrite(0x32, 2, 0x20C9);    /* #2959[812.1] */
{
 unsigned char uchRegs2960[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x10, /*R_SWIDH*/ 0xC0, /*R_STPS*/ 0x00,
   /*R_STPSH*/ 0x00, /*0x08*/ 0xFF, /*0x09*/ 0xFF,
   /*R_LEN*/ 0x20, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x29, /*0x33*/ 0x35,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2960);
}    /* #2960[812.1] */
RegWrite(0x43, 1, 0x03);    /* #2961[812.1] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #2962[812.1] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2963[812.1] */
RegWrite(0x32, 2, 0x20C9);    /* #2964[812.1] */
RegWrite(0x32, 2, 0x20C9);    /* #2965[812.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2966[812.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2967[812.1] */
RegWrite(0x32, 2, 0x20C9);    /* #2968[812.1] */
{
 unsigned char uchRegs2969[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x10, /*R_SWIDH*/ 0xC0, /*R_STPS*/ 0x00,
   /*R_STPSH*/ 0x00, /*0x08*/ 0xFF, /*0x09*/ 0xFF,
   /*R_LEN*/ 0x20, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x29, /*0x33*/ 0x35,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2969);
}    /* #2969[812.1] */
RegWrite(0x43, 1, 0x03);    /* #2970[812.2] */
RegWrite(R_CCAL, 3, 0x808080);    /* #2971[812.2] */
RegWrite(0x32, 2, 0x20C9);    /* #2972[812.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2973[812.2] */
RegWrite(0x32, 2, 0x20C9);    /* #2974[812.2] */
RegWrite(0x34, 1, 0x63);    /* #2975[812.2] */
RegWrite(0x49, 1, 0x9E);    /* #2976[812.2] */
{
 unsigned char uchRegs2977[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0xC8,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2977);
}    /* #2977[812.2] */
RegWrite(R_CTL, 1, 0x39);    /* #2978[812.2] */
RegWrite(R_CTL, 1, 0x79);    /* #2979[812.2] */
RegWrite(R_CTL, 1, 0xF9);    /* #2980[812.2] */
RegWrite(0x32, 2, 0x20C9);    /* #2981[812.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2982[812.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2983[812.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2984[812.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2985[812.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2986[812.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2987[812.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2988[812.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2989[812.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2990[812.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2991[812.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2992[812.8] */
RegWrite(R_LMP, 1, 0x01);    /* #2993[812.8] */
RegWrite(R_LMP, 1, 0x01);    /* #2994[812.8] */
RegWrite(R_CTL, 1, 0x39);    /* #2995[812.8] */
RegWrite(0x34, 1, 0x63);    /* #2996[812.8] */
RegWrite(0x49, 1, 0x96);    /* #2997[812.8] */
{
 unsigned char uchRegs2998[]={
   /*R_SPOS*/ 0xFC, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0xEC, /*R_SWIDH*/ 0x93, /*R_STPS*/ 0x00,
   /*R_STPSH*/ 0x00, /*0x08*/ 0xAA, /*0x09*/ 0xAA,
   /*R_LEN*/ 0x44, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x20, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2998);
}    /* #2998[812.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2999[812.8] */
RegWrite(R_CTL, 1, 0x39);    /* #3000[812.8] */
RegWrite(R_CTL, 1, 0x79);    /* #3001[812.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #3002[812.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3003[812.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0899*/    /* #3004[812.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3005[812.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9E56*/    /* #3006[812.9] */
BulkRead(fh,32768);   /* #3007[812.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3008[812.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xDCA4*/    /* #3009[812.9] */
BulkRead(fh,32768);   /* #3010[813.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3011[813.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3012[813.0] */
BulkRead(fh,32768);   /* #3013[813.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3014[813.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3015[813.0] */
BulkRead(fh,32768);   /* #3016[813.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3017[813.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3018[813.1] */
BulkRead(fh,32768);   /* #3019[813.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3020[813.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3021[813.2] */
BulkRead(fh,32768);   /* #3022[813.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3023[813.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3024[813.2] */
BulkRead(fh,32768);   /* #3025[813.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3026[813.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3027[813.2] */
BulkRead(fh,32768);   /* #3028[813.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3029[813.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3030[813.3] */
BulkRead(fh,32768);   /* #3031[813.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3032[813.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3033[813.3] */
BulkRead(fh,32768);   /* #3034[813.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3035[813.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3036[813.4] */
BulkRead(fh,32768);   /* #3037[813.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3038[813.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3039[813.4] */
BulkRead(fh,32768);   /* #3040[813.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3041[813.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3042[813.5] */
BulkRead(fh,32768);   /* #3043[813.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3044[813.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3045[813.6] */
BulkRead(fh,32768);   /* #3046[813.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3047[813.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3048[813.6] */
BulkRead(fh,32768);   /* #3049[813.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3050[813.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3051[813.7] */
BulkRead(fh,32768);   /* #3052[813.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3053[813.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3054[813.7] */
BulkRead(fh,32768);   /* #3055[813.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3056[813.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3057[813.7] */
BulkRead(fh,32768);   /* #3058[813.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3059[813.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3060[813.8] */
BulkRead(fh,32768);   /* #3061[813.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3062[813.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3063[813.8] */
BulkRead(fh,32768);   /* #3064[813.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3065[813.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3066[813.9] */
BulkRead(fh,32768);   /* #3067[813.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3068[813.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3069[813.9] */
BulkRead(fh,32768);   /* #3070[814.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3071[814.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3072[814.0] */
BulkRead(fh,32768);   /* #3073[814.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3074[814.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3075[814.0] */
BulkRead(fh,32768);   /* #3076[814.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3077[814.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3078[814.1] */
BulkRead(fh,32768);   /* #3079[814.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3080[814.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3081[814.2] */
BulkRead(fh,32768);   /* #3082[814.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3083[814.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3084[814.2] */
BulkRead(fh,32768);   /* #3085[814.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #3086[814.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3087[814.3] */
BulkRead(fh,32768);   /* #3088[814.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #3089[814.3] */
BulkRead(fh,32768);   /* #3090[814.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #3091[814.4] */
BulkRead(fh,32768);   /* #3092[814.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #3093[814.4] */
BulkRead(fh,32768);   /* #3094[814.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #3095[814.4] */
BulkRead(fh,24592);   /* #3096[814.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3097[814.5] */
RegWrite(0x43, 1, 0x03);    /* #3098[814.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3099[814.5] */
{
 unsigned char uchRegs3100[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x00,
   /*R_SWID*/ 0x00, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0x00,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x80, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x79, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs3100);
}    /* #3100[814.5] */
RegWrite(R_CTL, 1, 0x39);    /* #3101[814.5] */
RegWrite(R_CTL, 1, 0x79);    /* #3102[814.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #3103[814.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3104[814.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3105[814.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #3106[814.6] */
RegWrite(R_CTL, 1, 0x39);    /* #3107[814.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3108[814.6] */
RegWrite(0x32, 2, 0x20C9);    /* #3109[814.6] */
RegWrite(0x34, 1, 0x63);    /* #3110[814.6] */
RegWrite(0x49, 1, 0x9E);    /* #3111[814.6] */
{
 unsigned char uchRegs3112[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0x44,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs3112);
}    /* #3112[814.6] */
RegWrite(R_CTL, 1, 0x19);    /* #3113[814.6] */
RegWrite(R_CTL, 1, 0x59);    /* #3114[814.6] */
RegWrite(R_CTL, 1, 0xD9);    /* #3115[814.6] */
RegWrite(0x32, 2, 0x20C9);    /* #3116[814.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3117[814.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3118[814.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3119[814.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3120[814.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3121[814.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3122[815.4] */
RegWrite(R_LMP, 1, 0x01);    /* #3123[815.4] */
RegWrite(R_LMP, 1, 0x01);    /* #3124[815.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3125[815.4] */
RegWrite(0x32, 2, 0x20C9);    /* #3126[815.4] */
RegWrite(0x34, 1, 0x63);    /* #3127[815.4] */
RegWrite(0x49, 1, 0x9E);    /* #3128[815.4] */
{
 unsigned char uchRegs3129[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0xC8,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x59, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs3129);
}    /* #3129[815.4] */
RegWrite(R_CTL, 1, 0x19);    /* #3130[815.4] */
RegWrite(R_CTL, 1, 0x59);    /* #3131[815.4] */
RegWrite(R_CTL, 1, 0xD9);    /* #3132[815.4] */
RegWrite(0x32, 2, 0x20C9);    /* #3133[815.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3134[815.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3135[815.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3136[815.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3137[815.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3138[815.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3139[815.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3140[815.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3141[815.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3142[815.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3143[816.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3144[816.0] */
RegWrite(0x32, 2, 0x20C9);    /* #3145[816.0] */
RegWrite(R_LMP, 1, 0x01);    /* #3146[816.0] */
RegWrite(R_LMP, 1, 0x01);    /* #3147[816.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3148[816.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3149[816.1] */
RegWrite(R_CTL, 1, 0x39);    /* #3150[816.1] */
RegWrite(0x34, 1, 0x63);    /* #3151[816.1] */
RegWrite(0x49, 1, 0x96);    /* #3152[816.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3153[816.1] */
RegWrite(0x32, 2, 0x20C9);    /* #3154[816.1] */
RegWrite(0x34, 1, 0x63);    /* #3155[816.1] */
RegWrite(0x49, 1, 0x9E);    /* #3156[816.1] */
{
 unsigned char uchRegs3157[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0x92,
   /*R_STPSH*/ 0x01, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs3157);
}    /* #3157[816.1] */
RegWrite(R_CTL, 1, 0x39);    /* #3158[816.1] */
RegWrite(R_CTL, 1, 0x79);    /* #3159[816.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #3160[816.1] */
RegWrite(0x32, 2, 0x20C9);    /* #3161[816.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3162[816.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3163[816.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3164[816.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3165[816.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3166[816.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3167[816.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3168[816.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3169[816.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3170[816.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3171[816.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3172[816.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3173[816.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3174[816.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3175[817.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3176[817.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3177[817.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3178[817.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3179[817.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3180[817.2] */
RegWrite(0x43, 1, 0x03);    /* #3181[817.2] */
RegWrite(R_CTL, 1, 0x39);    /* #3182[817.2] */
RegWrite(0x34, 1, 0x03);    /* #3183[817.2] */
RegWrite(0x49, 1, 0x96);    /* #3184[817.2] */
{
 unsigned char uchRegs3185[]={
   /*R_SPOS*/ 0xFC, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0xB0, /*R_SWIDH*/ 0x04, /*R_STPS*/ 0x06,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x3F,
   /*R_LEN*/ 0x16, /*R_LENH*/ 0x07, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x42,
   /*0x13*/ 0x15, /*0x14*/ 0x42, /*0x15*/ 0x15,
   /*0x16*/ 0x42, /*0x17*/ 0x15, /*0x18*/ 0x42,
   /*0x19*/ 0x15, /*0x1A*/ 0x07, /*0x1B*/ 0x00,
   /*0x1C*/ 0x08, /*0x1D*/ 0x12, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x42, /*0x48*/ 0x15,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs3185);
}    /* #3185[817.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3186[817.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3187[817.3] */
RegWrite(R_CTL, 1, 0x39);    /* #3188[817.3] */
RegWrite(R_CTL, 1, 0x79);    /* #3189[817.4] */
RegWrite(R_CTL, 1, 0xF9);    /* #3190[817.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3191[817.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x04B0*/    /* #3192[817.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3193[817.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B00*/    /* #3194[817.6] */
BulkRead(fh,32768);   /* #3195[817.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3196[817.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3518*/    /* #3197[817.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3198[817.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7220*/    /* #3199[817.8] */
BulkRead(fh,32768);   /* #3200[817.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3201[817.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x65B0*/    /* #3202[817.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3203[817.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x8A51*/    /* #3204[817.9] */
BulkRead(fh,32768);   /* #3205[818.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3206[818.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7E58*/    /* #3207[818.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3208[818.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9630*/    /* #3209[818.1] */
BulkRead(fh,32768);   /* #3210[818.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3211[818.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7BB0*/    /* #3212[818.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3213[818.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xA5E0*/    /* #3214[818.2] */
BulkRead(fh,32768);   /* #3215[818.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3216[818.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9970*/    /* #3217[818.3] */
BulkRead(fh,32768);   /* #3218[818.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3219[818.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x8D00*/    /* #3220[818.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3221[818.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB03E*/    /* #3222[818.5] */
BulkRead(fh,32768);   /* #3223[818.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3224[818.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9A58*/    /* #3225[818.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3226[818.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xC63C*/    /* #3227[818.6] */
BulkRead(fh,32768);   /* #3228[818.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3229[818.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB110*/    /* #3230[818.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3231[818.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xD438*/    /* #3232[818.8] */
BulkRead(fh,32768);   /* #3233[818.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3234[818.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xBC10*/    /* #3235[818.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3236[818.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xDB74*/    /* #3237[818.9] */
BulkRead(fh,32768);   /* #3238[818.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3239[819.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xC4B8*/    /* #3240[819.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3241[819.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFAA0*/    /* #3242[819.1] */
BulkRead(fh,32768);   /* #3243[819.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3244[819.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xE980*/    /* #3245[819.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3246[819.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3247[819.3] */
BulkRead(fh,32768);   /* #3248[819.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3249[819.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3250[819.4] */
BulkRead(fh,32768);   /* #3251[819.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3252[819.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3253[819.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3254[819.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3255[819.5] */
BulkRead(fh,32768);   /* #3256[819.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3257[819.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3258[819.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3259[819.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3260[819.7] */
BulkRead(fh,32768);   /* #3261[819.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3262[819.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3263[819.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3264[819.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3265[819.8] */
BulkRead(fh,32768);   /* #3266[819.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3267[819.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3268[819.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3269[820.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3270[820.0] */
BulkRead(fh,32768);   /* #3271[820.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3272[820.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3273[820.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3274[820.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3275[820.3] */
BulkRead(fh,32768);   /* #3276[820.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3277[820.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3278[820.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3279[820.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3280[820.5] */
BulkRead(fh,32768);   /* #3281[820.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3282[820.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3283[820.6] */
BulkRead(fh,32768);   /* #3284[820.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3285[820.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3286[820.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3287[820.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3288[820.7] */
BulkRead(fh,32768);   /* #3289[820.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3290[820.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3291[820.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3292[820.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3293[820.8] */
BulkRead(fh,32768);   /* #3294[820.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3295[820.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3296[820.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3297[820.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3298[821.0] */
BulkRead(fh,32768);   /* #3299[821.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3300[821.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3301[821.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3302[821.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3303[821.1] */
BulkRead(fh,32768);   /* #3304[821.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3305[821.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3306[821.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3307[821.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3308[821.3] */
BulkRead(fh,32768);   /* #3309[821.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3310[821.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3311[821.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3312[821.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3313[821.4] */
BulkRead(fh,32768);   /* #3314[821.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3315[821.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3316[821.6] */
BulkRead(fh,32768);   /* #3317[821.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3318[821.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3319[821.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3320[821.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3321[821.8] */
BulkRead(fh,32768);   /* #3322[821.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3323[821.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3324[821.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3325[821.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3326[821.9] */
BulkRead(fh,32768);   /* #3327[821.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3328[822.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3329[822.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3330[822.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3331[822.1] */
BulkRead(fh,32768);   /* #3332[822.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3333[822.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3334[822.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3335[822.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3336[822.3] */
BulkRead(fh,32768);   /* #3337[822.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3338[822.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3339[822.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3340[822.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3341[822.4] */
BulkRead(fh,32768);   /* #3342[822.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3343[822.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3344[822.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3345[822.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3346[822.6] */
BulkRead(fh,32768);   /* #3347[822.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3348[822.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3349[822.7] */
BulkRead(fh,32768);   /* #3350[822.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3351[822.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3352[822.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3353[822.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3354[822.8] */
BulkRead(fh,32768);   /* #3355[822.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3356[822.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3357[823.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3358[823.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3359[823.1] */
BulkRead(fh,32768);   /* #3360[823.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3361[823.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3362[823.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3363[823.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3364[823.2] */
BulkRead(fh,32768);   /* #3365[823.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3366[823.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3367[823.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3368[823.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3369[823.3] */
BulkRead(fh,32768);   /* #3370[823.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3371[823.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3372[823.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3373[823.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3374[823.6] */
BulkRead(fh,32768);   /* #3375[823.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3376[823.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3377[823.7] */
BulkRead(fh,32768);   /* #3378[823.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3379[823.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3380[823.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3381[823.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3382[823.8] */
BulkRead(fh,32768);   /* #3383[823.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3384[823.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3385[823.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3386[824.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3387[824.0] */
BulkRead(fh,32768);   /* #3388[824.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3389[824.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3390[824.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3391[824.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3392[824.3] */
BulkRead(fh,32768);   /* #3393[824.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3394[824.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3395[824.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3396[824.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3397[824.4] */
BulkRead(fh,32768);   /* #3398[824.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3399[824.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3400[824.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3401[824.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3402[824.5] */
BulkRead(fh,32768);   /* #3403[824.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3404[824.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3405[824.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3406[824.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3407[824.7] */
BulkRead(fh,32768);   /* #3408[824.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3409[824.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3410[824.9] */
BulkRead(fh,32768);   /* #3411[824.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3412[824.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3413[825.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3414[825.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3415[825.0] */
BulkRead(fh,32768);   /* #3416[825.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3417[825.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3418[825.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3419[825.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3420[825.2] */
BulkRead(fh,32768);   /* #3421[825.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3422[825.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3423[825.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3424[825.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3425[825.3] */
BulkRead(fh,32768);   /* #3426[825.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3427[825.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3428[825.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3429[825.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3430[825.5] */
BulkRead(fh,32768);   /* #3431[825.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3432[825.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3433[825.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3434[825.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3435[825.8] */
BulkRead(fh,32768);   /* #3436[825.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3437[825.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3438[825.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3439[825.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3440[825.9] */
BulkRead(fh,32768);   /* #3441[825.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3442[826.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3443[826.0] */
BulkRead(fh,32768);   /* #3444[826.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3445[826.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3446[826.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3447[826.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3448[826.1] */
BulkRead(fh,32768);   /* #3449[826.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3450[826.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3451[826.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3452[826.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3453[826.3] */
BulkRead(fh,32768);   /* #3454[826.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3455[826.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3456[826.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3457[826.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3458[826.4] */
BulkRead(fh,32768);   /* #3459[826.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #3460[826.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3461[826.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3462[826.6] */
BulkRead(fh,32768);   /* #3463[826.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3464[826.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3465[826.8] */
BulkRead(fh,32768);   /* #3466[826.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3467[826.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3468[826.9] */
BulkRead(fh,32768);   /* #3469[826.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3470[827.0] */
BulkRead(fh,32768);   /* #3471[827.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3472[827.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3473[827.2] */
BulkRead(fh,32768);   /* #3474[827.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3475[827.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3476[827.3] */
BulkRead(fh,32768);   /* #3477[827.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xDB90*/    /* #3478[827.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xDB90*/    /* #3479[827.4] */
BulkRead(fh,32768);   /* #3480[827.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9B90*/    /* #3481[827.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9B90*/    /* #3482[827.5] */
BulkRead(fh,32768);   /* #3483[827.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5B90*/    /* #3484[827.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5B90*/    /* #3485[827.6] */
BulkRead(fh,32768);   /* #3486[827.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B90*/    /* #3487[827.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B90*/    /* #3488[827.7] */
BulkRead(fh,14112);   /* #3489[827.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3490[827.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3491[827.8] */
RegWrite(0x43, 1, 0x03);    /* #3492[827.8] */
RegWrite(0x43, 1, 0x03);    /* #3493[827.8] */
RegWrite(R_CTL, 1, 0x39);    /* #3494[827.8] */
{
 unsigned char uchRegs3495[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x00,
   /*R_SWID*/ 0x00, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0x00,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x42,
   /*0x13*/ 0x15, /*0x14*/ 0x42, /*0x15*/ 0x15,
   /*0x16*/ 0x42, /*0x17*/ 0x15, /*0x18*/ 0x42,
   /*0x19*/ 0x15, /*0x1A*/ 0x07, /*0x1B*/ 0x00,
   /*0x1C*/ 0x08, /*0x1D*/ 0x12, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x80, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x42, /*0x48*/ 0x15,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs3495);
}    /* #3495[827.8] */
RegWrite(R_CTL, 1, 0x39);    /* #3496[827.9] */
RegWrite(R_CTL, 1, 0x79);    /* #3497[827.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #3498[827.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #3499[827.9] */
RegWrite(R_CTL, 1, 0x39);    /* #3500[827.9] */
RegWrite(0x43, 1, 0x07);    /* #3501[828.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3502[828.0] */
RegWrite(0x32, 2, 0x20C9);    /* #3503[828.0] */
RegWrite(0x34, 1, 0xC3);    /* #3504[828.0] */
RegWrite(0x49, 1, 0x9E);    /* #3505[828.2] */
{
 unsigned char uchRegs3506[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0xAE,
   /*R_STPSH*/ 0x08, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0xC3, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x07, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs3506);
}    /* #3506[828.2] */
RegWrite(0x43, 1, 0x03);    /* #3507[828.2] */
RegWrite(R_STPS, 2, 0x0000);    /* #3508[828.2] */
RegWrite(R_LEN, 2, 0x08AE);    /* #3509[828.3] */
RegWrite(0x47, 2, 0xA000);    /* #3510[828.3] */
RegWrite(0x34, 1, 0xC3);    /* #3511[828.3] */
RegWrite(0x49, 1, 0x9E);    /* #3512[828.3] */
RegWrite(R_CTL, 1, 0x19);    /* #3513[828.3] */
RegWrite(R_CTL, 1, 0x59);    /* #3514[828.4] */
RegWrite(R_CTL, 1, 0xD9);    /* #3515[828.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x08A8*/    /* #3516[828.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x089F*/    /* #3517[828.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0896*/    /* #3518[828.5] */
RegWrite(0x47, 2, 0xA000);    /* #3519[828.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0883*/    /* #3520[828.5] */
RegWrite(0x47, 2, 0x9800);    /* #3521[828.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x086F*/    /* #3522[828.6] */
RegWrite(0x47, 2, 0x9000);    /* #3523[828.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0851*/    /* #3524[828.6] */
RegWrite(0x47, 2, 0x8800);    /* #3525[828.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0847*/    /* #3526[828.6] */
RegWrite(0x47, 2, 0x8000);    /* #3527[828.6] */
RegWrite(0x43, 1, 0x07);    /* #3528[828.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0818*/    /* #3529[828.7] */
RegWrite(0x47, 2, 0x7800);    /* #3530[828.7] */
RegWrite(0x43, 1, 0x07);    /* #3531[828.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x07E7*/    /* #3532[828.8] */
RegWrite(0x47, 2, 0x7000);    /* #3533[828.8] */
RegWrite(0x43, 1, 0x07);    /* #3534[828.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x07B2*/    /* #3535[829.0] */
RegWrite(0x47, 2, 0x6800);    /* #3536[829.0] */
RegWrite(0x43, 1, 0x07);    /* #3537[829.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x070B*/    /* #3538[829.1] */
RegWrite(0x47, 2, 0x6000);    /* #3539[829.1] */
RegWrite(0x43, 1, 0x07);    /* #3540[829.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x06DD*/    /* #3541[829.1] */
RegWrite(0x47, 2, 0x5800);    /* #3542[829.1] */
RegWrite(0x43, 1, 0x07);    /* #3543[829.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x06B0*/    /* #3544[829.2] */
RegWrite(0x47, 2, 0x5000);    /* #3545[829.2] */
RegWrite(0x43, 1, 0x07);    /* #3546[829.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0673*/    /* #3547[829.3] */
RegWrite(0x47, 2, 0x40C0);    /* #3548[829.3] */
RegWrite(0x32, 2, 0x20C9);    /* #3549[829.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3550[829.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3551[829.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3552[829.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3553[829.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3554[829.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3555[830.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3556[830.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3557[830.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3558[830.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3559[830.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3560[830.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3561[830.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3562[830.7] */
RegWrite(0x43, 1, 0x03);    /* #3563[830.7] */
RegWrite(R_CTL, 1, 0x39);    /* #3564[830.7] */
