ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2870[206.1] */
RegWrite(0x43, 1, 0x03);    /* #2871[206.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2872[206.1] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #2873[206.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2874[206.1] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #2875[206.1] */
RegWrite(0x32, 2, 0x2D0B);    /* #2876[206.1] */
{
 unsigned char uchRegs2877[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0x10 /*R_SWID*/, 0xC0 /*R_SWIDH*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
   0x20 /*R_LEN*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x29 /*0x32*/, 0x35 /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2877);
}    /* #2877[206.2] */
RegWrite(0x43, 1, 0x03);    /* #2878[206.2] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #2879[206.2] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2880[206.2] */
RegWrite(0x32, 2, 0x2D0B);    /* #2881[206.2] */
RegWrite(0x32, 2, 0x2D0B);    /* #2882[206.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2883[206.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2884[206.2] */
RegWrite(0x32, 2, 0x2D0B);    /* #2885[206.2] */
{
 unsigned char uchRegs2886[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0x10 /*R_SWID*/, 0xC0 /*R_SWIDH*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
   0x20 /*R_LEN*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x29 /*0x32*/, 0x35 /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2886);
}    /* #2886[206.2] */
RegWrite(0x43, 1, 0x03);    /* #2887[206.2] */
RegWrite(R_CCAL, 3, 0x808080);    /* #2888[206.2] */
RegWrite(0x32, 2, 0x2D0B);    /* #2889[206.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2890[206.2] */
RegWrite(0x32, 2, 0x2D0B);    /* #2891[206.2] */
RegWrite(0x34, 1, 0x63);    /* #2892[206.2] */
RegWrite(0x49, 1, 0x9E);    /* #2893[206.2] */
{
 unsigned char uchRegs2894[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0x40 /*!!R_SWID!!*/, 0x00 /*!!R_SWIDH!!*/, 0xC8 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!R_LEN!!*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*!!0x32!!*/, 0x2D /*!!0x33!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2894);
}    /* #2894[206.2] */
RegWrite(R_CTL, 1, 0x39);    /* #2895[206.2] */
RegWrite(R_CTL, 1, 0x79);    /* #2896[206.2] */
RegWrite(R_CTL, 1, 0xF9);    /* #2897[206.2] */
RegWrite(0x32, 2, 0x2D0B);    /* #2898[206.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2899[206.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2900[206.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2901[206.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2902[206.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2903[206.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2904[206.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2905[206.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2906[206.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2907[206.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2908[206.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2909[206.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2910[206.9] */
RegWrite(R_LMP, 1, 0x01);    /* #2911[206.9] */
RegWrite(R_LMP, 1, 0x01);    /* #2912[206.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2913[206.9] */
RegWrite(0x34, 1, 0x63);    /* #2914[206.9] */
RegWrite(0x49, 1, 0x96);    /* #2915[206.9] */
{
 unsigned char uchRegs2916[]={
   0xFC /*!!R_SPOS!!*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0xEC /*!!R_SWID!!*/, 0x93 /*!!R_SWIDH!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0xAA /*!!0x08!!*/, 0xAA /*!!0x09!!*/,
   0x44 /*!!R_LEN!!*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x20 /*!!0x41!!*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2916);
}    /* #2916[206.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2917[206.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2918[206.9] */
RegWrite(R_CTL, 1, 0x79);    /* #2919[206.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #2920[206.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2921[206.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2922[207.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2923[207.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x8B74*/    /* #2924[207.0] */
BulkRead(fh,32768);   /* #2925[207.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2926[207.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xAF10*/    /* #2927[207.0] */
BulkRead(fh,32768);   /* #2928[207.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2929[207.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xDE97*/    /* #2930[207.1] */
BulkRead(fh,32768);   /* #2931[207.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2932[207.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFA11*/    /* #2933[207.1] */
BulkRead(fh,32768);   /* #2934[207.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2935[207.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2936[207.2] */
BulkRead(fh,32768);   /* #2937[207.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2938[207.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2939[207.3] */
BulkRead(fh,32768);   /* #2940[207.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2941[207.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2942[207.3] */
BulkRead(fh,32768);   /* #2943[207.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2944[207.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2945[207.4] */
BulkRead(fh,32768);   /* #2946[207.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2947[207.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2948[207.4] */
BulkRead(fh,32768);   /* #2949[207.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2950[207.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2951[207.5] */
BulkRead(fh,32768);   /* #2952[207.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2953[207.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2954[207.5] */
BulkRead(fh,32768);   /* #2955[207.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2956[207.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2957[207.5] */
BulkRead(fh,32768);   /* #2958[207.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2959[207.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2960[207.6] */
BulkRead(fh,32768);   /* #2961[207.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2962[207.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2963[207.6] */
BulkRead(fh,32768);   /* #2964[207.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2965[207.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2966[207.7] */
BulkRead(fh,32768);   /* #2967[207.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2968[207.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2969[207.7] */
BulkRead(fh,32768);   /* #2970[207.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2971[207.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2972[207.8] */
BulkRead(fh,32768);   /* #2973[207.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2974[207.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2975[207.8] */
BulkRead(fh,32768);   /* #2976[207.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2977[207.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2978[207.9] */
BulkRead(fh,32768);   /* #2979[208.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2980[208.0] */
BulkRead(fh,32768);   /* #2981[208.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2982[208.0] */
BulkRead(fh,32768);   /* #2983[208.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2984[208.0] */
BulkRead(fh,32768);   /* #2985[208.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2986[208.1] */
BulkRead(fh,32768);   /* #2987[208.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2988[208.1] */
BulkRead(fh,32768);   /* #2989[208.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2990[208.2] */
BulkRead(fh,32768);   /* #2991[208.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2992[208.2] */
BulkRead(fh,32768);   /* #2993[208.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2994[208.3] */
BulkRead(fh,32768);   /* #2995[208.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2996[208.3] */
BulkRead(fh,32768);   /* #2997[208.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #2998[208.3] */
BulkRead(fh,32768);   /* #2999[208.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #3000[208.4] */
BulkRead(fh,32768);   /* #3001[208.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #3002[208.4] */
BulkRead(fh,32768);   /* #3003[208.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #3004[208.5] */
BulkRead(fh,24592);   /* #3005[208.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3006[208.5] */
RegWrite(0x43, 1, 0x03);    /* #3007[208.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3008[208.5] */
{
 unsigned char uchRegs3009[]={
   0x00 /*!!R_SPOS!!*/, 0x00 /*R_SPOSH*/, 0x00 /*!!0x03!!*/,
   0x00 /*!!R_SWID!!*/, 0x00 /*!!R_SWIDH!!*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!R_LEN!!*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs3009);
}    /* #3009[208.5] */
RegWrite(R_CTL, 1, 0x39);    /* #3010[208.5] */
RegWrite(R_CTL, 1, 0x79);    /* #3011[208.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #3012[208.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3013[208.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3014[208.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3015[208.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3016[208.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3017[208.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3018[208.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3019[208.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #3020[208.6] */
RegWrite(R_CTL, 1, 0x39);    /* #3021[208.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3022[208.6] */
RegWrite(0x32, 2, 0x2D0B);    /* #3023[208.6] */
RegWrite(0x34, 1, 0x63);    /* #3024[208.6] */
RegWrite(0x49, 1, 0x9E);    /* #3025[208.6] */
{
 unsigned char uchRegs3026[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!R_SWID!!*/, 0x00 /*R_SWIDH*/, 0x44 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*R_LEN*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs3026);
}    /* #3026[208.6] */
RegWrite(R_CTL, 1, 0x19);    /* #3027[208.6] */
RegWrite(R_CTL, 1, 0x59);    /* #3028[208.6] */
RegWrite(R_CTL, 1, 0xD9);    /* #3029[208.6] */
RegWrite(0x32, 2, 0x2D0B);    /* #3030[208.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3031[208.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3032[208.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3033[208.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3034[208.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3035[208.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3036[209.3] */
RegWrite(R_LMP, 1, 0x01);    /* #3037[209.3] */
RegWrite(R_LMP, 1, 0x01);    /* #3038[209.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3039[209.3] */
RegWrite(0x32, 2, 0x2D0B);    /* #3040[209.3] */
RegWrite(0x34, 1, 0x63);    /* #3041[209.3] */
RegWrite(0x49, 1, 0x9E);    /* #3042[209.3] */
{
 unsigned char uchRegs3043[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0x40 /*R_SWID*/, 0x00 /*R_SWIDH*/, 0xC8 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*R_LEN*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x59 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs3043);
}    /* #3043[209.4] */
RegWrite(R_CTL, 1, 0x19);    /* #3044[209.4] */
RegWrite(R_CTL, 1, 0x59);    /* #3045[209.4] */
RegWrite(R_CTL, 1, 0xD9);    /* #3046[209.4] */
RegWrite(0x32, 2, 0x2D0B);    /* #3047[209.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3048[209.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3049[209.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3050[209.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3051[209.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3052[209.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3053[209.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3054[209.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3055[209.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3056[209.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3057[210.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3058[210.0] */
RegWrite(0x32, 2, 0x2D0B);    /* #3059[210.0] */
RegWrite(R_LMP, 1, 0x01);    /* #3060[210.0] */
RegWrite(R_LMP, 1, 0x01);    /* #3061[210.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3062[210.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3063[210.1] */
RegWrite(R_CTL, 1, 0x39);    /* #3064[210.1] */
RegWrite(0x34, 1, 0x63);    /* #3065[210.1] */
RegWrite(0x49, 1, 0x96);    /* #3066[210.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3067[210.1] */
RegWrite(0x32, 2, 0x2D0B);    /* #3068[210.1] */
RegWrite(0x34, 1, 0x63);    /* #3069[210.1] */
RegWrite(0x49, 1, 0x9E);    /* #3070[210.1] */
{
 unsigned char uchRegs3071[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0x40 /*R_SWID*/, 0x00 /*R_SWIDH*/, 0x9F /*!!R_STPS!!*/,
   0x01 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*R_LEN*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs3071);
}    /* #3071[210.1] */
RegWrite(R_CTL, 1, 0x39);    /* #3072[210.1] */
RegWrite(R_CTL, 1, 0x79);    /* #3073[210.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #3074[210.1] */
RegWrite(0x32, 2, 0x2D0B);    /* #3075[210.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3076[210.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3077[210.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3078[210.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3079[210.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3080[210.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3081[210.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3082[210.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3083[210.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3084[210.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3085[210.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3086[210.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3087[210.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3088[210.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3089[210.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3090[211.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3091[211.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3092[211.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3093[211.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3094[211.1] */
RegWrite(0x43, 1, 0x03);    /* #3095[211.1] */
RegWrite(R_CTL, 1, 0x39);    /* #3096[211.1] */
RegWrite(0x34, 1, 0x03);    /* #3097[211.2] */
RegWrite(0x49, 1, 0x96);    /* #3098[211.2] */
{
 unsigned char uchRegs3099[]={
   0xFC /*!!R_SPOS!!*/, 0x00 /*R_SPOSH*/, 0x2A /*!!0x03!!*/,
   0xB0 /*!!R_SWID!!*/, 0x44 /*!!R_SWIDH!!*/, 0x06 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0x6A /*!!0x08!!*/, 0x6A /*!!0x09!!*/,
   0x16 /*!!R_LEN!!*/, 0x07 /*!!R_LENH!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs3099);
}    /* #3099[211.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3100[211.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3101[211.2] */
RegWrite(R_CTL, 1, 0x39);    /* #3102[211.2] */
RegWrite(R_CTL, 1, 0x79);    /* #3103[211.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #3104[211.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3105[211.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3106[211.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3107[211.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0708*/    /* #3108[211.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3109[211.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #3110[211.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3111[211.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2328*/    /* #3112[211.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3113[211.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3138*/    /* #3114[211.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3115[211.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F48*/    /* #3116[211.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3117[211.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D58*/    /* #3118[212.0] */
BulkRead(fh,32768);   /* #3119[212.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3120[212.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x17E4*/    /* #3121[212.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3122[212.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25F4*/    /* #3123[212.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3124[212.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3404*/    /* #3125[212.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3126[212.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40E8*/    /* #3127[212.4] */
BulkRead(fh,32768);   /* #3128[212.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3129[212.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0CA0*/    /* #3130[212.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3131[212.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1600*/    /* #3132[212.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3133[212.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2794*/    /* #3134[212.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3135[212.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36D0*/    /* #3136[212.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3137[212.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x43B4*/    /* #3138[212.8] */
BulkRead(fh,32768);   /* #3139[212.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3140[212.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0D14*/    /* #3141[213.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3142[213.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D7C*/    /* #3143[213.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3144[213.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B8C*/    /* #3145[213.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3146[213.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AC8*/    /* #3147[213.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3148[213.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B30*/    /* #3149[213.4] */
BulkRead(fh,32768);   /* #3150[213.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3151[213.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x15BC*/    /* #3152[213.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3153[213.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x223B*/    /* #3154[213.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3155[213.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E58*/    /* #3156[213.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3157[213.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C8A*/    /* #3158[213.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3159[213.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BA4*/    /* #3160[213.9] */
BulkRead(fh,32768);   /* #3161[213.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3162[213.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1888*/    /* #3163[214.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3164[214.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2698*/    /* #3165[214.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3166[214.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34A8*/    /* #3167[214.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3168[214.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x463C*/    /* #3169[214.3] */
BulkRead(fh,32768);   /* #3170[214.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3171[214.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10C8*/    /* #3172[214.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3173[214.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x17D0*/    /* #3174[214.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3175[214.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25E0*/    /* #3176[214.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3177[214.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x32C4*/    /* #3178[214.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3179[214.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E7C*/    /* #3180[214.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3181[214.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4DB8*/    /* #3182[214.8] */
BulkRead(fh,32768);   /* #3183[214.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3184[214.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1718*/    /* #3185[215.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3186[215.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2654*/    /* #3187[215.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3188[215.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C98*/    /* #3189[215.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3190[215.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BD4*/    /* #3191[215.3] */
BulkRead(fh,32768);   /* #3192[215.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3193[215.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x18B8*/    /* #3194[215.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3195[215.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20EC*/    /* #3196[215.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3197[215.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3028*/    /* #3198[215.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3199[215.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41BC*/    /* #3200[215.7] */
BulkRead(fh,32768);   /* #3201[215.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3202[215.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0C48*/    /* #3203[215.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3204[215.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1DDC*/    /* #3205[216.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3206[216.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B4A*/    /* #3207[216.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3208[216.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x38D0*/    /* #3209[216.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3210[216.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x480C*/    /* #3211[216.3] */
BulkRead(fh,32768);   /* #3212[216.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3213[216.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x14F0*/    /* #3214[216.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3215[216.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F7C*/    /* #3216[216.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3217[216.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D8C*/    /* #3218[216.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3219[216.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B9C*/    /* #3220[216.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3221[216.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4AD8*/    /* #3222[216.7] */
BulkRead(fh,32768);   /* #3223[216.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3224[216.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1438*/    /* #3225[216.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3226[217.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BA8*/    /* #3227[217.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3228[217.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3760*/    /* #3229[217.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3230[217.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x48F4*/    /* #3231[217.2] */
BulkRead(fh,32768);   /* #3232[217.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3233[217.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1380*/    /* #3234[217.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3235[217.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2190*/    /* #3236[217.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3237[217.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3131*/    /* #3238[217.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3239[217.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x44B8*/    /* #3240[217.7] */
BulkRead(fh,32768);   /* #3241[217.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3242[217.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12C8*/    /* #3243[217.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3244[217.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D54*/    /* #3245[217.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3246[217.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B64*/    /* #3247[218.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3248[218.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3974*/    /* #3249[218.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3250[218.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4784*/    /* #3251[218.2] */
BulkRead(fh,32768);   /* #3252[218.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3253[218.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1210*/    /* #3254[218.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3255[218.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25FC*/    /* #3256[218.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3257[218.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3814*/    /* #3258[218.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3259[218.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4348*/    /* #3260[218.6] */
BulkRead(fh,32768);   /* #3261[218.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3262[218.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0DD4*/    /* #3263[218.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3264[218.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1860*/    /* #3265[218.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3266[218.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2670*/    /* #3267[218.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3268[218.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x329B*/    /* #3269[219.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3270[219.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4572*/    /* #3271[219.1] */
BulkRead(fh,32768);   /* #3272[219.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3273[219.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10A0*/    /* #3274[219.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3275[219.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D84*/    /* #3276[219.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3277[219.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CC0*/    /* #3278[219.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3279[219.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3878*/    /* #3280[219.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3281[219.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x48E0*/    /* #3282[219.7] */
BulkRead(fh,32768);   /* #3283[219.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3284[219.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B74*/    /* #3285[219.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3286[219.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2884*/    /* #3287[219.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3288[219.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x343C*/    /* #3289[220.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3290[220.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4828*/    /* #3291[220.1] */
BulkRead(fh,32768);   /* #3292[220.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3293[220.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x140E*/    /* #3294[220.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3295[220.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D40*/    /* #3296[220.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3297[220.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D4F*/    /* #3298[220.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3299[220.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C34*/    /* #3300[220.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3301[220.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4770*/    /* #3302[220.6] */
BulkRead(fh,32768);   /* #3303[220.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3304[220.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1580*/    /* #3305[220.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3306[220.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2714*/    /* #3307[220.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3308[220.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3524*/    /* #3309[221.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3310[221.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40DC*/    /* #3311[221.0] */
BulkRead(fh,32768);   /* #3312[221.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3313[221.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A3C*/    /* #3314[221.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3315[221.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x14C8*/    /* #3316[221.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3317[221.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2080*/    /* #3318[221.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3319[221.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E3D*/    /* #3320[221.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3321[221.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B74*/    /* #3322[221.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3323[221.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BDC*/    /* #3324[221.5] */
BulkRead(fh,32768);   /* #3325[221.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3326[221.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1410*/    /* #3327[221.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3328[221.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F04*/    /* #3329[221.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3330[221.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3864*/    /* #3331[222.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3332[222.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x47A0*/    /* #3333[222.0] */
BulkRead(fh,32768);   /* #3334[222.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3335[222.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1358*/    /* #3336[222.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3337[222.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1CB8*/    /* #3338[222.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3339[222.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BF4*/    /* #3340[222.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3341[222.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3825*/    /* #3342[222.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3343[222.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x470A*/    /* #3344[222.5] */
BulkRead(fh,32768);   /* #3345[222.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3346[222.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1048*/    /* #3347[222.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3348[222.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2560*/    /* #3349[222.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3350[222.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3244*/    /* #3351[222.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3352[222.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4054*/    /* #3353[222.9] */
BulkRead(fh,32768);   /* #3354[222.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3355[223.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0AE0*/    /* #3356[223.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3357[223.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1314*/    /* #3358[223.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3359[223.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FF8*/    /* #3360[223.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3361[223.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3510*/    /* #3362[223.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3363[223.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40C8*/    /* #3364[223.4] */
BulkRead(fh,32768);   /* #3365[223.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3366[223.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0DAC*/    /* #3367[223.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3368[223.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x170C*/    /* #3369[223.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3370[223.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2648*/    /* #3371[223.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3372[223.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3450*/    /* #3373[223.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3374[223.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x413C*/    /* #3375[223.9] */
BulkRead(fh,32768);   /* #3376[223.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3377[223.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A9C*/    /* #3378[224.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3379[224.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19D8*/    /* #3380[224.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3381[224.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C98*/    /* #3382[224.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3383[224.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3850*/    /* #3384[224.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3385[224.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4ADF*/    /* #3386[224.4] */
BulkRead(fh,32768);   /* #3387[224.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3388[224.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1470*/    /* #3389[224.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3390[224.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B78*/    /* #3391[224.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3392[224.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BE0*/    /* #3393[224.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3394[224.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39F0*/    /* #3395[224.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3396[224.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4800*/    /* #3397[224.9] */
BulkRead(fh,32768);   /* #3398[224.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3399[224.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1034*/    /* #3400[225.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3401[225.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x209C*/    /* #3402[225.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3403[225.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2EAC*/    /* #3404[225.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3405[225.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CBC*/    /* #3406[225.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3407[225.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D24*/    /* #3408[225.4] */
BulkRead(fh,32768);   /* #3409[225.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3410[225.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C60*/    /* #3411[225.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3412[225.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2368*/    /* #3413[225.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3414[225.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x32A4*/    /* #3415[225.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3416[225.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F88*/    /* #3417[225.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3418[225.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D98*/    /* #3419[225.9] */
BulkRead(fh,32768);   /* #3420[225.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3421[225.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x15CC*/    /* #3422[226.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3423[226.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2634*/    /* #3424[226.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3425[226.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3444*/    /* #3426[226.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3427[226.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4254*/    /* #3428[226.3] */
BulkRead(fh,32768);   /* #3429[226.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3430[226.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0CE0*/    /* #3431[226.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3432[226.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19C4*/    /* #3433[226.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3434[226.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x257C*/    /* #3435[226.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3436[226.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x338C*/    /* #3437[226.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3438[226.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F44*/    /* #3439[226.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3440[226.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C28*/    /* #3441[226.8] */
BulkRead(fh,32768);   /* #3442[226.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3443[226.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19E2*/    /* #3444[227.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3445[227.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2750*/    /* #3446[227.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3447[227.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x32D4*/    /* #3448[227.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3449[227.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40E4*/    /* #3450[227.2] */
BulkRead(fh,32768);   /* #3451[227.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3452[227.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x114C*/    /* #3453[227.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3454[227.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D04*/    /* #3455[227.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3456[227.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B14*/    /* #3457[227.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3458[227.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x37F8*/    /* #3459[227.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3460[227.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4608*/    /* #3461[227.7] */
BulkRead(fh,32768);   /* #3462[227.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3463[227.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0EB1*/    /* #3464[227.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3465[227.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1544*/    /* #3466[227.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3467[228.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2480*/    /* #3468[228.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3469[228.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3164*/    /* #3470[228.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3471[228.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E48*/    /* #3472[228.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3473[228.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x548C*/    /* #3474[228.3] */
BulkRead(fh,32768);   /* #3475[228.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3476[228.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F18*/    /* #3477[228.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3478[228.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F80*/    /* #3479[228.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3480[228.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B38*/    /* #3481[228.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3482[228.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A74*/    /* #3483[228.7] */
BulkRead(fh,32768);   /* #3484[228.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3485[228.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1758*/    /* #3486[228.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3487[228.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21E4*/    /* #3488[229.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3489[229.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3378*/    /* #3490[229.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3491[229.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4188*/    /* #3492[229.2] */
BulkRead(fh,32768);   /* #3493[229.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3494[229.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0F98*/    /* #3495[229.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3496[229.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B50*/    /* #3497[229.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3498[229.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BB8*/    /* #3499[229.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3500[229.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39C8*/    /* #3501[229.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3502[229.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x47D8*/    /* #3503[229.7] */
BulkRead(fh,32768);   /* #3504[229.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3505[229.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1264*/    /* #3506[229.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3507[229.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F48*/    /* #3508[229.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3509[230.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FB0*/    /* #3510[230.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3511[230.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C94*/    /* #3512[230.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3513[230.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4AA4*/    /* #3514[230.2] */
BulkRead(fh,32768);   /* #3515[230.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3516[230.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1530*/    /* #3517[230.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3518[230.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20E8*/    /* #3519[230.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3520[230.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3024*/    /* #3521[230.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3522[230.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E34*/    /* #3523[230.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3524[230.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B5A*/    /* #3525[230.7] */
BulkRead(fh,32768);   /* #3526[230.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3527[230.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x24E0*/    /* #3528[230.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3529[230.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3098*/    /* #3530[231.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3531[231.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3EA8*/    /* #3532[231.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3533[231.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CB8*/    /* #3534[231.2] */
BulkRead(fh,32768);   /* #3535[231.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3536[231.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x199C*/    /* #3537[231.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3538[231.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21D0*/    /* #3539[231.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3540[231.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B8E*/    /* #3541[231.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3542[231.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A6C*/    /* #3543[231.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3544[231.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4983*/    /* #3545[231.6] */
BulkRead(fh,32768);   /* #3546[231.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3547[231.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1434*/    /* #3548[231.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3549[231.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x249C*/    /* #3550[231.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3551[231.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3054*/    /* #3552[231.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3553[232.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AE0*/    /* #3554[232.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3555[232.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A1C*/    /* #3556[232.1] */
BulkRead(fh,32768);   /* #3557[232.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3558[232.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1958*/    /* #3559[232.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3560[232.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2768*/    /* #3561[232.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3562[232.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35AD*/    /* #3563[232.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3564[232.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x425C*/    /* #3565[232.5] */
BulkRead(fh,32768);   /* #3566[232.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3567[232.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0E14*/    /* #3568[232.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3569[232.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E14*/    /* #3570[232.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3571[232.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CF8*/    /* #3572[232.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3573[232.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3844*/    /* #3574[233.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3575[233.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4654*/    /* #3576[233.0] */
BulkRead(fh,32768);   /* #3577[233.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3578[233.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10E0*/    /* #3579[233.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3580[233.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A12*/    /* #3581[233.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3582[233.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25F8*/    /* #3583[233.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3584[233.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3408*/    /* #3585[233.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3586[233.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4470*/    /* #3587[233.5] */
BulkRead(fh,32768);   /* #3588[233.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3589[233.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1028*/    /* #3590[233.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3591[233.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1730*/    /* #3592[233.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3593[233.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2540*/    /* #3594[233.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3595[233.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3350*/    /* #3596[233.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3597[233.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F08*/    /* #3598[234.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3599[234.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x52F4*/    /* #3600[234.1] */
BulkRead(fh,32768);   /* #3601[234.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3602[234.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D80*/    /* #3603[234.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3604[234.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B90*/    /* #3605[234.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3606[234.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3D24*/    /* #3607[234.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3608[234.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4EB8*/    /* #3609[234.5] */
BulkRead(fh,32768);   /* #3610[234.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3611[234.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1944*/    /* #3612[234.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3613[234.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23D0*/    /* #3614[234.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3615[234.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31E0*/    /* #3616[234.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3617[234.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3624[235.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A20*/    /* #3625[235.3] */
RegWrite(0x49, 1, 0x9E);    /* #3645[235.7] */
{
 unsigned char uchRegs3646[]={
   0x00 /*!!R_SPOS!!*/, 0x00 /*R_SPOSH*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!R_SWID!!*/, 0x00 /*!!R_SWIDH!!*/, 0xBB /*!!R_STPS!!*/,
   0x08 /*!!R_STPSH!!*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!R_LEN!!*/, 0x00 /*!!R_LENH!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0xC3 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x07 /*!!0x43!!*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs3646);
}    /* #3646[235.8] */
RegWrite(0x43, 1, 0x03);    /* #3647[236.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0836*/    /* #3665[236.2] */
RegWrite(0x47, 2, 0x8000);    /* #3666[236.2] */
RegWrite(0x43, 1, 0x07);    /* #3667[236.3] */
RegWrite(0x43, 1, 0x07);    /* #3679[236.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0766*/    /* #3680[236.5] */
RegWrite(0xFFFFFFFF, 2, 0x5800);    /* #3681[236.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3689[237.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3690[237.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3691[237.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3692[237.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3693[237.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3694[237.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3695[237.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3696[237.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3697[237.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3698[237.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3699[238.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3700[238.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3701[238.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3702[238.2] */
RegWrite(0x43, 1, 0x03);    /* #3703[238.2] */
RegWrite(R_CTL, 1, 0x39);    /* #3704[238.2] */
