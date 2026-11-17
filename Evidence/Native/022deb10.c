/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow.<Loop>d__14$$MoveNext
bool Dino_BusSand_App_UI_StreakRateGameRow__Loop_d__14__MoveNext (Dino_BusSand_App_UI_StreakRateGameRow__Loop_d__14_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow.<Loop>d__14$$MoveNext
   bool Dino_BusSand_App_UI_StreakRateGameRow__Loop_d__14__MoveNext
   (Dino_BusSand_App_UI_StreakRateGameRow__Loop_d__14_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_StreakRateGameRow__Loop_d__14__MoveNext_21deb10(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  float fVar6;
  int iStack_24;
  
  if ((bRam0000000004f9bba0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cabb10);
    bRam0000000004f9bba0 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x28);
  iStack_24 = 0;
  if (iVar1 < 4) {
    if (1 < iVar1) {
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar5 != 0) {
          uVar3 = *(undefined8 *)(lVar5 + 0x28);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
          if ((uVar2 & 1) != 0) {
            if ((*(long *)(lVar5 + 0x28) == 0) ||
               (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar5 + 0x28),0),
               lVar5 == 0)) goto LAB_022deec4;
            UnityEngine_GameObject__SetActive_43c1408(lVar5,0,0);
          }
          uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
          UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20328,uVar3,0);
          *(undefined8 *)(param_1 + 0x18) = uVar3;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
          uVar4 = 3;
          goto LAB_022deeac;
        }
      }
      else {
        if (iVar1 != 3) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar5 != 0) {
          uVar3 = *(undefined8 *)(lVar5 + 0x28);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
          if ((uVar2 & 1) != 0) {
            if ((*(long *)(lVar5 + 0x28) == 0) ||
               (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar5 + 0x28),0),
               lVar5 == 0)) goto LAB_022deec4;
            UnityEngine_GameObject__SetActive_43c1408(lVar5,1,0);
          }
          uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
          UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20390,uVar3,0);
          *(undefined8 *)(param_1 + 0x18) = uVar3;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
          uVar4 = 4;
          goto LAB_022deeac;
        }
      }
      goto LAB_022deec4;
    }
    if (iVar1 == 0) {
      fVar6 = *(float *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (0.0 < fVar6) {
        uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(fVar6,uVar3,0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
        uVar4 = 1;
        goto LAB_022deeac;
      }
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
LAB_022decec:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    if (lVar5 == 0) {
LAB_022deec4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    Dino_BusSand_App_UI_StreakRateGameRow__InitPlayData_21de76c(lVar5);
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e207cc,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
    uVar4 = 2;
  }
  else {
    if (iVar1 < 6) {
      if (iVar1 != 4) {
        if (iVar1 != 5) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
          iStack_24 = Dino_BusSand_App_Meta_StreakRateFeature__RateNumber_224c86c
                                (*(long *)(lVar5 + 0x20),*(int *)(param_1 + 0x30) + -1,0);
          uVar3 = System_Int32__ToString_482d750(&iStack_24,0);
          uVar3 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar3,0);
          Dino_BusSand_App_UI_StreakRateGameRow__SetMoveText_21de914(lVar5,uVar3);
          uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
          UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3e800000,uVar3,0);
          *(undefined8 *)(param_1 + 0x18) = uVar3;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
          uVar4 = 6;
          goto LAB_022deeac;
        }
        goto LAB_022deec4;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 == 0) goto LAB_022deec4;
      iVar1 = *(int *)(lVar5 + 0x48);
    }
    else {
      if (iVar1 != 6) {
        if (iVar1 != 7) {
          return 0;
        }
        goto LAB_022decec;
      }
      iStack_24 = *(int *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      iVar1 = iStack_24 + -1;
    }
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 < 1) {
      uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f800000,uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
      uVar4 = 7;
    }
    else {
      if (lVar5 == 0) goto LAB_022deec4;
      uVar3 = Dino_BusSand_App_UI_StreakRateGameRow__Punch_21dea14(lVar5);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_02134474();
      uVar4 = 5;
    }
  }
LAB_022deeac:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return 1;
}

