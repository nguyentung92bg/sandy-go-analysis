/* IL2CPP: Dino.BusSand.App.UI.SettingPanel.<>c__DisplayClass9_0$$<AddQaCorner>b__0
void Dino_BusSand_App_UI_SettingPanel___c__DisplayClass9_0___AddQaCorner_b__0 (Dino_BusSand_App_UI_SettingPanel___c__DisplayClass9_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.SettingPanel.<>c__DisplayClass9_0$$<AddQaCorner>b__0
   void Dino_BusSand_App_UI_SettingPanel___c__DisplayClass9_0___AddQaCorner_b__0
   (Dino_BusSand_App_UI_SettingPanel___c__DisplayClass9_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_SettingPanel___c__DisplayClass9_0___AddQaCorner_b__0_23078c4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  
  puVar3 = PTR_DAT_04cb7e80;
  lVar5 = *(long *)(param_1 + 0x10);
  if ((bRam0000000004f9c4fb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7e80);
    FUN_02132f7c(PTR_DAT_04cb7ea8);
    FUN_02132f7c(PTR_DAT_04cb7eb0);
    bRam0000000004f9c4fb = 1;
  }
  fVar9 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
  if (fVar9 - *(float *)(lVar6 + 8) <= _UNK_00e20178) {
    *(float *)(lVar6 + 8) = fVar9;
    iVar1 = *(int *)(lVar6 + 4) + 1;
    *(int *)(lVar6 + 4) = iVar1;
    puVar2 = PTR_DAT_04cab380;
    if (9 < iVar1) {
      *(undefined4 *)(lVar6 + 4) = 0;
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      if ((*(long *)(lVar6 + 8) != 0) ||
         ((lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0 &&
          ((**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28)),
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) != 0)))) {
        lVar7 = *(long *)PTR_DAT_04ca9d18;
        **(undefined1 **)(*(long *)puVar3 + 0xb8) = 1;
        lVar6 = *(long *)(lVar7 + 0x38);
        if (lVar6 == 0) {
          FUN_0216b4cc(lVar7);
          lVar6 = *(long *)(lVar7 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0216b470();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0216b470();
        }
        uVar8 = **(undefined8 **)(lVar6 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac5c0);
        }
        Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb7ea8,uVar8,0);
        puVar3 = PTR_DAT_04caba50;
        if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar3;
        }
        uVar8 = **(undefined8 **)(lVar6 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
            cRam0000000004f9b88f = '\x01';
          }
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar3;
          }
          if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_App_GameApp__Toast_2166a6c
                    (**(long **)(lVar6 + 0xb8),*(undefined8 *)PTR_DAT_04cb7eb0,0);
        }
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02405c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
          return;
        }
      }
    }
  }
  else {
    *(float *)(lVar6 + 8) = fVar9;
    *(undefined4 *)(lVar6 + 4) = 1;
  }
  return;
}

