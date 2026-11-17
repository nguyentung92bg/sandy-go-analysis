/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$AddItem
void Dino_BusSand_App_UI_HudPanel__AddItem (Dino_BusSand_App_UI_HudPanel_o* __this, UnityEngine_RectTransform_o* row, int32_t id, System_String_o* node, System_String_o* icon, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$AddItem
   void Dino_BusSand_App_UI_HudPanel__AddItem (Dino_BusSand_App_UI_HudPanel_o* __this,
   UnityEngine_RectTransform_o* row, int32_t id, System_String_o* node, System_String_o* icon,
   int32_t i, const MethodInfo* method); */

long Dino_BusSand_App_UI_HudPanel__AddItem_230b4dc
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,int param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
  puVar2 = PTR_DAT_04cb8168;
  if ((bRam0000000004f9c51a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb8170);
    FUN_02132f7c(PTR_DAT_04cb8178);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb8180);
    FUN_02132f7c(PTR_DAT_04cb8168);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c51a = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_1;
    thunk_FUN_02134474((long *)(lVar6 + 0x10),param_1);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
                    /* try { // try from 0240b5ec to 0250b6b3 has its CatchHandler @ 0240b5ec
                       catch() { ... } // from try @ 0240b5ec with catch @ 0240b5ec
                       catch() { ... } // from try @ 0240b800 with catch @ 0240b5ec
                       catch() { ... } // from try @ 0240b838 with catch @ 0240b5ec
                       catch() { ... } // from try @ 0240b860 with catch @ 0240b5ec */
    lVar7 = Dino_BusSand_App_UI_KitBoosterButton__Build_22880a8
                      (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],0x43400000,param_2,
                       param_4,param_5,0);
    if ((lVar7 != 0) &&
       (plVar8 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar7,0),
       puVar2 = PTR_DAT_04cb8170, plVar8 != (long *)0x0)) {
      if (*plVar8 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar8);
      }
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f000000,plVar8,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f000000,plVar8,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                ((float)param_6 * 236.0 + -354.0,0,plVar8,0);
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(lVar9,0);
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 0x10) = param_3;
        *(long *)(lVar9 + 0x18) = lVar7;
        thunk_FUN_02134474((long *)(lVar9 + 0x18),lVar7);
        *(long *)(lVar9 + 0x20) = (long)plVar8;
                    /* try { // try from 0240b6b4 to 0250b6b7 has its CatchHandler @ 0240b810 */
        thunk_FUN_02134474((long *)(lVar9 + 0x20),plVar8);
        plVar14 = (long *)(lVar6 + 0x18);
        *plVar14 = lVar9;
                    /* try { // try from 0240b6c4 to 0250b6cb has its CatchHandler @ 0240b814 */
        thunk_FUN_02134474(plVar14,lVar9);
        lVar7 = *(long *)(param_1 + 0x38);
        if (lVar7 != 0) {
                    /* try { // try from 0240b6dc to 0250b6e3 has its CatchHandler @ 0240b80c */
          lVar12 = *(long *)(lVar7 + 0x10);
          lVar9 = *plVar14;
          lVar13 = *(long *)PTR_DAT_04cb8178;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          puVar4 = PTR_DAT_04cb8180;
          puVar3 = PTR_DAT_04cad948;
          puVar2 = PTR_DAT_04caa458;
          if (lVar12 != 0) {
                    /* try { // try from 0240b708 to 0250b713 has its CatchHandler @ 0240b808 */
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar14 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar14 = lVar9;
                    /* try { // try from 0240b734 to 0250b73b has its CatchHandler @ 0240b818 */
              thunk_FUN_02134474(plVar14);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar7,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            lVar7 = UnityEngine_Component__get_gameObject_43bcde8(plVar8,0);
            uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
            System_Action___ctor_47b5ed0(uVar10,lVar6,*(undefined8 *)puVar4,0);
            puVar2 = PTR_DAT_04cb1660;
            uVar11 = *(undefined8 *)puVar3;
                    /* try { // try from 0240b790 to 0250b793 has its CatchHandler @ 0240b800 */
                    /* try { // try from 0240b794 to 0250b7ab has its CatchHandler @ 0240b804 */
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
            lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
            System_Object___ctor_4870e5c(lVar6,0);
            if (lVar6 != 0) {
              plVar8 = (long *)(lVar6 + 0x18);
              *plVar8 = lVar7;
              thunk_FUN_02134474(plVar8,lVar7);
              *(undefined8 *)(lVar6 + 0x20) = uVar10;
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),uVar10);
              puVar2 = PTR_DAT_04ca9ae8;
              if (*plVar8 != 0) {
                lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                  (*plVar8,*(undefined8 *)PTR_DAT_04cb0eb8);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar2);
                }
                uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
                if ((uVar5 & 1) == 0) {
                  if (lVar7 == 0) goto LAB_022f5018;
                }
                else {
                  if (*plVar8 == 0) goto LAB_022f5018;
                  uVar10 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                     (*plVar8,*(undefined8 *)PTR_DAT_04cb1678);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar2);
                  }
                  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
                  if ((uVar5 & 1) != 0) {
                    if ((*plVar8 == 0) ||
                       (plVar14 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                    (*plVar8,*(undefined8 *)PTR_DAT_04cacf98),
                       plVar14 == (long *)0x0)) goto LAB_022f5018;
                    (**(code **)(*plVar14 + 0x2a8))
                              (0x3f800000,0x3f800000,0x3f800000,0,plVar14,
                               *(undefined8 *)(*plVar14 + 0x2b0));
                  }
                  if ((*plVar8 == 0) ||
                     (lVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                                        (*plVar8,*(undefined8 *)PTR_DAT_04cb1668), lVar7 == 0))
                  goto LAB_022f5018;
                  UnityEngine_UI_Selectable__set_transition_4693ba8(lVar7,0,0);
                }
                puVar4 = PTR_DAT_04cb1688;
                puVar3 = PTR_DAT_04caa8b8;
                if (*(long *)(lVar7 + 0x100) != 0) {
                  UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c
                            (*(long *)(lVar7 + 0x100),0);
                  uVar10 = *(undefined8 *)puVar3;
                  lVar9 = *(long *)(lVar7 + 0x100);
                  *(undefined4 *)(lVar6 + 0x10) = 0xbf800000;
                  uVar10 = thunk_FUN_0216e89c(uVar10);
                  UnityEngine_Events_UnityAction___ctor_43d86d4
                            (uVar10,lVar6,*(undefined8 *)puVar4,0);
                  if (lVar9 != 0) {
                    UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar9,uVar10,0);
                    uVar10 = *(undefined8 *)(lVar7 + 0xe0);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
                    if ((uVar5 & 1) == 0) {
                      if (*plVar8 == 0) goto LAB_022f5018;
                      plVar14 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                                  (*plVar8,*(undefined8 *)PTR_DAT_04cb1678);
                    }
                    else {
                      plVar14 = *(long **)(lVar7 + 0xe0);
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(plVar14,0,0);
                    if ((uVar5 & 1) != 0) {
                      if (plVar14 == (long *)0x0) goto LAB_022f5018;
                      (**(code **)(*plVar14 + 0x2c8))(plVar14,1,*(undefined8 *)(*plVar14 + 0x2d0));
                    }
                    if (*plVar8 != 0) {
                      lVar6 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                        (*plVar8,*(undefined8 *)PTR_DAT_04cb1680);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)puVar2);
                      }
                      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
                      if ((uVar5 & 1) != 0) {
                        if (*plVar8 == 0) goto LAB_022f5018;
                        lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c
                                          (*plVar8,*(undefined8 *)PTR_DAT_04cb1670);
                      }
                      if (lVar6 != 0) {
                        *(undefined8 *)(lVar6 + 0x20) = uVar11;
                        thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),uVar11);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

