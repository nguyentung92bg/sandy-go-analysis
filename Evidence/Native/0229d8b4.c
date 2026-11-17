/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi.<Punch>d__29$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleUi__Punch_d__29__MoveNext (Dino_BusSand_App_UI_BattleRoyaleUi__Punch_d__29_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi.<Punch>d__29$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleUi__Punch_d__29__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleUi__Punch_d__29_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_BattleRoyaleUi__Punch_d__29__MoveNext_219d8b4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000004f9ba08 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba08 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar6 = *(float *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    fVar6 = 0.0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (fVar6 < *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x28)) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      fVar8 = *(float *)(param_1 + 0x30);
      fVar6 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      fVar8 = fVar8 + fVar6;
      fVar6 = *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x30) = fVar8;
      if (fVar6 <= fVar8) {
        fVar6 = (fVar8 - fVar6) / fVar6;
      }
      else {
        fVar8 = fVar8 / fVar6;
        fVar7 = 1.0;
        if (fVar8 <= 1.0) {
          fVar7 = fVar8;
        }
        fVar6 = 1.0;
        if (0.0 <= fVar8) {
          fVar6 = 1.0 - fVar7;
        }
        fVar6 = fVar6 * fVar6;
      }
      lVar5 = *(long *)(param_1 + 0x20);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (lVar5 != 0) {
        fVar6 = 1.0 - fVar6;
        fVar8 = 1.0;
        if (fVar6 <= 1.0) {
          fVar8 = fVar6;
        }
        fVar7 = 0.0;
        if (0.0 <= fVar6) {
          fVar7 = fVar8;
        }
        lVar3 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        fVar6 = fVar7 * (*(float *)(param_1 + 0x2c) + -1.0) + 1.0;
        UnityEngine_Transform__set_localScale_43d1be0
                  (*(float *)(lVar3 + 0xc) * fVar6,*(float *)(lVar3 + 0x10) * fVar6,
                   *(float *)(lVar3 + 0x14) * fVar6,lVar5,0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      goto LAB_0229db08;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar5 == 0) {
LAB_0229db08:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
               *(undefined4 *)(lVar3 + 0x14),lVar5,0);
  }
  return 0;
}

