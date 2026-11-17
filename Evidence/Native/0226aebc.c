/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_0$$<Boot>g__WarmRest|3
void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_g__WarmRest_3 (Dino_BusSand_App_GameApp___c__DisplayClass84_0_o* __this, float budgetMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_0$$<Boot>g__WarmRest|3
   void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_g__WarmRest_3
   (Dino_BusSand_App_GameApp___c__DisplayClass84_0_o* __this, float budgetMs, const MethodInfo*
   method); */

ulong Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_g__WarmRest_3_216aebc
                (float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float extraout_s0;
  float fVar11;
  float fStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9b89e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabee0);
    bRam0000000004f9b89e = 1;
  }
  uVar5 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  puVar2 = PTR_DAT_04cabee0;
  param_1 = param_1 + (extraout_s0 - *(float *)(param_2 + 0x24)) * -1000.0;
  if (param_1 < 1.0) {
    return uVar5;
  }
  if (*(int *)(*(long *)PTR_DAT_04cabee0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_ShaderWarmup__get_Done_215d878(0);
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cabee0;
  if ((bRam0000000004f9b808 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabee0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cabee8);
    FUN_02132f7c(PTR_DAT_04cabef0);
    FUN_02132f7c(PTR_DAT_04cab278);
    FUN_02132f7c(PTR_DAT_04cabef8);
    FUN_02132f7c(PTR_DAT_04cabf00);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9b808 = 1;
  }
  lVar3 = *(long *)puVar2;
  fStack_38 = 0.0;
  uStack_34 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  pcVar6 = *(char **)(lVar3 + 0xb8);
  if (pcVar6[0x10] != '\0') {
    return 1;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    pcVar6 = *(char **)(*(long *)puVar2 + 0xb8);
  }
  if (*pcVar6 == '\0') {
    return 1;
  }
  fVar9 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = Dino_BusSand_App_ShaderWarmup__Load_215ddbc();
    puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *puVar7 = uVar8;
    thunk_FUN_02134474(puVar7,uVar8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
    if ((uVar5 & 1) != 0) goto LAB_0225dd90;
  }
  do {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_0225ddb4;
    uVar5 = UnityEngine_ShaderVariantCollection__WarmUpProgressively_43cbe8c(lVar3,1,0);
  } while (((uVar5 & 1) == 0) &&
          (fVar10 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0),
          (fVar10 - fVar9) * 1000.0 < param_1));
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  fVar11 = *(float *)(*(long *)(lVar3 + 0xb8) + 0x18);
  fVar10 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = fVar11 + (fVar10 - fVar9);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  lVar3 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
  if (lVar3 == 0) {
LAB_0225ddb4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_04cabee8;
    thunk_FUN_02134474();
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_0225ddb4;
    uStack_34 = UnityEngine_ShaderVariantCollection__get_variantCount_43cbcc8(lVar4,0);
    uVar8 = System_Int32__ToString_482d750(&uStack_34,0);
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar3 + 0x28) = uVar8;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28),uVar8);
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_04cabef8;
        thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30));
        fStack_38 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) * 1000.0;
        uVar8 = System_Single__ToString_48426d8(&fStack_38,*(undefined8 *)PTR_DAT_04cab288,0);
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar3 + 0x38) = uVar8;
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38),uVar8);
          if (4 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_04cab278;
            thunk_FUN_02134474();
            lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
            if (*(int *)(lVar4 + 0x14) < 1) {
              uVar8 = *(undefined8 *)PTR_DAT_04ca9c30;
            }
            else {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
              }
              uVar8 = System_Int32__ToString_482d750(lVar4 + 0x14,0);
              uVar8 = System_String__Concat_46d2b84
                                (*(undefined8 *)PTR_DAT_04cabf00,uVar8,
                                 *(undefined8 *)PTR_DAT_04cabef0,0);
            }
            if (5 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x48) = uVar8;
              thunk_FUN_02134474();
              uVar8 = System_String__Concat_46d31f0(lVar3,0);
              if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
              }
              UnityEngine_Debug__Log_4360fc8(uVar8,0);
LAB_0225dd90:
              lVar3 = *(long *)puVar2;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar3 = *(long *)puVar2;
              }
              *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x10) = 1;
              return 1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

