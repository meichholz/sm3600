ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1481[229.8] */
RegWrite(0x43, 1, 0x03);    /* #1482[229.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1483[229.8] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #1484[229.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1485[229.8] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #1486[229.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1487[229.9] */
{
 unsigned char uchRegs1488[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1488);
}    /* #1488[229.9] */
RegWrite(0x43, 1, 0x03);    /* #1489[229.9] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #1490[229.9] */
RegWrite(R_CCAL, 3, 0x848888);    /* #1491[229.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1492[229.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1493[229.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1494[229.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1495[229.9] */
RegWrite(0x34, 1, 0x63);    /* #1496[229.9] */
RegWrite(0x49, 1, 0x9E);    /* #1497[229.9] */
{
 unsigned char uchRegs1498[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1498);
}    /* #1498[229.9] */
RegWrite(R_CTL, 1, 0x39);    /* #1499[229.9] */
RegWrite(R_CTL, 1, 0x79);    /* #1500[229.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #1501[229.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1502[229.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1503[230.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1504[230.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1505[230.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1506[230.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1507[230.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1508[230.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1509[230.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1510[230.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1511[230.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1512[230.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1513[230.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1514[230.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1515[230.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1516[230.7] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x848888*/    /* #1517[230.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1518[230.7] */
ulVal2 = RegRead(R_LEN, 2); /*=0x2D0B*/    /* #1519[230.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1520[230.7] */
{
 unsigned char uchRegs1521[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1521);
}    /* #1521[230.7] */
RegWrite(0x43, 1, 0x03);    /* #1522[230.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1523[230.7] */
RegWrite(R_LMP, 1, 0x01);    /* #1524[230.7] */
RegWrite(R_LMP, 1, 0x01);    /* #1525[230.7] */
RegWrite(R_CTL, 1, 0x39);    /* #1526[230.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1527[230.8] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1528[230.8] */
{
 unsigned char uchRegs1529[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1529);
}    /* #1529[230.8] */
RegWrite(0x34, 1, 0x03);    /* #1530[230.8] */
RegWrite(0x49, 1, 0x96);    /* #1531[230.8] */
RegWrite(R_CTL, 1, 0x79);    /* #1532[230.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #1533[230.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1534[230.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1535[230.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1536[230.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #1537[230.9] */
BulkRead(fh,3840);   /* #1538[230.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1539[230.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1540[230.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1541[230.9] */
RegWrite(R_LMP, 1, 0x01);    /* #1542[230.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1543[230.9] */
RegWrite(R_LMP, 1, 0x01);    /* #1544[230.9] */
RegWrite(R_LMP, 1, 0x01);    /* #1545[230.9] */
RegWrite(R_CTL, 1, 0x39);    /* #1546[230.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1547[230.9] */
RegWrite(R_CCAL, 3, 0x848888);    /* #1548[230.9] */
{
 unsigned char uchRegs1549[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1549);
}    /* #1549[230.9] */
RegWrite(0x34, 1, 0x03);    /* #1550[230.9] */
RegWrite(0x49, 1, 0x96);    /* #1551[230.9] */
RegWrite(R_CTL, 1, 0x79);    /* #1552[230.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #1553[230.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1554[230.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1555[231.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1556[231.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0048*/    /* #1557[231.0] */
BulkRead(fh,144);   /* #1558[231.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1559[231.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1560[231.0] */
RegWrite(R_CCAL, 3, 0x848888);    /* #1561[231.0] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1562[231.0] */
RegWrite(R_LMP, 1, 0x01);    /* #1563[231.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1564[231.1] */
ulVal2 = RegRead(R_LEN, 2); /*=0x2D0B*/    /* #1565[231.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1566[231.1] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1567[231.1] */
RegWrite(0x34, 1, 0x63);    /* #1568[231.1] */
RegWrite(0x49, 1, 0x9E);    /* #1569[231.1] */
{
 unsigned char uchRegs1570[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1570);
}    /* #1570[231.1] */
RegWrite(R_CTL, 1, 0x19);    /* #1571[231.1] */
RegWrite(R_CTL, 1, 0x59);    /* #1572[231.1] */
RegWrite(R_CTL, 1, 0xD9);    /* #1573[231.1] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1574[231.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1575[231.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1576[231.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1577[231.2] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1578[231.2] */
{
 unsigned char uchRegs1579[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1579);
}    /* #1579[231.2] */
RegWrite(0x43, 1, 0x03);    /* #1580[231.2] */
RegWrite(R_CCAL, 3, 0x848888);    /* #1581[231.3] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1582[231.3] */
RegWrite(R_LMP, 1, 0x01);    /* #1583[231.3] */
RegWrite(R_LMP, 1, 0x01);    /* #1584[231.3] */
RegWrite(R_CTL, 1, 0x39);    /* #1585[231.3] */
RegWrite(0x34, 1, 0x63);    /* #1586[231.3] */
RegWrite(0x49, 1, 0x96);    /* #1587[231.3] */
{
 unsigned char uchRegs1588[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1588);
}    /* #1588[231.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1589[231.3] */
RegWrite(R_CTL, 1, 0x39);    /* #1590[231.3] */
RegWrite(R_CTL, 1, 0x79);    /* #1591[231.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #1592[231.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1593[231.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0223*/    /* #1594[231.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1595[231.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x8B24*/    /* #1596[231.4] */
BulkRead(fh,32768);   /* #1597[231.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1598[231.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xAF10*/    /* #1599[231.4] */
BulkRead(fh,32768);   /* #1600[231.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1601[231.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xDD06*/    /* #1602[231.5] */
BulkRead(fh,32768);   /* #1603[231.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1604[231.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xE714*/    /* #1605[231.5] */
BulkRead(fh,32768);   /* #1606[231.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1607[231.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1608[231.6] */
BulkRead(fh,32768);   /* #1609[231.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1610[231.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1611[231.6] */
BulkRead(fh,32768);   /* #1612[231.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1613[231.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1614[231.7] */
BulkRead(fh,32768);   /* #1615[231.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1616[231.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1617[231.7] */
BulkRead(fh,32768);   /* #1618[231.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1619[231.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1620[231.8] */
BulkRead(fh,32768);   /* #1621[231.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1622[231.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1623[231.8] */
BulkRead(fh,32768);   /* #1624[231.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1625[231.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1626[231.9] */
BulkRead(fh,32768);   /* #1627[231.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1628[231.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1629[231.9] */
BulkRead(fh,32768);   /* #1630[232.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1631[232.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1632[232.0] */
BulkRead(fh,32768);   /* #1633[232.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1634[232.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1635[232.0] */
BulkRead(fh,32768);   /* #1636[232.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1637[232.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1638[232.1] */
BulkRead(fh,32768);   /* #1639[232.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1640[232.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1641[232.1] */
BulkRead(fh,32768);   /* #1642[232.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1643[232.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1644[232.2] */
BulkRead(fh,32768);   /* #1645[232.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1646[232.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1647[232.2] */
BulkRead(fh,32768);   /* #1648[232.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1649[232.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1650[232.3] */
BulkRead(fh,32768);   /* #1651[232.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1652[232.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1653[232.3] */
BulkRead(fh,32768);   /* #1654[232.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1655[232.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1656[232.4] */
BulkRead(fh,32768);   /* #1657[232.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1658[232.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1659[232.4] */
BulkRead(fh,32768);   /* #1660[232.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1661[232.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1662[232.5] */
BulkRead(fh,32768);   /* #1663[232.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1664[232.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1665[232.5] */
BulkRead(fh,32768);   /* #1666[232.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1667[232.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1668[232.6] */
BulkRead(fh,32768);   /* #1669[232.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1670[232.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1671[232.6] */
BulkRead(fh,32768);   /* #1672[232.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1673[232.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1674[232.7] */
BulkRead(fh,32768);   /* #1675[232.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1676[232.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1677[232.7] */
BulkRead(fh,32768);   /* #1678[232.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1679[232.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #1680[232.8] */
BulkRead(fh,32768);   /* #1681[232.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1682[232.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #1683[232.9] */
BulkRead(fh,32768);   /* #1684[232.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1685[232.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #1686[232.9] */
BulkRead(fh,32768);   /* #1687[232.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1688[232.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #1689[233.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1690[233.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #1691[233.0] */
BulkRead(fh,24592);   /* #1692[233.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1693[233.0] */
RegWrite(0x43, 1, 0x03);    /* #1694[233.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1695[233.0] */
{
 unsigned char uchRegs1696[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1696);
}    /* #1696[233.0] */
RegWrite(R_CTL, 1, 0x39);    /* #1697[233.0] */
RegWrite(R_CTL, 1, 0x79);    /* #1698[233.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #1699[233.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1700[233.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1701[233.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1702[233.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1703[233.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1704[233.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1705[233.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1706[233.1] */
RegWrite(R_CTL, 1, 0x39);    /* #1707[233.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1708[233.1] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1709[233.1] */
RegWrite(0x34, 1, 0x63);    /* #1710[233.1] */
RegWrite(0x49, 1, 0x9E);    /* #1711[233.1] */
{
 unsigned char uchRegs1712[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1712);
}    /* #1712[233.1] */
RegWrite(R_CTL, 1, 0x19);    /* #1713[233.1] */
RegWrite(R_CTL, 1, 0x59);    /* #1714[233.2] */
RegWrite(R_CTL, 1, 0xD9);    /* #1715[233.2] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1716[233.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1717[233.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1718[233.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1719[233.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1720[233.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1721[233.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1722[233.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1723[233.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1724[233.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1725[234.0] */
RegWrite(R_LMP, 1, 0x01);    /* #1726[234.0] */
RegWrite(R_LMP, 1, 0x01);    /* #1727[234.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1728[234.0] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1729[234.0] */
RegWrite(0x34, 1, 0x63);    /* #1730[234.0] */
RegWrite(0x49, 1, 0x9E);    /* #1731[234.1] */
{
 unsigned char uchRegs1732[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1732);
}    /* #1732[234.1] */
RegWrite(R_CTL, 1, 0x19);    /* #1733[234.1] */
RegWrite(R_CTL, 1, 0x59);    /* #1734[234.1] */
RegWrite(R_CTL, 1, 0xD9);    /* #1735[234.1] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1736[234.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1737[234.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1738[234.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1739[234.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1740[234.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1741[234.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1742[234.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1743[234.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1744[234.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1745[234.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1746[234.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1747[234.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1748[234.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1749[234.8] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1750[234.8] */
RegWrite(R_LMP, 1, 0x01);    /* #1751[234.8] */
RegWrite(R_LMP, 1, 0x01);    /* #1752[234.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1753[234.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1754[234.8] */
RegWrite(R_CTL, 1, 0x39);    /* #1755[234.8] */
RegWrite(0x34, 1, 0x63);    /* #1756[234.8] */
RegWrite(0x49, 1, 0x96);    /* #1757[234.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1758[234.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1759[234.9] */
RegWrite(0x34, 1, 0x63);    /* #1760[234.9] */
RegWrite(0x49, 1, 0x9E);    /* #1761[234.9] */
{
 unsigned char uchRegs1762[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1762);
}    /* #1762[234.9] */
RegWrite(R_CTL, 1, 0x39);    /* #1763[234.9] */
RegWrite(R_CTL, 1, 0x79);    /* #1764[234.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #1765[234.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #1766[234.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1767[235.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1768[235.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1769[235.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1770[235.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1771[235.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1772[235.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1773[235.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1774[235.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1775[235.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1776[235.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1777[235.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1778[235.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1779[235.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1780[235.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1781[235.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1782[235.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1783[235.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1784[236.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1785[236.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1786[236.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1787[236.1] */
RegWrite(0x43, 1, 0x03);    /* #1788[236.1] */
RegWrite(R_CTL, 1, 0x39);    /* #1789[236.1] */
RegWrite(0x34, 1, 0x03);    /* #1790[236.1] */
RegWrite(0x49, 1, 0x96);    /* #1791[236.1] */
{
 unsigned char uchRegs1792[]={
   0xFB /*!!0x01!!*/, 0x00 /*0x02*/, 0x2A /*!!0x03!!*/,
   0x58 /*!!0x04!!*/, 0x42 /*!!0x05!!*/, 0x06 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0x6A /*!!0x08!!*/, 0x6A /*!!0x09!!*/,
   0x66 /*!!0x0A!!*/, 0x02 /*!!0x0B!!*/, 0x6D /*0x0C*/,
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
  RegWriteArray(R_ALL, 74, uchRegs1792);
}    /* #1792[236.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1793[236.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1794[236.2] */
RegWrite(R_CTL, 1, 0x39);    /* #1795[236.2] */
RegWrite(R_CTL, 1, 0x79);    /* #1796[236.2] */
RegWrite(R_CTL, 1, 0xF9);    /* #1797[236.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1798[236.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1799[236.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1800[236.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1801[236.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1802[236.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0546*/    /* #1803[236.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1804[236.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0960*/    /* #1805[236.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1806[236.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0FD2*/    /* #1807[236.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1808[236.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1518*/    /* #1809[236.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1810[236.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A5E*/    /* #1811[237.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1812[237.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20D0*/    /* #1813[237.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1814[237.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26AC*/    /* #1815[237.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1816[237.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BF2*/    /* #1817[237.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1818[237.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30F1*/    /* #1819[237.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1820[237.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x367E*/    /* #1821[237.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1822[237.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A02*/    /* #1823[237.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1824[237.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x410A*/    /* #1825[237.7] */
BulkRead(fh,32768);   /* #1826[237.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1827[237.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x05BA*/    /* #1828[237.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1829[237.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0812*/    /* #1830[237.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1831[237.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0D58*/    /* #1832[238.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1833[238.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1208*/    /* #1834[238.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1835[238.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1622*/    /* #1836[238.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1837[238.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B68*/    /* #1838[238.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1839[238.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20AE*/    /* #1840[238.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1841[238.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25F4*/    /* #1842[238.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1843[238.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B3A*/    /* #1844[238.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1845[238.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3080*/    /* #1846[238.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1847[238.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35C6*/    /* #1848[238.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1849[238.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B0C*/    /* #1850[238.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1851[238.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4052*/    /* #1852[238.9] */
BulkRead(fh,32768);   /* #1853[238.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1854[239.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x03D6*/    /* #1855[239.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1856[239.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0598*/    /* #1857[239.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1858[239.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0B74*/    /* #1859[239.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1860[239.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1024*/    /* #1861[239.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1862[239.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13A8*/    /* #1863[239.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1864[239.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x18EE*/    /* #1865[239.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1866[239.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E34*/    /* #1867[239.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1868[239.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x237A*/    /* #1869[239.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1870[239.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x28C0*/    /* #1871[239.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1872[239.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E06*/    /* #1873[239.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1874[239.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x334C*/    /* #1875[240.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1876[240.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3766*/    /* #1877[240.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1878[240.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CAC*/    /* #1879[240.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1880[240.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x431E*/    /* #1881[240.2] */
BulkRead(fh,32768);   /* #1882[240.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1883[240.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0738*/    /* #1884[240.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1885[240.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0BE8*/    /* #1886[240.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1887[240.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1002*/    /* #1888[240.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1889[240.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x15DE*/    /* #1890[240.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1891[240.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BBA*/    /* #1892[240.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1893[240.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2100*/    /* #1894[240.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1895[241.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2808*/    /* #1896[241.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1897[241.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D4E*/    /* #1898[241.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1899[241.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3168*/    /* #1900[241.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1901[241.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3618*/    /* #1902[241.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1903[241.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B5E*/    /* #1904[241.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1905[241.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40A4*/    /* #1906[241.5] */
BulkRead(fh,32768);   /* #1907[241.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1908[241.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0428*/    /* #1909[241.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1910[241.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x07AC*/    /* #1911[241.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1912[241.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0CF2*/    /* #1913[241.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1914[241.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1238*/    /* #1915[241.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1916[241.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1814*/    /* #1917[242.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1918[242.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D5A*/    /* #1919[242.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1920[242.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x220A*/    /* #1921[242.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1922[242.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2624*/    /* #1923[242.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1924[242.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C00*/    /* #1925[242.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1926[242.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x301A*/    /* #1927[242.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1928[242.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3560*/    /* #1929[242.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1930[242.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AA6*/    /* #1931[242.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1932[242.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3FEC*/    /* #1933[242.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1934[242.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45C8*/    /* #1935[242.9] */
BulkRead(fh,32768);   /* #1936[242.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1937[242.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A78*/    /* #1938[243.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1939[243.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0DFC*/    /* #1940[243.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1941[243.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1342*/    /* #1942[243.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1943[243.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A4A*/    /* #1944[243.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1945[243.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F90*/    /* #1946[243.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1947[243.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23AA*/    /* #1948[243.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1949[243.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x285A*/    /* #1950[243.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1951[243.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DA0*/    /* #1952[243.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1953[243.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x32E6*/    /* #1954[243.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1955[243.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x382C*/    /* #1956[243.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1957[244.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3DF7*/    /* #1958[244.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1959[244.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x447A*/    /* #1960[244.1] */
BulkRead(fh,32768);   /* #1961[244.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1962[244.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x07FE*/    /* #1963[244.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1964[244.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0AEC*/    /* #1965[244.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1966[244.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10C8*/    /* #1967[244.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1968[244.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x160E*/    /* #1969[244.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1970[244.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B54*/    /* #1971[244.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1972[244.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x209A*/    /* #1973[244.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1974[244.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25E0*/    /* #1975[244.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1976[244.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B26*/    /* #1977[244.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1978[245.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x306C*/    /* #1979[245.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1980[245.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35B2*/    /* #1981[245.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1982[245.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AF8*/    /* #1983[245.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1984[245.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x403E*/    /* #1985[245.3] */
BulkRead(fh,32768);   /* #1986[245.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1987[245.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0584*/    /* #1988[245.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1989[245.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0746*/    /* #1990[245.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1991[245.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0D22*/    /* #1992[245.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1993[245.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1394*/    /* #1994[245.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1995[245.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x17AE*/    /* #1996[245.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1997[245.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E20*/    /* #1998[246.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1999[246.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2366*/    /* #2000[246.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2001[246.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x28AC*/    /* #2002[246.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2003[246.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DCE*/    /* #2004[246.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2005[246.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3176*/    /* #2006[246.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2007[246.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36BC*/    /* #2008[246.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2009[246.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C02*/    /* #2010[246.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2011[246.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4148*/    /* #2012[246.6] */
BulkRead(fh,32768);   /* #2013[246.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2014[246.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x04CC*/    /* #2015[246.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2016[246.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0850*/    /* #2017[246.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2018[246.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0D96*/    /* #2019[246.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2020[247.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x149E*/    /* #2021[247.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2022[247.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19E4*/    /* #2023[247.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2024[247.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BA6*/    /* #2025[247.2] */
BulkRead(fh,14156);   /* #2026[247.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2027[247.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2028[247.3] */
RegWrite(0x43, 1, 0x03);    /* #2029[247.3] */
RegWrite(0x43, 1, 0x03);    /* #2030[247.3] */
RegWrite(R_CTL, 1, 0x39);    /* #2031[247.3] */
{
 unsigned char uchRegs2032[]={
   0x00 /*!!0x01!!*/, 0x00 /*0x02*/, 0x00 /*!!0x03!!*/,
   0x00 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*!!0x0B!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x60 /*0x12*/,
   0x15 /*0x13*/, 0xA0 /*0x14*/, 0x2A /*0x15*/,
   0xE0 /*0x16*/, 0x3F /*0x17*/, 0x20 /*0x18*/,
   0x56 /*0x19*/, 0xFF /*0x1A*/, 0x0F /*0x1B*/,
   0x44 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x03 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0x20 /*0x47*/, 0x56 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2032);
}    /* #2032[247.4] */
RegWrite(R_CTL, 1, 0x39);    /* #2033[247.4] */
RegWrite(R_CTL, 1, 0x79);    /* #2034[247.4] */
RegWrite(R_CTL, 1, 0xF9);    /* #2035[247.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2036[247.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2037[247.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2038[247.5] */
RegWrite(R_CTL, 1, 0x39);    /* #2039[247.5] */
RegWrite(0x43, 1, 0x07);    /* #2040[247.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2041[247.6] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2042[247.6] */
RegWrite(0x34, 1, 0xC3);    /* #2043[247.6] */
RegWrite(0x49, 1, 0x9E);    /* #2044[247.6] */
{
 unsigned char uchRegs2045[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!0x04!!*/, 0x00 /*0x05*/, 0xFE /*!!R_STPS!!*/,
   0x03 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*!!0x12!!*/,
   0x15 /*0x13*/, 0x80 /*!!0x14!!*/, 0x2A /*0x15*/,
   0xC0 /*!!0x16!!*/, 0x40 /*!!0x17!!*/, 0xC0 /*!!0x18!!*/,
   0x40 /*!!0x19!!*/, 0xFF /*0x1A*/, 0x01 /*!!0x1B!!*/,
   0x88 /*!!0x1C!!*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0xC3 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x07 /*!!0x43!!*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*!!0x47!!*/, 0x40 /*!!0x48!!*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2045);
}    /* #2045[247.6] */
RegWrite(0x43, 1, 0x03);    /* #2046[247.7] */
RegWrite(R_STPS, 2, 0x0000);    /* #2047[247.7] */
RegWrite(0x0A, 2, 0x03FE);    /* #2048[247.7] */
RegWrite(0x47, 2, 0xA000);    /* #2049[247.7] */
RegWrite(0x34, 1, 0xC3);    /* #2050[247.7] */
RegWrite(0x49, 1, 0x9E);    /* #2051[247.8] */
RegWrite(R_CTL, 1, 0x19);    /* #2052[247.8] */
RegWrite(R_CTL, 1, 0x59);    /* #2053[247.8] */
RegWrite(R_CTL, 1, 0xD9);    /* #2054[247.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #2055[247.8] */
RegWrite(0x47, 2, 0xA000);    /* #2056[247.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x03E6*/    /* #2057[247.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x03DC*/    /* #2058[247.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x03D3*/    /* #2059[247.9] */
RegWrite(0x47, 2, 0x9800);    /* #2060[247.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x03BF*/    /* #2061[248.0] */
RegWrite(0x47, 2, 0x9000);    /* #2062[248.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x03AA*/    /* #2063[248.0] */
RegWrite(0x47, 2, 0x8800);    /* #2064[248.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0394*/    /* #2065[248.1] */
RegWrite(0x47, 2, 0x8000);    /* #2066[248.1] */
RegWrite(0x43, 1, 0x07);    /* #2067[248.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0371*/    /* #2068[248.1] */
RegWrite(0x47, 2, 0x7800);    /* #2069[248.1] */
RegWrite(0x43, 1, 0x07);    /* #2070[248.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x034C*/    /* #2071[248.2] */
RegWrite(0x47, 2, 0x7000);    /* #2072[248.2] */
RegWrite(0x43, 1, 0x07);    /* #2073[248.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0320*/    /* #2074[248.2] */
RegWrite(0x47, 2, 0x6800);    /* #2075[248.2] */
RegWrite(0x43, 1, 0x07);    /* #2076[248.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x02FC*/    /* #2077[248.3] */
RegWrite(0x47, 2, 0x6000);    /* #2078[248.3] */
RegWrite(0x43, 1, 0x07);    /* #2079[248.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x02B0*/    /* #2080[248.4] */
RegWrite(0x47, 2, 0x5800);    /* #2081[248.4] */
RegWrite(0x43, 1, 0x07);    /* #2082[248.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0271*/    /* #2083[248.4] */
RegWrite(0x47, 2, 0x5000);    /* #2084[248.4] */
RegWrite(0x43, 1, 0x07);    /* #2085[248.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0247*/    /* #2086[248.5] */
RegWrite(0x47, 2, 0x40C0);    /* #2087[248.5] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2088[248.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2089[248.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2090[248.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2091[249.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2092[249.0] */
RegWrite(0x43, 1, 0x03);    /* #2093[249.0] */
RegWrite(R_CTL, 1, 0x39);    /* #2094[249.0] */
