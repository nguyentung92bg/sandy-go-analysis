/* IL2CPP: Dino.BusSand.View.GameView$$RefreshCounter
void Dino_BusSand_View_GameView__RefreshCounter (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$RefreshCounter
   void Dino_BusSand_View_GameView__RefreshCounter (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__RefreshCounter_239e460(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined4 uVar17;
  int iVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar13 != 0)) {
    lVar21 = *(long *)(param_1 + 0xa0);
    iVar12 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(lVar13,0);
    puVar8 = PTR_DAT_04ca9ae8;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       ((lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar13 != 0 && (lVar21 != 0)))) {
      iVar1 = *(int *)(lVar13 + 0x38);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar18 = 1;
      if (iVar12 < iVar1 + -1) {
        iVar18 = 2;
      }
      if (iVar1 <= iVar12) {
        iVar18 = 0;
      }
      if ((bRam0000000004f9cb19 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cab208);
        FUN_02132f7c(PTR_DAT_04cb6dd0);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cbc2b8);
        FUN_02132f7c(PTR_DAT_04cbe1c8);
        FUN_02132f7c(PTR_DAT_04cbe2b0);
        FUN_02132f7c(PTR_DAT_04cbe1f8);
        FUN_02132f7c(PTR_DAT_04cbe2b8);
        FUN_02132f7c(PTR_DAT_04cbe228);
        FUN_02132f7c(PTR_DAT_04cbe2c0);
        FUN_02132f7c(PTR_DAT_04cbe158);
        bRam0000000004f9cb19 = 1;
      }
      uVar22 = *(undefined8 *)(lVar21 + 0x38);
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar14 = UnityEngine_Object__op_Equality_43c6f30(uVar22,0,0);
      puVar8 = PTR_DAT_04cab208;
      if (((uVar14 & 1) != 0) || (*(int *)(lVar21 + 0x40) == iVar18)) {
        return;
      }
      *(int *)(lVar21 + 0x40) = iVar18;
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar13 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
      if (lVar13 != 0) {
        lVar13 = Dino_BusSand_GameAssets__GetModel_237d214(lVar13,*(undefined8 *)PTR_DAT_04cbe158,0)
        ;
        if ((*(long *)(lVar21 + 0x38) != 0) &&
           (plVar15 = (long *)UnityEngine_Renderer__get_sharedMaterials_43743d0
                                        (*(long *)(lVar21 + 0x38),0), puVar11 = PTR_DAT_04cbe228,
           puVar10 = PTR_DAT_04cbe1c8, puVar9 = PTR_DAT_04cbc2b8, puVar8 = PTR_DAT_04cb6dd0,
           uVar7 = _UNK_00e207cc, uVar6 = _UNK_00e20754, uVar5 = _UNK_00e2065c,
           uVar4 = _UNK_00e205f8, uVar3 = _UNK_00e205e8, uVar2 = _UNK_00e20390,
           uVar17 = _UNK_00e20184, plVar15 != (long *)0x0)) {
          if ((lVar13 != 0) && (0 < (int)plVar15[3])) {
            uVar23 = 0;
            do {
              lVar19 = *(long *)(lVar13 + 0x20);
              if ((lVar19 == 0) || ((int)*(uint *)(lVar19 + 0x18) <= (int)uVar23)) break;
              if (*(uint *)(lVar19 + 0x18) <= uVar23) goto LAB_025074bc;
              lVar19 = *(long *)(lVar19 + (long)(int)uVar23 * 8 + 0x20);
              if (lVar19 == 0) goto LAB_025074b8;
              uVar14 = System_String__StartsWith_46d117c(lVar19,*(undefined8 *)puVar10,0);
              if ((uVar14 & 1) == 0) {
                uVar14 = System_String__StartsWith_46d117c(lVar19,*(undefined8 *)puVar11,0);
                if ((uVar14 & 1) != 0) {
                  if (iVar18 == 1) {
                    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    puVar20 = (undefined8 *)PTR_DAT_04cbe2b8;
                    uVar24 = 0x3f800000;
                    uVar25 = uVar3;
                    uVar26 = uVar4;
                    goto LAB_025073e0;
                  }
                  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar22 = *(undefined8 *)puVar11;
LAB_02507428:
                  lVar19 = Dino_BusSand_View_WorldView__SlotMaterial_24049a4(uVar22);
                  goto LAB_0250742c;
                }
                uVar14 = System_String__StartsWith_46d117c(lVar19,*(undefined8 *)PTR_DAT_04cbe1f8,0)
                ;
                if ((uVar14 & 1) != 0) {
                  if (iVar18 == 2) {
                    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar25 = 0x3f800000;
                    puVar20 = (undefined8 *)PTR_DAT_04cbe2c0;
                    uVar24 = uVar2;
                    uVar26 = uVar7;
                    goto LAB_025073e0;
                  }
                  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar22 = *(undefined8 *)PTR_DAT_04cbe1f8;
                  goto LAB_02507428;
                }
              }
              else {
                if (iVar18 != 0) {
                  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar22 = *(undefined8 *)puVar10;
                  goto LAB_02507428;
                }
                if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                puVar20 = (undefined8 *)PTR_DAT_04cbe2b0;
                uVar24 = 0x3f800000;
                uVar25 = uVar5;
                uVar26 = uVar6;
LAB_025073e0:
                lVar19 = Dino_BusSand_View_MaterialLibrary__Emissive_23bace0
                                   (uVar24,uVar25,uVar26,0x3f800000,uVar17,*puVar20,0);
LAB_0250742c:
                if ((lVar19 != 0) &&
                   (lVar16 = thunk_FUN_0216e7a0(lVar19,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar16 == 0)) {
                  uVar22 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                  FUN_021330e8(uVar22,0);
                }
                if (*(uint *)(plVar15 + 3) <= uVar23) {
LAB_025074bc:
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                plVar15[(long)(int)uVar23 + 4] = lVar19;
                thunk_FUN_02134474(plVar15 + (long)(int)uVar23 + 4,lVar19);
              }
              uVar23 = uVar23 + 1;
            } while ((int)uVar23 < (int)plVar15[3]);
          }
          lVar13 = *(long *)(lVar21 + 0x38);
          if (lVar13 != 0) {
            if (plVar15 == (long *)0x0) {
              uVar17 = 0;
            }
            else {
              uVar17 = (undefined4)plVar15[3];
            }
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224(0,plVar15,uVar17);
            }
            if ((bRam0000000004fa68be & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf67a0);
              FUN_02132f7c(PTR_DAT_04caef28);
              bRam0000000004fa68be = 1;
            }
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_43c84f8
                        (0,*(undefined8 *)PTR_DAT_04caef28,0);
            }
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar21 = *(long *)(lVar13 + 0x10);
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar13,0);
            }
            if (pcRam0000000004fa6900 == (code *)0x0) {
              pcRam0000000004fa6900 = (code *)FUN_02132f40(&UNK_00e3b0e1);
            }
                    /* WARNING: Could not recover jumptable at 0x0447354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa6900)(lVar21,plVar15,uVar17);
            return;
          }
        }
      }
LAB_025074b8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

