/* IL2CPP: Dino.BusSand.View.WorldView$$SetRoadLoad
void Dino_BusSand_View_WorldView__SetRoadLoad (Dino_BusSand_View_WorldView_o* __this, int32_t active, int32_t capacity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$SetRoadLoad
   void Dino_BusSand_View_WorldView__SetRoadLoad (Dino_BusSand_View_WorldView_o* __this, int32_t
   active, int32_t capacity, const MethodInfo* method); */

void Dino_BusSand_View_WorldView__SetRoadLoad_240acac(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined4 uVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  puVar7 = PTR_DAT_04ca9ae8;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar16 = 1;
  if (param_2 < param_3 + -1) {
    iVar16 = 2;
  }
  if (param_3 <= param_2) {
    iVar16 = 0;
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
  uVar19 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
  puVar7 = PTR_DAT_04cab208;
  if (((uVar11 & 1) != 0) || (*(int *)(param_1 + 0x40) == iVar16)) {
    return;
  }
  *(int *)(param_1 + 0x40) = iVar16;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar12 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  if (lVar12 != 0) {
    lVar12 = Dino_BusSand_GameAssets__GetModel_237d214(lVar12,*(undefined8 *)PTR_DAT_04cbe158,0);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (plVar13 = (long *)UnityEngine_Renderer__get_sharedMaterials_43743d0
                                    (*(long *)(param_1 + 0x38),0), puVar10 = PTR_DAT_04cbe228,
       puVar9 = PTR_DAT_04cbe1c8, puVar8 = PTR_DAT_04cbc2b8, puVar7 = PTR_DAT_04cb6dd0,
       uVar6 = _UNK_00e207cc, uVar5 = _UNK_00e20754, uVar4 = _UNK_00e2065c, uVar3 = _UNK_00e205f8,
       uVar2 = _UNK_00e205e8, uVar1 = _UNK_00e20390, uVar15 = _UNK_00e20184, plVar13 != (long *)0x0)
       ) {
      if ((lVar12 != 0) && (0 < (int)plVar13[3])) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(lVar12 + 0x20);
          if ((lVar17 == 0) || ((int)*(uint *)(lVar17 + 0x18) <= (int)uVar20)) break;
          if (*(uint *)(lVar17 + 0x18) <= uVar20) goto LAB_025074bc;
          lVar17 = *(long *)(lVar17 + (long)(int)uVar20 * 8 + 0x20);
          if (lVar17 == 0) goto LAB_025074b8;
          uVar11 = System_String__StartsWith_46d117c(lVar17,*(undefined8 *)puVar9,0);
          if ((uVar11 & 1) == 0) {
            uVar11 = System_String__StartsWith_46d117c(lVar17,*(undefined8 *)puVar10,0);
            if ((uVar11 & 1) != 0) {
              if (iVar16 == 1) {
                if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                puVar18 = (undefined8 *)PTR_DAT_04cbe2b8;
                uVar21 = 0x3f800000;
                uVar22 = uVar2;
                uVar23 = uVar3;
                goto LAB_025073e0;
              }
              if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar19 = *(undefined8 *)puVar10;
LAB_02507428:
              lVar17 = Dino_BusSand_View_WorldView__SlotMaterial_24049a4(uVar19);
              goto LAB_0250742c;
            }
            uVar11 = System_String__StartsWith_46d117c(lVar17,*(undefined8 *)PTR_DAT_04cbe1f8,0);
            if ((uVar11 & 1) != 0) {
              if (iVar16 == 2) {
                if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar22 = 0x3f800000;
                puVar18 = (undefined8 *)PTR_DAT_04cbe2c0;
                uVar21 = uVar1;
                uVar23 = uVar6;
                goto LAB_025073e0;
              }
              if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar19 = *(undefined8 *)PTR_DAT_04cbe1f8;
              goto LAB_02507428;
            }
          }
          else {
            if (iVar16 != 0) {
              if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar19 = *(undefined8 *)puVar9;
              goto LAB_02507428;
            }
            if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            puVar18 = (undefined8 *)PTR_DAT_04cbe2b0;
            uVar21 = 0x3f800000;
            uVar22 = uVar4;
            uVar23 = uVar5;
LAB_025073e0:
            lVar17 = Dino_BusSand_View_MaterialLibrary__Emissive_23bace0
                               (uVar21,uVar22,uVar23,0x3f800000,uVar15,*puVar18,0);
LAB_0250742c:
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
            {
              uVar19 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar19,0);
            }
            if (*(uint *)(plVar13 + 3) <= uVar20) {
LAB_025074bc:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar13[(long)(int)uVar20 + 4] = lVar17;
            thunk_FUN_02134474(plVar13 + (long)(int)uVar20 + 4,lVar17);
          }
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)plVar13[3]);
      }
      lVar12 = *(long *)(param_1 + 0x38);
      if (lVar12 != 0) {
        if (plVar13 == (long *)0x0) {
          uVar15 = 0;
        }
        else {
          uVar15 = (undefined4)plVar13[3];
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224(0,plVar13,uVar15);
        }
        if ((bRam0000000004fa68be & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf67a0);
          FUN_02132f7c(PTR_DAT_04caef28);
          bRam0000000004fa68be = 1;
        }
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_43c84f8
                    (0,*(undefined8 *)PTR_DAT_04caef28,0);
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar17 = *(long *)(lVar12 + 0x10);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar12,0);
        }
        if (pcRam0000000004fa6900 == (code *)0x0) {
          pcRam0000000004fa6900 = (code *)FUN_02132f40(&UNK_00e3b0e1);
        }
                    /* WARNING: Could not recover jumptable at 0x0447354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa6900)(lVar17,plVar13,uVar15);
        return;
      }
    }
  }
LAB_025074b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

