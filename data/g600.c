ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2545[268.3] */
RegWrite(0x43, 1, 0x03);    /* #2546[268.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2547[268.3] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #2548[268.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2549[268.4] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #2550[268.4] */
RegWrite(0x32, 2, 0x290A);    /* #2551[268.4] */
{
 unsigned char uchRegs2552[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2552);
}    /* #2552[268.4] */
RegWrite(0x43, 1, 0x03);    /* #2553[268.4] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #2554[268.4] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2555[268.4] */
RegWrite(0x32, 2, 0x290A);    /* #2556[268.4] */
RegWrite(0x32, 2, 0x290A);    /* #2557[268.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2558[268.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2559[268.4] */
RegWrite(0x32, 2, 0x290A);    /* #2560[268.4] */
{
 unsigned char uchRegs2561[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2561);
}    /* #2561[268.4] */
RegWrite(0x43, 1, 0x03);    /* #2562[268.4] */
RegWrite(R_CCAL, 3, 0x808080);    /* #2563[268.4] */
RegWrite(0x32, 2, 0x290A);    /* #2564[268.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2565[268.4] */
RegWrite(0x32, 2, 0x290A);    /* #2566[268.4] */
RegWrite(0x34, 1, 0x63);    /* #2567[268.4] */
RegWrite(0x49, 1, 0x9E);    /* #2568[268.4] */
{
 unsigned char uchRegs2569[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2569);
}    /* #2569[268.4] */
RegWrite(R_CTL, 1, 0x39);    /* #2570[268.4] */
RegWrite(R_CTL, 1, 0x79);    /* #2571[268.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #2572[268.5] */
RegWrite(0x32, 2, 0x290A);    /* #2573[268.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2574[268.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2575[268.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2576[268.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2577[268.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2578[268.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2579[268.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2580[268.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2581[268.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2582[269.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2583[269.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2584[269.0] */
RegWrite(R_LMP, 1, 0x01);    /* #2585[269.0] */
RegWrite(R_LMP, 1, 0x01);    /* #2586[269.0] */
RegWrite(R_CTL, 1, 0x39);    /* #2587[269.0] */
RegWrite(0x34, 1, 0x63);    /* #2588[269.1] */
RegWrite(0x49, 1, 0x96);    /* #2589[269.1] */
{
 unsigned char uchRegs2590[]={
   /*R_SPOS*/ 0xFB, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x20, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2590);
}    /* #2590[269.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2591[269.1] */
RegWrite(R_CTL, 1, 0x39);    /* #2592[269.1] */
RegWrite(R_CTL, 1, 0x79);    /* #2593[269.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #2594[269.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2595[269.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BC4*/    /* #2596[269.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2597[269.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB34C*/    /* #2598[269.2] */
BulkRead(fh,32768);   /* #2599[269.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2600[269.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xEAD4*/    /* #2601[269.2] */
BulkRead(fh,32768);   /* #2602[269.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2603[269.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2604[269.3] */
BulkRead(fh,32768);   /* #2605[269.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2606[269.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2607[269.3] */
BulkRead(fh,32768);   /* #2608[269.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2609[269.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2610[269.4] */
BulkRead(fh,32768);   /* #2611[269.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2612[269.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2613[269.4] */
BulkRead(fh,32768);   /* #2614[269.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2615[269.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2616[269.5] */
BulkRead(fh,32768);   /* #2617[269.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2618[269.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2619[269.5] */
BulkRead(fh,32768);   /* #2620[269.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2621[269.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2622[269.6] */
BulkRead(fh,32768);   /* #2623[269.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2624[269.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2625[269.6] */
BulkRead(fh,32768);   /* #2626[269.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2627[269.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2628[269.7] */
BulkRead(fh,32768);   /* #2629[269.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2630[269.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2631[269.7] */
BulkRead(fh,32768);   /* #2632[269.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2633[269.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2634[269.8] */
BulkRead(fh,32768);   /* #2635[269.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2636[269.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2637[269.9] */
BulkRead(fh,32768);   /* #2638[269.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2639[269.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2640[269.9] */
BulkRead(fh,32768);   /* #2641[269.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2642[269.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2643[269.9] */
BulkRead(fh,32768);   /* #2644[270.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2645[270.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2646[270.0] */
BulkRead(fh,32768);   /* #2647[270.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2648[270.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2649[270.0] */
BulkRead(fh,32768);   /* #2650[270.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2651[270.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2652[270.1] */
BulkRead(fh,32768);   /* #2653[270.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2654[270.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2655[270.1] */
BulkRead(fh,32768);   /* #2656[270.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2657[270.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2658[270.2] */
BulkRead(fh,32768);   /* #2659[270.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2660[270.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2661[270.3] */
BulkRead(fh,32768);   /* #2662[270.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2663[270.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2664[270.3] */
BulkRead(fh,32768);   /* #2665[270.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2666[270.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2667[270.4] */
BulkRead(fh,32768);   /* #2668[270.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2669[270.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2670[270.4] */
BulkRead(fh,32768);   /* #2671[270.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2672[270.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2673[270.5] */
BulkRead(fh,32768);   /* #2674[270.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2675[270.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2676[270.5] */
BulkRead(fh,32768);   /* #2677[270.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2678[270.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2679[270.6] */
BulkRead(fh,32768);   /* #2680[270.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #2681[270.6] */
BulkRead(fh,32768);   /* #2682[270.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #2683[270.7] */
BulkRead(fh,32768);   /* #2684[270.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #2685[270.7] */
BulkRead(fh,32768);   /* #2686[270.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #2687[270.8] */
BulkRead(fh,24592);   /* #2688[270.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2689[270.8] */
RegWrite(0x43, 1, 0x03);    /* #2690[270.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2691[270.8] */
{
 unsigned char uchRegs2692[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x80, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x79, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2692);
}    /* #2692[270.8] */
RegWrite(R_CTL, 1, 0x39);    /* #2693[270.8] */
RegWrite(R_CTL, 1, 0x79);    /* #2694[270.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #2695[270.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2696[270.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2697[270.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2698[270.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2699[270.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2700[270.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2701[270.9] */
RegWrite(0x32, 2, 0x290A);    /* #2702[270.9] */
RegWrite(0x34, 1, 0x63);    /* #2703[270.9] */
RegWrite(0x49, 1, 0x9E);    /* #2704[270.9] */
{
 unsigned char uchRegs2705[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2705);
}    /* #2705[270.9] */
RegWrite(R_CTL, 1, 0x19);    /* #2706[270.9] */
RegWrite(R_CTL, 1, 0x59);    /* #2707[270.9] */
RegWrite(R_CTL, 1, 0xD9);    /* #2708[270.9] */
RegWrite(0x32, 2, 0x290A);    /* #2709[270.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2710[271.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2711[271.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2712[271.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2713[271.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2714[271.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2715[271.6] */
RegWrite(R_LMP, 1, 0x01);    /* #2716[271.7] */
RegWrite(R_LMP, 1, 0x01);    /* #2717[271.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2718[271.7] */
RegWrite(0x32, 2, 0x290A);    /* #2719[271.7] */
RegWrite(0x34, 1, 0x63);    /* #2720[271.7] */
RegWrite(0x49, 1, 0x9E);    /* #2721[271.7] */
{
 unsigned char uchRegs2722[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x59, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2722);
}    /* #2722[271.7] */
RegWrite(R_CTL, 1, 0x19);    /* #2723[271.7] */
RegWrite(R_CTL, 1, 0x59);    /* #2724[271.7] */
RegWrite(R_CTL, 1, 0xD9);    /* #2725[271.7] */
RegWrite(0x32, 2, 0x290A);    /* #2726[271.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2727[271.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2728[271.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2729[271.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2730[272.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2731[272.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2732[272.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2733[272.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2734[272.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2735[272.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2736[272.3] */
RegWrite(0x32, 2, 0x290A);    /* #2737[272.4] */
RegWrite(R_LMP, 1, 0x01);    /* #2738[272.4] */
RegWrite(R_LMP, 1, 0x01);    /* #2739[272.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2740[272.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2741[272.4] */
RegWrite(R_CTL, 1, 0x39);    /* #2742[272.4] */
RegWrite(0x34, 1, 0x63);    /* #2743[272.4] */
RegWrite(0x49, 1, 0x96);    /* #2744[272.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2745[272.4] */
RegWrite(0x32, 2, 0x290A);    /* #2746[272.4] */
RegWrite(0x34, 1, 0x63);    /* #2747[272.4] */
RegWrite(0x49, 1, 0x9E);    /* #2748[272.5] */
{
 unsigned char uchRegs2749[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2749);
}    /* #2749[272.5] */
RegWrite(R_CTL, 1, 0x39);    /* #2750[272.5] */
RegWrite(R_CTL, 1, 0x79);    /* #2751[272.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #2752[272.5] */
RegWrite(0x32, 2, 0x290A);    /* #2753[272.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2754[272.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2755[272.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2756[272.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2757[272.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2758[272.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2759[272.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2760[272.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2761[272.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2762[273.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2763[273.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2764[273.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2765[273.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2766[273.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2767[273.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2768[273.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2769[273.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2770[273.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2771[273.5] */
RegWrite(0x43, 1, 0x03);    /* #2772[273.5] */
RegWrite(R_CTL, 1, 0x39);    /* #2773[273.5] */
RegWrite(0x34, 1, 0x03);    /* #2774[273.5] */
RegWrite(0x49, 1, 0x96);    /* #2775[273.5] */
{
 unsigned char uchRegs2776[]={
   /*R_SPOS*/ 0xFB, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0xB0, /*R_SWIDH*/ 0x04, /*R_STPS*/ 0x06,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x3F,
   /*R_LEN*/ 0xBE, /*R_LENH*/ 0x04, /*0x0C*/ 0x6D,
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x42, /*0x48*/ 0x15,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2776);
}    /* #2776[273.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2777[273.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2778[273.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2779[273.6] */
RegWrite(R_CTL, 1, 0x79);    /* #2780[273.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #2781[273.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2782[273.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0708*/    /* #2783[273.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2784[273.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A5F*/    /* #2785[273.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2786[273.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7885*/    /* #2787[273.9] */
BulkRead(fh,32768);   /* #2788[273.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2789[274.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x61B8*/    /* #2790[274.0] */
BulkRead(fh,32768);   /* #2791[274.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2792[274.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B13*/    /* #2793[274.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2794[274.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6F10*/    /* #2795[274.1] */
BulkRead(fh,32768);   /* #2796[274.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2797[274.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x62A0*/    /* #2798[274.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2799[274.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7C68*/    /* #2800[274.3] */
BulkRead(fh,32768);   /* #2801[274.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2802[274.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7250*/    /* #2803[274.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2804[274.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x8C18*/    /* #2805[274.4] */
BulkRead(fh,32768);   /* #2806[274.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2807[274.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7648*/    /* #2808[274.5] */
BulkRead(fh,32768);   /* #2809[274.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2810[274.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9D68*/    /* #2811[274.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2812[274.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xBBE0*/    /* #2813[274.7] */
BulkRead(fh,32768);   /* #2814[274.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2815[274.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9CB0*/    /* #2816[274.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2817[274.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xC230*/    /* #2818[274.9] */
BulkRead(fh,32768);   /* #2819[274.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2820[274.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB368*/    /* #2821[275.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2822[275.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xCA24*/    /* #2823[275.0] */
BulkRead(fh,32768);   /* #2824[275.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2825[275.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB2B0*/    /* #2826[275.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2827[275.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xCA20*/    /* #2828[275.1] */
BulkRead(fh,32768);   /* #2829[275.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2830[275.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xC008*/    /* #2831[275.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2832[275.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xE588*/    /* #2833[275.3] */
BulkRead(fh,32768);   /* #2834[275.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2835[275.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xCD60*/    /* #2836[275.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2837[275.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xED67*/    /* #2838[275.5] */
BulkRead(fh,32768);   /* #2839[275.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2840[275.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF6D8*/    /* #2841[275.6] */
BulkRead(fh,32768);   /* #2842[275.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2843[275.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xE89C*/    /* #2844[275.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2845[275.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFF80*/    /* #2846[275.7] */
BulkRead(fh,32768);   /* #2847[275.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2848[275.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF0B8*/    /* #2849[275.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2850[275.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2851[275.9] */
BulkRead(fh,32768);   /* #2852[275.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2853[275.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2854[276.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2855[276.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2856[276.0] */
BulkRead(fh,32768);   /* #2857[276.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2858[276.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2859[276.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2860[276.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2861[276.3] */
BulkRead(fh,32768);   /* #2862[276.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2863[276.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2864[276.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2865[276.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2866[276.4] */
BulkRead(fh,32768);   /* #2867[276.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2868[276.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2869[276.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2870[276.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2871[276.6] */
BulkRead(fh,32768);   /* #2872[276.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2873[276.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2874[276.7] */
BulkRead(fh,32768);   /* #2875[276.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2876[276.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2877[276.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2878[276.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2879[276.8] */
BulkRead(fh,32768);   /* #2880[276.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2881[276.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2882[276.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2883[276.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2884[276.9] */
BulkRead(fh,32768);   /* #2885[277.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2886[277.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2887[277.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2888[277.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2889[277.1] */
BulkRead(fh,32768);   /* #2890[277.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2891[277.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2892[277.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2893[277.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2894[277.4] */
BulkRead(fh,32768);   /* #2895[277.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2896[277.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2897[277.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2898[277.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2899[277.5] */
BulkRead(fh,32768);   /* #2900[277.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2901[277.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2902[277.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2903[277.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2904[277.6] */
BulkRead(fh,32768);   /* #2905[277.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2906[277.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2907[277.7] */
BulkRead(fh,32768);   /* #2908[277.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2909[277.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2910[277.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2911[277.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2912[277.9] */
BulkRead(fh,32768);   /* #2913[277.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2914[278.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2915[278.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2916[278.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2917[278.1] */
BulkRead(fh,32768);   /* #2918[278.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2919[278.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2920[278.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2921[278.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2922[278.2] */
BulkRead(fh,32768);   /* #2923[278.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2924[278.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2925[278.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2926[278.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2927[278.4] */
BulkRead(fh,32768);   /* #2928[278.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2929[278.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2930[278.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2931[278.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2932[278.5] */
BulkRead(fh,32768);   /* #2933[278.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2934[278.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2935[278.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2936[278.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2937[278.7] */
BulkRead(fh,32768);   /* #2938[278.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2939[278.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2940[278.7] */
BulkRead(fh,32768);   /* #2941[278.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2942[278.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2943[279.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2944[279.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2945[279.0] */
BulkRead(fh,32768);   /* #2946[279.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2947[279.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2948[279.1] */
BulkRead(fh,32768);   /* #2949[279.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2950[279.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2951[279.2] */
BulkRead(fh,32768);   /* #2952[279.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2953[279.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2954[279.3] */
BulkRead(fh,32768);   /* #2955[279.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2956[279.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2957[279.4] */
BulkRead(fh,32768);   /* #2958[279.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2959[279.5] */
BulkRead(fh,32768);   /* #2960[279.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2961[279.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2962[279.6] */
BulkRead(fh,32768);   /* #2963[279.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xDD50*/    /* #2964[279.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xDD50*/    /* #2965[279.8] */
BulkRead(fh,32768);   /* #2966[279.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9D50*/    /* #2967[279.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9D50*/    /* #2968[279.9] */
BulkRead(fh,32768);   /* #2969[280.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5D50*/    /* #2970[280.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5D50*/    /* #2971[280.0] */
BulkRead(fh,32768);   /* #2972[280.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D50*/    /* #2973[280.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D50*/    /* #2974[280.2] */
BulkRead(fh,15008);   /* #2975[280.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2976[280.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2977[280.2] */
RegWrite(0x43, 1, 0x03);    /* #2978[280.2] */
RegWrite(0x43, 1, 0x03);    /* #2979[280.3] */
RegWrite(R_CTL, 1, 0x39);    /* #2980[280.3] */
{
 unsigned char uchRegs2981[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x80, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x42, /*0x48*/ 0x15,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2981);
}    /* #2981[280.3] */
RegWrite(R_CTL, 1, 0x39);    /* #2982[280.3] */
RegWrite(R_CTL, 1, 0x79);    /* #2983[280.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #2984[280.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2985[280.5] */
RegWrite(R_CTL, 1, 0x39);    /* #2986[280.5] */
RegWrite(0x43, 1, 0x07);    /* #2987[280.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2988[280.6] */
RegWrite(0x32, 2, 0x290A);    /* #2989[280.6] */
RegWrite(0x34, 1, 0xC3);    /* #2990[280.6] */
RegWrite(0x49, 1, 0x9E);    /* #2991[280.7] */
{
 unsigned char uchRegs2992[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0x56,
   /*R_STPSH*/ 0x06, /*0x08*/ 0x00, /*0x09*/ 0x00,
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0xC3, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x07, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2992);
}    /* #2992[280.7] */
RegWrite(0x43, 1, 0x03);    /* #2993[280.7] */
RegWrite(R_STPS, 2, 0x0000);    /* #2994[280.7] */
RegWrite(R_LEN, 2, 0x0656);    /* #2995[280.8] */
RegWrite(0x47, 2, 0xA000);    /* #2996[280.8] */
RegWrite(0x34, 1, 0xC3);    /* #2997[280.8] */
RegWrite(0x49, 1, 0x9E);    /* #2998[280.8] */
RegWrite(R_CTL, 1, 0x19);    /* #2999[280.8] */
RegWrite(R_CTL, 1, 0x59);    /* #3000[280.9] */
RegWrite(R_CTL, 1, 0xD9);    /* #3001[280.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0655*/    /* #3002[280.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x064C*/    /* #3003[280.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0643*/    /* #3004[281.0] */
RegWrite(0x47, 2, 0xA000);    /* #3005[281.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0630*/    /* #3006[281.0] */
RegWrite(0x47, 2, 0x9800);    /* #3007[281.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0615*/    /* #3008[281.0] */
RegWrite(0x47, 2, 0x9000);    /* #3009[281.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0608*/    /* #3010[281.1] */
RegWrite(0x47, 2, 0x8800);    /* #3011[281.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x05E8*/    /* #3012[281.1] */
RegWrite(0x47, 2, 0x8000);    /* #3013[281.1] */
RegWrite(0x43, 1, 0x07);    /* #3014[281.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x05C5*/    /* #3015[281.2] */
RegWrite(0x47, 2, 0x7800);    /* #3016[281.2] */
RegWrite(0x43, 1, 0x07);    /* #3017[281.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0596*/    /* #3018[281.3] */
RegWrite(0x47, 2, 0x7000);    /* #3019[281.3] */
RegWrite(0x43, 1, 0x07);    /* #3020[281.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x056E*/    /* #3021[281.3] */
RegWrite(0x47, 2, 0x6800);    /* #3022[281.3] */
RegWrite(0x43, 1, 0x07);    /* #3023[281.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x04D3*/    /* #3024[281.5] */
RegWrite(0x47, 2, 0x6000);    /* #3025[281.5] */
RegWrite(0x43, 1, 0x07);    /* #3026[281.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x04A6*/    /* #3027[281.6] */
RegWrite(0x47, 2, 0x5800);    /* #3028[281.6] */
RegWrite(0x43, 1, 0x07);    /* #3029[281.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0467*/    /* #3030[281.6] */
RegWrite(0x47, 2, 0x5000);    /* #3031[281.7] */
RegWrite(0x43, 1, 0x07);    /* #3032[281.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0431*/    /* #3033[281.7] */
RegWrite(0x47, 2, 0x40C0);    /* #3034[281.7] */
RegWrite(0x32, 2, 0x290A);    /* #3035[281.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3036[281.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3037[282.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3038[282.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3039[282.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3040[282.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3041[282.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3042[282.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3043[282.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3044[282.7] */
RegWrite(0x43, 1, 0x03);    /* #3045[282.7] */
RegWrite(R_CTL, 1, 0x39);    /* #3046[282.7] */
