/* IL2CPP: Dino.BusSand.View.PackPalette$$ShadeOf
UnityEngine_Color_o Dino_BusSand_View_PackPalette__ShadeOf (UnityEngine_Color_o c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PackPalette$$ShadeOf
   UnityEngine_Color_o Dino_BusSand_View_PackPalette__ShadeOf (UnityEngine_Color_o c, const
   MethodInfo* method); */

void Dino_BusSand_View_PackPalette__ShadeOf_23902e4(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_14;
  undefined8 uStack_8;
  
                    /* try { // try from 024902e4 to 025902ef has its CatchHandler @ 02490824 */
  uStack_8 = 0;
  fStack_14 = 0.0;
  UnityEngine_Color__RGBToHSV_43aa290((long)&uStack_8 + 4,&uStack_8,&fStack_14,0);
  fVar4 = (float)uStack_8;
                    /* try { // try from 0249030c to 02590317 has its CatchHandler @ 02490830 */
                    /* try { // try from 02490318 to 0259080f has its CatchHandler @ 0248fe3c */
  fVar2 = uStack_8._4_4_;
  if (_UNK_00e205f8 < (float)uStack_8) {
    fVar1 = (uStack_8._4_4_ + _UNK_00e2056c) - (float)(int)(uStack_8._4_4_ + _UNK_00e2056c);
    fVar3 = 1.0;
    if (fVar1 <= 1.0) {
      fVar3 = fVar1;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
      fVar2 = fVar3;
    }
    uStack_8 = CONCAT44(fVar2,(float)uStack_8);
  }
  fVar3 = fVar4 * _UNK_00e208d8 + _UNK_00e20af8;
  fVar4 = 1.0;
  if (fVar3 <= 1.0) {
    fVar4 = fVar3;
  }
  fVar1 = 0.0;
  if (0.0 <= fVar3) {
    fVar1 = fVar4;
  }
  UnityEngine_Color__HSVToRGB_43aa448(fVar2,fVar1,fStack_14 * _UNK_00e20258,1,0);
  return;
}

