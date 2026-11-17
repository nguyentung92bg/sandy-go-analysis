/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$OnOpen
void Dino_BusSand_App_UI_MainHudPanel__OnOpen (Dino_BusSand_App_UI_MainHudPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$OnOpen
   void Dino_BusSand_App_UI_MainHudPanel__OnOpen (Dino_BusSand_App_UI_MainHudPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_MainHudPanel__OnOpen_22f961c(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  long *plVar16;
  long lVar17;
  byte bVar18;
  int *piVar19;
  uint uVar20;
  
  if ((bRam0000000004f9c49d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb7970);
    FUN_02132f7c(PTR_DAT_04cae520);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 023f9698 to 024f969f has its CatchHandler @ 023f9850 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb7978);
    FUN_02132f7c(PTR_DAT_04cb7980);
    FUN_02132f7c(PTR_DAT_04cb7988);
                    /* try { // try from 023f96c4 to 024f96cf has its CatchHandler @ 023f9844 */
    bRam0000000004f9c49d = 1;
  }
                    /* try { // try from 023f96dc to 024f96e7 has its CatchHandler @ 023f9838 */
  if ((param_2 == (long *)0x0) || (*param_2 != *(long *)(PTR_DAT_04ca9ac8 + 0x28))) {
    bVar15 = 0;
    bVar18 = 0;
    plVar16 = (long *)PTR_DAT_04ca9ae8;
    plVar2 = (long *)PTR_DAT_04cabaf8;
    puVar9 = (undefined8 *)PTR_DAT_04cac7e0;
    puVar3 = (undefined8 *)PTR_DAT_04cb7970;
    puVar4 = (undefined8 *)PTR_DAT_04cb7980;
    puVar5 = (undefined8 *)PTR_DAT_04cb7988;
  }
  else {
    pbVar10 = (byte *)thunk_FUN_0216e9e4(param_2);
    bVar18 = *pbVar10;
    bVar15 = 1;
                    /* try { // try from 023f9708 to 024f970f has its CatchHandler @ 023f9834 */
    plVar16 = (long *)PTR_DAT_04ca9ae8;
    plVar2 = (long *)PTR_DAT_04cabaf8;
    puVar9 = (undefined8 *)PTR_DAT_04cac7e0;
    puVar3 = (undefined8 *)PTR_DAT_04cb7970;
    puVar4 = (undefined8 *)PTR_DAT_04cb7980;
    puVar5 = (undefined8 *)PTR_DAT_04cb7988;
  }
  PTR_DAT_04ca9ae8 = (undefined *)plVar16;
  PTR_DAT_04cabaf8 = (undefined *)plVar2;
  PTR_DAT_04cac7e0 = (undefined *)puVar9;
  PTR_DAT_04cb7970 = (undefined *)puVar3;
  PTR_DAT_04cb7980 = (undefined *)puVar4;
  PTR_DAT_04cb7988 = (undefined *)puVar5;
  if (param_1 == 0) goto LAB_023f9a00;
                    /* try { // try from 023f9718 to 024f9723 has its CatchHandler @ 023f982c */
                    /* try { // try from 023f9738 to 024f973f has its CatchHandler @ 023f981c */
  *(byte *)(param_1 + 0x38) = bVar18 & bVar15;
  Dino_BusSand_App_UI_MainHudPanel__SetupTopBar_22f9a04(param_1);
  Dino_BusSand_App_UI_MainHudPanel__SetupPlayButton_22f9fb4(param_1);
                    /* try { // try from 023f9758 to 024f976b has its CatchHandler @ 023f9814 */
  Dino_BusSand_App_UI_MainHudPanel__SetupRightColumn_22fa77c(param_1);
  Dino_BusSand_App_UI_MainHudPanel__SetupLeftColumn_22fadf8(param_1);
  Dino_BusSand_App_UI_MainHudPanel__SetupStreakRate_22faf44(param_1);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*puVar4,0,0);
  uVar11 = thunk_FUN_0216e89c(*puVar9);
                    /* try { // try from 023f9794 to 024f979f has its CatchHandler @ 023f9824 */
  System_Action_int____ctor_35ef18c(uVar11,param_1,*puVar3,0);
  if (*(int *)(*plVar2 + 0xe4) == 0) {
                    /* try { // try from 023f97a8 to 024f97b7 has its CatchHandler @ 023f9828 */
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_Profile__add_ItemChanged_226f620(uVar11,0);
                    /* try { // try from 023f97b8 to 024f97f3 has its CatchHandler @ 023f9580 */
  uVar11 = Dino_BusSand_App_UI_MainHudPanel__HeartTimer_22fb764(param_1);
  Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar11,0);
  lVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*puVar5,0);
  if (*(int *)(*plVar16 + 0xe4) == 0) {
                    /* try { // try from 023f97f4 to 024f97f7 has its CatchHandler @ 023f984c */
    thunk_FUN_0218fdac(*plVar16);
  }
                    /* try { // try from 023f97f8 to 024f97fb has its CatchHandler @ 023f9848 */
                    /* try { // try from 023f97fc to 024f97ff has its CatchHandler @ 023f9840 */
                    /* try { // try from 023f9800 to 024f9803 has its CatchHandler @ 023f983c */
                    /* try { // try from 023f9804 to 024f9807 has its CatchHandler @ 023f9580 */
  uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
                    /* try { // try from 023f9808 to 024f980b has its CatchHandler @ 023f9830 */
  if ((uVar13 & 1) != 0) {
                    /* try { // try from 023f980c to 024f980f has its CatchHandler @ 023f9820 */
                    /* try { // try from 023f9810 to 024f9813 has its CatchHandler @ 023f9818 */
                    /* catch() { ... } // from try @ 023f9758 with catch @ 023f9814
                       try { // try from 023f9814 to 024f986b has its CatchHandler @ 023f9580 */
                    /* catch() { ... } // from try @ 023f9810 with catch @ 023f9818 */
                    /* catch() { ... } // from try @ 023f9738 with catch @ 023f981c */
    if ((lVar12 == 0) ||
       (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0), lVar14 == 0))
    goto LAB_023f9a00;
                    /* catch() { ... } // from try @ 023f980c with catch @ 023f9820 */
                    /* catch() { ... } // from try @ 023f9794 with catch @ 023f9824 */
    uVar13 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar14,0);
                    /* catch() { ... } // from try @ 023f97a8 with catch @ 023f9828 */
    if ((uVar13 & 1) != 0) {
                    /* catch() { ... } // from try @ 023f9718 with catch @ 023f982c */
                    /* catch() { ... } // from try @ 023f9808 with catch @ 023f9830 */
                    /* catch() { ... } // from try @ 023f9708 with catch @ 023f9834 */
                    /* catch() { ... } // from try @ 023f96dc with catch @ 023f9838 */
                    /* catch() { ... } // from try @ 023f9800 with catch @ 023f983c */
      uVar11 = UnityEngine_Component__GetComponent_object__26f97e8
                         (lVar12,*(undefined8 *)PTR_DAT_04cada30);
                    /* catch() { ... } // from try @ 023f97fc with catch @ 023f9840 */
                    /* catch() { ... } // from try @ 023f96c4 with catch @ 023f9844 */
                    /* catch() { ... } // from try @ 023f97f8 with catch @ 023f9848 */
                    /* catch() { ... } // from try @ 023f97f4 with catch @ 023f984c */
                    /* catch() { ... } // from try @ 023f9698 with catch @ 023f9850 */
      if (*(int *)(*(long *)PTR_DAT_04cae520 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cae520);
      }
                    /* try { // try from 023f986c to 024f986f has its CatchHandler @ 023f9888 */
                    /* try { // try from 023f9870 to 024f988b has its CatchHandler @ 023f9580 */
      uVar11 = Dino_BusSand_App_UI_MainHudPanel__AnimLoop_22fb7d0
                         (0x3fc00000,0x40600000,uVar11,*(undefined8 *)PTR_DAT_04cb7978);
                    /* catch() { ... } // from try @ 023f986c with catch @ 023f9888 */
      Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar11,0);
    }
  }
  puVar6 = PTR_DAT_04caba50;
                    /* try { // try from 023f988c to 024f9893 has its CatchHandler @ 023f989c */
  if (*(char *)(param_1 + 0x38) != '\0') {
                    /* try { // try from 023f9894 to 024f989f has its CatchHandler @ 023f9580 */
                    /* catch() { ... } // from try @ 023f988c with catch @ 023f989c */
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar12 = *(long *)puVar6;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar6;
    }
    uVar11 = **(undefined8 **)(lVar12 + 0xb8);
    if (*(int *)(*plVar16 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*plVar16);
    }
    uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar12 = *(long *)puVar6;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar6;
      }
      if (**(long **)(lVar12 + 0xb8) == 0) {
LAB_023f9a00:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (0 < *(int *)(**(long **)(lVar12 + 0xb8) + 0x40)) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 023f9988 to 024f9a7f has its CatchHandler @ 023f9988
                       catch() { ... } // from try @ 023f9988 with catch @ 023f9988
                       catch() { ... } // from try @ 023f9af8 with catch @ 023f9988
                       catch() { ... } // from try @ 023f9b34 with catch @ 023f9988
                       catch() { ... } // from try @ 023f9b3c with catch @ 023f9988
                       catch() { ... } // from try @ 023f9b70 with catch @ 023f9988
                       catch() { ... } // from try @ 023f9b9c with catch @ 023f9988 */
          cRam0000000004f9b88f = '\x01';
        }
        lVar12 = *(long *)puVar6;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar6;
        }
        if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_023f9a00;
        uVar11 = Dino_BusSand_App_UI_MainHudPanel__WinRewardCountUp_22fb86c
                           (param_1,*(undefined4 *)(**(long **)(lVar12 + 0xb8) + 0x40));
        Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar11,0);
      }
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar6 = PTR_DAT_04cb3890;
  if ((bRam0000000004f9bf0c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3848,0);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb3898);
    FUN_02132f7c(PTR_DAT_04cb3890);
    bRam0000000004f9bf0c = 1;
  }
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Object___ctor_4870e5c(lVar12,0);
  puVar8 = PTR_DAT_04cb3898;
  puVar7 = PTR_DAT_04cb3848;
  puVar6 = PTR_DAT_04cac668;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(long *)(lVar12 + 0x10) = param_1;
  thunk_FUN_02134474((long *)(lVar12 + 0x10),param_1);
  lVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
  System_Action_object____ctor_35f0008(lVar14,lVar12,*(undefined8 *)puVar8,0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar6 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bf05 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb37e8);
    FUN_02132f7c(PTR_DAT_04cb3840);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bf05 = 1;
  }
  lVar12 = *(long *)puVar6;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar6;
  }
  plVar16 = *(long **)(lVar12 + 0xb8);
  if ((char)plVar16[1] != '\0') {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      plVar16 = *(long **)(*(long *)puVar6 + 0xb8);
    }
    if ((*plVar16 == 0) ||
       (lVar12 = System_Collections_Generic_List_object___ToArray_3a83728
                           (*plVar16,*(undefined8 *)PTR_DAT_04cb3840), puVar7 = PTR_DAT_04cb37e8,
       puVar6 = PTR_DAT_04cac458, lVar12 == 0)) {
LAB_02341914:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar12 + 0x18);
    if (0 < (int)uVar1) {
      uVar20 = 0;
      do {
        if (uVar1 <= uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar16 = *(long **)(lVar12 + (long)(int)uVar20 * 8 + 0x20);
        if (plVar16 == (long *)0x0) goto LAB_02341914;
        lVar17 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar13 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar7) {
              puVar9 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_02341838;
            }
            uVar13 = uVar13 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)puVar7,0);
LAB_02341838:
        uVar11 = (*(code *)*puVar9)(plVar16,puVar9[1]);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar6);
        }
        uVar13 = Dino_BusSand_App_Meta_FeatureGate__AllowsLiveFeature_220bdf0(uVar11,0);
        if ((uVar13 & 1) != 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),plVar16,*(undefined8 *)(lVar14 + 0x28));
        }
        uVar1 = *(uint *)(lVar12 + 0x18);
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (int)uVar1);
    }
  }
  return;
}

