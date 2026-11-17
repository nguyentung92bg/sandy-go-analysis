/* IL2CPP: Dino.BusSand.App.UI.RewardPopup$$BuildButtons
void Dino_BusSand_App_UI_RewardPopup__BuildButtons (Dino_BusSand_App_UI_RewardPopup_o* __this, Dino_BusSand_App_UI_KitWindow_o* w, float panelH, int32_t adTimes, System_String_o* claimLabel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.RewardPopup$$BuildButtons
   void Dino_BusSand_App_UI_RewardPopup__BuildButtons (Dino_BusSand_App_UI_RewardPopup_o* __this,
   Dino_BusSand_App_UI_KitWindow_o* w, float panelH, int32_t adTimes, System_String_o* claimLabel,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_RewardPopup__BuildButtons_23249f0
               (undefined4 param_1,long *param_2,long param_3,undefined4 param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack_64;
  
                    /* try { // try from 024249f0 to 025249fb has its CatchHandler @ 02424b30 */
  puVar2 = PTR_DAT_04cb8c50;
                    /* try { // try from 024249fc to 02524b2b has its CatchHandler @ 024245b8 */
  if ((bRam0000000004f9c5d9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb8c58);
    FUN_02132f7c(PTR_DAT_04cb8c60);
    FUN_02132f7c(PTR_DAT_04cb8c68);
    FUN_02132f7c(PTR_DAT_04cb8c50);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad9a0);
    FUN_02132f7c(PTR_DAT_04caf570);
    FUN_02132f7c(PTR_DAT_04caf588);
    FUN_02132f7c(PTR_DAT_04cb8c70);
    FUN_02132f7c(PTR_DAT_04caf5a0);
    FUN_02132f7c(PTR_DAT_04caffa8);
    FUN_02132f7c(PTR_DAT_04cb8c78);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c5d9 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar5,0);
  if (lVar5 != 0) {
                    /* try { // try from 02424b2c to 02524b2f has its CatchHandler @ 02424b34 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024249f0 with catch @ 02424b30
                       try { // try from 02424b30 to 02524b57 has its CatchHandler @ 024245b8 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02424b2c with catch @ 02424b34
                        */
    *(long *)(lVar5 + 0x10) = (long)param_2;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02424994 with catch @ 02424b38
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02424980 with catch @ 02424b3c
                        */
    thunk_FUN_02134474((long *)(lVar5 + 0x10),param_2);
    *(undefined4 *)(lVar5 + 0x18) = param_4;
    uVar13 = Dino_BusSand_App_UI_KitPopup__RowY_2280b50(param_1,0x418c0000,0);
                    /* try { // try from 02424b58 to 02524b5b has its CatchHandler @ 02424b7c */
    if (param_3 != 0) {
                    /* try { // try from 02424b5c to 02524b7f has its CatchHandler @ 024245b8 */
      iVar1 = *(int *)(lVar5 + 0x18);
                    /* catch() { ... } // from try @ 02424b58 with catch @ 02424b7c */
                    /* try { // try from 02424b80 to 02524b87 has its CatchHandler @ 02424b90 */
                    /* try { // try from 02424b88 to 02524b93 has its CatchHandler @ 024245b8 */
      uVar11 = *(undefined8 *)(param_3 + 0x28);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02424b80 with catch @ 02424b90
                        */
      uVar12 = *(undefined8 *)PTR_DAT_04caf588;
                    /* try { // try from 02424b94 to 02524d7b has its CatchHandler @ 02424b94
                       catch() { ... } // from try @ 02424b94 with catch @ 02424b94
                       catch() { ... } // from try @ 02424da4 with catch @ 02424b94
                       catch() { ... } // from try @ 02424ed8 with catch @ 02424b94
                       catch() { ... } // from try @ 02424f2c with catch @ 02424b94
                       catch() { ... } // from try @ 02424f70 with catch @ 02424b94
                       catch() { ... } // from try @ 02424f9c with catch @ 02424b94
                       catch() { ... } // from try @ 02424fcc with catch @ 02424b94
                       catch() { ... } // from try @ 02424ff0 with catch @ 02424b94 */
      uVar14 = 0;
      uVar15 = _UNK_00e20a78;
      if (1 < iVar1) {
        uVar14 = 0xc35f0000;
        uVar15 = 0x43ba0000;
      }
      if (param_5 == 0) {
        lVar9 = *(long *)PTR_DAT_04ca9d18;
        lVar8 = *(long *)(lVar9 + 0x38);
        if (lVar8 == 0) {
          FUN_0216b4cc(lVar9);
          lVar8 = *(long *)(lVar9 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470();
        }
        uVar10 = **(undefined8 **)(lVar8 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
        }
        param_5 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                            (*(undefined8 *)PTR_DAT_04caf5a0,*(undefined8 *)PTR_DAT_04caf570,uVar10,
                             0);
      }
      lVar8 = Dino_BusSand_App_UI_KitParts__Button_2306a4c
                        (uVar15,uVar13,uVar14,0x42940000,0x436c0000,uVar11,uVar12,0,param_5,0,0);
      if (param_2 != (long *)0x0) {
        plVar6 = param_2 + 9;
        *plVar6 = lVar8;
        thunk_FUN_02134474(plVar6,lVar8);
        puVar4 = PTR_DAT_04cb8c58;
        puVar3 = PTR_DAT_04cad948;
        puVar2 = PTR_DAT_04caa458;
        if (*plVar6 != 0) {
          uVar11 = UnityEngine_Component__get_gameObject_43bcde8(*plVar6,0);
          uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
          System_Action___ctor_47b5ed0(uVar12,lVar5,*(undefined8 *)puVar4,0);
          Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar11,uVar12,1,*(undefined8 *)puVar3,0);
          if (iVar1 < 2) {
            lVar8 = *plVar6;
            if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_UI_UiKit__Breathe_2289058(_UNK_00e1fef8,_UNK_00e20170,lVar8,0);
          }
          else {
            uVar11 = *(undefined8 *)(param_3 + 0x28);
            plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
            uStack_64 = *(undefined4 *)(lVar5 + 0x18);
            lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_64);
            if (plVar6 == (long *)0x0) goto LAB_02424f9c;
                    /* try { // try from 02424d7c to 02524d83 has its CatchHandler @ 02424fac */
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                    /* catch() { ... } // from try @ 02424f14 with catch @ 02424fa4 */
              uVar11 = thunk_FUN_0217c344();
                    /* catch() { ... } // from try @ 02424d9c with catch @ 02424fa8 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02424d7c with catch @ 02424fac */
              FUN_021330e8(uVar11,0);
            }
            if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02424f18 with catch @ 02424fa0 */
              FUN_0213322c();
            }
                    /* try { // try from 02424d9c to 02524da3 has its CatchHandler @ 02424fa8 */
                    /* try { // try from 02424da4 to 02524df7 has its CatchHandler @ 02424b94 */
            plVar6[4] = lVar8;
            thunk_FUN_02134474(plVar6 + 4,lVar8);
            if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar12 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                               (*(undefined8 *)PTR_DAT_04cb8c78,*(undefined8 *)PTR_DAT_04cb8c70,
                                plVar6,0);
                    /* try { // try from 02424df8 to 02524dff has its CatchHandler @ 02424f50 */
                    /* try { // try from 02424e20 to 02524e2f has its CatchHandler @ 02424f34 */
            lVar8 = Dino_BusSand_App_UI_KitParts__Button_2306a4c
                              (_UNK_00e204dc,uVar13,0x433f0000,0x42940000,0x436c0000,uVar11,
                               *(undefined8 *)PTR_DAT_04cad9a0,2,uVar12,
                               *(undefined8 *)PTR_DAT_04caffa8,0);
            plVar6 = param_2 + 10;
                    /* try { // try from 02424e3c to 02524e4f has its CatchHandler @ 02424f48 */
            *plVar6 = lVar8;
            thunk_FUN_02134474(plVar6,lVar8);
                    /* try { // try from 02424e64 to 02524e77 has its CatchHandler @ 02424f40 */
            Dino_BusSand_App_UI_UiKit__Breathe_2289058(_UNK_00e20a84,_UNK_00e20170,*plVar6,0);
            if (*plVar6 == 0) goto LAB_02424f9c;
            uVar11 = UnityEngine_Component__get_gameObject_43bcde8(*plVar6,0);
            uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
            System_Action___ctor_47b5ed0(uVar12,lVar5,*(undefined8 *)PTR_DAT_04cb8c60,0);
                    /* try { // try from 02424eb4 to 02524ed7 has its CatchHandler @ 02424f44 */
            Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar11,uVar12,1,*(undefined8 *)puVar3,0);
            uVar11 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
                    /* try { // try from 02424ed8 to 02524f13 has its CatchHandler @ 02424b94 */
            if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac498);
            }
            Dino_BusSand_App_Meta_GameTracking__AdOffer_22159b0(uVar11,0);
          }
          uVar11 = *(undefined8 *)(param_3 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 02424f14 to 02524f17 has its CatchHandler @ 02424fa4 */
                    /* try { // try from 02424f18 to 02524f1b has its CatchHandler @ 02424fa0 */
                    /* try { // try from 02424f1c to 02524f1f has its CatchHandler @ 02424f4c */
                    /* try { // try from 02424f20 to 02524f23 has its CatchHandler @ 02424f3c */
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
                    /* try { // try from 02424f24 to 02524f27 has its CatchHandler @ 02424f38 */
          if ((uVar7 & 1) != 0) {
                    /* try { // try from 02424f28 to 02524f2b has its CatchHandler @ 02424f30 */
                    /* try { // try from 02424f2c to 02524f6b has its CatchHandler @ 02424b94 */
            if (*(long *)(param_3 + 0x38) == 0) goto LAB_02424f9c;
                    /* catch() { ... } // from try @ 02424f28 with catch @ 02424f30 */
                    /* catch() { ... } // from try @ 02424e20 with catch @ 02424f34 */
            uVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_3 + 0x38),0);
                    /* catch() { ... } // from try @ 02424f24 with catch @ 02424f38 */
                    /* catch() { ... } // from try @ 02424f20 with catch @ 02424f3c */
                    /* catch() { ... } // from try @ 02424e64 with catch @ 02424f40 */
                    /* catch() { ... } // from try @ 02424eb4 with catch @ 02424f44 */
            uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 02424e3c with catch @ 02424f48 */
                    /* catch() { ... } // from try @ 02424f1c with catch @ 02424f4c */
                    /* catch() { ... } // from try @ 02424df8 with catch @ 02424f50 */
            System_Action___ctor_47b5ed0(uVar12,lVar5,*(undefined8 *)PTR_DAT_04cb8c68,0);
                    /* try { // try from 02424f6c to 02524f6f has its CatchHandler @ 02424f90 */
                    /* try { // try from 02424f70 to 02524f93 has its CatchHandler @ 02424b94 */
            Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar11,uVar12,1,*(undefined8 *)puVar3,0);
          }
                    /* catch() { ... } // from try @ 02424f6c with catch @ 02424f90 */
                    /* try { // try from 02424f94 to 02524f9b has its CatchHandler @ 02424ff8 */
          return;
        }
      }
    }
  }
LAB_02424f9c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02424f9c to 02524fc7 has its CatchHandler @ 02424b94 */
  FUN_02133224();
}

