ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1194[031.5] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #1195[031.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1196[031.5] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #1197[031.5] */
RegWrite(0x32, 2, 0x354D);    /* #1198[031.5] */
{
 unsigned char uchRegs1199[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1199);
}    /* #1199[031.5] */
RegWrite(0x43, 1, 0x03);    /* #1200[031.5] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #1201[031.5] */
RegWrite(R_CCAL, 3, 0x848890);    /* #1202[031.5] */
RegWrite(0x32, 2, 0x354D);    /* #1203[031.5] */
RegWrite(0x32, 2, 0x354D);    /* #1204[031.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1205[031.5] */
RegWrite(0x32, 2, 0x354D);    /* #1206[031.5] */
RegWrite(0x34, 1, 0x63);    /* #1207[031.5] */
RegWrite(0x49, 1, 0x9E);    /* #1208[031.5] */
{
 unsigned char uchRegs1209[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0x64,
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
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x90, /*R_CCAL2*/ 0x88,
   /*R_CCAL3*/ 0x84, /*0x32*/ 0x4D, /*0x33*/ 0x35,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs1209);
}    /* #1209[031.5] */
RegWrite(R_CTL, 1, 0x39);    /* #1210[031.6] */
RegWrite(R_CTL, 1, 0x79);    /* #1211[031.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #1212[031.6] */
RegWrite(0x32, 2, 0x354D);    /* #1213[031.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1214[031.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1215[031.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1216[031.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1217[031.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1218[031.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1219[031.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1220[031.9] */
RegWrite(R_LMP, 1, 0x01);    /* #1221[031.9] */
RegWrite(R_LMP, 1, 0x01);    /* #1222[031.9] */
RegWrite(0x34, 1, 0x63);    /* #1223[031.9] */
RegWrite(0x49, 1, 0x96);    /* #1224[031.9] */
{
 unsigned char uchRegs1225[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0xEC, /*R_SWIDH*/ 0x13, /*R_STPS*/ 0x26,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x3F,
   /*R_LEN*/ 0x02, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
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
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x90, /*R_CCAL2*/ 0x88,
   /*R_CCAL3*/ 0x84, /*0x32*/ 0x4D, /*0x33*/ 0x35,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x59, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs1225);
}    /* #1225[031.9] */
RegWrite(R_CTL, 1, 0x59);    /* #1226[031.9] */
RegWrite(R_CTL, 1, 0xD9);    /* #1227[031.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1228[031.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1229[032.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1230[032.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1231[032.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1232[032.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1233[032.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1234[032.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1235[032.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1236[032.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1237[032.2] */
BulkRead(fh,10200);   /* #1238[032.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1239[032.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1240[032.2] */
RegWrite(R_CTL, 1, 0x59);    /* #1241[032.2] */
RegWrite(R_CTL, 1, 0xD9);    /* #1242[032.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1243[032.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1244[032.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1245[032.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1246[032.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1247[032.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1248[032.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1249[032.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0481*/    /* #1250[032.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1251[032.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1252[032.5] */
BulkRead(fh,10200);   /* #1253[032.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1254[032.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1255[032.5] */
RegWrite(R_CTL, 1, 0x59);    /* #1256[032.5] */
RegWrite(R_CTL, 1, 0xD9);    /* #1257[032.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1258[032.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1259[032.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1260[032.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1261[032.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1262[032.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1263[032.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1264[032.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x09F6*/    /* #1265[032.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1266[032.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1267[032.8] */
BulkRead(fh,10200);   /* #1268[032.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1269[032.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1270[032.9] */
{
 unsigned char uchRegs1271[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0xEC, /*R_SWIDH*/ 0x13, /*R_STPS*/ 0x03,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x3F,
   /*R_LEN*/ 0x02, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
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
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x90, /*R_CCAL2*/ 0x88,
   /*R_CCAL3*/ 0x84, /*0x32*/ 0x4D, /*0x33*/ 0x35,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x59, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs1271);
}    /* #1271[032.9] */
RegWrite(0x34, 1, 0x63);    /* #1272[032.9] */
RegWrite(0x49, 1, 0x96);    /* #1273[032.9] */
RegWrite(R_CTL, 1, 0x59);    /* #1274[032.9] */
RegWrite(R_CTL, 1, 0xD9);    /* #1275[032.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1276[032.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1277[033.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1278[033.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1279[033.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1280[033.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1281[033.0] */
BulkRead(fh,10200);   /* #1282[033.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1283[033.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1284[033.0] */
RegWrite(R_CTL, 1, 0x59);    /* #1285[033.0] */
RegWrite(R_CTL, 1, 0xD9);    /* #1286[033.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1287[033.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1288[033.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1289[033.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1290[033.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1291[033.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1292[033.2] */
BulkRead(fh,10200);   /* #1293[033.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1294[033.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1295[033.3] */
RegWrite(R_CTL, 1, 0x59);    /* #1296[033.3] */
RegWrite(R_CTL, 1, 0xD9);    /* #1297[033.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1298[033.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1299[033.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1300[033.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1301[033.4] */
BulkRead(fh,10200);   /* #1302[033.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1303[033.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1304[033.4] */
RegWrite(R_CTL, 1, 0x59);    /* #1305[033.4] */
RegWrite(R_CTL, 1, 0xD9);    /* #1306[033.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1307[033.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1308[033.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1309[033.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1310[033.5] */
BulkRead(fh,10200);   /* #1311[033.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1312[033.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1313[033.5] */
RegWrite(R_CTL, 1, 0x59);    /* #1314[033.5] */
RegWrite(R_CTL, 1, 0xD9);    /* #1315[033.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1316[033.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1317[033.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1318[033.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1319[033.6] */
BulkRead(fh,10200);   /* #1320[033.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1321[033.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1322[033.6] */
RegWrite(R_CTL, 1, 0x59);    /* #1323[033.6] */
RegWrite(R_CTL, 1, 0xD9);    /* #1324[033.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1325[033.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1326[033.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1327[033.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1328[033.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1329[033.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1330[033.8] */
BulkRead(fh,10200);   /* #1331[033.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1332[033.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1333[033.8] */
RegWrite(R_CTL, 1, 0x59);    /* #1334[033.8] */
RegWrite(R_CTL, 1, 0xD9);    /* #1335[033.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1336[033.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1337[033.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1338[033.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1339[033.9] */
BulkRead(fh,10200);   /* #1340[033.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1341[033.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1342[033.9] */
RegWrite(0x34, 1, 0x63);    /* #1343[033.9] */
RegWrite(0x49, 1, 0x96);    /* #1344[033.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1345[033.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1346[033.9] */
RegWrite(0x32, 2, 0x354D);    /* #1347[033.9] */
{
 unsigned char uchRegs1348[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1348);
}    /* #1348[034.0] */
RegWrite(0x43, 1, 0x03);    /* #1349[034.0] */
RegWrite(R_CCAL, 3, 0x808080);    /* #1350[034.0] */
RegWrite(0x32, 2, 0x354D);    /* #1351[034.0] */
RegWrite(0x32, 2, 0x354D);    /* #1352[034.0] */
RegWrite(R_LMP, 1, 0x01);    /* #1353[034.0] */
RegWrite(R_LMP, 1, 0x01);    /* #1354[034.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1355[034.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1356[034.0] */
RegWrite(R_CTL, 1, 0x39);    /* #1357[034.0] */
RegWrite(0x34, 1, 0x83);    /* #1358[034.0] */
RegWrite(0x49, 1, 0x9E);    /* #1359[034.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1360[034.0] */
RegWrite(0x32, 2, 0x354D);    /* #1361[034.0] */
RegWrite(0x34, 1, 0x63);    /* #1362[034.0] */
RegWrite(0x49, 1, 0x9E);    /* #1363[034.0] */
{
 unsigned char uchRegs1364[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x4D, /*0x33*/ 0x35,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs1364);
}    /* #1364[034.0] */
RegWrite(R_CTL, 1, 0x39);    /* #1365[034.0] */
RegWrite(R_CTL, 1, 0x79);    /* #1366[034.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #1367[034.0] */
RegWrite(0x32, 2, 0x354D);    /* #1368[034.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1369[034.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1370[034.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1371[034.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1372[034.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1373[034.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1374[034.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1375[034.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1376[034.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1377[034.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1378[034.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1379[034.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1380[034.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1381[034.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1382[034.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1383[034.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1384[034.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1385[035.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1386[035.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1387[035.1] */
RegWrite(0x43, 1, 0x03);    /* #1388[035.1] */
RegWrite(R_CTL, 1, 0x39);    /* #1389[035.1] */
RegWrite(0x34, 1, 0x83);    /* #1390[035.1] */
RegWrite(0x49, 1, 0x9E);    /* #1391[035.1] */
{
 unsigned char uchRegs1392[]={
   /*R_SPOS*/ 0xF6, /*R_SPOSH*/ 0x00, /*0x03*/ 0x20,
   /*R_SWID*/ 0x5C, /*R_SWIDH*/ 0xD3, /*R_STPS*/ 0x06,
   /*R_STPSH*/ 0x00, /*0x08*/ 0xFF, /*0x09*/ 0xFF,
   /*R_LEN*/ 0x98, /*R_LENH*/ 0x1B, /*0x0C*/ 0x6D,
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x4D, /*0x33*/ 0x35,
   /*0x34*/ 0x83, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs1392);
}    /* #1392[035.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1393[035.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1394[035.1] */
RegWrite(R_CTL, 1, 0x39);    /* #1395[035.1] */
RegWrite(R_CTL, 1, 0x79);    /* #1396[035.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #1397[035.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1398[035.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1399[035.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1400[035.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1401[035.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1402[035.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x17E5*/    /* #1403[035.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1404[035.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x300F*/    /* #1405[035.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1406[035.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4AF3*/    /* #1407[035.4] */
BulkRead(fh,32768);   /* #1408[035.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1409[035.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2152*/    /* #1410[035.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1411[035.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BEC*/    /* #1412[035.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1413[035.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40F9*/    /* #1414[035.6] */
BulkRead(fh,32768);   /* #1415[035.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1416[035.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1475*/    /* #1417[035.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1418[035.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B78*/    /* #1419[035.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1420[035.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3188*/    /* #1421[035.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1422[035.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x467F*/    /* #1423[035.7] */
BulkRead(fh,32768);   /* #1424[035.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1425[035.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1603*/    /* #1426[035.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1427[035.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x213D*/    /* #1428[035.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1429[035.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3967*/    /* #1430[035.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1431[035.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x53E7*/    /* #1432[036.0] */
BulkRead(fh,32768);   /* #1433[036.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1434[036.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x28F3*/    /* #1435[036.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1436[036.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x33F2*/    /* #1437[036.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1438[036.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C58*/    /* #1439[036.1] */
BulkRead(fh,32768);   /* #1440[036.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1441[036.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C78*/    /* #1442[036.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1443[036.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23E2*/    /* #1444[036.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1445[036.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3982*/    /* #1446[036.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1447[036.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x559E*/    /* #1448[036.3] */
BulkRead(fh,32768);   /* #1449[036.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1450[036.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2548*/    /* #1451[036.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1452[036.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31AE*/    /* #1453[036.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1454[036.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D95*/    /* #1455[036.5] */
BulkRead(fh,32768);   /* #1456[036.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1457[036.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25BF*/    /* #1458[036.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1459[036.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35E2*/    /* #1460[036.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1461[036.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4AB3*/    /* #1462[036.6] */
BulkRead(fh,32768);   /* #1463[036.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1464[036.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19F9*/    /* #1465[036.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1466[036.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20AE*/    /* #1467[036.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1468[036.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3645*/    /* #1469[036.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1470[036.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x52CE*/    /* #1471[036.8] */
BulkRead(fh,32768);   /* #1472[036.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1473[036.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2214*/    /* #1474[036.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1475[036.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D4E*/    /* #1476[036.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1477[037.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4895*/    /* #1478[037.0] */
BulkRead(fh,32768);   /* #1479[037.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1480[037.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x191C*/    /* #1481[037.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1482[037.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23B7*/    /* #1483[037.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1484[037.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3DD3*/    /* #1485[037.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1486[037.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x540B*/    /* #1487[037.2] */
BulkRead(fh,32768);   /* #1488[037.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1489[037.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23CA*/    /* #1490[037.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1491[037.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A6A*/    /* #1492[037.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1493[037.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3FDA*/    /* #1494[037.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1495[037.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x56D8*/    /* #1496[037.3] */
BulkRead(fh,32768);   /* #1497[037.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1498[037.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26A4*/    /* #1499[037.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1500[037.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3132*/    /* #1501[037.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1502[037.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4EA9*/    /* #1503[037.5] */
BulkRead(fh,32768);   /* #1504[037.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1505[037.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2083*/    /* #1506[037.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1507[037.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AF5*/    /* #1508[037.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1509[037.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x431F*/    /* #1510[037.7] */
BulkRead(fh,32768);   /* #1511[037.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1512[037.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1728*/    /* #1513[037.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1514[037.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E06*/    /* #1515[037.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1516[037.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x343B*/    /* #1517[037.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1518[037.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x49D2*/    /* #1519[037.8] */
BulkRead(fh,32768);   /* #1520[037.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1521[037.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1955*/    /* #1522[037.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1523[037.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x248F*/    /* #1524[038.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1525[038.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E0C*/    /* #1526[038.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1527[038.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x569A*/    /* #1528[038.1] */
BulkRead(fh,32768);   /* #1529[038.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1530[038.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2977*/    /* #1531[038.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FC7*/    /* #1532[038.1] */
RegWrite(0x43, 1, 0x03);    /* #1533[038.1] */
RegWrite(0x43, 1, 0x03);    /* #1534[038.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1375*/    /* #1535[038.6] */
RegWrite(R_CTL, 1, 0x39);    /* #1536[038.6] */
{
 unsigned char uchRegs1537[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x4D, /*0x33*/ 0x35,
   /*0x34*/ 0x83, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x80, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs1537);
}    /* #1537[038.6] */
RegWrite(R_CTL, 1, 0x39);    /* #1538[038.6] */
RegWrite(R_CTL, 1, 0x79);    /* #1539[038.7] */
RegWrite(R_CTL, 1, 0xF9);    /* #1540[038.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1541[038.7] */
RegWrite(R_CTL, 1, 0x39);    /* #1542[038.7] */
RegWrite(0x43, 1, 0x07);    /* #1543[038.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1544[038.7] */
RegWrite(0x32, 2, 0x354D);    /* #1545[038.7] */
RegWrite(0x34, 1, 0xC3);    /* #1546[038.7] */
RegWrite(0x49, 1, 0x9E);    /* #1547[038.7] */
{
 unsigned char uchRegs1548[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0xBB,
   /*R_STPSH*/ 0x09, /*0x08*/ 0x00, /*0x09*/ 0x00,
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x4D, /*0x33*/ 0x35,
   /*0x34*/ 0xC3, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x07, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs1548);
}    /* #1548[038.7] */
RegWrite(0x43, 1, 0x03);    /* #1549[038.7] */
RegWrite(R_STPS, 2, 0x0000);    /* #1550[038.7] */
RegWrite(R_LEN, 2, 0x09BB);    /* #1551[038.7] */
RegWrite(0x47, 2, 0xA000);    /* #1552[038.7] */
RegWrite(0x34, 1, 0xC3);    /* #1553[038.7] */
RegWrite(0x49, 1, 0x9E);    /* #1554[038.7] */
RegWrite(R_CTL, 1, 0x19);    /* #1555[038.7] */
RegWrite(R_CTL, 1, 0x59);    /* #1556[038.7] */
RegWrite(R_CTL, 1, 0xD9);    /* #1557[038.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #1558[038.7] */
RegWrite(0x47, 2, 0xA000);    /* #1559[038.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x09B8*/    /* #1560[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x09B6*/    /* #1561[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x09B4*/    /* #1562[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x09B2*/    /* #1563[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x09B0*/    /* #1564[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x09AE*/    /* #1565[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x09AC*/    /* #1566[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x09AA*/    /* #1567[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x09A8*/    /* #1568[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x09A6*/    /* #1569[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x09A4*/    /* #1570[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x09A2*/    /* #1571[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x09A1*/    /* #1572[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x099F*/    /* #1573[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x099D*/    /* #1574[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x099B*/    /* #1575[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0999*/    /* #1576[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0997*/    /* #1577[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0995*/    /* #1578[038.8] */
RegWrite(0x47, 2, 0x9800);    /* #1579[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0992*/    /* #1580[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0990*/    /* #1581[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x098E*/    /* #1582[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x098B*/    /* #1583[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0989*/    /* #1584[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0987*/    /* #1585[038.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0985*/    /* #1586[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0983*/    /* #1587[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0981*/    /* #1588[038.9] */
RegWrite(0x47, 2, 0x9000);    /* #1589[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x097C*/    /* #1590[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0979*/    /* #1591[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0977*/    /* #1592[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0975*/    /* #1593[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0973*/    /* #1594[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0971*/    /* #1595[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x096D*/    /* #1596[038.9] */
RegWrite(0x47, 2, 0x8800);    /* #1597[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0962*/    /* #1598[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x095F*/    /* #1599[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0958*/    /* #1600[038.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0955*/    /* #1601[038.9] */
RegWrite(0x47, 2, 0x8000);    /* #1602[039.0] */
RegWrite(0x43, 1, 0x07);    /* #1603[039.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0942*/    /* #1604[039.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x093F*/    /* #1605[039.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x093C*/    /* #1606[039.0] */
RegWrite(0x47, 2, 0x7800);    /* #1607[039.0] */
RegWrite(0x43, 1, 0x07);    /* #1608[039.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x092E*/    /* #1609[039.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x092A*/    /* #1610[039.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0927*/    /* #1611[039.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0922*/    /* #1612[039.0] */
RegWrite(0x47, 2, 0x7000);    /* #1613[039.0] */
RegWrite(0x43, 1, 0x07);    /* #1614[039.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0910*/    /* #1615[039.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x090D*/    /* #1616[039.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0902*/    /* #1617[039.1] */
RegWrite(0x47, 2, 0x6800);    /* #1618[039.1] */
RegWrite(0x43, 1, 0x07);    /* #1619[039.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x08E5*/    /* #1620[039.1] */
RegWrite(0x47, 2, 0x6000);    /* #1621[039.1] */
RegWrite(0x43, 1, 0x07);    /* #1622[039.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x08D1*/    /* #1623[039.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x08C4*/    /* #1624[039.1] */
RegWrite(0x47, 2, 0x5800);    /* #1625[039.1] */
RegWrite(0x43, 1, 0x07);    /* #1626[039.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x08B4*/    /* #1627[039.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x08A3*/    /* #1628[039.2] */
RegWrite(0x47, 2, 0x5000);    /* #1629[039.2] */
RegWrite(0x43, 1, 0x07);    /* #1630[039.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0895*/    /* #1631[039.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0891*/    /* #1632[039.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x088D*/    /* #1633[039.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0889*/    /* #1634[039.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0886*/    /* #1635[039.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0882*/    /* #1636[039.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x087E*/    /* #1637[039.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x087A*/    /* #1638[039.2] */
RegWrite(0x47, 2, 0x40C0);    /* #1639[039.2] */
RegWrite(0x32, 2, 0x354D);    /* #1640[039.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1641[039.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1642[039.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1643[039.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1644[039.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1645[039.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1646[040.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1647[040.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1648[040.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1649[040.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1650[040.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1651[040.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1652[040.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1653[040.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1654[040.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1655[041.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1656[041.0] */
RegWrite(0x43, 1, 0x03);    /* #1657[041.0] */
RegWrite(R_CTL, 1, 0x39);    /* #1658[041.0] */
