/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Watch
void Dino_BusSand_App_UI_HomeStage__Watch (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Watch
   void Dino_BusSand_App_UI_HomeStage__Watch (Dino_BusSand_App_UI_HomeStage_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__Watch_22f0ff8(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  if ((bRam0000000004f9c466 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cb7738);
    FUN_02132f7c(PTR_DAT_04cb19a8);
    FUN_02132f7c(PTR_DAT_04cb76e8);
    bRam0000000004f9c466 = 1;
  }
  puVar4 = PTR_DAT_04cb76e8;
  if (*(long *)(param_1 + 0xb8) == 0) {
LAB_023f11e0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(param_1 + 0xc0) < *(int *)(*(long *)(param_1 + 0xb8) + 0x18)) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_023f11e0;
    uVar6 = UnityEngine_Material__IsKeywordEnabled_437cfa8
                      (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cb76e8,0);
    puVar3 = PTR_DAT_04cb19a8;
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cb19a8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9c49b == '\0') {
        FUN_02132f7c(PTR_DAT_04cb19a8);
        cRam0000000004f9c49b = '\x01';
      }
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      if (*(char *)(*(long *)(lVar7 + 0xb8) + 1) == '\0') {
        uVar1 = *(uint *)(param_1 + 0xc0);
        *(uint *)(param_1 + 0xc0) = uVar1 + 1;
        if (-1 < (int)uVar1) {
          lVar7 = *(long *)(param_1 + 0xb8);
          uVar11 = UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) <= uVar1) {
LAB_023f11e4:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar8 = *(long *)(param_1 + 0xb8);
            *(undefined4 *)(lVar7 + (ulong)uVar1 * 4 + 0x20) = uVar11;
            if (lVar8 != 0) {
              if (*(int *)(param_1 + 0xc0) < *(int *)(lVar8 + 0x18)) {
                return;
              }
              System_Array__Sort_float__2687fe0(lVar8,*(undefined8 *)PTR_DAT_04cb7738);
              lVar7 = *(long *)(param_1 + 0xb8);
              if (lVar7 != 0) {
                uVar2 = *(uint *)(lVar7 + 0x18);
                uVar1 = uVar2;
                if ((int)uVar2 < 0) {
                  uVar1 = uVar2 + 1;
                }
                if (uVar2 <= (uint)((int)uVar1 >> 1)) goto LAB_023f11e4;
                fVar12 = *(float *)(lVar7 + (long)((int)uVar1 >> 1) * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                iVar5 = UnityEngine_Application__get_targetFrameRate_4352c24(0);
                if (iVar5 < 0x1f) {
                  iVar5 = 0x1e;
                }
                if (fVar12 <= _UNK_00e2068c / (float)iVar5) {
                  return;
                }
                lVar7 = *(long *)(param_1 + 0x40);
                if (lVar7 != 0) {
                  lVar8 = *(long *)puVar4;
                  if ((bRam0000000004fa6d64 & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cf6620,lVar8,0);
                    FUN_02132f7c(PTR_DAT_04cab588);
                    FUN_02132f7c(PTR_DAT_04cf5680);
                    FUN_02132f7c(PTR_DAT_04cd5630);
                    bRam0000000004fa6d64 = 1;
                  }
                  uStack_40 = 0;
                  uStack_38 = 0;
                  uStack_50 = 0;
                  uStack_48 = 0;
                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  lVar10 = *(long *)(lVar7 + 0x10);
                  if (lVar10 != 0) {
                    if (lVar8 == 0) {
                      uStack_50 = 0;
                      uStack_48 = 0;
                    }
                    else if (*(int *)(lVar8 + 0x10) == 0) {
                      uVar9 = System_UIntPtr__op_Explicit_488617c(1,0);
                      uVar9 = System_UIntPtr__op_Explicit_4886184(uVar9,0);
                      UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140
                                (&stack0xffffffffffffffd0,uVar9,0,0);
                      uStack_48 = 0;
                      uStack_50 = 0;
                    }
                    else {
                      if (cRam0000000004fa1b52 == '\0') {
                        FUN_02132f7c(PTR_DAT_04cc73d8);
                        cRam0000000004fa1b52 = '\x01';
                      }
                      uStack_40 = System_String__GetRawStringData_46cfab8(lVar8,0);
                      uStack_38 = (ulong)*(uint *)(lVar8 + 0x10);
                      uVar9 = System_ReadOnlySpan_char___GetPinnableReference_2de139c
                                        (&uStack_40,*(undefined8 *)PTR_DAT_04cf5680);
                      UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140
                                (&uStack_50,uVar9,uStack_38 & 0xffffffff,0);
                    }
                    if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    if (pcRam0000000004fa6e50 == (code *)0x0) {
                      pcRam0000000004fa6e50 = (code *)FUN_02132f40(&UNK_00e21456);
                    }
                    (*pcRam0000000004fa6e50)(lVar10,&uStack_50);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
                }
              }
            }
          }
          goto LAB_023f11e0;
        }
      }
    }
  }
  return;
}

