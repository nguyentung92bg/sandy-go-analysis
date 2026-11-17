/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$ApplyTime
void Dino_BusSand_Cheat_CheatManager__ApplyTime (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$ApplyTime
   void Dino_BusSand_Cheat_CheatManager__ApplyTime (Dino_BusSand_Cheat_CheatManager_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__ApplyTime_23669cc(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000004f9c773 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c773 = 1;
  }
  if (*(char *)(param_1 + 0x140) != '\0') {
    fVar7 = 0.0;
    if (*(char *)(param_1 + 0x138) == '\0') {
      fVar7 = (float)Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
    }
    fVar8 = (float)UnityEngine_Time__get_timeScale_43cd6b0(0);
    if (cRam0000000004f9c305 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb5bf8);
      cRam0000000004f9c305 = '\x01';
    }
    puVar3 = PTR_DAT_04cb5bf8;
    puVar2 = PTR_DAT_04cac868;
    fVar1 = _UNK_00e20900;
    fVar9 = ABS(fVar8);
    if (ABS(fVar8) <= ABS(fVar7)) {
      fVar9 = ABS(fVar7);
    }
    fVar10 = **(float **)(*(long *)PTR_DAT_04cb5bf8 + 0xb8) * 8.0;
    fVar11 = fVar9 * _UNK_00e20900;
    if (fVar9 * _UNK_00e20900 <= fVar10) {
      fVar11 = fVar10;
    }
    if (fVar11 <= ABS(fVar7 - fVar8)) {
      UnityEngine_Time__set_timeScale_43cd6d8(fVar7,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9bcf9 == '\0') {
      FUN_02132f7c(PTR_DAT_04cac868);
      cRam0000000004f9bcf9 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_04ca9ae8;
    if (*(char *)(param_1 + 0x138) != '\0') {
      lVar4 = **(long **)(lVar4 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if (lVar4 == 0) {
LAB_02466c10:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar6 = *(undefined8 *)(lVar4 + 0x38);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(lVar4 + 0x38) == 0) goto LAB_02466c10;
          if (*(char *)(*(long *)(lVar4 + 0x38) + 0x40) == '\0') {
            Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dd50(lVar4,1,0);
          }
        }
      }
      if (*(char *)(param_1 + 0x138) != '\0') {
        return;
      }
    }
    fVar7 = (float)Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
    if (cRam0000000004f9c305 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb5bf8);
      cRam0000000004f9c305 = '\x01';
    }
    fVar8 = ABS(fVar7);
    if (fVar8 <= 1.0) {
      fVar8 = 1.0;
    }
    fVar11 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
    fVar9 = fVar8 * fVar1;
    if (fVar8 * fVar1 <= fVar11) {
      fVar9 = fVar11;
    }
    if (ABS(1.0 - fVar7) < fVar9) {
      *(undefined1 *)(param_1 + 0x140) = 0;
    }
  }
  return;
}

