/* IL2CPP: Dino.BusSand.App.UI.CommonHeadView$$OnAppearanceChanged
void Dino_BusSand_App_UI_CommonHeadView__OnAppearanceChanged (Dino_BusSand_App_UI_CommonHeadView_o* __this, int32_t a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.CommonHeadView$$OnAppearanceChanged
   void Dino_BusSand_App_UI_CommonHeadView__OnAppearanceChanged
   (Dino_BusSand_App_UI_CommonHeadView_o* __this, int32_t a, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonHeadView__OnAppearanceChanged_22cf96c
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5,int param_6)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c39c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c39c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(param_5,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (param_6 == 1) {
    if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar5 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadFrame_226d198(0);
    if ((bRam0000000004f9c39f & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab478);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cae570);
      FUN_02132f7c(PTR_DAT_04cab188);
      FUN_02132f7c(PTR_DAT_04cab490);
      FUN_02132f7c(PTR_DAT_04caf380);
      bRam0000000004f9c39f = 1;
    }
    Dino_BusSand_App_UI_CommonHeadView__Setup_22cf160(param_5);
    puVar1 = PTR_DAT_04cae570;
    if (*(int *)(param_5 + 0x40) == iVar5) {
      return;
    }
    if (iVar5 == 0x493e1) {
      Dino_BusSand_App_UI_CommonHeadView__ClearFrame_22cfb0c(param_5);
      uVar11 = *(undefined8 *)(param_5 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(param_5 + 0x30) == 0) goto LAB_023cf87c;
        UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_5 + 0x30),1,0);
      }
      iVar5 = 0x493e1;
LAB_023cf600:
      *(int *)(param_5 + 0x40) = iVar5;
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = Dino_BusSand_App_Meta_PlayerIdentity__IsDecorate_226cd0c
                      (iVar5,*(undefined8 *)PTR_DAT_04caf380,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = Dino_BusSand_App_Meta_PlayerIdentity__DecoratePath_226db24(iVar5,0);
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab490);
    }
    lVar6 = Dino_BusSand_App_UiAssets__Prefab_21513b8(uVar11,0);
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
    uVar11 = *(undefined8 *)(param_5 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
    Dino_BusSand_App_UI_CommonHeadView__ClearFrame_22cfb0c(param_5);
    uVar11 = *(undefined8 *)(param_5 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_5 + 0x30) == 0) goto LAB_023cf87c;
      UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_5 + 0x30),0,0);
    }
    uVar11 = *(undefined8 *)(param_5 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar9 = UnityEngine_Object__Instantiate_object__28052a0
                      (lVar6,uVar11,*(undefined8 *)PTR_DAT_04cab478);
    plVar7 = (long *)(param_5 + 0x38);
    *plVar7 = lVar9;
    thunk_FUN_02134474(plVar7,lVar9);
    if (lVar6 != 0) {
      lVar9 = *plVar7;
      uVar11 = UnityEngine_Object__get_name_43c71a4(lVar6,0);
      if (lVar9 != 0) {
        UnityEngine_Object__set_name_43c72ec(lVar9,uVar11,0);
        if (*plVar7 != 0) {
          lVar6 = UnityEngine_GameObject__get_transform_43c1048(*plVar7,0);
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          puVar1 = PTR_DAT_04caa208;
          if (lVar6 != 0) {
            puVar10 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            UnityEngine_Transform__set_localPosition_43cfda8(*puVar10,puVar10[1],puVar10[2],lVar6,0)
            ;
            if (*plVar7 != 0) {
              lVar6 = UnityEngine_GameObject__get_transform_43c1048(*plVar7,0);
              if (cRam0000000004f9b65e == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65e = '\x01';
              }
              if (lVar6 != 0) {
                lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
                UnityEngine_Transform__set_localScale_43d1be0
                          (*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                           *(undefined4 *)(lVar9 + 0x14),lVar6,0);
                lVar6 = *plVar7;
                if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar6,0);
                goto LAB_023cf600;
              }
            }
          }
        }
      }
    }
LAB_023cf87c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (param_6 != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIcon_226beb4(0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c39d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c39d = 1;
  }
  Dino_BusSand_App_UI_CommonHeadView__Setup_22cf160(param_5);
  lVar6 = Dino_BusSand_App_UI_CommonHeadView__HeadSprite_22cfa64(uVar4);
  lVar9 = *(long *)puVar1;
  uVar11 = *(undefined8 *)(param_5 + 0x20);
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar9);
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    puVar1 = PTR_DAT_04ca9ae8;
    if ((uVar8 & 1) != 0) {
      plVar7 = *(long **)(param_5 + 0x20);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((bRam0000000004faae2d & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,lVar6,0);
        bRam0000000004faae2d = 1;
      }
      plVar12 = plVar7 + 0x1b;
      lVar9 = *plVar12;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
      if ((uVar8 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar8 & 1) != 0) {
          if (lVar6 == 0) goto LAB_045a7520;
          UnityEngine_Sprite__get_rect_434ee28(lVar6,0);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          param_3 = param_3 - **(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
          param_4 = param_4 - (*(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
          *(bool *)(plVar7 + 7) = param_3 * param_3 + param_4 * param_4 < _UNK_00e1fea0;
          uVar11 = UnityEngine_Sprite__get_texture_434efd8(lVar6,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar13 = 0;
LAB_045a74c8:
          bVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar11,uVar13,0);
          plVar7[0x1b] = lVar6;
          *(byte *)((long)plVar7 + 0x39) = bVar3 & 1;
          thunk_FUN_02134474(plVar12,lVar6);
          UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_44af7c8(plVar7);
          (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
          puVar1 = PTR_DAT_04ca9ae8;
          if ((bRam0000000004faae41 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cfca18);
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            bRam0000000004faae41 = 1;
          }
          uVar11 = UnityEngine_UI_Image__get_activeSprite_44af950(plVar7);
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar6);
          }
          uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
          if ((uVar8 & 1) != 0) {
            lVar6 = UnityEngine_UI_Image__get_activeSprite_44af950(plVar7);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar11 = UnityEngine_Sprite__get_texture_434efd8(lVar6,0);
            lVar6 = *(long *)puVar1;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar6);
            }
            uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
            if ((uVar8 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_04cfca18 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              UnityEngine_UI_Image__TrackImage_44b2e80(plVar7);
              *(undefined1 *)((long)plVar7 + 0x104) = 1;
            }
          }
          return;
        }
      }
      else {
        lVar9 = *plVar12;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,lVar6,0);
        if ((uVar8 & 1) != 0) {
          if (*plVar12 != 0) {
            UnityEngine_Sprite__get_rect_434ee28(*plVar12,0);
            fVar14 = param_3;
            fVar15 = param_4;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar8 = UnityEngine_Object__op_Implicit_43c703c(lVar6,0);
            if ((uVar8 & 1) == 0) {
              if (cRam0000000004f9b948 == '\0') {
                FUN_02132f7c(PTR_DAT_04cacfc0);
                cRam0000000004f9b948 = '\x01';
              }
              fVar14 = **(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
              fVar15 = (*(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
            }
            else {
              if (lVar6 == 0) goto LAB_045a7520;
              UnityEngine_Sprite__get_rect_434ee28(lVar6,0);
            }
            bVar2 = false;
            if ((param_4 == fVar15) && (bVar2 = false, !NAN(param_3) && !NAN(fVar14))) {
              bVar2 = param_3 == fVar14;
            }
            *(bool *)(plVar7 + 7) = bVar2;
            if (plVar7[0x1b] != 0) {
              uVar11 = UnityEngine_Sprite__get_texture_434efd8(plVar7[0x1b],0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar1);
              }
              uVar8 = UnityEngine_Object__op_Implicit_43c703c(lVar6,0);
              uVar13 = 0;
              if ((uVar8 & 1) != 0) {
                if (lVar6 == 0) goto LAB_045a7520;
                uVar13 = UnityEngine_Sprite__get_texture_434efd8(lVar6,0);
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
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
  return;
}

