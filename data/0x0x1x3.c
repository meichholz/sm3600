ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2721[394.6] */
RegWrite(0x43, 1, 0x03);    /* #2722[394.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2723[394.6] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #2724[394.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2725[394.6] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #2726[394.6] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2727[394.6] */
{
 unsigned char uchRegs2728[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x10 /*0x04*/, 0xC0 /*0x05*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
   0x20 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
   0x80 /*R_CCAL3*/, 0x29 /*R_LEN*/, 0x35 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2728);
}    /* #2728[394.6] */
RegWrite(0x43, 1, 0x03);    /* #2729[394.6] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #2730[394.7] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2731[394.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2732[394.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2733[394.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2734[394.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2735[394.7] */
RegWrite(0x34, 1, 0x63);    /* #2736[394.7] */
RegWrite(0x49, 1, 0x9E);    /* #2737[394.7] */
{
 unsigned char uchRegs2738[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0xC8 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x88 /*!!R_CCAL!!*/, 0x88 /*!!R_CCAL2!!*/,
   0x84 /*!!R_CCAL3!!*/, 0x0B /*!!R_LEN!!*/, 0x2D /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2738);
}    /* #2738[394.7] */
RegWrite(R_CTL, 1, 0x39);    /* #2739[394.7] */
RegWrite(R_CTL, 1, 0x79);    /* #2740[394.7] */
RegWrite(R_CTL, 1, 0xF9);    /* #2741[394.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2742[394.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2743[394.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2744[394.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2745[394.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2746[394.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2747[395.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2748[395.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2749[395.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2750[395.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2751[395.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2752[395.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2753[395.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2754[395.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2755[395.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2756[395.4] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x848888*/    /* #2757[395.4] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2758[395.4] */
ulVal2 = RegRead(R_LEN, 2); /*=0x2D0B*/    /* #2759[395.4] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2760[395.4] */
{
 unsigned char uchRegs2761[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x10 /*!!0x04!!*/, 0xC0 /*!!0x05!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0xFF /*!!0x08!!*/, 0xFF /*!!0x09!!*/,
   0x20 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x80 /*!!R_CCAL!!*/, 0x80 /*!!R_CCAL2!!*/,
   0x80 /*!!R_CCAL3!!*/, 0x29 /*!!R_LEN!!*/, 0x35 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2761);
}    /* #2761[395.5] */
RegWrite(0x43, 1, 0x03);    /* #2762[395.5] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2763[395.5] */
RegWrite(R_LMP, 1, 0x01);    /* #2764[395.5] */
RegWrite(R_LMP, 1, 0x01);    /* #2765[395.5] */
RegWrite(R_CTL, 1, 0x39);    /* #2766[395.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2767[395.5] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2768[395.5] */
{
 unsigned char uchRegs2769[]={
   0x71 /*!!0x01!!*/, 0x03 /*!!0x02!!*/, 0x20 /*!!0x03!!*/,
   0x00 /*!!0x04!!*/, 0xCF /*!!0x05!!*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
   0x02 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
   0x80 /*R_CCAL3*/, 0x0B /*!!R_LEN!!*/, 0x2D /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2769);
}    /* #2769[395.5] */
RegWrite(0x34, 1, 0x03);    /* #2770[395.5] */
RegWrite(0x49, 1, 0x96);    /* #2771[395.5] */
RegWrite(R_CTL, 1, 0x79);    /* #2772[395.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #2773[395.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2774[395.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2775[395.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2776[395.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #2777[395.6] */
BulkRead(fh,3840);   /* #2778[395.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2779[395.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2780[395.6] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2781[395.6] */
RegWrite(R_LMP, 1, 0x01);    /* #2782[395.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2783[395.7] */
RegWrite(R_LMP, 1, 0x01);    /* #2784[395.7] */
RegWrite(R_LMP, 1, 0x01);    /* #2785[395.7] */
RegWrite(R_CTL, 1, 0x39);    /* #2786[395.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2787[395.7] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2788[395.7] */
{
 unsigned char uchRegs2789[]={
   0x19 /*!!0x01!!*/, 0x00 /*!!0x02!!*/, 0x3F /*!!0x03!!*/,
   0x18 /*!!0x04!!*/, 0xC0 /*!!0x05!!*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
   0x02 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x88 /*!!R_CCAL!!*/, 0x88 /*!!R_CCAL2!!*/,
   0x84 /*!!R_CCAL3!!*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2789);
}    /* #2789[395.7] */
RegWrite(0x34, 1, 0x03);    /* #2790[395.7] */
RegWrite(0x49, 1, 0x96);    /* #2791[395.8] */
RegWrite(R_CTL, 1, 0x79);    /* #2792[395.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #2793[395.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2794[395.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0018*/    /* #2795[395.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2796[395.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0048*/    /* #2797[395.9] */
BulkRead(fh,144);   /* #2798[395.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2799[395.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2800[395.9] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2801[395.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2802[395.9] */
RegWrite(R_LMP, 1, 0x01);    /* #2803[395.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2804[395.9] */
ulVal2 = RegRead(R_LEN, 2); /*=0x2D0B*/    /* #2805[395.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2806[395.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2807[395.9] */
RegWrite(0x34, 1, 0x63);    /* #2808[395.9] */
RegWrite(0x49, 1, 0x9E);    /* #2809[395.9] */
{
 unsigned char uchRegs2810[]={
   0x00 /*!!0x01!!*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x04 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x63 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2810);
}    /* #2810[395.9] */
RegWrite(R_CTL, 1, 0x19);    /* #2811[395.9] */
RegWrite(R_CTL, 1, 0x59);    /* #2812[395.9] */
RegWrite(R_CTL, 1, 0xD9);    /* #2813[395.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2814[395.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2815[396.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2816[396.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2817[396.0] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2818[396.0] */
{
 unsigned char uchRegs2819[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x10 /*!!0x04!!*/, 0xC0 /*!!0x05!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0xFF /*!!0x08!!*/, 0xFF /*!!0x09!!*/,
   0x20 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x80 /*!!R_CCAL!!*/, 0x80 /*!!R_CCAL2!!*/,
   0x80 /*!!R_CCAL3!!*/, 0x29 /*!!R_LEN!!*/, 0x35 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2819);
}    /* #2819[396.0] */
RegWrite(0x43, 1, 0x03);    /* #2820[396.0] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2821[396.0] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2822[396.0] */
RegWrite(R_LMP, 1, 0x01);    /* #2823[396.0] */
RegWrite(R_LMP, 1, 0x01);    /* #2824[396.0] */
RegWrite(R_CTL, 1, 0x39);    /* #2825[396.0] */
RegWrite(0x34, 1, 0x63);    /* #2826[396.0] */
RegWrite(0x49, 1, 0x96);    /* #2827[396.0] */
{
 unsigned char uchRegs2828[]={
   0xFB /*!!0x01!!*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0xEC /*!!0x04!!*/, 0x93 /*!!0x05!!*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0xAA /*!!0x08!!*/, 0xAA /*!!0x09!!*/,
   0x44 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x88 /*!!R_CCAL!!*/, 0x88 /*!!R_CCAL2!!*/,
   0x84 /*!!R_CCAL3!!*/, 0x0B /*!!R_LEN!!*/, 0x2D /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x20 /*!!0x41!!*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2828);
}    /* #2828[396.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2829[396.1] */
RegWrite(R_CTL, 1, 0x39);    /* #2830[396.1] */
RegWrite(R_CTL, 1, 0x79);    /* #2831[396.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #2832[396.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2833[396.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BC4*/    /* #2834[396.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2835[396.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB34C*/    /* #2836[396.2] */
BulkRead(fh,32768);   /* #2837[396.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2838[396.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xEAD4*/    /* #2839[396.2] */
BulkRead(fh,32768);   /* #2840[396.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2841[396.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2842[396.3] */
BulkRead(fh,32768);   /* #2843[396.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2844[396.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2845[396.3] */
BulkRead(fh,32768);   /* #2846[396.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2847[396.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2848[396.4] */
BulkRead(fh,32768);   /* #2849[396.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2850[396.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2851[396.4] */
BulkRead(fh,32768);   /* #2852[396.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2853[396.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2854[396.5] */
BulkRead(fh,32768);   /* #2855[396.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2856[396.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2857[396.5] */
BulkRead(fh,32768);   /* #2858[396.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2859[396.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2860[396.6] */
BulkRead(fh,32768);   /* #2861[396.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2862[396.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2863[396.6] */
BulkRead(fh,32768);   /* #2864[396.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2865[396.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2866[396.7] */
BulkRead(fh,32768);   /* #2867[396.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2868[396.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2869[396.7] */
BulkRead(fh,32768);   /* #2870[396.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2871[396.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2872[396.8] */
BulkRead(fh,32768);   /* #2873[396.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2874[396.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2875[396.8] */
BulkRead(fh,32768);   /* #2876[396.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2877[396.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2878[396.9] */
BulkRead(fh,32768);   /* #2879[396.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2880[396.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2881[396.9] */
BulkRead(fh,32768);   /* #2882[397.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2883[397.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2884[397.0] */
BulkRead(fh,32768);   /* #2885[397.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2886[397.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2887[397.0] */
BulkRead(fh,32768);   /* #2888[397.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2889[397.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2890[397.1] */
BulkRead(fh,32768);   /* #2891[397.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2892[397.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2893[397.1] */
BulkRead(fh,32768);   /* #2894[397.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2895[397.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2896[397.2] */
BulkRead(fh,32768);   /* #2897[397.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2898[397.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2899[397.2] */
BulkRead(fh,32768);   /* #2900[397.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2901[397.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2902[397.3] */
BulkRead(fh,32768);   /* #2903[397.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2904[397.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2905[397.3] */
BulkRead(fh,32768);   /* #2906[397.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2907[397.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2908[397.4] */
BulkRead(fh,32768);   /* #2909[397.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2910[397.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2911[397.4] */
BulkRead(fh,32768);   /* #2912[397.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2913[397.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2914[397.5] */
BulkRead(fh,32768);   /* #2915[397.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2916[397.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF444*/    /* #2917[397.5] */
BulkRead(fh,32768);   /* #2918[397.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2919[397.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB444*/    /* #2920[397.6] */
BulkRead(fh,32768);   /* #2921[397.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2922[397.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7444*/    /* #2923[397.6] */
BulkRead(fh,32768);   /* #2924[397.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2925[397.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x632E*/    /* #2926[397.7] */
BulkRead(fh,32768);   /* #2927[397.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2928[397.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #2929[397.8] */
BulkRead(fh,24592);   /* #2930[397.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2931[397.8] */
RegWrite(0x43, 1, 0x03);    /* #2932[397.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2933[397.8] */
{
 unsigned char uchRegs2934[]={
   0x00 /*!!0x01!!*/, 0x00 /*0x02*/, 0x00 /*!!0x03!!*/,
   0x00 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2934);
}    /* #2934[397.8] */
RegWrite(R_CTL, 1, 0x39);    /* #2935[397.8] */
RegWrite(R_CTL, 1, 0x79);    /* #2936[397.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #2937[397.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2938[397.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2939[397.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2940[397.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2941[397.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2942[397.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2943[397.9] */
RegWrite(0x34, 1, 0x63);    /* #2944[397.9] */
RegWrite(0x49, 1, 0x9E);    /* #2945[397.9] */
{
 unsigned char uchRegs2946[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!0x04!!*/, 0x00 /*0x05*/, 0x44 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2946);
}    /* #2946[397.9] */
RegWrite(R_CTL, 1, 0x19);    /* #2947[397.9] */
RegWrite(R_CTL, 1, 0x59);    /* #2948[397.9] */
RegWrite(R_CTL, 1, 0xD9);    /* #2949[397.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2950[397.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2951[398.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2952[398.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2953[398.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2954[398.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2955[398.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2956[398.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2957[398.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2958[398.8] */
RegWrite(R_LMP, 1, 0x01);    /* #2959[398.8] */
RegWrite(R_LMP, 1, 0x01);    /* #2960[398.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2961[398.8] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2962[398.8] */
RegWrite(0x34, 1, 0x63);    /* #2963[398.8] */
RegWrite(0x49, 1, 0x9E);    /* #2964[398.8] */
{
 unsigned char uchRegs2965[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*0x04*/, 0x00 /*0x05*/, 0xC8 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x59 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2965);
}    /* #2965[398.8] */
RegWrite(R_CTL, 1, 0x19);    /* #2966[398.9] */
RegWrite(R_CTL, 1, 0x59);    /* #2967[398.9] */
RegWrite(R_CTL, 1, 0xD9);    /* #2968[398.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2969[398.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2970[398.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2971[399.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2972[399.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2973[399.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2974[399.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2975[399.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2976[399.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2977[399.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2978[399.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2979[399.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2980[399.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2981[399.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2982[399.6] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2983[399.6] */
RegWrite(R_LMP, 1, 0x01);    /* #2984[399.6] */
RegWrite(R_LMP, 1, 0x01);    /* #2985[399.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2986[399.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2987[399.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2988[399.6] */
RegWrite(0x34, 1, 0x63);    /* #2989[399.6] */
RegWrite(0x49, 1, 0x96);    /* #2990[399.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2991[399.6] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2992[399.6] */
RegWrite(0x34, 1, 0x63);    /* #2993[399.6] */
RegWrite(0x49, 1, 0x9E);    /* #2994[399.6] */
{
 unsigned char uchRegs2995[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*0x04*/, 0x00 /*0x05*/, 0x92 /*!!R_STPS!!*/,
   0x01 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2995);
}    /* #2995[399.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2996[399.6] */
RegWrite(R_CTL, 1, 0x79);    /* #2997[399.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #2998[399.6] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2999[399.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3000[399.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3001[399.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3002[399.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3003[399.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3004[399.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3005[400.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3006[400.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3007[400.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3008[400.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3009[400.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3010[400.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3011[400.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3012[400.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3013[400.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3014[400.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3015[400.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3016[400.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3017[400.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3018[400.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3019[400.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3020[400.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3021[400.8] */
RegWrite(0x43, 1, 0x03);    /* #3022[400.8] */
RegWrite(R_CTL, 1, 0x39);    /* #3023[400.8] */
RegWrite(0x34, 1, 0x03);    /* #3024[400.8] */
RegWrite(0x49, 1, 0x96);    /* #3025[400.9] */
{
 unsigned char uchRegs3026[]={
   0xFB /*!!0x01!!*/, 0x00 /*0x02*/, 0x2A /*!!0x03!!*/,
   0x58 /*!!0x04!!*/, 0x42 /*!!0x05!!*/, 0x06 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0x6A /*!!0x08!!*/, 0x6A /*!!0x09!!*/,
   0x16 /*!!0x0A!!*/, 0x07 /*!!0x0B!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x60 /*!!0x12!!*/,
   0x15 /*0x13*/, 0xA0 /*!!0x14!!*/, 0x2A /*0x15*/,
   0xE0 /*!!0x16!!*/, 0x3F /*!!0x17!!*/, 0x20 /*!!0x18!!*/,
   0x56 /*!!0x19!!*/, 0xFF /*0x1A*/, 0x0F /*!!0x1B!!*/,
   0x44 /*!!0x1C!!*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0x20 /*!!0x47!!*/, 0x56 /*!!0x48!!*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs3026);
}    /* #3026[400.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3027[401.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3028[401.0] */
RegWrite(R_CTL, 1, 0x39);    /* #3029[401.0] */
RegWrite(R_CTL, 1, 0x79);    /* #3030[401.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #3031[401.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3032[401.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3033[401.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3034[401.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x012C*/    /* #3035[401.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3036[401.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0546*/    /* #3037[401.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3038[401.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A8C*/    /* #3039[401.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3040[401.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0FD2*/    /* #3041[401.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3042[401.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1518*/    /* #3043[401.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3044[401.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C5C*/    /* #3045[401.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3046[401.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2166*/    /* #3047[401.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3048[401.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26AC*/    /* #3049[402.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3050[402.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B5C*/    /* #3051[402.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3052[402.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3138*/    /* #3053[402.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3054[402.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34BC*/    /* #3055[402.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3056[402.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x396C*/    /* #3057[402.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3058[402.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F48*/    /* #3059[402.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3060[402.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x448E*/    /* #3061[402.5] */
BulkRead(fh,32768);   /* #3062[402.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3063[402.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x077C*/    /* #3064[402.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3065[402.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x09D4*/    /* #3066[402.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3067[402.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0F1A*/    /* #3068[402.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3069[402.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1460*/    /* #3070[402.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3071[402.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19A6*/    /* #3072[403.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3073[403.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1EEC*/    /* #3074[403.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3075[403.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2432*/    /* #3076[403.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3077[403.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x284C*/    /* #3078[403.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3079[403.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E28*/    /* #3080[403.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3081[403.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3404*/    /* #3082[403.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3083[403.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x381E*/    /* #3084[403.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3085[403.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CCE*/    /* #3086[403.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3087[403.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4214*/    /* #3088[403.8] */
BulkRead(fh,32768);   /* #3089[403.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3090[403.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x075A*/    /* #3091[403.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3092[403.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x091C*/    /* #3093[404.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3094[404.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0E62*/    /* #3095[404.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3096[404.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x153C*/    /* #3097[404.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3098[404.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x18EE*/    /* #3099[404.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3100[404.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E34*/    /* #3101[404.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3102[404.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x237A*/    /* #3103[404.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3104[404.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2956*/    /* #3105[404.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3106[404.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E06*/    /* #3107[404.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3108[404.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x334C*/    /* #3109[404.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3110[404.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3892*/    /* #3111[404.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3112[404.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F9A*/    /* #3113[405.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3114[405.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x460C*/    /* #3115[405.1] */
BulkRead(fh,32768);   /* #3116[405.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3117[405.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A26*/    /* #3118[405.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3119[405.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0C7E*/    /* #3120[405.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3121[405.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12F0*/    /* #3122[405.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3123[405.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1836*/    /* #3124[405.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3125[405.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C50*/    /* #3126[405.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3127[405.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2100*/    /* #3128[405.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3129[405.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2646*/    /* #3130[405.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3131[405.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B8C*/    /* #3132[405.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3133[405.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30D2*/    /* #3134[406.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3135[406.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BF4*/    /* #3136[406.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3137[406.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x413A*/    /* #3138[406.3] */
BulkRead(fh,32768);   /* #3139[406.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3140[406.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x05EA*/    /* #3141[406.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3142[406.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0842*/    /* #3143[406.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3144[406.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0E22*/    /* #3145[406.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3146[406.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1238*/    /* #3147[406.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3148[406.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1814*/    /* #3149[406.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3150[406.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1CC4*/    /* #3151[406.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3152[406.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23CC*/    /* #3153[407.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3154[407.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2912*/    /* #3155[407.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3156[407.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E58*/    /* #3157[407.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3158[407.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x344B*/    /* #3159[407.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3160[407.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AA6*/    /* #3161[407.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3162[407.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3FEC*/    /* #3163[407.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3164[407.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4370*/    /* #3165[407.6] */
BulkRead(fh,32768);   /* #3166[407.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3167[407.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x06F4*/    /* #3168[407.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3169[407.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0BA4*/    /* #3170[407.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3171[407.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1180*/    /* #3172[407.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3173[408.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x16C6*/    /* #3174[408.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3175[408.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1CA2*/    /* #3176[408.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3177[408.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2152*/    /* #3178[408.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3179[408.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2698*/    /* #3180[408.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3181[408.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D0A*/    /* #3182[408.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3183[408.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31BA*/    /* #3184[408.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3185[408.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x366A*/    /* #3186[408.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3187[408.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3D72*/    /* #3188[408.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3189[408.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x43E4*/    /* #3190[408.9] */
BulkRead(fh,32768);   /* #3191[408.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3192[409.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x07FE*/    /* #3193[409.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3194[409.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0C18*/    /* #3195[409.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3196[409.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x128A*/    /* #3197[409.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3198[409.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x17D0*/    /* #3199[409.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3200[409.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1DAC*/    /* #3201[409.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3202[409.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x22F2*/    /* #3203[409.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3204[409.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27A2*/    /* #3205[409.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3206[409.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CE8*/    /* #3207[409.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3208[409.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x322E*/    /* #3209[409.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3210[409.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3774*/    /* #3211[410.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3212[410.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B8E*/    /* #3213[410.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3214[410.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x416A*/    /* #3215[410.1] */
BulkRead(fh,32768);   /* #3216[410.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3217[410.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0584*/    /* #3218[410.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3219[410.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x07DC*/    /* #3220[410.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3221[410.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0E4E*/    /* #3222[410.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3223[410.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x143C*/    /* #3224[410.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3225[410.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A11*/    /* #3226[410.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3227[410.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FE2*/    /* #3228[410.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3229[410.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25BE*/    /* #3230[410.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3231[410.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C30*/    /* #3232[411.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3233[411.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x304A*/    /* #3234[411.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3235[411.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36BC*/    /* #3236[411.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3237[411.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3D2E*/    /* #3238[411.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3239[411.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4274*/    /* #3240[411.4] */
BulkRead(fh,32768);   /* #3241[411.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3242[411.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x068E*/    /* #3243[411.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3244[411.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0C6A*/    /* #3245[411.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3246[411.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1246*/    /* #3247[411.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3248[411.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1822*/    /* #3249[411.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3250[411.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D68*/    /* #3251[412.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3252[412.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x22AE*/    /* #3253[412.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3254[412.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27F4*/    /* #3255[412.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3256[412.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D3A*/    /* #3257[412.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3258[412.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31EA*/    /* #3259[412.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3260[412.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x37C6*/    /* #3261[412.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3262[412.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BE0*/    /* #3263[412.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3264[412.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41BC*/    /* #3265[412.7] */
BulkRead(fh,32768);   /* #3266[412.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3267[412.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x05D6*/    /* #3268[412.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3269[412.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x082E*/    /* #3270[412.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3271[412.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0EA0*/    /* #3272[413.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3273[413.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13E6*/    /* #3274[413.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3275[413.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x192C*/    /* #3276[413.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3277[413.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F08*/    /* #3278[413.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3279[413.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23B8*/    /* #3280[413.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3281[413.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x28FE*/    /* #3282[413.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3283[413.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E44*/    /* #3284[413.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3285[413.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x338A*/    /* #3286[413.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3287[413.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x38D0*/    /* #3288[413.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3289[413.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E16*/    /* #3290[414.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3291[414.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x435C*/    /* #3292[414.0] */
BulkRead(fh,32768);   /* #3293[414.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3294[414.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x080C*/    /* #3295[414.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3296[414.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A64*/    /* #3297[414.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3298[414.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0FAA*/    /* #3299[414.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3300[414.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x14F0*/    /* #3301[414.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3302[414.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A36*/    /* #3303[414.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3304[414.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F7C*/    /* #3305[414.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3306[414.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x24C2*/    /* #3307[414.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3308[414.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A08*/    /* #3309[414.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3310[414.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F4E*/    /* #3311[415.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3312[415.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3606*/    /* #3313[415.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3314[415.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B9C*/    /* #3315[415.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3316[415.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40E2*/    /* #3317[415.2] */
BulkRead(fh,32768);   /* #3318[415.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3319[415.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0628*/    /* #3320[415.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3321[415.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0916*/    /* #3322[415.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3323[415.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0D30*/    /* #3324[415.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3325[415.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1276*/    /* #3326[415.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3327[415.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x17BC*/    /* #3328[415.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3329[415.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D02*/    /* #3330[415.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3331[415.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x211C*/    /* #3332[415.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3333[415.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25CC*/    /* #3334[416.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3335[416.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B14*/    /* #3336[416.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3337[416.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3058*/    /* #3338[416.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3339[416.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3760*/    /* #3340[416.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3341[416.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CA6*/    /* #3342[416.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3343[416.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41EC*/    /* #3344[416.5] */
BulkRead(fh,32768);   /* #3345[416.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3346[416.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x069C*/    /* #3347[416.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3348[416.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0AB6*/    /* #3349[416.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3350[416.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x11BE*/    /* #3351[416.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3352[416.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x179A*/    /* #3353[417.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3354[417.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E0C*/    /* #3355[417.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3356[417.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2352*/    /* #3357[417.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3358[417.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26D6*/    /* #3359[417.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3360[417.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C1C*/    /* #3361[417.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3362[417.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3221*/    /* #3363[417.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3364[417.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x386A*/    /* #3365[417.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3366[417.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E46*/    /* #3367[417.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3368[417.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x44B8*/    /* #3369[417.8] */
BulkRead(fh,32768);   /* #3370[417.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3371[417.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x083C*/    /* #3372[417.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3373[418.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0B2A*/    /* #3374[418.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3375[418.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1106*/    /* #3376[418.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3377[418.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x164C*/    /* #3378[418.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3379[418.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B92*/    /* #3380[418.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3381[418.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x216E*/    /* #3382[418.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3383[418.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x261E*/    /* #3384[418.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3385[418.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B64*/    /* #3386[418.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3387[418.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3014*/    /* #3388[418.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3389[418.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35F0*/    /* #3390[418.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3391[418.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C62*/    /* #3392[419.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3393[419.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41A8*/    /* #3394[419.1] */
BulkRead(fh,32768);   /* #3395[419.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3396[419.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x05C2*/    /* #3397[419.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3398[419.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0784*/    /* #3399[419.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3400[419.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0CCA*/    /* #3401[419.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3402[419.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1210*/    /* #3403[419.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3404[419.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19AE*/    /* #3405[419.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3406[419.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2020*/    /* #3407[419.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3408[419.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2566*/    /* #3409[419.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3410[419.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2907*/    /* #3411[419.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3412[420.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FF2*/    /* #3413[420.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3414[420.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3538*/    /* #3415[420.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3416[420.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39E8*/    /* #3417[420.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3418[420.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E02*/    /* #3419[420.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3420[420.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4474*/    /* #3421[420.4] */
BulkRead(fh,32768);   /* #3422[420.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3423[420.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x088E*/    /* #3424[420.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3425[420.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0B7C*/    /* #3426[420.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3427[420.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x102C*/    /* #3428[420.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3429[420.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x14DC*/    /* #3430[420.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3431[420.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x198C*/    /* #3432[420.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3433[420.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1DA6*/    /* #3434[421.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3435[421.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x24AE*/    /* #3436[421.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3437[421.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BB6*/    /* #3438[421.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3439[421.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30FC*/    /* #3440[421.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3441[421.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3642*/    /* #3442[421.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3443[421.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B88*/    /* #3444[421.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3445[421.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40CE*/    /* #3446[421.6] */
BulkRead(fh,32768);   /* #3447[421.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3448[421.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0614*/    /* #3449[421.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3450[421.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0902*/    /* #3451[421.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3452[421.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0EDE*/    /* #3453[422.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3454[422.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x15E6*/    /* #3455[422.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3456[422.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C58*/    /* #3457[422.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3458[422.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2234*/    /* #3459[422.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3460[422.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x277A*/    /* #3461[422.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3462[422.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CC0*/    /* #3463[422.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3464[422.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3206*/    /* #3465[422.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3466[422.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3878*/    /* #3467[422.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3468[422.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C92*/    /* #3469[422.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3470[422.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40AC*/    /* #3471[422.9] */
BulkRead(fh,32768);   /* #3472[422.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3473[423.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x055C*/    /* #3474[423.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3475[423.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A0C*/    /* #3476[423.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3477[423.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0FE8*/    /* #3478[423.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3479[423.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x152E*/    /* #3480[423.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3481[423.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19DE*/    /* #3482[423.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3483[423.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E8E*/    /* #3484[423.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3485[423.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26FA*/    /* #3486[423.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3487[423.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DCA*/    /* #3488[423.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3489[423.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x32E4*/    /* #3490[423.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3491[423.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3694*/    /* #3492[424.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3493[424.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BDA*/    /* #3494[424.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3495[424.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x408A*/    /* #3496[424.1] */
BulkRead(fh,32768);   /* #3497[424.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3498[424.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x04A4*/    /* #3499[424.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3500[424.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0828*/    /* #3501[424.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3502[424.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0D6E*/    /* #3503[424.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3504[424.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x121E*/    /* #3505[424.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3506[424.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1764*/    /* #3507[424.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3508[424.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D40*/    /* #3509[424.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3510[424.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x215A*/    /* #3511[424.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3512[424.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27CC*/    /* #3513[425.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3514[425.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D12*/    /* #3515[425.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3516[425.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3258*/    /* #3517[425.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3518[425.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35DC*/    /* #3519[425.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3520[425.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3527[425.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0806*/    /* #3528[425.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3539[426.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CF0*/    /* #3540[426.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3541[426.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31A0*/    /* #3542[426.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3543[426.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3545[426.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C2C*/    /* #3546[426.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3547[426.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4046*/    /* #3548[426.7] */
BulkRead(fh,32768);   /* #3549[427.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3558[427.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x184C*/    /* #3559[427.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3560[427.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2116*/    /* #3561[427.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3562[427.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3570[427.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B74*/    /* #3571[428.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3581[428.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x153C*/    /* #3582[428.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3591[428.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CAC*/    /* #3592[428.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31F2*/    /* #3594[429.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3595[429.1] */
ulVal1 = RegRead(R_STAT, 1); /*=0x00*/    /* #3602[429.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0548*/    /* #3603[429.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3604[429.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3606[429.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0E12*/    /* #3607[429.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3614[430.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2582*/    /* #3615[430.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3622[430.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A9A*/    /* #3623[430.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3624[430.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F4A*/    /* #3625[430.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3633[430.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0FE7*/    /* #3634[430.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3635[430.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1462*/    /* #3636[431.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CFE*/    /* #3646[431.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3647[431.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3656[431.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x046E*/    /* #3657[432.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3666[432.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1ECC*/    /* #3667[432.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3676[432.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3894*/    /* #3677[433.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3694[433.4] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3695[433.4] */
RegWrite(0x34, 1, 0xC3);    /* #3696[433.4] */
RegWrite(0x43, 1, 0x07);    /* #3725[434.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x07B3*/    /* #3726[434.1] */
RegWrite(0x47, 2, 0x6800);    /* #3727[434.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3742[434.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3743[434.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3744[435.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3745[435.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3746[435.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3747[435.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3748[435.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3749[435.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3750[435.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3751[435.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3752[435.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3753[435.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3754[435.9] */
RegWrite(0x43, 1, 0x03);    /* #3755[435.9] */
RegWrite(R_CTL, 1, 0x39);    /* #3756[435.9] */
