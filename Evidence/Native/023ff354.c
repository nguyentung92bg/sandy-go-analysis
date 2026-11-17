/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<Punch>d__34$$MoveNext
bool Dino_BusSand_App_UI_MainHudPanel__Punch_d__34__MoveNext (Dino_BusSand_App_UI_MainHudPanel__Punch_d__34_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<Punch>d__34$$MoveNext
   bool Dino_BusSand_App_UI_MainHudPanel__Punch_d__34__MoveNext
   (Dino_BusSand_App_UI_MainHudPanel__Punch_d__34_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_MainHudPanel__Punch_d__34__MoveNext_22ff354(long param_1)

{
  undefined *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000004f9c4c9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c4c9 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar7 = *(float *)(param_1 + 0x30);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar7 = 0.0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  puVar1 = PTR_DAT_04ca9ae8;
  if (fVar7 < *(float *)(param_1 + 0x2c)) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      fVar9 = *(float *)(param_1 + 0x30);
      fVar7 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      cVar2 = cRam0000000004f9b65e;
      lVar6 = *(long *)(param_1 + 0x20);
      *(float *)(param_1 + 0x30) = fVar9 + fVar7;
      if (cVar2 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (lVar6 != 0) {
        fVar9 = *(float *)(param_1 + 0x30) / *(float *)(param_1 + 0x2c);
        lVar4 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        fVar7 = 1.0;
        if (fVar9 <= 1.0) {
          fVar7 = fVar9;
        }
        fVar8 = 0.0;
        if (0.0 <= fVar9) {
          fVar8 = fVar7;
        }
        fVar7 = 0.0;
        if (0.0 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar7 = (*(float *)(param_1 + 0x28) + -1.0) * fVar7 + 1.0;
        UnityEngine_Transform__set_localScale_43d1be0
                  (*(float *)(lVar4 + 0xc) * fVar7,*(float *)(lVar4 + 0x10) * fVar7,
                   *(float *)(lVar4 + 0x14) * fVar7,lVar6,0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      goto LAB_023ff538;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar6 == 0) {
LAB_023ff538:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
               *(undefined4 *)(lVar4 + 0x14),lVar6,0);
  }
  return 0;
}

