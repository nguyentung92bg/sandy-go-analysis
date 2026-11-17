/* IL2CPP: Dino.BusSand.App.UI.CupView$$get_Header
System_String_o* Dino_BusSand_App_UI_CupView__get_Header (Dino_BusSand_App_UI_CupView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CupView$$get_Header
   System_String_o* Dino_BusSand_App_UI_CupView__get_Header (Dino_BusSand_App_UI_CupView_o* __this,
   const MethodInfo* method); */

long Dino_BusSand_App_UI_CupView__get_Header_21bb964(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
                    /* catch() { ... } // from try @ 022bb9d0 with catch @ 022bb964
                       catch() { ... } // from try @ 022bba94 with catch @ 022bb964 */
  if ((bRam0000000004f9bac3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf838);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf840);
                    /* try { // try from 022bb9c4 to 023bb9cf has its CatchHandler @ 022bbab4 */
    FUN_02132f7c(PTR_DAT_04caf848);
                    /* try { // try from 022bb9d0 to 023bba53 has its CatchHandler @ 022bb964 */
    FUN_02132f7c(PTR_DAT_04caf850);
    FUN_02132f7c(PTR_DAT_04caf858);
    bRam0000000004f9bac3 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Joined_22303f4(*(long *)(param_1 + 0x10),0);
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 022bbb34 to 023bbbc3 has its CatchHandler @ 022bbac8 */
      lVar6 = *(long *)PTR_DAT_04ca9d18;
      lVar5 = *(long *)(lVar6 + 0x38);
      if (lVar5 == 0) {
        FUN_0216b4cc(lVar6);
        lVar5 = *(long *)(lVar6 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
      }
                    /* try { // try from 022bbbc4 to 023bbbcb has its CatchHandler @ 022bbc10 */
      lVar6 = *(long *)PTR_DAT_04caf850;
      lVar9 = *(long *)PTR_DAT_04caf848;
      if ((bRam0000000004f9c186 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cab550,lVar9,lVar5,0);
        bRam0000000004f9c186 = 1;
      }
      uVar3 = System_String__IsNullOrEmpty_46d2084(lVar6,0);
      puVar1 = PTR_DAT_04cab550;
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = Dino_BusSand_App_Lang__Has_215fb88(lVar6,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if ((bRam0000000004f9b81c & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cab550,lVar5,0);
            FUN_02132f7c(PTR_DAT_04cac078);
            FUN_02132f7c(PTR_DAT_04ca9c30);
            bRam0000000004f9b81c = 1;
          }
          uStack_28 = 0;
          uVar3 = System_String__IsNullOrEmpty_46d2084(lVar6,0);
          puVar1 = PTR_DAT_04cab550;
          if ((uVar3 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar7 = Dino_BusSand_App_Lang__Current_215f3d0();
            uVar3 = Dino_BusSand_App_Lang__Text_215f904(uVar7,lVar6,&uStack_28);
            if ((uVar3 & 1) == 0) {
              lVar9 = *(long *)puVar1;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar9 = *(long *)puVar1;
              }
              uVar3 = System_String__op_Equality_46d1108
                                (**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)PTR_DAT_04cac078,0);
              if ((uVar3 & 1) != 0) {
                return lVar6;
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar7 = Dino_BusSand_App_Lang__English_215f81c();
              uVar3 = Dino_BusSand_App_Lang__Text_215f904(uVar7,lVar6,&uStack_28);
              if ((uVar3 & 1) == 0) {
                return lVar6;
              }
            }
            if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
              uStack_28 = System_String__Format_46d3570(uStack_28,lVar5,0);
            }
            return uStack_28;
          }
          return *(long *)PTR_DAT_04ca9c30;
        }
      }
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
        if (lVar5 != 0) {
          uStack_38 = 0;
          uStack_40 = 0;
          uStack_28 = 0;
          System_ParamsArray___ctor_483f6e0(&uStack_40,lVar5,0);
          uStack_58 = uStack_38;
          uStack_60 = uStack_40;
          uStack_48 = uStack_28;
          uStack_50 = 0;
          lVar5 = System_String__FormatHelper_46d33ec(0,lVar9,&uStack_60);
          return lVar5;
        }
        puVar1 = PTR_DAT_04ccc5f0;
        if (lVar9 != 0) {
          puVar1 = PTR_DAT_04cc6cb8;
        }
        uVar7 = thunk_FUN_021985a8(puVar1,0,0);
        thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
        uVar8 = thunk_FUN_0216e89c();
        System_ArgumentNullException___ctor_47afb54(uVar8,uVar7,0);
        uVar7 = thunk_FUN_021985a8(PTR_DAT_04d0b438);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar8,uVar7);
      }
      return lVar9;
    }
    plVar4 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Rank_2230c54(*(long *)(param_1 + 0x10),0);
      puVar1 = PTR_DAT_04ca9ac8;
      uStack_28 = CONCAT44(uVar2,(undefined4)uStack_28);
      lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),(long)&uStack_28 + 4);
      if (plVar4 != (long *)0x0) {
                    /* try { // try from 022bba54 to 023bba5b has its CatchHandler @ 022bba98 */
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_022bbbe4:
          uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar7,0);
        }
        if ((int)plVar4[3] != 0) {
          plVar4[4] = lVar5;
          thunk_FUN_02134474(plVar4 + 4,lVar5);
                    /* try { // try from 022bba8c to 023bba93 has its CatchHandler @ 022bba94 */
                    /* catch() { ... } // from try @ 022bba8c with catch @ 022bba94
                       try { // try from 022bba94 to 023bbac7 has its CatchHandler @ 022bb964 */
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_04caf838),
             lVar5 == 0)) goto LAB_022bbbdc;
                    /* catch() { ... } // from try @ 022bba54 with catch @ 022bba98 */
          uStack_28 = CONCAT44(uStack_28._4_4_,*(undefined4 *)(lVar5 + 0x1c));
          lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_28);
                    /* catch() { ... } // from try @ 022bb9c4 with catch @ 022bbab4 */
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_022bbbe4;
                    /* catch() { ... } // from try @ 022bbb34 with catch @ 022bbac8
                       catch() { ... } // from try @ 022bbc0c with catch @ 022bbac8 */
          if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
            plVar4[5] = lVar5;
            thunk_FUN_02134474(plVar4 + 5,lVar5);
            if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar5 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                              (*(undefined8 *)PTR_DAT_04caf858,*(undefined8 *)PTR_DAT_04caf840,
                               plVar4,0);
                    /* try { // try from 022bbb28 to 023bbb33 has its CatchHandler @ 022bbc2c */
            return lVar5;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_022bbbdc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

