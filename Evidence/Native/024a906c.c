/* IL2CPP: Dino.BusSand.View.GameView$$Vivid
UnityEngine_Color32_o Dino_BusSand_View_GameView__Vivid (UnityEngine_Color32_o c, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$Vivid
   UnityEngine_Color32_o Dino_BusSand_View_GameView__Vivid (UnityEngine_Color32_o c, int32_t i,
   const MethodInfo* method); */

ulong Dino_BusSand_View_GameView__Vivid_23a906c(ulong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  float fStack_2c;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c946 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c946 = 1;
  }
  uVar6 = (uint)param_1;
  uStack_28 = 0;
  fStack_2c = 0.0;
  UnityEngine_Color__RGBToHSV_43aa290
            ((float)(uVar6 & 0xff) / 255.0,(float)(uVar6 >> 8 & 0xff) / 255.0,
             (float)(uVar6 >> 0x10 & 0xff) / 255.0,(float)(param_1 >> 0x18 & 0xff) / 255.0,
             (long)&uStack_28 + 4,&uStack_28,&fStack_2c,0);
  puVar3 = PTR_DAT_04cb2870;
  if (((float)uStack_28 < _UNK_00e20aec) || (fStack_2c < _UNK_00e207cc)) {
    lVar5 = *(long *)PTR_DAT_04cb2870;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x78);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = *(uint *)(lVar5 + 0x18);
    iVar2 = 0;
    if (uVar6 != 0) {
      iVar2 = param_2 / (int)uVar6;
    }
    uVar1 = param_2 - iVar2 * uVar6;
    if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar4 = (ulong)*(uint *)(lVar5 + (long)(int)uVar1 * 4 + 0x20);
  }
  else {
    UnityEngine_Color__HSVToRGB_43aa448(uStack_28._4_4_,(float)uStack_28,0x3f800000,1,0);
    uVar4 = FUN_023e4c88(0);
  }
  return uVar4;
}

