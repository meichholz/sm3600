ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2581[057.2] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #2582[057.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2583[057.2] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #2584[057.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #2585[057.2] */
{
 unsigned char uchRegs2586[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2586);
}    /* #2586[057.2] */
RegWrite(0x43, 1, 0x03);    /* #2587[057.2] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #2588[057.2] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2589[057.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #2590[057.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #2591[057.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2592[057.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #2593[057.2] */
RegWrite(0x34, 1, 0x63);    /* #2594[057.2] */
RegWrite(0x49, 1, 0x9E);    /* #2595[057.3] */
{
 unsigned char uchRegs2596[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x64 /*!!R_STPS!!*/,
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
   0x84 /*!!R_CCAL3!!*/, 0xEA /*!!R_LEN!!*/, 0x24 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2596);
}    /* #2596[057.3] */
RegWrite(R_CTL, 1, 0x39);    /* #2597[057.3] */
RegWrite(R_CTL, 1, 0x79);    /* #2598[057.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #2599[057.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #2600[057.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2601[057.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2602[057.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2603[057.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2604[057.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2605[057.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2606[057.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2607[057.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2608[057.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2609[057.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2610[057.8] */
RegWrite(R_LMP, 1, 0x01);    /* #2611[057.8] */
RegWrite(R_LMP, 1, 0x01);    /* #2612[057.8] */
RegWrite(0x34, 1, 0x63);    /* #2613[057.8] */
RegWrite(0x49, 1, 0x96);    /* #2614[057.8] */
{
 unsigned char uchRegs2615[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0xEC /*!!0x04!!*/, 0x13 /*!!0x05!!*/, 0x26 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x3F /*!!0x09!!*/,
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
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x59 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2615);
}    /* #2615[057.8] */
RegWrite(R_CTL, 1, 0x59);    /* #2616[057.8] */
RegWrite(R_CTL, 1, 0xD9);    /* #2617[057.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2618[057.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2619[057.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2620[057.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2621[057.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2622[057.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2623[058.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2624[058.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2625[058.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2626[058.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2627[058.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2628[058.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #2629[058.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2630[058.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #2631[058.2] */
BulkRead(fh,10200);   /* #2632[058.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2633[058.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2634[058.3] */
{
 unsigned char uchRegs2635[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0xEC /*0x04*/, 0x13 /*0x05*/, 0x03 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x3F /*0x09*/,
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
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x59 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2635);
}    /* #2635[058.3] */
RegWrite(0x34, 1, 0x63);    /* #2636[058.3] */
RegWrite(0x49, 1, 0x96);    /* #2637[058.3] */
RegWrite(R_CTL, 1, 0x59);    /* #2638[058.3] */
RegWrite(R_CTL, 1, 0xD9);    /* #2639[058.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2640[058.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2641[058.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2642[058.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #2643[058.3] */
BulkRead(fh,10200);   /* #2644[058.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2645[058.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2646[058.4] */
RegWrite(R_CTL, 1, 0x59);    /* #2647[058.4] */
RegWrite(R_CTL, 1, 0xD9);    /* #2648[058.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2649[058.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2650[058.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2651[058.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12DF*/    /* #2652[058.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2653[058.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #2654[058.5] */
BulkRead(fh,10200);   /* #2655[058.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2656[058.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2657[058.5] */
RegWrite(R_CTL, 1, 0x59);    /* #2658[058.5] */
RegWrite(R_CTL, 1, 0xD9);    /* #2659[058.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2660[058.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2661[058.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2662[058.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #2663[058.7] */
BulkRead(fh,10200);   /* #2664[058.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2665[058.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2666[058.7] */
RegWrite(R_CTL, 1, 0x59);    /* #2667[058.7] */
RegWrite(R_CTL, 1, 0xD9);    /* #2668[058.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2669[058.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2670[058.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2671[058.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #2672[058.8] */
BulkRead(fh,10200);   /* #2673[058.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2674[058.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2675[058.8] */
RegWrite(R_CTL, 1, 0x59);    /* #2676[058.8] */
RegWrite(R_CTL, 1, 0xD9);    /* #2677[058.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2678[058.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2679[058.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2680[058.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #2681[058.9] */
BulkRead(fh,10200);   /* #2682[058.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2683[058.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2684[058.9] */
RegWrite(R_CTL, 1, 0x59);    /* #2685[058.9] */
RegWrite(R_CTL, 1, 0xD9);    /* #2686[058.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2687[058.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2688[059.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2689[059.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #2690[059.0] */
BulkRead(fh,10200);   /* #2691[059.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2692[059.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2693[059.0] */
RegWrite(R_CTL, 1, 0x59);    /* #2694[059.0] */
RegWrite(R_CTL, 1, 0xD9);    /* #2695[059.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2696[059.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2697[059.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2698[059.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #2699[059.1] */
BulkRead(fh,10200);   /* #2700[059.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2701[059.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2702[059.1] */
RegWrite(R_CTL, 1, 0x59);    /* #2703[059.1] */
RegWrite(R_CTL, 1, 0xD9);    /* #2704[059.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2705[059.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2706[059.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2707[059.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #2708[059.2] */
BulkRead(fh,10200);   /* #2709[059.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2710[059.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2711[059.3] */
RegWrite(R_CTL, 1, 0x59);    /* #2712[059.3] */
RegWrite(R_CTL, 1, 0xD9);    /* #2713[059.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2714[059.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2715[059.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2716[059.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #2717[059.3] */
BulkRead(fh,10200);   /* #2718[059.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2719[059.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2720[059.4] */
RegWrite(0x34, 1, 0x63);    /* #2721[059.4] */
RegWrite(0x49, 1, 0x96);    /* #2722[059.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2723[059.4] */
RegWrite(R_LEN, 2, 0x24EA);    /* #2724[059.4] */
RegWrite(0x34, 1, 0x63);    /* #2725[059.4] */
RegWrite(0x49, 1, 0x9E);    /* #2726[059.4] */
{
 unsigned char uchRegs2727[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0xC8 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x00 /*!!0x09!!*/,
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
   0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2727);
}    /* #2727[059.4] */
RegWrite(R_CTL, 1, 0x39);    /* #2728[059.4] */
RegWrite(R_CTL, 1, 0x79);    /* #2729[059.4] */
RegWrite(R_CTL, 1, 0xF9);    /* #2730[059.4] */
RegWrite(R_LEN, 2, 0x24EA);    /* #2731[059.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2732[059.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2733[059.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2734[059.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2735[059.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2736[059.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2737[059.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2738[059.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2739[059.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2740[059.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2741[060.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2742[060.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2743[060.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2744[060.1] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x848888*/    /* #2745[060.1] */
RegWrite(R_LEN, 2, 0x24EA);    /* #2746[060.1] */
ulVal2 = RegRead(R_LEN, 2); /*=0x24EA*/    /* #2747[060.1] */
RegWrite(R_LEN, 2, 0x24EA);    /* #2748[060.2] */
{
 unsigned char uchRegs2749[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2749);
}    /* #2749[060.2] */
RegWrite(0x43, 1, 0x03);    /* #2750[060.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #2751[060.2] */
RegWrite(R_LMP, 1, 0x01);    /* #2752[060.2] */
RegWrite(R_LMP, 1, 0x01);    /* #2753[060.2] */
RegWrite(R_CTL, 1, 0x39);    /* #2754[060.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2755[060.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #2756[060.2] */
{
 unsigned char uchRegs2757[]={
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
   0x80 /*R_CCAL3*/, 0xEA /*!!R_LEN!!*/, 0x24 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2757);
}    /* #2757[060.2] */
RegWrite(0x34, 1, 0x03);    /* #2758[060.2] */
RegWrite(0x49, 1, 0x96);    /* #2759[060.2] */
RegWrite(R_CTL, 1, 0x79);    /* #2760[060.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #2761[060.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2762[060.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x015E*/    /* #2763[060.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2764[060.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #2765[060.3] */
BulkRead(fh,3840);   /* #2766[060.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2767[060.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2768[060.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2769[060.4] */
RegWrite(R_LEN, 2, 0x290B);    /* #2770[060.4] */
{
 unsigned char uchRegs2771[]={
   0x71 /*0x01*/, 0x03 /*0x02*/, 0x20 /*0x03*/,
   0x00 /*0x04*/, 0xCF /*0x05*/, 0x00 /*R_STPS*/,
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
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*!!R_LEN!!*/, 0x29 /*!!R_LENH!!*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2771);
}    /* #2771[060.4] */
RegWrite(0x34, 1, 0x03);    /* #2772[060.4] */
RegWrite(0x49, 1, 0x96);    /* #2773[060.4] */
RegWrite(R_CTL, 1, 0x79);    /* #2774[060.4] */
RegWrite(R_CTL, 1, 0xF9);    /* #2775[060.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2776[060.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2777[060.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2778[060.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #2779[060.5] */
BulkRead(fh,3840);   /* #2780[060.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2781[060.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2782[060.5] */
RegWrite(R_LEN, 2, 0x290B);    /* #2783[060.5] */
RegWrite(R_LMP, 1, 0x01);    /* #2784[060.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2785[060.5] */
RegWrite(R_LMP, 1, 0x01);    /* #2786[060.5] */
RegWrite(R_LMP, 1, 0x01);    /* #2787[060.5] */
RegWrite(R_CTL, 1, 0x39);    /* #2788[060.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2789[060.5] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2790[060.6] */
{
 unsigned char uchRegs2791[]={
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
   0x84 /*!!R_CCAL3!!*/, 0x0B /*R_LEN*/, 0x29 /*R_LENH*/,
   0x03 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2791);
}    /* #2791[060.6] */
RegWrite(0x34, 1, 0x03);    /* #2792[060.6] */
RegWrite(0x49, 1, 0x96);    /* #2793[060.6] */
RegWrite(R_CTL, 1, 0x79);    /* #2794[060.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #2795[060.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2796[060.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x000C*/    /* #2797[060.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2798[060.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0048*/    /* #2799[060.7] */
BulkRead(fh,144);   /* #2800[060.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2801[060.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2802[060.7] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2803[060.7] */
RegWrite(R_LEN, 2, 0x290B);    /* #2804[060.7] */
RegWrite(R_LMP, 1, 0x01);    /* #2805[060.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2806[060.8] */
ulVal2 = RegRead(R_LEN, 2); /*=0x290B*/    /* #2807[060.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2808[060.8] */
RegWrite(R_LEN, 2, 0x290B);    /* #2809[060.8] */
RegWrite(0x34, 1, 0x63);    /* #2810[060.8] */
RegWrite(0x49, 1, 0x9E);    /* #2811[060.8] */
{
 unsigned char uchRegs2812[]={
   0x00 /*!!0x01!!*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x06 /*!!R_STPS!!*/,
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
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x29 /*R_LENH*/,
   0x63 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2812);
}    /* #2812[060.8] */
RegWrite(R_CTL, 1, 0x19);    /* #2813[060.8] */
RegWrite(R_CTL, 1, 0x59);    /* #2814[060.8] */
RegWrite(R_CTL, 1, 0xD9);    /* #2815[060.8] */
RegWrite(R_LEN, 2, 0x290B);    /* #2816[060.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2817[060.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2818[060.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2819[061.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2820[061.0] */
RegWrite(R_LEN, 2, 0x290B);    /* #2821[061.0] */
{
 unsigned char uchRegs2822[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2822);
}    /* #2822[061.0] */
RegWrite(0x43, 1, 0x03);    /* #2823[061.0] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2824[061.0] */
RegWrite(R_LEN, 2, 0x290B);    /* #2825[061.0] */
RegWrite(R_LMP, 1, 0x01);    /* #2826[061.0] */
RegWrite(R_LMP, 1, 0x01);    /* #2827[061.0] */
RegWrite(R_CTL, 1, 0x39);    /* #2828[061.0] */
RegWrite(0x34, 1, 0x63);    /* #2829[061.0] */
RegWrite(0x49, 1, 0x96);    /* #2830[061.0] */
{
 unsigned char uchRegs2831[]={
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
   0x84 /*!!R_CCAL3!!*/, 0x0B /*!!R_LEN!!*/, 0x29 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x20 /*!!0x41!!*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2831);
}    /* #2831[061.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2832[061.0] */
RegWrite(R_CTL, 1, 0x39);    /* #2833[061.0] */
RegWrite(R_CTL, 1, 0x79);    /* #2834[061.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #2835[061.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2836[061.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x199F*/    /* #2837[061.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2838[061.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB34C*/    /* #2839[061.1] */
BulkRead(fh,32768);   /* #2840[061.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2841[061.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xEAD4*/    /* #2842[061.2] */
BulkRead(fh,32768);   /* #2843[061.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2844[061.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2845[061.2] */
BulkRead(fh,32768);   /* #2846[061.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2847[061.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2848[061.3] */
BulkRead(fh,32768);   /* #2849[061.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2850[061.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2851[061.3] */
BulkRead(fh,32768);   /* #2852[061.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2853[061.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2854[061.4] */
BulkRead(fh,32768);   /* #2855[061.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2856[061.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2857[061.4] */
BulkRead(fh,32768);   /* #2858[061.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2859[061.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2860[061.5] */
BulkRead(fh,32768);   /* #2861[061.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2862[061.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2863[061.5] */
BulkRead(fh,32768);   /* #2864[061.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2865[061.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2866[061.6] */
BulkRead(fh,32768);   /* #2867[061.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2868[061.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2869[061.6] */
BulkRead(fh,32768);   /* #2870[061.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2871[061.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2872[061.7] */
BulkRead(fh,32768);   /* #2873[061.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2874[061.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2875[061.7] */
BulkRead(fh,32768);   /* #2876[061.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2877[061.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2878[061.8] */
BulkRead(fh,32768);   /* #2879[061.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2880[061.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2881[061.8] */
BulkRead(fh,32768);   /* #2882[061.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2883[061.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2884[061.9] */
BulkRead(fh,32768);   /* #2885[061.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2886[061.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2887[061.9] */
BulkRead(fh,32768);   /* #2888[061.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2889[061.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2890[062.0] */
BulkRead(fh,32768);   /* #2891[062.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2892[062.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2893[062.0] */
BulkRead(fh,32768);   /* #2894[062.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2895[062.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2896[062.0] */
BulkRead(fh,32768);   /* #2897[062.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2898[062.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2899[062.1] */
BulkRead(fh,32768);   /* #2900[062.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2901[062.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2902[062.2] */
BulkRead(fh,32768);   /* #2903[062.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2904[062.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2905[062.2] */
BulkRead(fh,32768);   /* #2906[062.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2907[062.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2908[062.3] */
BulkRead(fh,32768);   /* #2909[062.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2910[062.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2911[062.3] */
BulkRead(fh,32768);   /* #2912[062.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2913[062.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2914[062.4] */
BulkRead(fh,32768);   /* #2915[062.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2916[062.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2917[062.4] */
BulkRead(fh,32768);   /* #2918[062.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2919[062.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2920[062.5] */
BulkRead(fh,32768);   /* #2921[062.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2922[062.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #2923[062.5] */
BulkRead(fh,32768);   /* #2924[062.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2925[062.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #2926[062.6] */
BulkRead(fh,32768);   /* #2927[062.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2928[062.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #2929[062.6] */
BulkRead(fh,32768);   /* #2930[062.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2931[062.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #2932[062.7] */
BulkRead(fh,24592);   /* #2933[062.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2934[062.7] */
RegWrite(0x43, 1, 0x03);    /* #2935[062.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2936[062.7] */
{
 unsigned char uchRegs2937[]={
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
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x29 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2937);
}    /* #2937[062.7] */
RegWrite(R_CTL, 1, 0x39);    /* #2938[062.7] */
RegWrite(R_CTL, 1, 0x79);    /* #2939[062.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #2940[062.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2941[062.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2942[062.8] */
RegWrite(R_CTL, 1, 0x39);    /* #2943[062.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2944[062.8] */
RegWrite(R_LEN, 2, 0x290B);    /* #2945[062.8] */
RegWrite(0x34, 1, 0x63);    /* #2946[062.8] */
RegWrite(0x49, 1, 0x9E);    /* #2947[062.8] */
{
 unsigned char uchRegs2948[]={
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
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x29 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2948);
}    /* #2948[062.8] */
RegWrite(R_CTL, 1, 0x19);    /* #2949[062.8] */
RegWrite(R_CTL, 1, 0x59);    /* #2950[062.8] */
RegWrite(R_CTL, 1, 0xD9);    /* #2951[062.9] */
RegWrite(R_LEN, 2, 0x290B);    /* #2952[062.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2953[062.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2954[063.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2955[063.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2956[063.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2957[063.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2958[063.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2959[063.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2960[063.7] */
RegWrite(R_LMP, 1, 0x01);    /* #2961[063.7] */
RegWrite(R_LMP, 1, 0x01);    /* #2962[063.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2963[063.7] */
RegWrite(R_LEN, 2, 0x290B);    /* #2964[063.7] */
RegWrite(0x34, 1, 0x63);    /* #2965[063.7] */
RegWrite(0x49, 1, 0x9E);    /* #2966[063.7] */
{
 unsigned char uchRegs2967[]={
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
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x29 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x59 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2967);
}    /* #2967[063.7] */
RegWrite(R_CTL, 1, 0x19);    /* #2968[063.7] */
RegWrite(R_CTL, 1, 0x59);    /* #2969[063.7] */
RegWrite(R_CTL, 1, 0xD9);    /* #2970[063.7] */
RegWrite(R_LEN, 2, 0x290B);    /* #2971[063.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2972[063.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2973[063.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2974[063.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2975[064.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2976[064.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2977[064.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2978[064.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2979[064.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2980[064.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2981[064.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2982[064.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2983[064.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2984[064.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2985[064.5] */
RegWrite(R_LEN, 2, 0x290B);    /* #2986[064.5] */
RegWrite(R_LMP, 1, 0x01);    /* #2987[064.5] */
RegWrite(R_LMP, 1, 0x01);    /* #2988[064.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2989[064.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2990[064.5] */
RegWrite(R_CTL, 1, 0x39);    /* #2991[064.5] */
RegWrite(0x34, 1, 0x63);    /* #2992[064.5] */
RegWrite(0x49, 1, 0x96);    /* #2993[064.5] */
RegWrite(0x43, 1, 0x07);    /* #2994[064.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2995[064.5] */
RegWrite(R_LEN, 2, 0x290B);    /* #2996[064.5] */
RegWrite(0x34, 1, 0xC3);    /* #2997[064.5] */
RegWrite(0x49, 1, 0x9E);    /* #2998[064.5] */
{
 unsigned char uchRegs2999[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*0x04*/, 0x00 /*0x05*/, 0x38 /*!!R_STPS!!*/,
   0x06 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
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
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x29 /*R_LENH*/,
   0xC3 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x07 /*!!0x43!!*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2999);
}    /* #2999[064.5] */
RegWrite(0x43, 1, 0x03);    /* #3000[064.5] */
RegWrite(R_STPS, 2, 0x0000);    /* #3001[064.5] */
RegWrite(0x0A, 2, 0x0638);    /* #3002[064.5] */
RegWrite(0x47, 2, 0xA000);    /* #3003[064.6] */
RegWrite(0x34, 1, 0xC3);    /* #3004[064.6] */
RegWrite(0x49, 1, 0x9E);    /* #3005[064.6] */
RegWrite(R_CTL, 1, 0x39);    /* #3006[064.6] */
RegWrite(R_CTL, 1, 0x79);    /* #3007[064.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #3008[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #3009[064.6] */
RegWrite(0x47, 2, 0xA000);    /* #3010[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #3011[064.6] */
RegWrite(0x47, 2, 0x9800);    /* #3012[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #3013[064.6] */
RegWrite(0x47, 2, 0x9000);    /* #3014[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #3015[064.6] */
RegWrite(0x47, 2, 0x8800);    /* #3016[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0634*/    /* #3017[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0632*/    /* #3018[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x062F*/    /* #3019[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x062D*/    /* #3020[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x062B*/    /* #3021[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0628*/    /* #3022[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0626*/    /* #3023[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0624*/    /* #3024[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0622*/    /* #3025[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x061F*/    /* #3026[064.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x061D*/    /* #3027[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x061B*/    /* #3028[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0618*/    /* #3029[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0616*/    /* #3030[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0614*/    /* #3031[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0611*/    /* #3032[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x060F*/    /* #3033[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x060D*/    /* #3034[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x060A*/    /* #3035[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0608*/    /* #3036[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0605*/    /* #3037[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0603*/    /* #3038[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x05FB*/    /* #3039[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F9*/    /* #3040[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F0*/    /* #3041[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x05EE*/    /* #3042[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x05E5*/    /* #3043[064.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x05E2*/    /* #3044[064.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x05DD*/    /* #3045[064.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x05DA*/    /* #3046[064.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x05D8*/    /* #3047[064.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x05CF*/    /* #3048[064.8] */
RegWrite(0x47, 2, 0x8000);    /* #3049[064.8] */
RegWrite(0x43, 1, 0x07);    /* #3050[064.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x05B7*/    /* #3051[064.8] */
RegWrite(0x47, 2, 0x7800);    /* #3052[064.8] */
RegWrite(0x43, 1, 0x07);    /* #3053[064.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x05A8*/    /* #3054[064.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x059E*/    /* #3055[064.9] */
RegWrite(0x47, 2, 0x7000);    /* #3056[064.9] */
RegWrite(0x43, 1, 0x07);    /* #3057[064.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x058E*/    /* #3058[064.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0585*/    /* #3059[064.9] */
RegWrite(0x47, 2, 0x6800);    /* #3060[064.9] */
RegWrite(0x43, 1, 0x07);    /* #3061[064.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0575*/    /* #3062[064.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0569*/    /* #3063[064.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0567*/    /* #3064[064.9] */
RegWrite(0x47, 2, 0x6000);    /* #3065[065.0] */
RegWrite(0x43, 1, 0x07);    /* #3066[065.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0552*/    /* #3067[065.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x054B*/    /* #3068[065.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x053C*/    /* #3069[065.0] */
RegWrite(0x47, 2, 0x5800);    /* #3070[065.0] */
RegWrite(0x43, 1, 0x07);    /* #3071[065.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x051A*/    /* #3072[065.0] */
RegWrite(0x47, 2, 0x5000);    /* #3073[065.0] */
RegWrite(0x43, 1, 0x07);    /* #3074[065.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x050D*/    /* #3075[065.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0508*/    /* #3076[065.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0502*/    /* #3077[065.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x04FD*/    /* #3078[065.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x04F9*/    /* #3079[065.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x04F5*/    /* #3080[065.1] */
RegWrite(0x47, 2, 0x40C0);    /* #3081[065.1] */
RegWrite(R_LEN, 2, 0x290B);    /* #3082[065.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3083[065.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3084[065.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3085[065.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3086[065.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3087[065.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3088[065.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3089[065.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3090[065.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3091[065.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3092[065.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3093[065.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3094[065.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3095[065.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3096[065.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3097[065.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3098[066.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3099[066.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3100[066.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3101[066.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3102[066.1] */
RegWrite(0x43, 1, 0x03);    /* #3103[066.1] */
RegWrite(R_CTL, 1, 0x39);    /* #3104[066.2] */
RegWrite(0x34, 1, 0x03);    /* #3105[066.2] */
RegWrite(0x49, 1, 0x96);    /* #3106[066.2] */
{
 unsigned char uchRegs3107[]={
   0xAB /*!!0x01!!*/, 0x05 /*!!0x02!!*/, 0x2A /*!!0x03!!*/,
   0x60 /*!!0x04!!*/, 0x49 /*!!0x05!!*/, 0x10 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0x6A /*!!0x08!!*/, 0x6A /*!!0x09!!*/,
   0x1E /*!!0x0A!!*/, 0x0E /*!!0x0B!!*/, 0x6D /*0x0C*/,
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
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x29 /*R_LENH*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*!!0x43!!*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0x20 /*!!0x47!!*/, 0x56 /*!!0x48!!*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs3107);
}    /* #3107[066.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3108[066.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3109[066.4] */
RegWrite(R_CTL, 1, 0x39);    /* #3110[066.4] */
RegWrite(R_CTL, 1, 0x79);    /* #3111[066.4] */
RegWrite(R_CTL, 1, 0xF9);    /* #3112[066.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3113[066.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3114[066.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3115[066.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3116[066.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3117[066.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3118[066.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3119[066.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0BB8*/    /* #3120[066.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3121[066.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2328*/    /* #3122[067.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3123[067.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3840*/    /* #3124[067.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3125[067.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D58*/    /* #3126[067.1] */
BulkRead(fh,32768);   /* #3127[067.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3128[067.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2270*/    /* #3129[067.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3130[067.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3788*/    /* #3131[067.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3132[067.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CA0*/    /* #3133[067.4] */
BulkRead(fh,32768);   /* #3134[067.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3135[067.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F96*/    /* #3136[067.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3137[067.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36D0*/    /* #3138[067.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3139[067.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BE8*/    /* #3140[067.8] */
BulkRead(fh,32768);   /* #3141[067.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3142[067.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2100*/    /* #3143[067.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3144[067.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F10*/    /* #3145[068.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3146[068.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4428*/    /* #3147[068.1] */
BulkRead(fh,32768);   /* #3148[068.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3149[068.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1940*/    /* #3150[068.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3151[068.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3560*/    /* #3152[068.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3153[068.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4820*/    /* #3154[068.4] */
BulkRead(fh,32768);   /* #3155[068.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3156[068.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13D8*/    /* #3157[068.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3158[068.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DA0*/    /* #3159[068.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3160[068.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x42B8*/    /* #3161[068.7] */
BulkRead(fh,32768);   /* #3162[068.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3163[068.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x17D0*/    /* #3164[068.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3165[068.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2838*/    /* #3166[068.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3167[068.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AF8*/    /* #3168[069.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3169[069.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5268*/    /* #3170[069.1] */
BulkRead(fh,32768);   /* #3171[069.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3172[069.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x22D0*/    /* #3173[069.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3174[069.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C0F*/    /* #3175[069.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3176[069.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F58*/    /* #3177[069.4] */
BulkRead(fh,32768);   /* #3178[069.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3179[069.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B54*/    /* #3180[069.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3181[069.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DD0*/    /* #3182[069.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3183[069.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4540*/    /* #3184[069.6] */
BulkRead(fh,32768);   /* #3185[069.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3186[069.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x15A8*/    /* #3187[069.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3188[069.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31C8*/    /* #3189[069.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3190[070.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46E0*/    /* #3191[070.0] */
BulkRead(fh,32768);   /* #3192[070.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3193[070.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x14F0*/    /* #3194[070.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3195[070.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A08*/    /* #3196[070.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3197[070.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CC8*/    /* #3198[070.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3199[070.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5690*/    /* #3200[070.4] */
BulkRead(fh,32768);   /* #3201[070.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3202[070.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26F8*/    /* #3203[070.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3204[070.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3760*/    /* #3205[070.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3206[070.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C78*/    /* #3207[070.6] */
BulkRead(fh,32768);   /* #3208[070.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3209[070.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2190*/    /* #3210[070.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3211[070.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x32B7*/    /* #3212[070.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3213[070.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x44B8*/    /* #3214[070.9] */
BulkRead(fh,32768);   /* #3215[071.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3216[071.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x133A*/    /* #3217[071.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3218[071.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AE3*/    /* #3219[071.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3220[071.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CF8*/    /* #3221[071.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3222[071.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5DC8*/    /* #3223[071.4] */
BulkRead(fh,32768);   /* #3224[071.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3225[071.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2980*/    /* #3226[071.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3227[071.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E98*/    /* #3228[071.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3229[071.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5860*/    /* #3230[071.6] */
BulkRead(fh,32768);   /* #3231[071.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3232[071.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2670*/    /* #3233[071.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3234[071.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3480*/    /* #3235[071.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3236[071.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5550*/    /* #3237[072.0] */
BulkRead(fh,32768);   /* #3238[072.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3239[072.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2810*/    /* #3240[072.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3241[072.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F80*/    /* #3242[072.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3243[072.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4FE8*/    /* #3244[072.3] */
BulkRead(fh,32768);   /* #3245[072.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3246[072.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2500*/    /* #3247[072.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3248[072.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C70*/    /* #3249[072.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3250[072.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x50A8*/    /* #3251[072.6] */
BulkRead(fh,32768);   /* #3252[072.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3253[072.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21F0*/    /* #3254[072.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3255[072.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34B0*/    /* #3256[072.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3257[072.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4770*/    /* #3258[072.8] */
BulkRead(fh,32768);   /* #3259[072.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3260[072.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x147F*/    /* #3261[073.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3262[073.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23BE*/    /* #3263[073.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3264[073.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46B8*/    /* #3265[073.2] */
BulkRead(fh,32768);   /* #3266[073.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3267[073.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1720*/    /* #3268[073.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3269[073.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30E8*/    /* #3270[073.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3271[073.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x47CC*/    /* #3272[073.5] */
BulkRead(fh,32768);   /* #3273[073.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3274[073.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x18C0*/    /* #3275[073.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3276[073.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26D0*/    /* #3277[073.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3278[073.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4548*/    /* #3279[073.8] */
BulkRead(fh,32768);   /* #3280[073.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3281[073.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2168*/    /* #3282[074.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3283[074.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F0A*/    /* #3284[074.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3285[074.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3FE0*/    /* #3286[074.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3287[074.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5048*/    /* #3288[074.2] */
BulkRead(fh,32768);   /* #3289[074.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3290[074.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20B0*/    /* #3291[074.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3292[074.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35C8*/    /* #3293[074.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3294[074.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x43D8*/    /* #3295[074.4] */
BulkRead(fh,32768);   /* #3296[074.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3297[074.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1442*/    /* #3298[074.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3299[074.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CD7*/    /* #3300[074.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3301[074.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C18*/    /* #3302[074.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3303[074.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5388*/    /* #3304[074.8] */
BulkRead(fh,32768);   /* #3305[074.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3306[074.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2648*/    /* #3307[075.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3308[075.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4010*/    /* #3309[075.0] */
BulkRead(fh,32768);   /* #3310[075.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3311[075.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1078*/    /* #3312[075.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3313[075.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2353*/    /* #3314[075.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3315[075.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F58*/    /* #3316[075.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3317[075.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x56C8*/    /* #3318[075.5] */
BulkRead(fh,32768);   /* #3319[075.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3320[075.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x24D8*/    /* #3321[075.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3322[075.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39F0*/    /* #3323[075.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3324[075.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F08*/    /* #3325[075.8] */
BulkRead(fh,32768);   /* #3326[075.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3327[075.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D18*/    /* #3328[075.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3329[075.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3230*/    /* #3330[076.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3331[076.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4748*/    /* #3332[076.0] */
BulkRead(fh,32768);   /* #3333[076.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3334[076.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1558*/    /* #3335[076.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3336[076.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CC8*/    /* #3337[076.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3338[076.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D98*/    /* #3339[076.5] */
BulkRead(fh,32768);   /* #3340[076.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3341[076.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30C0*/    /* #3342[076.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3343[076.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45D8*/    /* #3344[076.7] */
BulkRead(fh,32768);   /* #3345[076.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3346[076.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1AF0*/    /* #3347[076.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3348[076.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B06*/    /* #3349[076.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3350[076.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E18*/    /* #3351[077.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3352[077.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5775*/    /* #3353[077.1] */
BulkRead(fh,32768);   /* #3354[077.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3355[077.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2848*/    /* #3356[077.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3357[077.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x43A3*/    /* #3358[077.3] */
BulkRead(fh,32768);   /* #3359[077.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3360[077.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1278*/    /* #3361[077.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3362[077.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E5A*/    /* #3363[077.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3364[077.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CA8*/    /* #3365[077.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3366[077.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x57E5*/    /* #3367[077.8] */
BulkRead(fh,32768);   /* #3368[077.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3369[077.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34E8*/    /* #3370[077.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3371[078.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A00*/    /* #3372[078.0] */
BulkRead(fh,32768);   /* #3373[078.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3374[078.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F18*/    /* #3375[078.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3376[078.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F1C*/    /* #3377[078.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3378[078.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4948*/    /* #3379[078.3] */
BulkRead(fh,32768);   /* #3380[078.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3381[078.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1758*/    /* #3382[078.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3383[078.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A18*/    /* #3384[078.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3385[078.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4890*/    /* #3386[078.6] */
BulkRead(fh,32768);   /* #3387[078.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3388[078.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2000*/    /* #3389[078.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3390[078.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3395[079.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x15E8*/    /* #3396[079.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3406[079.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F60*/    /* #3407[079.6] */
BulkRead(fh,32768);   /* #3417[080.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3418[080.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3423[080.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A10*/    /* #3424[080.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3432[080.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D02*/    /* #3433[080.8] */
ulVal2 = RegRead(R_CSTAT, 2); /*=0x1198*/    /* #3438[081.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3439[081.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26F7*/    /* #3440[081.1] */
ulVal2 = RegRead(0xFFFFFFFF, 2); /*=0x3408*/    /* #3449[081.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3450[081.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4920*/    /* #3451[081.5] */
BulkRead(fh,32768);   /* #3452[082.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3464[082.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39A0*/    /* #3465[082.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3476[082.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2318*/    /* #3477[082.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E18*/    /* #3486[083.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3487[083.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3489[083.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5AA0*/    /* #3490[083.2] */
BulkRead(fh,32768);   /* #3491[083.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FB8*/    /* #3493[083.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3494[083.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3503[083.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6038*/    /* #3504[083.8] */
BulkRead(fh,32768);   /* #3505[084.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3515[084.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x49B0*/    /* #3516[084.4] */
BulkRead(fh,32768);   /* #3517[084.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3527[084.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A1F*/    /* #3528[084.9] */
ulVal2 = RegRead(R_CSTAT, 2); /*=0x3978*/    /* #3537[085.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3538[085.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E90*/    /* #3539[085.3] */
BulkRead(fh,32768);   /* #3540[085.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x29F8*/    /* #3551[085.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3552[085.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3564[086.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1370*/    /* #3565[086.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4AF8*/    /* #3576[086.9] */
BulkRead(fh,32768);   /* #3577[086.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3589[087.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B78*/    /* #3590[087.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3605[088.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4818*/    /* #3606[088.2] */
BulkRead(fh,32768);   /* #3607[088.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3610[088.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B40*/    /* #3611[088.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45F0*/    /* #3627[089.1] */
BulkRead(fh,32768);   /* #3628[089.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3640[089.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3D78*/    /* #3641[089.8] */
BulkRead(fh,32768);   /* #3649[090.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3650[090.5] */
BulkRead(fh,32768);   /* #3658[090.5] */
ulVal1 = RegRead(0xFFFFFFFF, 1); /*=0x00*/    /* #3668[091.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A98*/    /* #3669[091.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3670[091.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1CFA*/    /* #3681[091.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3682[091.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x44D5*/    /* #3692[092.0] */
BulkRead(fh,32768);   /* #3693[092.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3705[092.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3659*/    /* #3706[092.6] */
ulVal2 = RegRead(R_CSTAT, 2); /*=0x5970*/    /* #3715[093.1] */
BulkRead(fh,32768);   /* #3716[093.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3731[093.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D18*/    /* #3732[093.8] */
BulkRead(fh,32768);   /* #3744[094.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3745[094.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3754[094.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2898*/    /* #3755[094.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3763[095.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4658*/    /* #3764[095.2] */
BulkRead(fh,32768);   /* #3765[095.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3775[095.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FD0*/    /* #3776[095.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3789[096.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2758*/    /* #3790[096.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3793[096.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5890*/    /* #3794[096.6] */
BulkRead(fh,32768);   /* #3795[096.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10D0*/    /* #3802[096.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3803[096.9] */
BulkRead(fh,32768);   /* #3814[097.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3815[097.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3821[097.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4EA8*/    /* #3822[097.8] */
BulkRead(fh,32768);   /* #3823[098.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3835[098.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4630*/    /* #3836[098.4] */
BulkRead(fh,32768);   /* #3837[099.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3DB8*/    /* #3850[099.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3851[099.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3854[099.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20E0*/    /* #3855[099.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3865[099.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4350*/    /* #3866[099.7] */
BulkRead(fh,32768);   /* #3867[100.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x28D2*/    /* #3878[100.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3879[100.2] */
BulkRead(fh,32768);   /* #3883[100.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3884[101.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3896[101.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C75*/    /* #3897[101.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3907[101.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F00*/    /* #3908[101.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3912[101.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2930*/    /* #3913[101.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3921[102.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F80*/    /* #3922[102.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3923[102.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BA0*/    /* #3924[102.3] */
BulkRead(fh,32768);   /* #3925[102.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3935[102.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27F5*/    /* #3936[102.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3937[102.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C20*/    /* #3938[102.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3939[102.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3949[103.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2598*/    /* #3950[103.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3953[103.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4FC8*/    /* #3954[103.6] */
BulkRead(fh,32768);   /* #3955[104.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2428*/    /* #3964[104.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3965[104.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4048*/    /* #3966[104.1] */
BulkRead(fh,32768);   /* #3967[104.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3974[104.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B48*/    /* #3975[104.5] */
BulkRead(fh,32768);   /* #3976[104.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3979[104.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3320*/    /* #3980[104.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A90*/    /* #3982[104.8] */
BulkRead(fh,32768);   /* #3983[104.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3993[105.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2850*/    /* #3994[105.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4005[105.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x11C8*/    /* #4006[106.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4009[106.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BF8*/    /* #4010[106.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4014[106.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2178*/    /* #4015[106.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4016[106.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3438*/    /* #4017[106.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4018[106.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4950*/    /* #4019[106.4] */
BulkRead(fh,32768);   /* #4020[106.7] */
BulkRead(fh,32768);   /* #4027[106.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4028[106.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4030[106.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34DF*/    /* #4031[107.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4042[107.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A50*/    /* #4043[108.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4053[108.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5620*/    /* #4054[108.1] */
BulkRead(fh,32768);   /* #4055[108.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4065[108.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3638*/    /* #4066[108.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BD0*/    /* #4080[109.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4081[109.3] */
ulVal1 = RegRead(R_STAT, 1); /*=0x00*/    /* #4093[109.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C50*/    /* #4094[109.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4095[109.8] */
ulVal1 = RegRead(0xFFFFFFFF, 1); /*=0x00*/    /* #4105[110.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2888*/    /* #4106[110.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4107[110.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4114[110.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3130*/    /* #4115[110.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4132[111.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C62*/    /* #4133[111.5] */
BulkRead(fh,32768);   /* #4134[112.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4144[112.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3558*/    /* #4145[112.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4158[112.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E3D*/    /* #4159[112.7] */
BulkRead(fh,32768);   /* #4169[113.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4170[113.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4181[113.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3FD0*/    /* #4182[113.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4193[114.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E60*/    /* #4194[114.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2270*/    /* #4213[115.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4214[115.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x51FC*/    /* #4224[115.7] */
BulkRead(fh,32768);   /* #4225[115.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A10*/    /* #4236[116.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4237[116.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4253[117.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x54C0*/    /* #4254[117.0] */
BulkRead(fh,32768);   /* #4255[117.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26C8*/    /* #4264[117.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4265[117.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4279[118.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CC8*/    /* #4280[118.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4281[118.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x51E0*/    /* #4282[118.3] */
BulkRead(fh,32768);   /* #4283[118.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4295[118.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BC0*/    /* #4296[118.9] */
BulkRead(fh,32768);   /* #4297[119.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x24D0*/    /* #4306[119.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4307[119.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4309[119.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F00*/    /* #4310[119.5] */
BulkRead(fh,32768);   /* #4311[119.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4321[120.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A68*/    /* #4322[120.0] */
BulkRead(fh,32768);   /* #4332[120.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4333[120.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4335[120.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E82*/    /* #4336[120.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4351[121.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CA0*/    /* #4352[121.4] */
BulkRead(fh,32768);   /* #4362[121.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4363[122.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4374[122.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F90*/    /* #4375[122.4] */
BulkRead(fh,32768);   /* #4376[122.7] */
BulkRead(fh,32768);   /* #4383[122.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4384[123.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x340A*/    /* #4396[123.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4397[123.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1DD0*/    /* #4401[123.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4402[123.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A08*/    /* #4413[124.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4414[124.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4425[124.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CE5*/    /* #4426[124.6] */
BulkRead(fh,32768);   /* #4427[125.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4437[125.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FC8*/    /* #4438[125.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4449[125.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x18C8*/    /* #4450[125.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4DF8*/    /* #4461[126.2] */
BulkRead(fh,32768);   /* #4462[126.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4474[126.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5390*/    /* #4475[126.9] */
BulkRead(fh,32768);   /* #4476[127.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4479[127.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36B8*/    /* #4480[127.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4486[127.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2EF8*/    /* #4487[127.4] */
ulVal2 = RegRead(R_CSTAT, 2); /*=0x4668*/    /* #4489[127.5] */
BulkRead(fh,32768);   /* #4490[127.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4493[127.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C50*/    /* #4494[127.8] */
ulVal2 = RegRead(R_CSTAT, 2); /*=0x5168*/    /* #4496[127.8] */
BulkRead(fh,32768);   /* #4497[127.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4509[128.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4FF8*/    /* #4510[128.4] */
BulkRead(fh,32768);   /* #4511[128.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x37D0*/    /* #4515[128.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4516[128.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4519[128.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D50*/    /* #4520[129.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D00*/    /* #4527[129.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4528[129.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3FC0*/    /* #4529[129.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4537[129.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D18*/    /* #4538[129.7] */
BulkRead(fh,32768);   /* #4539[130.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #4549[130.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2178*/    /* #4550[130.4] */
BulkRead(fh,17136);   /* #4551[130.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4566[130.7] */
RegWrite(R_LEN, 2, 0x290B);    /* #4567[130.7] */
RegWrite(0x34, 1, 0xC3);    /* #4568[130.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x13CF*/    /* #4594[131.4] */
RegWrite(0x47, 2, 0x7800);    /* #4595[131.4] */
RegWrite(0xFFFFFFFF, 1, 0x07);    /* #4596[131.5] */
RegWrite(0x43, 1, 0x07);    /* #4599[131.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x1378*/    /* #4600[131.5] */
RegWrite(0x47, 2, 0x6800);    /* #4601[131.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4615[132.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4616[132.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4617[132.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4618[132.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4619[132.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4620[132.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4621[132.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4622[133.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4623[133.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4624[133.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4625[133.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4626[133.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4627[133.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4628[133.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4629[133.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4630[133.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4631[134.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4632[134.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4633[134.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4634[134.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4635[134.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4636[134.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4637[134.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4638[134.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4639[134.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4640[135.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4641[135.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4642[135.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4643[135.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4644[135.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4645[135.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4646[135.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4647[135.7] */
RegWrite(0x43, 1, 0x03);    /* #4648[135.8] */
RegWrite(R_CTL, 1, 0x39);    /* #4649[135.8] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #4650[174.5] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #4651[175.4] */
