ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1075[017.5] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1076[017.5] */
RegWrite(R_SPD, 1, 0x03);    /* #1077[017.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1078[019.6] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1079[019.6] */
RegWrite(R_SPD, 1, 0x03);    /* #1080[019.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1081[021.6] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1082[021.6] */
RegWrite(R_SPD, 1, 0x03);    /* #1083[021.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1084[023.8] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1085[023.8] */
RegWrite(R_SPD, 1, 0x03);    /* #1086[023.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1087[026.0] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1088[026.0] */
RegWrite(R_SPD, 1, 0x03);    /* #1089[026.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1090[028.2] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1091[028.2] */
RegWrite(R_SPD, 1, 0x03);    /* #1092[028.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1093[030.4] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1094[030.4] */
RegWrite(R_SPD, 1, 0x03);    /* #1095[030.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1096[032.4] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1097[032.4] */
RegWrite(R_SPD, 1, 0x03);    /* #1098[032.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1099[034.6] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1100[034.6] */
RegWrite(R_SPD, 1, 0x03);    /* #1101[034.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1102[036.8] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1103[036.8] */
RegWrite(R_SPD, 1, 0x03);    /* #1104[036.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1105[039.0] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1106[039.0] */
RegWrite(R_SPD, 1, 0x03);    /* #1107[039.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1108[040.8] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #1109[040.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1110[040.9] */
ulVal1 = RegRead(0x44, 1); /*=0x01*/    /* #1111[040.9] */
RegWrite(R_LEN, 2, 0x24E9);    /* #1112[040.9] */
{
 unsigned char uchRegs1113[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x10 /*0x04*/, 0xC0 /*0x05*/, 0x00 /*0x06*/,
   0x00 /*0x07*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
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
   0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1113);
}    /* #1113[040.9] */
RegWrite(R_SPD, 1, 0x03);    /* #1114[040.9] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #1115[040.9] */
RegWrite(R_CCAL, 3, 0x848888);    /* #1116[040.9] */
RegWrite(R_LEN, 2, 0x24E9);    /* #1117[040.9] */
RegWrite(R_LEN, 2, 0x24E9);    /* #1118[040.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1119[040.9] */
RegWrite(R_LEN, 2, 0x24E9);    /* #1120[040.9] */
RegWrite(0x34, 1, 0x63);    /* #1121[040.9] */
RegWrite(0x49, 1, 0x9E);    /* #1122[041.0] */
{
 unsigned char uchRegs1123[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x64 /*!!0x06!!*/,
   0x00 /*0x07*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
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
   0x84 /*!!R_CCAL3!!*/, 0xE9 /*!!R_LEN!!*/, 0x24 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1123);
}    /* #1123[041.0] */
RegWrite(R_CTL, 1, 0x39);    /* #1124[041.0] */
RegWrite(R_CTL, 1, 0x79);    /* #1125[041.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #1126[041.0] */
RegWrite(R_LEN, 2, 0x24E9);    /* #1127[041.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1128[041.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1129[041.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1130[041.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1131[041.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1132[041.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1133[041.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1134[041.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1135[041.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1136[041.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1137[041.5] */
RegWrite(0x44, 1, 0x01);    /* #1138[041.5] */
RegWrite(0x44, 1, 0x01);    /* #1139[041.6] */
RegWrite(0x34, 1, 0x63);    /* #1140[041.6] */
RegWrite(0x49, 1, 0x96);    /* #1141[041.6] */
{
 unsigned char uchRegs1142[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0xEC /*!!0x04!!*/, 0x13 /*!!0x05!!*/, 0x26 /*!!0x06!!*/,
   0x00 /*0x07*/, 0x00 /*0x08*/, 0x3F /*!!0x09!!*/,
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
   0x84 /*R_CCAL3*/, 0xE9 /*R_LEN*/, 0x24 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
   0x59 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1142);
}    /* #1142[041.6] */
RegWrite(R_CTL, 1, 0x59);    /* #1143[041.6] */
RegWrite(R_CTL, 1, 0xD9);    /* #1144[041.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1145[041.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1146[041.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1147[041.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1148[041.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1149[041.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1150[041.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1151[041.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1152[041.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1153[041.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1154[041.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1155[041.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1156[042.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1157[042.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1158[042.0] */
BulkRead(fh,10200);   /* #1159[042.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1160[042.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1161[042.2] */
{
 unsigned char uchRegs1162[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0xEC /*0x04*/, 0x13 /*0x05*/, 0x03 /*!!0x06!!*/,
   0x00 /*0x07*/, 0x00 /*0x08*/, 0x3F /*0x09*/,
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
   0x84 /*R_CCAL3*/, 0xE9 /*R_LEN*/, 0x24 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
   0x59 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1162);
}    /* #1162[042.2] */
RegWrite(0x34, 1, 0x63);    /* #1163[042.2] */
RegWrite(0x49, 1, 0x96);    /* #1164[042.2] */
RegWrite(R_CTL, 1, 0x59);    /* #1165[042.2] */
RegWrite(R_CTL, 1, 0xD9);    /* #1166[042.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1167[042.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1168[042.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1169[042.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x129E*/    /* #1170[042.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1171[042.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1172[042.4] */
BulkRead(fh,10200);   /* #1173[042.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1174[042.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1175[042.6] */
RegWrite(R_CTL, 1, 0x59);    /* #1176[042.6] */
RegWrite(R_CTL, 1, 0xD9);    /* #1177[042.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1178[042.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1179[042.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1180[042.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1181[042.7] */
BulkRead(fh,10200);   /* #1182[042.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1183[042.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1184[042.9] */
RegWrite(R_CTL, 1, 0x59);    /* #1185[042.9] */
RegWrite(R_CTL, 1, 0xD9);    /* #1186[042.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1187[042.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1188[043.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1189[043.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1190[043.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1191[043.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1192[043.0] */
BulkRead(fh,10200);   /* #1193[043.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1194[043.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1195[043.3] */
RegWrite(R_CTL, 1, 0x59);    /* #1196[043.3] */
RegWrite(R_CTL, 1, 0xD9);    /* #1197[043.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1198[043.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1199[043.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1200[043.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1201[043.4] */
BulkRead(fh,10200);   /* #1202[043.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1203[043.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1204[043.6] */
RegWrite(R_CTL, 1, 0x59);    /* #1205[043.6] */
RegWrite(R_CTL, 1, 0xD9);    /* #1206[043.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1207[043.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1208[043.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1209[043.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1210[043.7] */
BulkRead(fh,10200);   /* #1211[043.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1212[043.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1213[043.9] */
RegWrite(R_CTL, 1, 0x59);    /* #1214[043.9] */
RegWrite(R_CTL, 1, 0xD9);    /* #1215[043.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1216[043.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1217[044.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1218[044.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1219[044.0] */
BulkRead(fh,10200);   /* #1220[044.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1221[044.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1222[044.2] */
RegWrite(R_CTL, 1, 0x59);    /* #1223[044.2] */
RegWrite(R_CTL, 1, 0xD9);    /* #1224[044.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1225[044.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1226[044.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1227[044.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1228[044.3] */
BulkRead(fh,10200);   /* #1229[044.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1237[044.6] */
BulkRead(fh,10200);   /* #1238[044.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1243[044.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1244[044.9] */
ulVal2 = RegRead(0xFFFFFFFF, 2); /*=0x0000*/    /* #1248[045.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1249[045.1] */
RegWrite(R_CTL, 1, 0x59);    /* #1250[045.1] */
RegWrite(0xFFFFFFFF, 1, 0xD9);    /* #1251[045.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1254[045.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #1255[045.2] */
BulkRead(fh,10200);   /* #1256[045.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1272[045.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1273[045.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1274[045.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1275[045.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1276[045.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1277[045.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1281[046.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1282[046.2] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x848888*/    /* #1283[046.2] */
RegWrite(R_LEN, 2, 0x24E9);    /* #1284[046.2] */
RegWrite(0x44, 1, 0x01);    /* #1290[046.2] */
RegWrite(0x44, 1, 0x01);    /* #1291[046.2] */
RegWrite(0xFFFFFFFF, 1, 0x39);    /* #1292[046.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #1299[046.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1300[046.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1302[046.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #1303[046.4] */
BulkRead(fh,3840);   /* #1304[046.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #1327[046.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1328[046.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1330[046.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #1331[046.8] */
BulkRead(fh,3840);   /* #1332[047.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1364[047.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0048*/    /* #1365[047.2] */
BulkRead(fh,144);   /* #1366[047.2] */
RegWrite(R_CCAL, 3, 0x8488A8);    /* #1370[047.2] */
{
 unsigned char uchRegs1371[]={
   0x19 /*!!0x01!!*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x18 /*!!0x04!!*/, 0xC0 /*!!0x05!!*/, 0x00 /*!!0x06!!*/,
   0x00 /*0x07*/, 0xFF /*!!0x08!!*/, 0xFF /*!!0x09!!*/,
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
   0x4E /*0x2E*/, 0xA8 /*!!R_CCAL!!*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*!!R_LEN!!*/, 0x29 /*!!R_LENH!!*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*R_SPD*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1371);
}    /* #1371[047.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1377[047.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1378[047.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0048*/    /* #1379[047.3] */
BulkRead(fh,144);   /* #1380[047.4] */
RegWrite(0x49, 1, 0x96);    /* #1387[047.4] */
RegWrite(R_CTL, 1, 0x79);    /* #1388[047.4] */
RegWrite(0xFFFFFFFF, 1, 0xF9);    /* #1389[047.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1414[047.7] */
ulVal2 = RegRead(R_LEN, 2); /*=0x290B*/    /* #1415[047.7] */
RegWrite(R_CTL, 1, 0xD9);    /* #1423[047.7] */
RegWrite(R_LEN, 2, 0x290B);    /* #1424[047.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1426[047.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1427[047.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1428[048.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1429[048.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1455[049.3] */
BulkRead(fh,32768);   /* #1456[049.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1458[049.9] */
BulkRead(fh,32768);   /* #1459[050.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1461[050.5] */
BulkRead(fh,32768);   /* #1462[051.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1464[051.2] */
BulkRead(fh,32768);   /* #1465[051.8] */
BulkRead(fh,32768);   /* #1468[052.4] */
BulkRead(fh,32768);   /* #1471[053.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1473[053.1] */
BulkRead(fh,32768);   /* #1474[053.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1476[053.7] */
BulkRead(fh,32768);   /* #1477[054.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1479[054.3] */
BulkRead(fh,32768);   /* #1480[054.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #1537[067.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1538[067.3] */
ulVal1 = RegRead(0xFFFFFFFF, 1); /*=0x39*/    /* #1543[067.3] */
RegWrite(R_LEN, 2, 0x290B);    /* #1544[067.3] */
RegWrite(0x34, 1, 0x63);    /* #1545[067.3] */
RegWrite(0xFFFFFFFF, 1, 0x9E);    /* #1546[067.4] */
RegWrite(R_LEN, 2, 0x290B);    /* #1551[067.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1552[067.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1553[067.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1554[067.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1555[067.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1556[067.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1557[067.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1558[067.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1559[068.2] */
RegWrite(0x44, 1, 0x01);    /* #1560[068.2] */
RegWrite(0x44, 1, 0x01);    /* #1561[068.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1573[068.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1574[068.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1575[068.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1576[068.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1577[068.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1578[068.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1582[068.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1583[068.9] */
RegWrite(R_LEN, 2, 0x290B);    /* #1584[068.9] */
RegWrite(0x44, 1, 0x01);    /* #1585[068.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1588[069.0] */
RegWrite(R_CTL, 1, 0x39);    /* #1589[069.0] */
RegWrite(0xFFFFFFFF, 1, 0x63);    /* #1590[069.0] */
RegWrite(0x49, 1, 0x9E);    /* #1596[069.0] */
{
 unsigned char uchRegs1597[]={
   0x00 /*!!0x01!!*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x95 /*!!0x06!!*/,
   0x10 /*!!0x07!!*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
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
   0x4E /*0x2E*/, 0x90 /*!!R_CCAL!!*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x29 /*R_LENH*/,
   0xC3 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x07 /*!!R_SPD!!*/, 0x01 /*0x44*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1597);
}    /* #1597[069.0] */
RegWrite(0x49, 1, 0x9E);    /* #1603[069.1] */
RegWrite(R_CTL, 1, 0x39);    /* #1604[069.1] */
RegWrite(0xFFFFFFFF, 1, 0x79);    /* #1605[069.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x1038*/    /* #1643[069.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x1036*/    /* #1644[069.4] */
RegWrite(R_SPD, 1, 0x07);    /* #1651[069.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0FFC*/    /* #1652[069.4] */
RegWrite(0xFFFFFFFF, 2, 0x7000);    /* #1653[069.5] */
RegWrite(R_SPD, 1, 0x07);    /* #1658[069.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0FCF*/    /* #1659[069.5] */
ulVal2 = RegRead(0xFFFFFFFF, 2); /*=0x0FA4*/    /* #1664[069.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0FA1*/    /* #1665[069.6] */
RegWrite(0x47, 2, 0x5800);    /* #1666[069.6] */
RegWrite(0xFFFFFFFF, 1, 0x07);    /* #1667[069.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0F5E*/    /* #1673[069.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0F5B*/    /* #1674[069.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1682[070.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1683[070.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1684[070.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1685[070.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1686[070.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1687[070.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1691[070.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1692[070.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1693[070.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1694[070.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1695[070.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1696[070.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1697[070.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1701[071.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1702[071.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1703[071.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1704[071.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1705[071.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1706[071.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1707[071.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1710[071.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1711[071.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1712[071.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1713[071.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1714[071.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1715[071.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1716[071.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1717[071.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1718[072.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1719[072.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1720[072.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1721[072.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1722[072.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1723[072.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1724[072.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1725[072.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1728[072.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1729[072.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1730[072.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1731[072.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1732[072.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1733[072.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1742[073.1] */
RegWrite(R_CTL, 1, 0x39);    /* #1743[073.1] */
RegWrite(R_CTL, 1, 0x79);    /* #1744[073.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1754[073.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x02D0*/    /* #1755[073.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1764[074.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x08C0*/    /* #1765[074.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1776[074.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0F50*/    /* #1777[074.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1788[075.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1680*/    /* #1789[075.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1806[076.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2210*/    /* #1807[076.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1818[076.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27D8*/    /* #1819[076.9] */
BulkRead(fh,20400);   /* #1820[077.7] */
RegWrite(R_SPD, 1, 0x03);    /* #1839[077.7] */
RegWrite(0x06, 2, 0x0000);    /* #1840[077.7] */
RegWrite(0x0A, 2, 0x11A3);    /* #1841[077.7] */
RegWrite(0x47, 2, 0x7800);    /* #1861[078.2] */
RegWrite(R_SPD, 1, 0x07);    /* #1862[078.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1881[078.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1882[078.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1883[079.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1884[079.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1885[079.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1886[079.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1887[079.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1888[079.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1889[079.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1890[079.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1891[079.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1892[080.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1893[080.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1894[080.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1895[080.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1896[080.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1897[080.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1898[080.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1899[080.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1900[080.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1901[081.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1902[081.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1903[081.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1904[081.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1905[081.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1906[081.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1907[081.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1908[081.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1909[081.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1910[081.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1911[081.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1912[082.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1913[082.0] */
RegWrite(R_SPD, 1, 0x03);    /* #1914[082.0] */
RegWrite(R_CTL, 1, 0x39);    /* #1915[082.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1916[083.4] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1917[083.4] */
RegWrite(R_SPD, 1, 0x03);    /* #1918[083.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1919[085.6] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1920[085.6] */
RegWrite(R_SPD, 1, 0x03);    /* #1921[085.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1922[087.8] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1923[087.8] */
RegWrite(R_SPD, 1, 0x03);    /* #1924[087.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1925[090.0] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1926[090.0] */
RegWrite(R_SPD, 1, 0x03);    /* #1927[090.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1928[092.2] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1929[092.2] */
RegWrite(R_SPD, 1, 0x03);    /* #1930[092.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1931[094.4] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1932[094.4] */
RegWrite(R_SPD, 1, 0x03);    /* #1933[094.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1934[096.7] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1935[096.7] */
RegWrite(R_SPD, 1, 0x03);    /* #1936[096.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1937[098.9] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1938[098.9] */
RegWrite(R_SPD, 1, 0x03);    /* #1939[098.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1940[101.1] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1941[101.1] */
RegWrite(R_SPD, 1, 0x03);    /* #1942[101.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1943[103.3] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1944[103.3] */
RegWrite(R_SPD, 1, 0x03);    /* #1945[103.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1946[105.5] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1947[105.5] */
RegWrite(R_SPD, 1, 0x03);    /* #1948[105.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1949[107.7] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1950[107.7] */
RegWrite(R_SPD, 1, 0x03);    /* #1951[107.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1952[109.9] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1953[109.9] */
RegWrite(R_SPD, 1, 0x03);    /* #1954[109.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1955[112.1] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1956[112.1] */
RegWrite(R_SPD, 1, 0x03);    /* #1957[112.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1958[114.3] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1959[114.3] */
RegWrite(R_SPD, 1, 0x03);    /* #1960[114.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1961[116.5] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1962[116.5] */
RegWrite(R_SPD, 1, 0x03);    /* #1963[116.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1964[118.7] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1965[118.7] */
RegWrite(R_SPD, 1, 0x03);    /* #1966[118.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1967[120.9] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1968[120.9] */
RegWrite(R_SPD, 1, 0x03);    /* #1969[120.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1970[123.1] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1971[123.1] */
RegWrite(R_SPD, 1, 0x03);    /* #1972[123.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1973[125.1] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1974[125.1] */
RegWrite(R_SPD, 1, 0x03);    /* #1975[125.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1976[127.3] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1977[127.3] */
RegWrite(R_SPD, 1, 0x03);    /* #1978[127.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1979[129.6] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1980[129.6] */
RegWrite(R_SPD, 1, 0x03);    /* #1981[129.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1982[131.7] */
ulVal1 = RegRead(R_SPD, 1); /*=0x03*/    /* #1983[131.8] */
RegWrite(R_SPD, 1, 0x03);    /* #1984[131.8] */
