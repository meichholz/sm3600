ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1470[239.4] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1471[239.4] */
RegWrite(R_SPD, 1, 0x03);    /* #1472[239.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1473[241.6] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1474[241.6] */
RegWrite(R_SPD, 1, 0x03);    /* #1475[241.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1476[242.8] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #1477[242.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1478[242.8] */
RegWrite(R_LEN, 2, 0x2D0C);    /* #1479[242.8] */
{
 unsigned char uchRegs1480[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x10 /*0x04*/, 0xC0 /*0x05*/, 0x00 /*0x06*/,
   0x00 /*0x07*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
   0x20 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x81 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4B /*0x1E*/,
   0x4D /*0x1F*/, 0x00 /*0x20*/, 0x3C /*0x21*/,
   0x01 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x7C /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x78 /*R_CCAL3*/, 0x0C /*R_LEN*/, 0x2D /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1480);
}    /* #1480[242.8] */
RegWrite(R_SPD, 1, 0x03);    /* #1481[242.8] */
RegWrite(R_CCAL, 3, 0x78887C);    /* #1482[242.8] */
RegWrite(R_LEN, 2, 0x2D0C);    /* #1483[242.8] */
RegWrite(R_LEN, 2, 0x2D0C);    /* #1484[242.8] */
RegWrite(0x44, 1, 0x01);    /* #1485[242.9] */
RegWrite(0x44, 1, 0x01);    /* #1486[242.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1487[242.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1488[242.9] */
RegWrite(R_CTL, 1, 0x39);    /* #1489[242.9] */
RegWrite(0x34, 1, 0xC3);    /* #1490[242.9] */
RegWrite(0x49, 1, 0x9E);    /* #1491[242.9] */
{
 unsigned char uchRegs1492[]={
   0x66 /*!!0x01!!*/, 0x00 /*0x02*/, 0x20 /*!!0x03!!*/,
   0xEC /*!!0x04!!*/, 0xD3 /*!!0x05!!*/, 0xA0 /*!!0x06!!*/,
   0x01 /*!!0x07!!*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
   0xA8 /*!!0x0A!!*/, 0x1B /*!!0x0B!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x81 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4B /*0x1E*/,
   0x4D /*0x1F*/, 0x00 /*0x20*/, 0x3C /*0x21*/,
   0x01 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x7C /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x78 /*R_CCAL3*/, 0x0C /*R_LEN*/, 0x2D /*R_LENH*/,
   0xC3 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1492);
}    /* #1492[242.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1493[242.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1494[242.9] */
RegWrite(R_SPD, 1, 0x03);    /* #1495[242.9] */
RegWrite(0x06, 2, 0x0000);    /* #1496[242.9] */
RegWrite(0x0A, 2, 0x1D48);    /* #1497[242.9] */
RegWrite(0x47, 2, 0xA000);    /* #1498[242.9] */
RegWrite(0x34, 1, 0xC3);    /* #1499[242.9] */
RegWrite(0x49, 1, 0x9E);    /* #1500[242.9] */
RegWrite(R_CTL, 1, 0x39);    /* #1501[242.9] */
RegWrite(R_CTL, 1, 0x79);    /* #1502[242.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #1503[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #1504[243.0] */
RegWrite(0x47, 2, 0xA000);    /* #1505[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #1506[243.0] */
RegWrite(0x47, 2, 0x9800);    /* #1507[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D45*/    /* #1508[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D44*/    /* #1509[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D42*/    /* #1510[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D40*/    /* #1511[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D3E*/    /* #1512[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D3C*/    /* #1513[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D3A*/    /* #1514[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D38*/    /* #1515[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D36*/    /* #1516[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D34*/    /* #1517[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D32*/    /* #1518[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D30*/    /* #1519[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D2E*/    /* #1520[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D2C*/    /* #1521[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D2A*/    /* #1522[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D28*/    /* #1523[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D26*/    /* #1524[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D24*/    /* #1525[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D22*/    /* #1526[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D20*/    /* #1527[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D1E*/    /* #1528[243.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D1C*/    /* #1529[243.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D1B*/    /* #1530[243.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D19*/    /* #1531[243.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D17*/    /* #1532[243.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D0F*/    /* #1533[243.1] */
RegWrite(0x47, 2, 0x9000);    /* #1534[243.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D04*/    /* #1535[243.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D02*/    /* #1536[243.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CF9*/    /* #1537[243.1] */
RegWrite(0x47, 2, 0x8800);    /* #1538[243.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CEE*/    /* #1539[243.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CEC*/    /* #1540[243.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CE3*/    /* #1541[243.2] */
RegWrite(0x47, 2, 0x8000);    /* #1542[243.2] */
RegWrite(R_SPD, 1, 0x07);    /* #1543[243.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CD5*/    /* #1544[243.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CD0*/    /* #1545[243.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CCC*/    /* #1546[243.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CC9*/    /* #1547[243.2] */
RegWrite(0x47, 2, 0x7800);    /* #1548[243.2] */
RegWrite(R_SPD, 1, 0x07);    /* #1549[243.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CBA*/    /* #1550[243.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CB3*/    /* #1551[243.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CA6*/    /* #1552[243.3] */
RegWrite(0x47, 2, 0x7000);    /* #1553[243.3] */
RegWrite(R_SPD, 1, 0x07);    /* #1554[243.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C8C*/    /* #1555[243.3] */
RegWrite(0x47, 2, 0x6800);    /* #1556[243.3] */
RegWrite(R_SPD, 1, 0x07);    /* #1557[243.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C7B*/    /* #1558[243.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C70*/    /* #1559[243.3] */
RegWrite(0x47, 2, 0x6000);    /* #1560[243.3] */
RegWrite(R_SPD, 1, 0x07);    /* #1561[243.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C4E*/    /* #1562[243.4] */
RegWrite(0x47, 2, 0x5800);    /* #1563[243.4] */
RegWrite(R_SPD, 1, 0x07);    /* #1564[243.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C2F*/    /* #1565[243.4] */
RegWrite(0x47, 2, 0x5000);    /* #1566[243.4] */
RegWrite(R_SPD, 1, 0x07);    /* #1567[243.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C19*/    /* #1568[243.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C0A*/    /* #1569[243.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x1BF7*/    /* #1570[243.5] */
RegWrite(0x47, 2, 0x40C0);    /* #1571[243.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1572[243.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x71EA*/    /* #1573[243.5] */
BulkRead(fh,32768);   /* #1574[243.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1575[244.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xEE64*/    /* #1576[244.0] */
BulkRead(fh,32768);   /* #1577[244.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1578[244.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1579[244.5] */
BulkRead(fh,32768);   /* #1580[245.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1582[245.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1583[245.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1587[245.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1588[245.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1589[245.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1603[247.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1604[247.5] */
BulkRead(fh,32768);   /* #1605[248.1] */
BulkRead(fh,32768);   /* #1610[248.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1614[248.7] */
BulkRead(fh,32768);   /* #1615[250.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1633[251.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1634[251.1] */
BulkRead(fh,32768);   /* #1635[252.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1653[253.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1654[253.5] */
BulkRead(fh,32768);   /* #1655[254.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1659[254.1] */
BulkRead(fh,32768);   /* #1660[254.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1664[254.7] */
BulkRead(fh,32768);   /* #1665[255.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1683[257.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1684[257.1] */
BulkRead(fh,32768);   /* #1685[259.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1717[262.4] */
BulkRead(fh,32768);   /* #1718[265.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D3B*/    /* #1764[265.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D39*/    /* #1765[265.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CF6*/    /* #1777[265.3] */
RegWrite(0x47, 2, 0x8800);    /* #1778[265.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CE8*/    /* #1779[265.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C93*/    /* #1793[265.5] */
RegWrite(0x47, 2, 0x6800);    /* #1794[265.5] */
RegWrite(R_SPD, 1, 0x07);    /* #1795[265.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1813[265.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1814[266.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1815[266.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1824[266.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1825[267.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1826[267.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1827[267.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1828[267.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1829[267.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1830[267.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1831[267.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1832[267.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1833[267.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1834[267.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1835[268.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1836[268.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1837[268.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1838[268.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1839[268.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1840[268.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1841[268.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1843[268.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1844[268.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1845[268.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1846[269.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1847[269.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1848[269.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1849[269.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1850[269.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1851[269.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1852[269.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1853[269.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1854[269.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1855[269.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1856[270.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1857[270.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1858[270.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1859[270.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1860[270.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1861[270.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1862[270.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1863[270.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1864[270.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1865[270.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1868[271.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1869[271.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1870[271.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1871[271.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1872[271.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1873[271.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1874[271.6] */
RegWrite(R_SPD, 1, 0x03);    /* #1875[271.6] */
RegWrite(R_CTL, 1, 0x39);    /* #1876[271.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1877[272.9] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1878[272.9] */
RegWrite(R_SPD, 1, 0x03);    /* #1879[272.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1880[275.0] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1881[275.0] */
RegWrite(R_SPD, 1, 0x03);    /* #1882[275.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1883[277.3] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1884[277.4] */
RegWrite(R_SPD, 1, 0x03);    /* #1885[277.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1886[279.5] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1887[279.5] */
RegWrite(R_SPD, 1, 0x03);    /* #1888[279.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1889[281.7] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1890[281.7] */
RegWrite(R_SPD, 1, 0x03);    /* #1891[281.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1892[283.9] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1893[283.9] */
RegWrite(R_SPD, 1, 0x03);    /* #1894[283.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1895[286.1] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1896[286.1] */
RegWrite(R_SPD, 1, 0x03);    /* #1897[286.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1898[288.3] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1899[288.3] */
RegWrite(R_SPD, 1, 0x03);    /* #1900[288.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1901[290.4] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1902[290.5] */
RegWrite(R_SPD, 1, 0x03);    /* #1903[290.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1904[292.6] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1905[292.7] */
RegWrite(R_SPD, 1, 0x03);    /* #1906[292.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1907[294.8] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1908[294.8] */
RegWrite(R_SPD, 1, 0x03);    /* #1909[294.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1910[297.1] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1911[297.1] */
RegWrite(R_SPD, 1, 0x03);    /* #1912[297.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1913[299.3] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1914[299.3] */
RegWrite(R_SPD, 1, 0x03);    /* #1915[299.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1916[301.4] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1917[301.4] */
RegWrite(R_SPD, 1, 0x03);    /* #1918[301.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1919[303.6] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1920[303.6] */
RegWrite(R_SPD, 1, 0x03);    /* #1921[303.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1922[305.8] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1923[305.8] */
RegWrite(R_SPD, 1, 0x03);    /* #1924[305.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1925[308.0] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1926[308.0] */
RegWrite(R_SPD, 1, 0x03);    /* #1927[308.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1928[310.2] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1929[310.3] */
RegWrite(R_SPD, 1, 0x03);    /* #1930[310.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1931[312.4] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1932[312.4] */
RegWrite(R_SPD, 1, 0x03);    /* #1933[312.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1934[314.7] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1935[314.7] */
RegWrite(R_SPD, 1, 0x03);    /* #1936[314.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1937[316.8] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1938[316.8] */
RegWrite(R_SPD, 1, 0x03);    /* #1939[316.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1940[319.0] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1941[319.0] */
RegWrite(R_SPD, 1, 0x03);    /* #1942[319.0] */
