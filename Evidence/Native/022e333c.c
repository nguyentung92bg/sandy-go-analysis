/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$OnOpen
void Dino_BusSand_App_UI_StreakRatePanel__OnOpen (Dino_BusSand_App_UI_StreakRatePanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$OnOpen
   void Dino_BusSand_App_UI_StreakRatePanel__OnOpen (Dino_BusSand_App_UI_StreakRatePanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakRatePanel__OnOpen_21e333c(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar2 = PTR_DAT_04cb0c60;
                    /* try { // try from 022e334c to 023e334f has its CatchHandler @ 022e3ab8 */
  if ((bRam0000000004f9bbbc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0c60);
    FUN_02132f7c(PTR_DAT_04cb0d20);
    FUN_02132f7c(PTR_DAT_04cb0d28);
    FUN_02132f7c(PTR_DAT_04cb0d30);
    FUN_02132f7c(PTR_DAT_04cb0d38);
    FUN_02132f7c(PTR_DAT_04cadcc8);
                    /* try { // try from 022e33e4 to 023e34c3 has its CatchHandler @ 022e3a8c */
    FUN_02132f7c(PTR_DAT_04cafba8);
    FUN_02132f7c(PTR_DAT_04cadd80);
    FUN_02132f7c(PTR_DAT_04cafb30);
    FUN_02132f7c(PTR_DAT_04cb0ae0);
    FUN_02132f7c(PTR_DAT_04cafbc8);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cb0d40);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cb0d48);
    FUN_02132f7c(PTR_DAT_04cb08d8);
    FUN_02132f7c(PTR_DAT_04cb0d50);
    bRam0000000004f9bbbc = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_022e34a0:
    param_2 = (long *)thunk_FUN_0216e89c();
    System_Object___ctor_4870e5c(param_2,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_022e34a0;
  }
  if (param_1 != 0) {
    plVar10 = (long *)(param_1 + 0x40);
    *plVar10 = (long)param_2;
    thunk_FUN_02134474(plVar10,param_2);
    lVar5 = Dino_BusSand_App_Meta_StreakRateFeature__get_I_224b6e0(0);
    plVar9 = (long *)(param_1 + 0x38);
    *plVar9 = lVar5;
    thunk_FUN_02134474(plVar9,lVar5);
    if ((*plVar9 == 0) ||
       (lVar5 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(*plVar9,0),
       lVar5 == 0)) {
      lVar5 = Dino_BusSand_App_UI_StreakRatePanel__CloseNextFrame_21e38dc(param_1);
LAB_022e38b4:
      uVar7 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (lVar5 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar12 = thunk_FUN_0216e89c();
        uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar12,uVar6,0);
      }
      else {
        uVar7 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar7 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar11 = *(long *)(param_1 + 0x10);
          if (lVar11 != 0) {
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar11,lVar5);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar12 = thunk_FUN_0216e89c();
        uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar12,uVar6,0);
      }
      uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar12,uVar6);
    }
    if (*plVar10 != 0) {
                    /* try { // try from 022e3514 to 023e36e7 has its CatchHandler @ 022e3ac4 */
      uVar6 = *(undefined8 *)PTR_DAT_04cafba8;
      uVar12 = *(undefined8 *)PTR_DAT_04cafbc8;
      if (*(char *)(*plVar10 + 0x10) != '\0') {
        uVar6 = *(undefined8 *)PTR_DAT_04cafb30;
        uVar12 = *(undefined8 *)PTR_DAT_04cafb30;
      }
      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_GameTracking__GoldenStreakImpression_221a688(uVar12,uVar6,0);
      puVar2 = PTR_DAT_04ca9d18;
      lVar11 = *(long *)PTR_DAT_04ca9d18;
      lVar5 = *(long *)(lVar11 + 0x38);
      if (lVar5 == 0) {
        FUN_0216b4cc(lVar11);
        lVar5 = *(long *)(lVar11 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
      Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
                (param_1,*(undefined8 *)PTR_DAT_04cb0d38,*(undefined8 *)PTR_DAT_04cb0ae0,
                 **(undefined8 **)(lVar5 + 0xb8),0);
      lVar11 = *(long *)puVar2;
      lVar5 = *(long *)(lVar11 + 0x38);
      if (lVar5 == 0) {
        FUN_0216b4cc(lVar11);
        lVar5 = *(long *)(lVar11 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
      Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
                (param_1,*(undefined8 *)PTR_DAT_04cb08d8,*(undefined8 *)PTR_DAT_04cadcc8,
                 **(undefined8 **)(lVar5 + 0xb8),0);
      lVar11 = *(long *)puVar2;
      lVar5 = *(long *)(lVar11 + 0x38);
      if (lVar5 == 0) {
        FUN_0216b4cc(lVar11);
        lVar5 = *(long *)(lVar11 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
      Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
                (param_1,*(undefined8 *)PTR_DAT_04cb0d48,*(undefined8 *)PTR_DAT_04cb0d50,
                 **(undefined8 **)(lVar5 + 0xb8),0);
      puVar2 = PTR_DAT_04caa458;
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar6,param_1,*(undefined8 *)PTR_DAT_04cb0d20,0);
      puVar3 = PTR_DAT_04cad948;
      Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                (param_1,*(undefined8 *)PTR_DAT_04cad460,uVar6,1,*(undefined8 *)PTR_DAT_04cad948,0);
      puVar4 = PTR_DAT_04cb0d30;
      lVar5 = *(long *)PTR_DAT_04cb0d30;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar4;
      }
      puVar8 = *(undefined8 **)(lVar5 + 0xb8);
      lVar11 = puVar8[1];
      uVar6 = *(undefined8 *)PTR_DAT_04cadd80;
      if (lVar11 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar12 = *puVar8;
                    /* try { // try from 022e3780 to 023e385f has its CatchHandler @ 022e3ab0 */
        lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
        System_Action___ctor_47b5ed0(lVar11,uVar12,*(undefined8 *)PTR_DAT_04cb0d28,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar10 = lVar11;
        thunk_FUN_02134474(plVar10,lVar11);
      }
      Dino_BusSand_App_UI_UIPanel__Btn_2200cb0(param_1,uVar6,lVar11,1,*(undefined8 *)puVar3,0);
      lVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb0d40,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      if ((uVar7 & 1) != 0) {
        if ((lVar5 == 0) ||
           (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0), lVar5 == 0))
        goto LAB_022e38d8;
        UnityEngine_GameObject__SetActive_43c1408(lVar5,0,0);
      }
      Dino_BusSand_App_UI_StreakRatePanel__InitRate_21e3948(param_1);
      Dino_BusSand_App_UI_StreakRatePanel__RefreshInfo_21e3a84(param_1);
      Dino_BusSand_App_UI_StreakRatePanel__BuildList_21e404c(param_1);
      if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 022e3860 to 023e3a43 has its CatchHandler @ 022e27c4 */
        if (*(char *)(*(long *)(param_1 + 0x40) + 0x10) == '\0') {
          if ((*plVar9 == 0) ||
             (lVar5 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(*plVar9,0),
             lVar5 == 0)) goto LAB_022e38d8;
          Dino_BusSand_App_UI_StreakRatePanel__ScrollToIndex_21e46ec
                    (param_1,*(undefined4 *)(lVar5 + 0x48));
        }
        else {
          uVar6 = Dino_BusSand_App_UI_StreakRatePanel__GuideScroll_21e4680(param_1);
          Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar6,0);
        }
        lVar5 = Dino_BusSand_App_UI_StreakRatePanel__Timer_21e480c(param_1);
        goto LAB_022e38b4;
      }
    }
  }
LAB_022e38d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

