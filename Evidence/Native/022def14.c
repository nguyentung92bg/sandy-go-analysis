/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow.<Punch>d__15$$MoveNext
bool Dino_BusSand_App_UI_StreakRateGameRow__Punch_d__15__MoveNext (Dino_BusSand_App_UI_StreakRateGameRow__Punch_d__15_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow.<Punch>d__15$$MoveNext
   bool Dino_BusSand_App_UI_StreakRateGameRow__Punch_d__15__MoveNext
   (Dino_BusSand_App_UI_StreakRateGameRow__Punch_d__15_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_StreakRateGameRow__Punch_d__15__MoveNext_21def14(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000004f9bba1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bba1 = 1;
  }
  fVar6 = _UNK_00e20754;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(float *)(param_1 + 0x30) < fVar6) goto LAB_022defd4;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x38), lVar4 == 0)) goto LAB_022df150;
    if (*(long *)(lVar4 + 0x18) == 0) {
      uVar2 = 0;
    }
    else {
      if ((int)*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if ((*(long *)(lVar4 + 0x20) == 0) ||
         (lVar4 = TMPro_TMP_Text__get_transform_42cd604(*(long *)(lVar4 + 0x20),0), lVar4 == 0))
      goto LAB_022df150;
      uVar2 = UnityEngine_Transform__get_parent_43d0d70(lVar4,0);
    }
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x30) = 0;
LAB_022defd4:
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
    if ((uVar3 & 1) != 0) {
      fVar8 = *(float *)(param_1 + 0x30);
      fVar6 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      cVar1 = cRam0000000004f9b65e;
      lVar4 = *(long *)(param_1 + 0x28);
      *(float *)(param_1 + 0x30) = fVar8 + fVar6;
      if (cVar1 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (lVar4 != 0) {
        fVar8 = *(float *)(param_1 + 0x30) / _UNK_00e20754;
        lVar5 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        fVar6 = 1.0;
        if (fVar8 <= 1.0) {
          fVar6 = fVar8;
        }
        fVar7 = 1.0;
        if (0.0 <= fVar8) {
          fVar7 = fVar6 * _UNK_00e200ac + 1.0;
        }
        UnityEngine_Transform__set_localScale_43d1be0
                  (*(float *)(lVar5 + 0xc) * fVar7,*(float *)(lVar5 + 0x10) * fVar7,
                   *(float *)(lVar5 + 0x14) * fVar7,lVar4,0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      goto LAB_022df150;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar4 == 0) {
LAB_022df150:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar5 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
               *(undefined4 *)(lVar5 + 0x14),lVar4,0);
  }
  return 0;
}

