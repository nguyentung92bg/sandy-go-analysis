/* IL2CPP: Dino.BusSand.App.UI.ScreenFade$$Run
void Dino_BusSand_App_UI_ScreenFade__Run (System_Action_o* swap, System_Nullable_Color__o veil, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenFade$$Run
   void Dino_BusSand_App_UI_ScreenFade__Run (System_Action_o* swap, System_Nullable_Color__o veil,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_ScreenFade__Run_2289914(long param_1,char *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if ((bRam0000000004f9c16c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb4e10);
    FUN_02132f7c(PTR_DAT_04cb4df8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cb50f0);
    bRam0000000004f9c16c = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar14 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
  if ((uVar3 & 1) == 0) {
    if (lVar14 == 0) {
LAB_02389be8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar14,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Application__get_isPlaying_4351eec(0);
      puVar2 = PTR_DAT_04cabb00;
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)PTR_DAT_04cabb00;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar2;
        }
        lVar6 = *(long *)puVar1;
        uVar15 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar6);
        }
        uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar15 = Dino_BusSand_App_UI_ScreenFade__Create_2289bec(lVar14);
          puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *puVar7 = uVar15;
          thunk_FUN_02134474(puVar7,uVar15);
        }
        lVar14 = *(long *)puVar2;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar14 = *(long *)puVar2;
        }
        pcVar8 = *(char **)(lVar14 + 0xb8);
        lVar4 = *(long *)(pcVar8 + 0x10);
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x28) != '\0') {
            if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            puVar1 = PTR_DAT_04ca9af8;
            uVar15 = 0;
            uVar5 = *(undefined8 *)PTR_DAT_04cb50f0;
            if ((bRam0000000004fa6262 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9af8,0);
              FUN_02132f7c(PTR_DAT_04ce7050);
              bRam0000000004fa6262 = 1;
              uVar15 = extraout_x1;
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              uVar15 = extraout_x1_00;
            }
            if (cRam0000000004f9d848 == '\0') {
              FUN_02132f7c(PTR_DAT_04ca9af8,uVar15);
              cRam0000000004f9d848 = '\x01';
            }
            lVar14 = *(long *)puVar1;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar14 = *(long *)puVar1;
            }
            plVar13 = *(long **)(*(long *)(lVar14 + 0xb8) + 8);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar14 = *plVar13;
            uVar3 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar3 != 0) {
              piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ce7050) {
                  puVar7 = (undefined8 *)(lVar14 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                  goto LAB_044610b0;
                }
                uVar3 = uVar3 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar3 != 0);
            }
            puVar7 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)PTR_DAT_04ce7050,3);
LAB_044610b0:
                    /* WARNING: Could not recover jumptable at 0x044610c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar7)(plVar13,3,uVar5,puVar7[1]);
            return;
          }
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar14 = *(long *)puVar2;
            pcVar8 = *(char **)(lVar14 + 0xb8);
            lVar4 = *(long *)(pcVar8 + 0x10);
          }
          if (*param_2 == '\0') {
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar14 = *(long *)puVar2;
              pcVar8 = *(char **)(lVar14 + 0xb8);
            }
            pcVar12 = pcVar8 + 4;
            pcVar10 = pcVar8 + 8;
            pcVar9 = pcVar8 + 0xc;
          }
          else {
            pcVar9 = param_2 + 0x10;
            pcVar10 = param_2 + 0xc;
            pcVar12 = param_2 + 8;
            pcVar8 = param_2 + 4;
          }
          if (lVar4 != 0) {
            uVar16 = *(undefined4 *)pcVar12;
            uVar17 = *(undefined4 *)pcVar10;
            uVar18 = *(undefined4 *)pcVar9;
            *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)pcVar8;
            *(undefined4 *)(lVar4 + 0x30) = uVar16;
            *(undefined4 *)(lVar4 + 0x34) = uVar17;
            *(undefined4 *)(lVar4 + 0x38) = uVar18;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar14 = *(long *)puVar2;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
            if (lVar14 != 0) {
              lVar4 = Dino_BusSand_App_UI_ScreenFade__Cover_2289e28(lVar14,param_1);
              if (lVar4 == 0) {
                thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
                uVar5 = thunk_FUN_0216e89c();
                uVar15 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
                System_NullReferenceException___ctor_483267c(uVar5,uVar15,0);
              }
              else {
                uVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
                if ((uVar3 & 1) != 0) {
                  if ((bRam0000000004fa84ef & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cf7890);
                    bRam0000000004fa84ef = 1;
                  }
                  if (lVar14 != 0) {
                    lVar6 = *(long *)(lVar14 + 0x10);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                (lVar14,0);
                    }
                    if (pcRam0000000004fa8560 == (code *)0x0) {
                      pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                    }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000004fa8560)(lVar6,lVar4);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                uVar5 = thunk_FUN_0216e89c();
                uVar15 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
                System_ArgumentException___ctor_47b660c(uVar5,uVar15,0);
              }
              uVar15 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar5,uVar15);
            }
          }
        }
        goto LAB_02389be8;
      }
    }
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02389b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}

