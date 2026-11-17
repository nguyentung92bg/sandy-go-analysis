/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinFinishGetPanel.<CountUp>d__5$$MoveNext
bool Dino_BusSand_App_UI_GoldenCoinFinishGetPanel__CountUp_d__5__MoveNext (Dino_BusSand_App_UI_GoldenCoinFinishGetPanel__CountUp_d__5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinFinishGetPanel.<CountUp>d__5$$MoveNext
   bool Dino_BusSand_App_UI_GoldenCoinFinishGetPanel__CountUp_d__5__MoveNext
   (Dino_BusSand_App_UI_GoldenCoinFinishGetPanel__CountUp_d__5_o* __this, const MethodInfo* method);
    */

undefined8
Dino_BusSand_App_UI_GoldenCoinFinishGetPanel__CountUp_d__5__MoveNext_21aec68(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  int iStack_3c;
  double dStack_38;
  
  lVar2 = param_1;
  if ((bRam0000000004f9ba7f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04caec68);
    lVar2 = FUN_02132f7c(PTR_DAT_04caef60);
    bRam0000000004f9ba7f = 1;
  }
  fVar6 = _UNK_00e200f8;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  iStack_3c = 0;
  if (iVar1 == 2) {
    fVar8 = *(float *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (fVar6 <= fVar8) {
      if (lVar5 == 0) goto LAB_022aef5c;
      goto LAB_022aee24;
    }
  }
  else {
    if (iVar1 != 1) {
      lVar2 = 0;
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x40) < 1) {
          return 0;
        }
        if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(_UNK_00e20754);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      goto LAB_022aef5c;
    }
    fVar8 = 0.0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (lVar5 == 0) {
LAB_022aef5c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224(lVar2);
  }
  if (*(char *)(lVar5 + 0x44) != '\0') {
LAB_022aee24:
    uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar5,*(undefined8 *)PTR_DAT_04caef60,0);
    uVar4 = System_Int32__ToString_482d750(lVar5 + 0x40,0);
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
    }
    Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar3,uVar4);
    return 0;
  }
  fVar6 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  iVar1 = *(int *)(lVar5 + 0x40);
  lVar2 = *(long *)PTR_DAT_04cac7b8;
  *(float *)(param_1 + 0x28) = fVar8 + fVar6;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar6 = (float)Dino_BusSand_App_UI_CommerceUi__OutQuart_22a8cb0((fVar8 + fVar6) / _UNK_00e200f8,0)
  ;
  if (cRam0000000004f9b891 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b891 = '\x01';
  }
  fVar6 = fVar6 * (float)iVar1;
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar9 = (double)fVar6;
  dVar7 = (double)FUN_049b52f0(dVar9,&dStack_38);
  if (0.0 <= fVar6) {
    if (dVar7 != 0.5) {
      dStack_38 = (double)(long)(dVar9 + 0.5);
      goto LAB_022aeebc;
    }
    dVar7 = 1.0;
  }
  else {
    if (dVar7 != -0.5) {
      dStack_38 = (double)(long)(dVar9 + -0.5);
      goto LAB_022aeebc;
    }
    dVar7 = -1.0;
  }
  if (((long)dStack_38 & 1U) != 0) {
    dStack_38 = dStack_38 + dVar7;
  }
LAB_022aeebc:
  iStack_3c = -0x80000000;
  if (dStack_38 != INFINITY) {
    iStack_3c = (int)dStack_38;
  }
  uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar5,*(undefined8 *)PTR_DAT_04caef60,0);
  uVar4 = System_Int32__ToString_482d750(&iStack_3c,0);
  if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar3,uVar4);
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 2;
  return 1;
}

