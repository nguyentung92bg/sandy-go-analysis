/* IL2CPP: Dino.BusSand.View.WorldView$$BuildBoardFrame
void Dino_BusSand_View_WorldView__BuildBoardFrame (Dino_BusSand_View_WorldView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0250733c) */
/* WARNING: Removing unreachable block (ram,0x02507348) */
/* WARNING: Removing unreachable block (ram,0x0250734c) */
/* WARNING: Removing unreachable block (ram,0x0250740c) */
/* WARNING: Removing unreachable block (ram,0x02507418) */
/* WARNING: Removing unreachable block (ram,0x0250741c) */
/* WARNING: Removing unreachable block (ram,0x025073b8) */
/* WARNING: Removing unreachable block (ram,0x025073c4) */
/* WARNING: Removing unreachable block (ram,0x025073c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$BuildBoardFrame
   void Dino_BusSand_View_WorldView__BuildBoardFrame (Dino_BusSand_View_WorldView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_WorldView__BuildBoardFrame_2403938(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  puVar2 = PTR_DAT_04cbc250;
  if ((bRam0000000004f9cb18 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbc388);
    FUN_02132f7c(PTR_DAT_04cbe138);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    FUN_02132f7c(PTR_DAT_04cbe140);
    FUN_02132f7c(PTR_DAT_04cbe148);
    FUN_02132f7c(PTR_DAT_04cbc978);
    FUN_02132f7c(PTR_DAT_04cbe150);
    FUN_02132f7c(PTR_DAT_04cbe158);
    FUN_02132f7c(PTR_DAT_04cbe160);
    bRam0000000004f9cb18 = 1;
  }
  lVar12 = *(long *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
  puVar3 = PTR_DAT_04cbe148;
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_View_StageLayout__BoardPoint_23e89d4(0x3f000000,0,0,lVar12,0);
  uVar6 = Dino_BusSand_View_WorldView__Model_24054f0(param_1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_04cbc2b8;
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar7 & 1) != 0) {
    Dino_BusSand_View_WorldView__ProceduralFrame_2406c48(param_1);
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar2;
  }
  fVar1 = _UNK_00e2098c;
  if (**(char **)(lVar8 + 0xb8) != '\0') {
    fVar14 = *(float *)(lVar12 + 100);
    fVar16 = *(float *)(lVar12 + 0xf0);
    fVar15 = *(float *)(lVar12 + 0x60) * _UNK_00e20590;
    if (cRam0000000004f9b88b == '\0') {
      FUN_02132f7c(PTR_DAT_04cab4b0);
      cRam0000000004f9b88b = '\x01';
    }
    puVar2 = PTR_DAT_04cbe158;
    puVar11 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
    uVar17 = *puVar11;
    uVar18 = puVar11[1];
    uVar19 = puVar11[2];
    uVar20 = puVar11[3];
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    uVar6 = Dino_BusSand_View_WorldView__Model_24054f0
                      (fVar14 * fVar1,0,fVar16 + fVar15,uVar17,uVar18,uVar19,uVar20,param_1,
                       *(undefined8 *)puVar2,1);
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    thunk_FUN_02134474();
  }
  puVar2 = PTR_DAT_04ca9ae8;
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
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  puVar2 = PTR_DAT_04cab208;
  if (((uVar7 & 1) != 0) || (*(int *)(param_1 + 0x40) == 2)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 2;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar12 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  if (lVar12 != 0) {
    lVar12 = Dino_BusSand_GameAssets__GetModel_237d214(lVar12,*(undefined8 *)PTR_DAT_04cbe158,0);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (plVar9 = (long *)UnityEngine_Renderer__get_sharedMaterials_43743d0
                                   (*(long *)(param_1 + 0x38),0), puVar5 = PTR_DAT_04cbe228,
       puVar4 = PTR_DAT_04cbe1c8, puVar3 = PTR_DAT_04cbc2b8, puVar2 = PTR_DAT_04cb6dd0,
       uVar19 = _UNK_00e207cc, uVar18 = _UNK_00e20390, uVar17 = _UNK_00e20184, plVar9 != (long *)0x0
       )) {
      if ((lVar12 != 0) && (0 < (int)plVar9[3])) {
        uVar13 = 0;
        do {
          lVar8 = *(long *)(lVar12 + 0x20);
          if ((lVar8 == 0) || ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar13)) break;
          if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_025074bc;
          lVar8 = *(long *)(lVar8 + (long)(int)uVar13 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_025074b8;
          uVar7 = System_String__StartsWith_46d117c(lVar8,*(undefined8 *)puVar4,0);
          if ((uVar7 & 1) == 0) {
            uVar7 = System_String__StartsWith_46d117c(lVar8,*(undefined8 *)puVar5,0);
            if ((uVar7 & 1) != 0) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar6 = *(undefined8 *)puVar5;
              goto LAB_02507428;
            }
            uVar7 = System_String__StartsWith_46d117c(lVar8,*(undefined8 *)PTR_DAT_04cbe1f8,0);
            if ((uVar7 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar8 = Dino_BusSand_View_MaterialLibrary__Emissive_23bace0
                                (uVar18,0x3f800000,uVar19,0x3f800000,uVar17,
                                 *(undefined8 *)PTR_DAT_04cbe2c0,0);
              goto LAB_0250742c;
            }
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar6 = *(undefined8 *)puVar4;
LAB_02507428:
            lVar8 = Dino_BusSand_View_WorldView__SlotMaterial_24049a4(uVar6);
LAB_0250742c:
            if ((lVar8 != 0) &&
               (lVar10 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
              uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar6,0);
            }
            if (*(uint *)(plVar9 + 3) <= uVar13) {
LAB_025074bc:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar9[(long)(int)uVar13 + 4] = lVar8;
            thunk_FUN_02134474(plVar9 + (long)(int)uVar13 + 4,lVar8);
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)plVar9[3]);
      }
      lVar12 = *(long *)(param_1 + 0x38);
      if (lVar12 != 0) {
        if (plVar9 == (long *)0x0) {
          uVar17 = 0;
        }
        else {
          uVar17 = (undefined4)plVar9[3];
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224(0,plVar9,uVar17);
        }
        if ((bRam0000000004fa68be & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf67a0);
          FUN_02132f7c(PTR_DAT_04caef28);
          bRam0000000004fa68be = 1;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_43c84f8
                    (0,*(undefined8 *)PTR_DAT_04caef28,0);
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar8 = *(long *)(lVar12 + 0x10);
        if (lVar8 != 0) {
          if (pcRam0000000004fa6900 == (code *)0x0) {
            pcRam0000000004fa6900 = (code *)FUN_02132f40(&UNK_00e3b0e1);
          }
                    /* WARNING: Could not recover jumptable at 0x0447354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa6900)(lVar8,plVar9,uVar17);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar12,0);
      }
    }
  }
LAB_025074b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

