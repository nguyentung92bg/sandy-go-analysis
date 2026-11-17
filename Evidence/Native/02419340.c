/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$AddSlot
void Dino_BusSand_App_UI_LevelEnterPanel__AddSlot (Dino_BusSand_App_UI_LevelEnterPanel_o* __this, UnityEngine_RectTransform_o* box, System_String_o* node, int32_t item, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$AddSlot
   void Dino_BusSand_App_UI_LevelEnterPanel__AddSlot (Dino_BusSand_App_UI_LevelEnterPanel_o* __this,
   UnityEngine_RectTransform_o* box, System_String_o* node, int32_t item, float x, const MethodInfo*
   method); */

long Dino_BusSand_App_UI_LevelEnterPanel__AddSlot_2319340
               (undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  
  puVar1 = PTR_DAT_04cb85c0;
  if ((bRam0000000004f9c57b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04cb85c8);
    FUN_02132f7c(PTR_DAT_04cb85d0);
    FUN_02132f7c(PTR_DAT_04cb85d8);
    FUN_02132f7c(PTR_DAT_04cb85c0);
    FUN_02132f7c(PTR_DAT_04cb5050);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c57b = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar6,0);
  puVar1 = PTR_DAT_04cb85d0;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_2;
    thunk_FUN_02134474((long *)(lVar6 + 0x10),param_2);
    *(undefined4 *)(lVar6 + 0x18) = param_5;
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    lVar7 = Dino_BusSand_App_UI_KitBoosterButton__Build_22880a8
                      (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],0x43660000,param_3,
                       param_4,0,0);
    Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
              (0x43c80000,param_1,lVar7,*(undefined8 *)puVar1);
    if (((lVar7 != 0) && (lVar8 = UnityEngine_Component__get_transform_43bcd18(lVar7,0), lVar8 != 0)
        ) && (lVar8 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb5050,0),
             lVar8 != 0)) {
      lVar8 = UnityEngine_Component__GetComponent_object__26f97e8
                        (lVar8,*(undefined8 *)PTR_DAT_04cad788);
      uVar9 = Dino_BusSand_App_UI_KitParts__ItemIcon_23100d0(*(undefined4 *)(lVar6 + 0x18),0);
      if (lVar8 != 0) {
        UnityEngine_UI_Image__set_sprite_44a7258(lVar8,uVar9,0);
        puVar3 = PTR_DAT_04cb85d8;
        puVar2 = PTR_DAT_04cad948;
        puVar1 = PTR_DAT_04caa458;
        if (*(long *)(param_2 + 0x40) != 0) {
          System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                    (*(long *)(param_2 + 0x40),*(undefined4 *)(lVar6 + 0x18),lVar7,
                     *(undefined8 *)PTR_DAT_04cb85c8);
          lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
          uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          System_Action___ctor_47b5ed0(uVar9,lVar6,*(undefined8 *)puVar3,0);
          puVar1 = PTR_DAT_04cb1660;
          uVar10 = *(undefined8 *)puVar2;
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
          lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          System_Object___ctor_4870e5c(lVar6,0);
          if (lVar6 != 0) {
            plVar11 = (long *)(lVar6 + 0x18);
            *plVar11 = lVar7;
            thunk_FUN_02134474(plVar11,lVar7);
            *(undefined8 *)(lVar6 + 0x20) = uVar9;
            thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),uVar9);
            puVar1 = PTR_DAT_04ca9ae8;
            if (*plVar11 != 0) {
              lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                (*plVar11,*(undefined8 *)PTR_DAT_04cb0eb8);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar1);
              }
              uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
              if ((uVar4 & 1) == 0) {
                if (lVar7 == 0) goto LAB_022f5018;
              }
              else {
                if (*plVar11 == 0) goto LAB_022f5018;
                uVar9 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                  (*plVar11,*(undefined8 *)PTR_DAT_04cb1678);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar1);
                }
                uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
                if ((uVar4 & 1) != 0) {
                  if ((*plVar11 == 0) ||
                     (plVar5 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                 (*plVar11,*(undefined8 *)PTR_DAT_04cacf98),
                     plVar5 == (long *)0x0)) goto LAB_022f5018;
                  (**(code **)(*plVar5 + 0x2a8))
                            (0x3f800000,0x3f800000,0x3f800000,0,plVar5,
                             *(undefined8 *)(*plVar5 + 0x2b0));
                }
                if ((*plVar11 == 0) ||
                   (lVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                                      (*plVar11,*(undefined8 *)PTR_DAT_04cb1668), lVar7 == 0))
                goto LAB_022f5018;
                UnityEngine_UI_Selectable__set_transition_4693ba8(lVar7,0,0);
              }
              puVar3 = PTR_DAT_04cb1688;
              puVar2 = PTR_DAT_04caa8b8;
              if (*(long *)(lVar7 + 0x100) != 0) {
                UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c
                          (*(long *)(lVar7 + 0x100),0);
                uVar9 = *(undefined8 *)puVar2;
                lVar8 = *(long *)(lVar7 + 0x100);
                *(undefined4 *)(lVar6 + 0x10) = 0xbf800000;
                uVar9 = thunk_FUN_0216e89c(uVar9);
                UnityEngine_Events_UnityAction___ctor_43d86d4(uVar9,lVar6,*(undefined8 *)puVar3,0);
                if (lVar8 != 0) {
                  UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar8,uVar9,0);
                  uVar9 = *(undefined8 *)(lVar7 + 0xe0);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
                  if ((uVar4 & 1) == 0) {
                    if (*plVar11 == 0) goto LAB_022f5018;
                    plVar5 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                               (*plVar11,*(undefined8 *)PTR_DAT_04cb1678);
                  }
                  else {
                    plVar5 = *(long **)(lVar7 + 0xe0);
                  }
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(plVar5,0,0);
                  if ((uVar4 & 1) != 0) {
                    if (plVar5 == (long *)0x0) goto LAB_022f5018;
                    (**(code **)(*plVar5 + 0x2c8))(plVar5,1,*(undefined8 *)(*plVar5 + 0x2d0));
                  }
                  if (*plVar11 != 0) {
                    lVar6 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                      (*plVar11,*(undefined8 *)PTR_DAT_04cb1680);
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)puVar1);
                    }
                    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
                    if ((uVar4 & 1) != 0) {
                      if (*plVar11 == 0) goto LAB_022f5018;
                      lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c
                                        (*plVar11,*(undefined8 *)PTR_DAT_04cb1670);
                    }
                    if (lVar6 != 0) {
                      *(undefined8 *)(lVar6 + 0x20) = uVar10;
                      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),uVar10);
                      return lVar7;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

