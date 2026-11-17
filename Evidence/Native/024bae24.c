/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$PaintColor
UnityEngine_Color_o Dino_BusSand_View_MaterialLibrary__PaintColor (uint8_t color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$PaintColor
   UnityEngine_Color_o Dino_BusSand_View_MaterialLibrary__PaintColor (uint8_t color, const
   MethodInfo* method); */

void Dino_BusSand_View_MaterialLibrary__PaintColor_23bae24(undefined4 param_1)

{
  undefined *puVar1;
  float fVar2;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9c99e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    bRam0000000004f9c99e = 1;
  }
  fStack_28 = 0.0;
  uStack_24 = 0;
  uStack_2c = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_View_MaterialLibrary__BodyColor_23b95d0(param_1);
  UnityEngine_Color__RGBToHSV_43aa290(&uStack_24,&fStack_28,&uStack_2c,0);
  if (_UNK_00e208cc < fStack_28) {
    fVar2 = fStack_28 * _UNK_00e2045c + _UNK_00e20af8;
    fStack_28 = 1.0;
    if (fVar2 <= 1.0) {
      fStack_28 = fVar2;
    }
  }
  UnityEngine_Color__HSVToRGB_43aa448(uStack_24,fStack_28,uStack_2c,1,0);
  return;
}

