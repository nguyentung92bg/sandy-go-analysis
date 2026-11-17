/* IL2CPP: Dino.BusSand.App.UI.CommonHeadView$$RefreshHead
void Dino_BusSand_App_UI_CommonHeadView__RefreshHead (Dino_BusSand_App_UI_CommonHeadView_o* __this, int32_t headId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.CommonHeadView$$RefreshHead
   void Dino_BusSand_App_UI_CommonHeadView__RefreshHead (Dino_BusSand_App_UI_CommonHeadView_o*
   __this, int32_t headId, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonHeadView__RefreshHead_22cf440
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5,undefined4 param_6)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c39d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c39d = 1;
  }
  Dino_BusSand_App_UI_CommonHeadView__Setup_22cf160(param_5);
  lVar4 = Dino_BusSand_App_UI_CommonHeadView__HeadSprite_22cfa64(param_6);
  lVar7 = *(long *)puVar1;
  uVar8 = *(undefined8 *)(param_5 + 0x20);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
    puVar1 = PTR_DAT_04ca9ae8;
    if ((uVar5 & 1) != 0) {
      plVar6 = *(long **)(param_5 + 0x20);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((bRam0000000004faae2d & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,lVar4,0);
        bRam0000000004faae2d = 1;
      }
      plVar9 = plVar6 + 0x1b;
      lVar7 = *plVar9;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar4 == 0) goto LAB_045a7520;
          UnityEngine_Sprite__get_rect_434ee28(lVar4,0);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          param_3 = param_3 - **(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
          param_4 = param_4 - (*(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
          *(bool *)(plVar6 + 7) = param_3 * param_3 + param_4 * param_4 < _UNK_00e1fea0;
          uVar8 = UnityEngine_Sprite__get_texture_434efd8(lVar4,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar10 = 0;
LAB_045a74c8:
          bVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar8,uVar10,0);
          plVar6[0x1b] = lVar4;
          *(byte *)((long)plVar6 + 0x39) = bVar3 & 1;
          thunk_FUN_02134474(plVar9,lVar4);
          UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_44af7c8(plVar6);
          (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
          puVar1 = PTR_DAT_04ca9ae8;
          if ((bRam0000000004faae41 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cfca18);
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            bRam0000000004faae41 = 1;
          }
          uVar8 = UnityEngine_UI_Image__get_activeSprite_44af950(plVar6);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar4);
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
          if ((uVar5 & 1) != 0) {
            lVar4 = UnityEngine_UI_Image__get_activeSprite_44af950(plVar6);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar8 = UnityEngine_Sprite__get_texture_434efd8(lVar4,0);
            lVar4 = *(long *)puVar1;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar4);
            }
            uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_04cfca18 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              UnityEngine_UI_Image__TrackImage_44b2e80(plVar6);
              *(undefined1 *)((long)plVar6 + 0x104) = 1;
            }
          }
          return;
        }
      }
      else {
        lVar7 = *plVar9;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,lVar4,0);
        if ((uVar5 & 1) != 0) {
          if (*plVar9 != 0) {
            UnityEngine_Sprite__get_rect_434ee28(*plVar9,0);
            fVar11 = param_3;
            fVar12 = param_4;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_Object__op_Implicit_43c703c(lVar4,0);
            if ((uVar5 & 1) == 0) {
              if (cRam0000000004f9b948 == '\0') {
                FUN_02132f7c(PTR_DAT_04cacfc0);
                cRam0000000004f9b948 = '\x01';
              }
              fVar11 = **(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
              fVar12 = (*(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
            }
            else {
              if (lVar4 == 0) goto LAB_045a7520;
              UnityEngine_Sprite__get_rect_434ee28(lVar4,0);
            }
            bVar2 = false;
            if ((param_4 == fVar12) && (bVar2 = false, !NAN(param_3) && !NAN(fVar11))) {
              bVar2 = param_3 == fVar11;
            }
            *(bool *)(plVar6 + 7) = bVar2;
            if (plVar6[0x1b] != 0) {
              uVar8 = UnityEngine_Sprite__get_texture_434efd8(plVar6[0x1b],0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar1);
              }
              uVar5 = UnityEngine_Object__op_Implicit_43c703c(lVar4,0);
              uVar10 = 0;
              if ((uVar5 & 1) != 0) {
                if (lVar4 == 0) goto LAB_045a7520;
                uVar10 = UnityEngine_Sprite__get_texture_434efd8(lVar4,0);
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

