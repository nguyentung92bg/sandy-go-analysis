/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$SetupAvatarItem
void Dino_BusSand_App_UI_PlayerSettingPanel__SetupAvatarItem (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, Dino_BusSand_App_UI_PlayerSettingPanel_Item_o* it, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$SetupAvatarItem
   void Dino_BusSand_App_UI_PlayerSettingPanel__SetupAvatarItem
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, Dino_BusSand_App_UI_PlayerSettingPanel_Item_o*
   it, const MethodInfo* method); */

long Dino_BusSand_App_UI_PlayerSettingPanel__SetupAvatarItem_2302ba4
               (undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  
  puVar2 = PTR_DAT_04cb7db0;
  if ((bRam0000000004f9c4dd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cb7ab8);
    FUN_02132f7c(PTR_DAT_04cb7db8);
    FUN_02132f7c(PTR_DAT_04cb7db0);
    FUN_02132f7c(PTR_DAT_04cb7dc0);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c4dd = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar7,0);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x10),param_1);
    puVar2 = PTR_DAT_04ca9ae8;
    if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
      lVar8 = UnityEngine_Transform__Find_43d4bec
                        (*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_04cb7dc0,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
      lVar13 = 0;
      if ((uVar9 & 1) != 0) {
        if (lVar8 == 0) goto LAB_02402e1c;
        lVar13 = UnityEngine_Component__GetComponent_object__26f97e8
                           (lVar8,*(undefined8 *)PTR_DAT_04cad788);
      }
      uVar10 = Dino_BusSand_App_UI_CommonHeadView__HeadSprite_22cfa64
                         (*(undefined4 *)(param_2 + 0x10),0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
        if ((uVar9 & 1) != 0) {
          if (lVar13 == 0) goto LAB_02402e1c;
          UnityEngine_UI_Image__set_sprite_44a7258(lVar13,uVar10,0);
        }
      }
      puVar2 = PTR_DAT_04cb7ab8;
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      iVar1 = *(int *)(param_2 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar5 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIcon_226beb4(0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      Dino_BusSand_App_UI_PlayerSettingPanel__SetActive_230125c(uVar10,iVar1 == iVar5);
      lVar8 = *(long *)(param_2 + 0x20);
      *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(param_2 + 0x10);
      puVar4 = PTR_DAT_04cb7db8;
      puVar3 = PTR_DAT_04cad948;
      puVar2 = PTR_DAT_04caa458;
      if (lVar8 != 0) {
        lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
        System_Action___ctor_47b5ed0(uVar10,lVar7,*(undefined8 *)puVar4,0);
        puVar2 = PTR_DAT_04cb1660;
        uVar11 = *(undefined8 *)puVar3;
        if ((bRam0000000004f9bc9d & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb1668);
          FUN_02132f7c(PTR_DAT_04cacf98);
          FUN_02132f7c(PTR_DAT_04cb1670);
          FUN_02132f7c(PTR_DAT_04cb0eb8);
          FUN_02132f7c(PTR_DAT_04cb1678);
          FUN_02132f7c(PTR_DAT_04cb1680);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cb1688);
          FUN_02132f7c(PTR_DAT_04cb1660);
          FUN_02132f7c(PTR_DAT_04caa8b8);
          bRam0000000004f9bc9d = 1;
        }
        lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
        System_Object___ctor_4870e5c(lVar7,0);
        if (lVar7 != 0) {
          plVar12 = (long *)(lVar7 + 0x18);
          *plVar12 = lVar8;
          thunk_FUN_02134474(plVar12,lVar8);
          *(undefined8 *)(lVar7 + 0x20) = uVar10;
          thunk_FUN_02134474((undefined8 *)(lVar7 + 0x20),uVar10);
          puVar2 = PTR_DAT_04ca9ae8;
          if (*plVar12 != 0) {
            lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (*plVar12,*(undefined8 *)PTR_DAT_04cb0eb8);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
            if ((uVar9 & 1) == 0) {
              if (lVar8 == 0) goto LAB_022f5018;
            }
            else {
              if (*plVar12 == 0) goto LAB_022f5018;
              uVar10 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                 (*plVar12,*(undefined8 *)PTR_DAT_04cb1678);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
              if ((uVar9 & 1) != 0) {
                if ((*plVar12 == 0) ||
                   (plVar6 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                               (*plVar12,*(undefined8 *)PTR_DAT_04cacf98),
                   plVar6 == (long *)0x0)) goto LAB_022f5018;
                (**(code **)(*plVar6 + 0x2a8))
                          (0x3f800000,0x3f800000,0x3f800000,0,plVar6,
                           *(undefined8 *)(*plVar6 + 0x2b0));
              }
              if ((*plVar12 == 0) ||
                 (lVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                                    (*plVar12,*(undefined8 *)PTR_DAT_04cb1668), lVar8 == 0))
              goto LAB_022f5018;
              UnityEngine_UI_Selectable__set_transition_4693ba8(lVar8,0,0);
            }
            puVar4 = PTR_DAT_04cb1688;
            puVar3 = PTR_DAT_04caa8b8;
            if (*(long *)(lVar8 + 0x100) != 0) {
              UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c
                        (*(long *)(lVar8 + 0x100),0);
              uVar10 = *(undefined8 *)puVar3;
              lVar13 = *(long *)(lVar8 + 0x100);
              *(undefined4 *)(lVar7 + 0x10) = 0xbf800000;
              uVar10 = thunk_FUN_0216e89c(uVar10);
              UnityEngine_Events_UnityAction___ctor_43d86d4(uVar10,lVar7,*(undefined8 *)puVar4,0);
              if (lVar13 != 0) {
                UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar13,uVar10,0);
                uVar10 = *(undefined8 *)(lVar8 + 0xe0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
                if ((uVar9 & 1) == 0) {
                  if (*plVar12 == 0) goto LAB_022f5018;
                  plVar6 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                             (*plVar12,*(undefined8 *)PTR_DAT_04cb1678);
                }
                else {
                  plVar6 = *(long **)(lVar8 + 0xe0);
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar9 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
                if ((uVar9 & 1) != 0) {
                  if (plVar6 == (long *)0x0) goto LAB_022f5018;
                  (**(code **)(*plVar6 + 0x2c8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x2d0));
                }
                if (*plVar12 != 0) {
                  lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                    (*plVar12,*(undefined8 *)PTR_DAT_04cb1680);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar2);
                  }
                  uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
                  if ((uVar9 & 1) != 0) {
                    if (*plVar12 == 0) goto LAB_022f5018;
                    lVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                                      (*plVar12,*(undefined8 *)PTR_DAT_04cb1670);
                  }
                  if (lVar7 != 0) {
                    *(undefined8 *)(lVar7 + 0x20) = uVar11;
                    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x20),uVar11);
                    return lVar8;
                  }
                }
              }
            }
          }
        }
LAB_022f5018:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_02402e1c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

