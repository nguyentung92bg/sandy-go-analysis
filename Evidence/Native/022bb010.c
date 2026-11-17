/* IL2CPP: Dino.BusSand.App.UI.DailyView$$get_ActionLabel
System_String_o* Dino_BusSand_App_UI_DailyView__get_ActionLabel (Dino_BusSand_App_UI_DailyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyView$$get_ActionLabel
   System_String_o* Dino_BusSand_App_UI_DailyView__get_ActionLabel (Dino_BusSand_App_UI_DailyView_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_DailyView__get_ActionLabel_21bb010(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong unaff_x30;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  if ((bRam0000000004f9babf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cad330);
                    /* try { // try from 022bb054 to 023bb05b has its CatchHandler @ 022bb098 */
    FUN_02132f7c(PTR_DAT_04caf7d0);
    FUN_02132f7c(PTR_DAT_04caf7d8);
    FUN_02132f7c(PTR_DAT_04caf7e0);
    FUN_02132f7c(PTR_DAT_04caf7e8);
    bRam0000000004f9babf = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 022bb08c to 023bb093 has its CatchHandler @ 022bb094 */
    uVar2 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_CanPlay_222fa88
                      (*(long *)(param_1 + 0x10),0);
                    /* catch() { ... } // from try @ 022bb08c with catch @ 022bb094
                       try { // try from 022bb094 to 023bb0b3 has its CatchHandler @ 022baf6c */
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)PTR_DAT_04ca9d18;
      lVar4 = *(long *)(lVar5 + 0x38);
      if (lVar4 == 0) {
        FUN_0216b4cc(lVar5);
        lVar4 = *(long *)(lVar5 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0216b470();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
                    /* try { // try from 022bb1b0 to 023bb1b7 has its CatchHandler @ 022bb1fc */
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0216b470();
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
      }
                    /* try { // try from 022bb1f0 to 023bb1f7 has its CatchHandler @ 022bb1f8 */
                    /* catch() { ... } // from try @ 022bb1f0 with catch @ 022bb1f8
                       try { // try from 022bb1f8 to 023bb217 has its CatchHandler @ 022bb0b4 */
      lVar5 = *(long *)PTR_DAT_04caf7e8;
                    /* catch() { ... } // from try @ 022bb1b0 with catch @ 022bb1fc */
      lVar8 = *(long *)PTR_DAT_04caf7d0;
      uStack_30 = unaff_x30;
      if ((bRam0000000004f9c186 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cab550,lVar8,lVar4,0);
        bRam0000000004f9c186 = 1;
      }
      uVar2 = System_String__IsNullOrEmpty_46d2084(lVar5,0);
      puVar1 = PTR_DAT_04cab550;
      if ((uVar2 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = Dino_BusSand_App_Lang__Has_215fb88(lVar5,0);
        if ((uVar2 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if ((bRam0000000004f9b81c & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cab550,lVar4,0);
            FUN_02132f7c(PTR_DAT_04cac078);
            FUN_02132f7c(PTR_DAT_04ca9c30);
            bRam0000000004f9b81c = 1;
          }
          lStack_28 = 0;
          uStack_30 = uStack_30 & 0xffffffff00000000;
          uVar2 = System_String__IsNullOrEmpty_46d2084(lVar5,0);
          puVar1 = PTR_DAT_04cab550;
          if ((uVar2 & 1) != 0) {
            return *(long *)PTR_DAT_04ca9c30;
          }
          if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = Dino_BusSand_App_Lang__Current_215f3d0();
          uVar2 = Dino_BusSand_App_Lang__Text_215f904(uVar6,lVar5,&lStack_28);
          if ((uVar2 & 1) == 0) {
            lVar8 = *(long *)puVar1;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar8 = *(long *)puVar1;
            }
            uVar2 = System_String__op_Equality_46d1108
                              (**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)PTR_DAT_04cac078,0);
            if ((uVar2 & 1) != 0) {
              return lVar5;
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar6 = Dino_BusSand_App_Lang__English_215f81c();
            uVar2 = Dino_BusSand_App_Lang__Text_215f904(uVar6,lVar5,&lStack_28);
            if ((uVar2 & 1) == 0) {
              return lVar5;
            }
          }
          if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
            lStack_28 = System_String__Format_46d3570(lStack_28,lVar4,0);
          }
          return lStack_28;
        }
      }
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
        if (lVar4 != 0) {
          uStack_38 = 0;
          uStack_40 = 0;
          lStack_28 = 0;
          uStack_30 = 0;
          System_ParamsArray___ctor_483f6e0(&uStack_40,lVar4,0);
          uStack_58 = uStack_38;
          uStack_60 = uStack_40;
          lStack_48 = lStack_28;
          uStack_50 = uStack_30;
          lVar4 = System_String__FormatHelper_46d33ec(0,lVar8,&uStack_60);
          return lVar4;
        }
        puVar1 = PTR_DAT_04ccc5f0;
        if (lVar8 != 0) {
          puVar1 = PTR_DAT_04cc6cb8;
        }
        uVar6 = thunk_FUN_021985a8(puVar1,0,0);
        thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
        uVar7 = thunk_FUN_0216e89c();
        System_ArgumentNullException___ctor_47afb54(uVar7,uVar6,0);
        uVar6 = thunk_FUN_021985a8(PTR_DAT_04d0b438);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar7,uVar6);
      }
      return lVar8;
    }
                    /* catch() { ... } // from try @ 022bb054 with catch @ 022bb098 */
    plVar3 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 022bb0b4 to 023bb1af has its CatchHandler @ 022bb0b4
                       catch() { ... } // from try @ 022bb0b4 with catch @ 022bb0b4
                       catch() { ... } // from try @ 022bb1f8 with catch @ 022bb0b4 */
      Dino_BusSand_App_Meta_DailyChallengeFeature__get_TodayLevel_222fa60
                (*(long *)(param_1 + 0x10),0);
      lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffec);
      if (plVar3 != (long *)0x0) {
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
          uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 022bb258 with catch @ 022bb218
                       catch() { ... } // from try @ 022bb2bc with catch @ 022bb218 */
          FUN_021330e8(uVar6,0);
        }
        if ((int)plVar3[3] != 0) {
          plVar3[4] = lVar4;
          thunk_FUN_02134474(plVar3 + 4,lVar4);
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar4 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                            (*(undefined8 *)PTR_DAT_04caf7e0,*(undefined8 *)PTR_DAT_04caf7d8,plVar3,
                             0);
          return lVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

