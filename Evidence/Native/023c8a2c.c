/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$BuildInputCatcher
void Dino_BusSand_App_UI_GuidePanel__BuildInputCatcher (Dino_BusSand_App_UI_GuidePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$BuildInputCatcher
   void Dino_BusSand_App_UI_GuidePanel__BuildInputCatcher (Dino_BusSand_App_UI_GuidePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__BuildInputCatcher_22c8a2c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar3 = PTR_DAT_04cad748;
  puVar2 = PTR_DAT_04cad730;
  if ((bRam0000000004f9c367 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb69f8);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6a00);
    FUN_02132f7c(PTR_DAT_04cb6a08);
    FUN_02132f7c(PTR_DAT_04cabdc0);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cb6a10);
    FUN_02132f7c(PTR_DAT_04cb6a18);
    bRam0000000004f9c367 = 1;
  }
  plVar8 = (long *)FUN_02133068(*(undefined8 *)puVar3,1);
  uVar13 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar9 = System_Type__GetTypeFromHandle_483f0b4(uVar13,0);
  if (plVar8 != (long *)0x0) {
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
      uVar13 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar13,0);
    }
    puVar3 = PTR_DAT_04cb6a18;
    puVar2 = PTR_DAT_04caa070;
    if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar8[4] = lVar9;
    thunk_FUN_02134474(plVar8 + 4,lVar9);
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_GameObject___ctor_43c2310(lVar9,*(undefined8 *)puVar3,plVar8,0);
    lVar10 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if ((lVar10 != 0) && (uVar7 = UnityEngine_GameObject__get_layer_43c1118(lVar10,0), lVar9 != 0))
    {
      UnityEngine_GameObject__set_layer_43c11cc(lVar9,uVar7,0);
      plVar8 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
      if (plVar8 == (long *)0x0) {
        UnityEngine_Component__get_transform_43bcd18(param_1,0);
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*plVar8 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar8);
      }
      uVar13 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
                    /* try { // try from 023c8bf0 to 024c8bf3 has its CatchHandler @ 023c8bf8 */
                    /* try { // try from 023c8bf4 to 024c8c17 has its CatchHandler @ 023c85f4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023c8bf0 with catch @ 023c8bf8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023c885c with catch @ 023c8bfc
                        */
      UnityEngine_Transform__SetParent_43d1e34(plVar8,uVar13,0,0);
      UnityEngine_Transform__SetAsLastSibling_43d4684(plVar8,0);
                    /* try { // try from 023c8c18 to 024c8c1b has its CatchHandler @ 023c8c3c */
      if (cRam0000000004f9b948 == '\0') {
                    /* try { // try from 023c8c1c to 024c8c3f has its CatchHandler @ 023c85f4 */
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      puVar3 = PTR_DAT_04cacfc0;
      puVar2 = PTR_DAT_04cacf98;
                    /* catch() { ... } // from try @ 023c8c18 with catch @ 023c8c3c */
                    /* try { // try from 023c8c40 to 024c8c47 has its CatchHandler @ 023c8c50 */
                    /* try { // try from 023c8c48 to 024c8c53 has its CatchHandler @ 023c85f4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023c8c40 with catch @ 023c8c50
                        */
      UnityEngine_RectTransform__set_anchorMin_43cf5e4
                (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                 (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar8,0);
      if (cRam0000000004f9b949 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b949 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax_43cf768
                (*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8),
                 *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc),plVar8,0);
      UnityEngine_RectTransform__set_offsetMin_43cfe84(0xc3c80000,0xc3c80000,plVar8,0);
      UnityEngine_RectTransform__set_offsetMax_43d0018(0x43c80000,0x43c80000,plVar8,0);
      plVar8 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                 (lVar9,*(undefined8 *)puVar2);
      puVar6 = PTR_DAT_04cb6a10;
      puVar5 = PTR_DAT_04cb6a08;
      puVar4 = PTR_DAT_04cb6a00;
      puVar3 = PTR_DAT_04cb69f8;
      puVar2 = PTR_DAT_04cabdc0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x2a8))(0,0,0,0,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        (**(code **)(*plVar8 + 0x2c8))(plVar8,1,*(undefined8 *)(*plVar8 + 0x2d0));
        lVar9 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar9,*(undefined8 *)puVar3);
        uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
        UnityEngine_Events_UnityAction_object____ctor_303b724
                  (uVar13,param_1,*(undefined8 *)puVar4,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_GuidePanel__AddTrigger_22c8fe0(lVar9,2,uVar13);
        uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
        UnityEngine_Events_UnityAction_object____ctor_303b724
                  (uVar13,param_1,*(undefined8 *)puVar5,0);
        puVar2 = PTR_DAT_04cb6a28;
        if ((bRam0000000004f9c368 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb6a28);
          FUN_02132f7c(PTR_DAT_04cb6a30);
          FUN_02132f7c(PTR_DAT_04cb6a38);
          bRam0000000004f9c368 = 1;
        }
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
        UnityEngine_EventSystems_EventTrigger_Entry___ctor_46a3c5c(lVar10,0);
        if (lVar10 != 0) {
          *(undefined4 *)(lVar10 + 0x10) = 3;
          if (((*(long *)(lVar10 + 0x18) != 0) &&
              (UnityEngine_Events_UnityEvent_object___AddListener_303d54c
                         (*(long *)(lVar10 + 0x18),uVar13,*(undefined8 *)PTR_DAT_04cb6a38),
              lVar9 != 0)) &&
             (lVar9 = UnityEngine_EventSystems_EventTrigger__get_triggers_46a39c8(lVar9,0),
             lVar9 != 0)) {
            lVar11 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)PTR_DAT_04cb6a30;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar11 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *plVar8 = lVar10;
              }
              else {
                uVar1 = *(uint *)(lVar9 + 0x18);
                System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                          (lVar9,uVar1 + 1,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0
                                                                    ) + 0x70) + 0x20) + 0xc0) + 0x78
                            ));
                lVar11 = *(long *)(lVar9 + 0x10);
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (*(uint *)(lVar11 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *plVar8 = lVar10;
              }
              if (iRam00000000051c1b10 != 0) {
                FUN_02220bf0(1L << ((ulong)plVar8 >> 0xc & 0x3f),
                             ((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
              }
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

