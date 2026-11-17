/* IL2CPP: Dino.BusSand.App.SimulatedAds.<FakeAd>d__8$$MoveNext
bool Dino_BusSand_App_SimulatedAds__FakeAd_d__8__MoveNext (Dino_BusSand_App_SimulatedAds__FakeAd_d__8_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.SimulatedAds.<FakeAd>d__8$$MoveNext
   bool Dino_BusSand_App_SimulatedAds__FakeAd_d__8__MoveNext
   (Dino_BusSand_App_SimulatedAds__FakeAd_d__8_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_SimulatedAds__FakeAd_d__8__MoveNext_2175a74(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
                    /* catch() { ... } // from try @ 02275a44 with catch @ 02275a74 */
                    /* catch() { ... } // from try @ 02275a24 with catch @ 02275a7c */
                    /* catch() { ... } // from try @ 022759dc with catch @ 02275a90 */
  if ((bRam0000000004f9b8d6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cacfa0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cacfa8);
    FUN_02132f7c(PTR_DAT_04cacfb0);
                    /* catch() { ... } // from try @ 02275b60 with catch @ 02275b0c */
    FUN_02132f7c(PTR_DAT_04caba38);
    FUN_02132f7c(PTR_DAT_04cacfb8);
    bRam0000000004f9b8d6 = 1;
  }
  puVar3 = PTR_DAT_04caa070;
  puVar2 = PTR_DAT_04ca9ae8;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 02275b58 to 02375b5f has its CatchHandler @ 02275bac */
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02275b60 to 02375bbf has its CatchHandler @ 02275b0c */
      UnityEngine_Object__Destroy_43c8114(uVar6,0);
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
    }
LAB_02275f68:
    return iVar1 == 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 02275b58 with catch @ 02275bac */
  UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)PTR_DAT_04cacfb0,0);
  plVar7 = (long *)(param_1 + 0x30);
  *plVar7 = lVar5;
  thunk_FUN_02134474(plVar7,lVar5);
                    /* try { // try from 02275bcc to 02375bcf has its CatchHandler @ 02275bd8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02275bcc with catch @ 02275bd8
                        */
                    /* try { // try from 02275bdc to 02375c0b has its CatchHandler @ 02275bdc
                       catch() { ... } // from try @ 02275bdc with catch @ 02275bdc
                       catch() { ... } // from try @ 02275c18 with catch @ 02275bdc */
  if ((*plVar7 != 0) &&
     (lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                        (*plVar7,*(undefined8 *)PTR_DAT_04cacf88), lVar5 != 0)) {
    UnityEngine_Canvas__set_renderMode_467f2b4(lVar5,0,0);
    UnityEngine_Canvas__set_sortingOrder_46800e4(lVar5,32000,0);
    if (*plVar7 != 0) {
                    /* try { // try from 02275c0c to 02375c17 has its CatchHandler @ 02275c38 */
                    /* try { // try from 02275c18 to 02375c53 has its CatchHandler @ 02275bdc */
      UnityEngine_GameObject__AddComponent_object__275a54c(*plVar7,*(undefined8 *)PTR_DAT_04cacf90);
      lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 02275c0c with catch @ 02275c38 */
      UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)PTR_DAT_04cacfb8,0);
                    /* try { // try from 02275c54 to 02375ccb has its CatchHandler @ 02275c54
                       catch() { ... } // from try @ 02275c54 with catch @ 02275c54
                       catch() { ... } // from try @ 02275ce0 with catch @ 02275c54 */
      if ((lVar5 != 0) &&
         (plVar4 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                     (lVar5,*(undefined8 *)PTR_DAT_04cacf98), plVar4 != (long *)0x0)
         ) {
        lVar5 = UnityEngine_Component__get_transform_43bcd18(plVar4,0);
        if ((*plVar7 != 0) &&
           (uVar6 = UnityEngine_GameObject__get_transform_43c1048(*plVar7,0), lVar5 != 0)) {
          UnityEngine_Transform__SetParent_43d1e34(lVar5,uVar6,0,0);
          (**(code **)(*plVar4 + 0x2a8))
                    (0,0,0,_UNK_00e20830,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
          lVar5 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar4,0);
                    /* try { // try from 02275ccc to 02375cdf has its CatchHandler @ 02275cf4 */
          if (cRam0000000004f9b948 == '\0') {
                    /* try { // try from 02275ce0 to 02375d0b has its CatchHandler @ 02275c54 */
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          puVar2 = PTR_DAT_04cacfc0;
          if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 02275ccc with catch @ 02275cf4 */
            UnityEngine_RectTransform__set_anchorMin_43cf5e4
                      (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],lVar5,0);
            if (cRam0000000004f9b949 == '\0') {
              FUN_02132f7c(PTR_DAT_04cacfc0);
              cRam0000000004f9b949 = '\x01';
            }
            UnityEngine_RectTransform__set_anchorMax_43cf768
                      (*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),lVar5,0);
            if (cRam0000000004f9b948 == '\0') {
              FUN_02132f7c(PTR_DAT_04cacfc0);
              cRam0000000004f9b948 = '\x01';
            }
            uVar8 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
            uVar9 = (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1];
            UnityEngine_RectTransform__set_offsetMax_43d0018(uVar8,uVar9,lVar5,0);
            UnityEngine_RectTransform__set_offsetMin_43cfe84(uVar8,uVar9,lVar5,0);
            lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
            UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)PTR_DAT_04caba38,0);
            if ((lVar5 != 0) &&
               (plVar4 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                           (lVar5,*(undefined8 *)PTR_DAT_04cacfa0),
               plVar4 != (long *)0x0)) {
              lVar5 = TMPro_TMP_Text__get_transform_42cd604(plVar4,0);
              if ((*plVar7 != 0) &&
                 (uVar6 = UnityEngine_GameObject__get_transform_43c1048(*plVar7,0), lVar5 != 0)) {
                UnityEngine_Transform__SetParent_43d1e34(lVar5,uVar6,0,0);
                uVar6 = System_String__Concat_46c82e0
                                  (*(undefined8 *)PTR_DAT_04cacfa8,*(undefined8 *)(param_1 + 0x20),0
                                  );
                (**(code **)(*plVar4 + 0x518))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x520));
                TMPro_TMP_Text__set_alignment_42cc610(plVar4,0x202,0);
                TMPro_TMP_Text__set_fontSize_42cc224(0x42700000,plVar4,0);
                lVar5 = TMPro_TMP_Text__get_rectTransform_42cd6a4(plVar4,0);
                if (cRam0000000004f9b948 == '\0') {
                  FUN_02132f7c(PTR_DAT_04cacfc0);
                  cRam0000000004f9b948 = '\x01';
                }
                if (lVar5 != 0) {
                  UnityEngine_RectTransform__set_anchorMin_43cf5e4
                            (**(undefined4 **)(*(long *)puVar2 + 0xb8),
                             (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],lVar5,0);
                  if (cRam0000000004f9b949 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cacfc0);
                    cRam0000000004f9b949 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchorMax_43cf768
                            (*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
                             *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),lVar5,0);
                  if (cRam0000000004f9b948 == '\0') {
                    /* catch() { ... } // from try @ 02275f30 with catch @ 02275eec */
                    FUN_02132f7c(PTR_DAT_04cacfc0);
                    cRam0000000004f9b948 = '\x01';
                  }
                  uVar8 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
                  uVar9 = (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1];
                  UnityEngine_RectTransform__set_offsetMax_43d0018(uVar8,uVar9,lVar5,0);
                    /* try { // try from 02275f24 to 02375f2f has its CatchHandler @ 02275fd4 */
                  UnityEngine_RectTransform__set_offsetMin_43cfe84(uVar8,uVar9,lVar5,0);
                    /* try { // try from 02275f30 to 02375ff3 has its CatchHandler @ 02275eec */
                  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
                  UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3fc00000,uVar6,0);
                  *(undefined8 *)(param_1 + 0x18) = uVar6;
                  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
                  *(undefined4 *)(param_1 + 0x10) = 1;
                  goto LAB_02275f68;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

