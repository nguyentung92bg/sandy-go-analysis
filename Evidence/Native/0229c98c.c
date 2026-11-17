/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$SetHead
void Dino_BusSand_App_UI_BattleRoyaleUi__SetHead (UnityEngine_Transform_o* item, Dino_BusSand_App_Meta_BattleRoyalePerson_o* info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$SetHead
   void Dino_BusSand_App_UI_BattleRoyaleUi__SetHead (UnityEngine_Transform_o* item,
   Dino_BusSand_App_Meta_BattleRoyalePerson_o* info, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleUi__SetHead_219c98c
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadef0);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae428);
    FUN_02132f7c(PTR_DAT_04cae5d8);
    FUN_02132f7c(PTR_DAT_04cae5e0);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cae5e8);
    FUN_02132f7c(PTR_DAT_04cae5f0);
    FUN_02132f7c(PTR_DAT_04cae5f8);
    FUN_02132f7c(PTR_DAT_04cae600);
    bRam0000000004f9b9ff = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(param_5,0,0);
  if ((uVar7 & 1) == 0) {
    if (param_5 == 0) {
LAB_0229ccf4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = UnityEngine_Transform__Find_43d4bec(param_5,*(undefined8 *)PTR_DAT_04cae5d8,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                        (param_5,*(undefined8 *)PTR_DAT_04cadc80,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    puVar3 = PTR_DAT_04cadef0;
    if ((uVar7 & 1) == 0) {
      if (param_6 == 0) {
        bVar5 = false;
        bVar4 = false;
      }
      else {
        iVar1 = *(int *)(param_6 + 0x10);
        lVar9 = *(long *)PTR_DAT_04cadef0;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar9 = *(long *)puVar3;
        }
        bVar5 = iVar1 == **(int **)(lVar9 + 0xb8);
        bVar4 = 0 < *(int *)(param_6 + 0x14);
      }
      if (lVar8 == 0) goto LAB_0229ccf4;
      uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cae5e8,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar10,0);
      uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cae5f8,0);
      bVar6 = bVar4 ^ 1;
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar10,bVar6);
      uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cae600,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar10,bVar6);
      uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cae5f0,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar10,!bVar5 && param_6 != 0);
      uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cae5e0,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar10,bVar5 && param_6 != 0);
      lVar8 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cae428,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(lVar8,bVar4);
      if (bVar6 == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
        if ((uVar7 & 1) != 0) {
          if ((lVar8 == 0) ||
             (plVar11 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                          (lVar8,*(undefined8 *)PTR_DAT_04cad788), param_6 == 0))
          goto LAB_0229ccf4;
          lVar8 = Dino_BusSand_App_UI_BattleRoyaleUi__HeadSprite_219c878
                            (*(undefined4 *)(param_6 + 0x14));
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar11,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
            puVar2 = PTR_DAT_04ca9ae8;
            if ((uVar7 & 1) != 0) {
              if (plVar11 == (long *)0x0) goto LAB_0229ccf4;
              if ((bRam0000000004faae2d & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04ca9ae8,lVar8,0);
                bRam0000000004faae2d = 1;
              }
              plVar12 = plVar11 + 0x1b;
              lVar9 = *plVar12;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
                if ((uVar7 & 1) != 0) {
                  if (lVar8 == 0) goto LAB_045a7520;
                  UnityEngine_Sprite__get_rect_434ee28(lVar8,0);
                  if (cRam0000000004f9b948 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cacfc0);
                    cRam0000000004f9b948 = '\x01';
                  }
                  param_3 = param_3 - **(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
                  param_4 = param_4 - (*(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
                  *(bool *)(plVar11 + 7) = param_3 * param_3 + param_4 * param_4 < _UNK_00e1fea0;
                  uVar10 = UnityEngine_Sprite__get_texture_434efd8(lVar8,0);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar2);
                  }
                  uVar13 = 0;
LAB_045a74c8:
                  bVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar10,uVar13,0);
                  plVar11[0x1b] = lVar8;
                  *(byte *)((long)plVar11 + 0x39) = bVar6 & 1;
                  thunk_FUN_02134474(plVar12,lVar8);
                  UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_44af7c8
                            (plVar11);
                  (**(code **)(*plVar11 + 0x2d8))(plVar11,*(undefined8 *)(*plVar11 + 0x2e0));
                  puVar2 = PTR_DAT_04ca9ae8;
                  if ((bRam0000000004faae41 & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cfca18);
                    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    bRam0000000004faae41 = 1;
                  }
                  uVar10 = UnityEngine_UI_Image__get_activeSprite_44af950(plVar11);
                  lVar8 = *(long *)puVar2;
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(lVar8);
                  }
                  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
                  if ((uVar7 & 1) != 0) {
                    lVar8 = UnityEngine_UI_Image__get_activeSprite_44af950(plVar11);
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    uVar10 = UnityEngine_Sprite__get_texture_434efd8(lVar8,0);
                    lVar8 = *(long *)puVar2;
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(lVar8);
                    }
                    uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
                    if ((uVar7 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_04cfca18 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      UnityEngine_UI_Image__TrackImage_44b2e80(plVar11);
                      *(undefined1 *)((long)plVar11 + 0x104) = 1;
                    }
                  }
                  return;
                }
              }
              else {
                lVar9 = *plVar12;
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,lVar8,0);
                if ((uVar7 & 1) != 0) {
                  if (*plVar12 != 0) {
                    UnityEngine_Sprite__get_rect_434ee28(*plVar12,0);
                    fVar14 = param_3;
                    fVar15 = param_4;
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar7 = UnityEngine_Object__op_Implicit_43c703c(lVar8,0);
                    if ((uVar7 & 1) == 0) {
                      if (cRam0000000004f9b948 == '\0') {
                        FUN_02132f7c(PTR_DAT_04cacfc0);
                        cRam0000000004f9b948 = '\x01';
                      }
                      fVar14 = **(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
                      fVar15 = (*(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
                    }
                    else {
                      if (lVar8 == 0) goto LAB_045a7520;
                      UnityEngine_Sprite__get_rect_434ee28(lVar8,0);
                    }
                    bVar4 = false;
                    if ((param_4 == fVar15) && (bVar4 = false, !NAN(param_3) && !NAN(fVar14))) {
                      bVar4 = param_3 == fVar14;
                    }
                    *(bool *)(plVar11 + 7) = bVar4;
                    if (plVar11[0x1b] != 0) {
                      uVar10 = UnityEngine_Sprite__get_texture_434efd8(plVar11[0x1b],0);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)puVar2);
                      }
                      uVar7 = UnityEngine_Object__op_Implicit_43c703c(lVar8,0);
                      uVar13 = 0;
                      if ((uVar7 & 1) != 0) {
                        if (lVar8 == 0) goto LAB_045a7520;
                        uVar13 = UnityEngine_Sprite__get_texture_434efd8(lVar8,0);
                      }
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      goto LAB_045a74c8;
                    }
                  }
LAB_045a7520:
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              }
              return;
            }
          }
        }
      }
    }
  }
  return;
}

