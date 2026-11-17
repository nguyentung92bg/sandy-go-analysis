/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$RefreshAllUI
void Dino_BusSand_App_UI_ClimbTowerItemView__RefreshAllUI (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$RefreshAllUI
   void Dino_BusSand_App_UI_ClimbTowerItemView__RefreshAllUI
   (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerItemView__RefreshAllUI_21a1858(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  byte bVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  
  if ((bRam0000000004f9ba21 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cae7e8);
    FUN_02132f7c(PTR_DAT_04cae7f0);
    FUN_02132f7c(PTR_DAT_04cae7f8);
    FUN_02132f7c(PTR_DAT_04cae800);
    FUN_02132f7c(PTR_DAT_04cae808);
    FUN_02132f7c(PTR_DAT_04cae810);
    FUN_02132f7c(PTR_DAT_04cae818);
    FUN_02132f7c(PTR_DAT_04cae820);
    FUN_02132f7c(PTR_DAT_04cae828);
    FUN_02132f7c(PTR_DAT_04cae830);
    FUN_02132f7c(PTR_DAT_04cae838);
    FUN_02132f7c(PTR_DAT_04cae840);
    FUN_02132f7c(PTR_DAT_04cae848);
    FUN_02132f7c(PTR_DAT_04cae850);
    FUN_02132f7c(PTR_DAT_04cae858);
    bRam0000000004f9ba21 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar13 = Dino_BusSand_App_Meta_ClimbTowerFeature__WinPointIndex_2229ef0
                       (*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34),0);
    puVar7 = PTR_DAT_04caa038;
    if (*(long *)(param_1 + 0x28) != 0) {
      bVar12 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsArchivePoint_2229ce4
                         (*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34),0);
      iVar4 = *(int *)(param_1 + 0x3c);
      lVar14 = FUN_02133068(*(undefined8 *)puVar7,0xb);
      puVar7 = PTR_DAT_04cae818;
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x18) != 0) {
          *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_04cae818;
          thunk_FUN_02134474((undefined8 *)(lVar14 + 0x20));
          if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)PTR_DAT_04cae830;
            thunk_FUN_02134474((undefined8 *)(lVar14 + 0x28));
            puVar9 = PTR_DAT_04cae800;
            if (2 < *(uint *)(lVar14 + 0x18)) {
              *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_04cae800;
              thunk_FUN_02134474((undefined8 *)(lVar14 + 0x30));
              puVar2 = (undefined8 *)PTR_DAT_04cae828;
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)PTR_DAT_04cae828;
                thunk_FUN_02134474((undefined8 *)(lVar14 + 0x38));
                if (4 < *(uint *)(lVar14 + 0x18)) {
                  *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_04cae840;
                  thunk_FUN_02134474((undefined8 *)(lVar14 + 0x40));
                  if (5 < *(uint *)(lVar14 + 0x18)) {
                    *(undefined8 *)(lVar14 + 0x48) = *(undefined8 *)PTR_DAT_04cae7f0;
                    thunk_FUN_02134474((undefined8 *)(lVar14 + 0x48));
                    if (6 < *(uint *)(lVar14 + 0x18)) {
                      *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)PTR_DAT_04cae808;
                      thunk_FUN_02134474((undefined8 *)(lVar14 + 0x50));
                      if ((*(uint *)(lVar14 + 0x18) & 0xfffffff8) != 0) {
                        *(undefined8 *)(lVar14 + 0x58) = *(undefined8 *)PTR_DAT_04cae848;
                        thunk_FUN_02134474((undefined8 *)(lVar14 + 0x58));
                        if (8 < *(uint *)(lVar14 + 0x18)) {
                          *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)PTR_DAT_04cae838;
                          thunk_FUN_02134474((undefined8 *)(lVar14 + 0x60));
                          if (9 < *(uint *)(lVar14 + 0x18)) {
                            *(undefined8 *)(lVar14 + 0x68) = *(undefined8 *)PTR_DAT_04cae810;
                            thunk_FUN_02134474((undefined8 *)(lVar14 + 0x68));
                            puVar8 = PTR_DAT_04cae7e8;
                            if (10 < *(uint *)(lVar14 + 0x18)) {
                              *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)PTR_DAT_04cae7f8;
                              thunk_FUN_02134474((undefined8 *)(lVar14 + 0x70));
                              if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
                                uVar19 = 0;
                                uVar18 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
                                do {
                                  if (uVar18 <= uVar19) goto LAB_022a1ecc;
                                  uVar15 = System_String__Concat_46c82e0
                                                     (*(undefined8 *)puVar8,
                                                      *(undefined8 *)(lVar14 + 0x20 + uVar19 * 8),0)
                                  ;
                                  uVar15 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c
                                                     (param_1,uVar15);
                                  Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c
                                            (uVar15,0);
                                  uVar18 = (ulong)*(uint *)(lVar14 + 0x18);
                                  uVar19 = uVar19 + 1;
                                } while ((long)uVar19 < (long)(int)*(uint *)(lVar14 + 0x18));
                              }
                              puVar6 = PTR_DAT_04ca9ae8;
                              Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c
                                        (*(undefined8 *)(param_1 + 0x78),
                                         *(int *)(param_1 + 0x3c) == 1);
                              uVar15 = *(undefined8 *)(param_1 + 0x78);
                              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              uVar19 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
                              if (((uVar19 & 1) != 0) && (*(int *)(param_1 + 0x3c) == 1)) {
                                plVar16 = *(long **)(param_1 + 0x78);
                                if (plVar16 == (long *)0x0) goto LAB_022a1ed0;
                                if (*plVar16 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_021335a4();
                                }
                                UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                          (_UNK_00e200a4,0xc0400000,plVar16,0);
                              }
                              puVar10 = PTR_DAT_04cae850;
                              puVar6 = PTR_DAT_04cae820;
                              Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c
                                        (*(undefined8 *)(param_1 + 0x58),(bVar12 ^ 0xff) & 1);
                              bVar12 = bVar12 & 1;
                              puVar1 = (undefined8 *)PTR_DAT_04cae838;
                              puVar3 = (undefined8 *)PTR_DAT_04cae808;
                              puVar5 = (undefined8 *)PTR_DAT_04cae830;
                              if (bVar12 == 0) {
                                puVar1 = (undefined8 *)PTR_DAT_04cae810;
                                puVar3 = (undefined8 *)PTR_DAT_04cae848;
                                puVar5 = (undefined8 *)puVar7;
                                puVar2 = (undefined8 *)puVar9;
                              }
                              Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c
                                        (*(undefined8 *)(param_1 + 0x60),bVar12);
                              uVar15 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c
                                                 (param_1,*(undefined8 *)puVar6);
                              Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c
                                        (uVar15,*(int *)(param_1 + 0x3c) == 2);
                              uVar15 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c
                                                 (param_1,*(undefined8 *)puVar10);
                              Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c
                                        (uVar15,*(int *)(param_1 + 0x3c) == 1 && iVar13 < 3);
                              uVar15 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c
                                                 (param_1,*(undefined8 *)PTR_DAT_04cae858);
                              bVar11 = *(int *)(param_1 + 0x3c) != 1;
                              Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c
                                        (uVar15,(!bVar11 && iVar13 != 2) && (bVar11 || 1 < iVar13));
                              bVar11 = iVar4 == 0;
                              if (!bVar11) {
                                puVar2 = puVar5;
                              }
                              if (!bVar11) {
                                puVar3 = puVar1;
                              }
                              Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c
                                        (*(undefined8 *)(param_1 + 0x80),bVar12 & bVar11);
                              Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c
                                        (*(undefined8 *)(param_1 + 0x88),bVar12 & !bVar11);
                              uVar15 = System_String__Concat_46c82e0
                                                 (*(undefined8 *)puVar8,*puVar2,0);
                              uVar15 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c
                                                 (param_1,uVar15);
                              Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c(uVar15,1);
                              uVar15 = System_String__Concat_46c82e0
                                                 (*(undefined8 *)puVar8,*puVar3,0);
                              uVar15 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c
                                                 (param_1,uVar15);
                              Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c(uVar15,1);
                              uVar15 = System_Int32__ToString_482d750(param_1 + 0x34,0);
                              lVar14 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,4);
                              if (lVar14 == 0) goto LAB_022a1ed0;
                              if (*(int *)(lVar14 + 0x18) != 0) {
                                *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_04cae810;
                                thunk_FUN_02134474((undefined8 *)(lVar14 + 0x20));
                                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) != 0) {
                                  *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)PTR_DAT_04cae838;
                                  thunk_FUN_02134474((undefined8 *)(lVar14 + 0x28));
                                  if (2 < *(uint *)(lVar14 + 0x18)) {
                                    *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_04cae848
                                    ;
                                    thunk_FUN_02134474((undefined8 *)(lVar14 + 0x30));
                                    if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) != 0) {
                                      *(undefined8 *)(lVar14 + 0x38) =
                                           *(undefined8 *)PTR_DAT_04cae808;
                                      thunk_FUN_02134474((undefined8 *)(lVar14 + 0x38));
                                      if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
                                        uVar19 = 0;
                                        uVar18 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
                                        do {
                                          if (uVar18 <= uVar19) goto LAB_022a1ecc;
                                          uVar17 = System_String__Concat_46c82e0
                                                             (*(undefined8 *)puVar8,
                                                              *(undefined8 *)
                                                               (lVar14 + 0x20 + uVar19 * 8),0);
                                          uVar17 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c
                                                             (param_1,uVar17);
                                          Dino_BusSand_App_UI_ClimbTowerItemView__SetTexts_21a15f0
                                                    (uVar17,uVar15);
                                          uVar18 = (ulong)*(uint *)(lVar14 + 0x18);
                                          uVar19 = uVar19 + 1;
                                        } while ((long)uVar19 < (long)(int)*(uint *)(lVar14 + 0x18))
                                        ;
                                      }
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_022a1ecc:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_022a1ed0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

