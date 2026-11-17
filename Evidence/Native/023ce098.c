/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<HandPress>d__84$$MoveNext
bool Dino_BusSand_App_UI_GuidePanel__HandPress_d__84__MoveNext (Dino_BusSand_App_UI_GuidePanel__HandPress_d__84_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<HandPress>d__84$$MoveNext
   bool Dino_BusSand_App_UI_GuidePanel__HandPress_d__84__MoveNext
   (Dino_BusSand_App_UI_GuidePanel__HandPress_d__84_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_GuidePanel__HandPress_d__84__MoveNext_22ce098
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000004f9c394 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c394 = 1;
  }
  lVar5 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    fVar9 = *(float *)(param_4 + 0x34);
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar5 == 0) goto LAB_023ce2c8;
    uVar4 = *(undefined8 *)(lVar5 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    if (*(long *)(lVar5 + 0x78) == 0) goto LAB_023ce2c8;
    uVar6 = UnityEngine_Transform__get_localPosition_43cfce8(*(long *)(lVar5 + 0x78),0);
    fVar9 = 0.0;
    *(undefined4 *)(param_4 + 0x28) = uVar6;
    *(undefined4 *)(param_4 + 0x2c) = param_2;
    *(undefined4 *)(param_4 + 0x30) = param_3;
    *(undefined4 *)(param_4 + 0x34) = 0;
  }
  fVar7 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  fVar9 = fVar9 + fVar7;
  *(float *)(param_4 + 0x34) = fVar9;
  fVar9 = fVar9 - (float)(int)fVar9;
  fVar8 = 1.0;
  fVar7 = 1.0;
  if (fVar9 <= 1.0) {
    fVar7 = fVar9;
  }
  fVar1 = 0.0;
  if (0.0 <= fVar9) {
    fVar1 = fVar7;
  }
  if (_UNK_00e207cc <= fVar1) {
    if ((_UNK_00e2094c <= fVar1) && (fVar8 = 0.0, fVar1 < 0.75)) {
      fVar8 = (float)Dino_BusSand_App_Easing__Evaluate_21609e0
                               ((fVar1 + _UNK_00e2044c) / _UNK_00e207cc,3,0);
      fVar8 = 1.0 - fVar8;
    }
  }
  else {
    fVar8 = (float)Dino_BusSand_App_Easing__Evaluate_21609e0(fVar1 / _UNK_00e207cc,2,0);
  }
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x78) != 0)) {
    fVar9 = (float)_UNK_00e69848 * fVar8;
    fVar7 = (float)((ulong)_UNK_00e69848 >> 0x20) * fVar8 +
            (float)((ulong)*(undefined8 *)(param_4 + 0x2c) >> 0x20);
    UnityEngine_Transform__set_localPosition_43cfda8
              (*(float *)(param_4 + 0x28) - fVar9,
               CONCAT44(fVar7,fVar9 + (float)*(undefined8 *)(param_4 + 0x2c)),fVar7,
               *(long *)(lVar5 + 0x78),0);
    lVar5 = *(long *)(lVar5 + 0x78);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar5 != 0) {
      lVar3 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      fVar9 = fVar8 * _UNK_00e207d8 + 1.0;
      UnityEngine_Transform__set_localScale_43d1be0
                (fVar9 * *(float *)(lVar3 + 0xc),fVar9 * *(float *)(lVar3 + 0x10),
                 fVar9 * *(float *)(lVar3 + 0x14),lVar5,0);
      *(undefined8 *)(param_4 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
  }
LAB_023ce2c8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

