/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$GrantUnlockGifts
System_Collections_Generic_List_int__o* Dino_BusSand_App_UI_LevelEnterFlow__GrantUnlockGifts (Dino_BusSand_App_UI_HudPanel_o* hud, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$GrantUnlockGifts
   System_Collections_Generic_List_int__o* Dino_BusSand_App_UI_LevelEnterFlow__GrantUnlockGifts
   (Dino_BusSand_App_UI_HudPanel_o* hud, const MethodInfo* method); */

long Dino_BusSand_App_UI_LevelEnterFlow__GrantUnlockGifts_233d508(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined4 uStack_64;
  
  puVar6 = PTR_DAT_04cad6e8;
  puVar4 = PTR_DAT_04cabaf8;
  puVar3 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9c667 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04cacb20);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb1980);
    FUN_02132f7c(PTR_DAT_04caced0);
    FUN_02132f7c(PTR_DAT_04cb1d18);
    bRam0000000004f9c667 = 1;
  }
  puVar5 = PTR_DAT_04cacb20;
  uStack_64 = 0;
                    /* try { // try from 0243d5dc to 0253d6d3 has its CatchHandler @ 0243d5dc
                       catch() { ... } // from try @ 0243d5dc with catch @ 0243d5dc
                       catch() { ... } // from try @ 0243d708 with catch @ 0243d5dc
                       catch() { ... } // from try @ 0243d750 with catch @ 0243d5dc
                       catch() { ... } // from try @ 0243d778 with catch @ 0243d5dc
                       catch() { ... } // from try @ 0243d79c with catch @ 0243d5dc */
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar10,*(undefined8 *)puVar6);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar7 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  lVar12 = *(long *)puVar5;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar12);
    lVar12 = *(long *)puVar5;
  }
  puVar5 = PTR_DAT_04cb1d18;
  puVar6 = PTR_DAT_04cb1c70;
  puVar3 = PTR_DAT_04cb1980;
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
  if (lVar12 != 0) {
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar16 = 0;
      uVar13 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar1 = *(undefined4 *)(lVar12 + 0x20 + uVar16 * 4);
        uStack_64 = uVar1;
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar8 = Dino_BusSand_App_Meta_BoosterIntro__Level_2202754(uVar1,0);
        if (iVar7 == iVar8) {
          uVar11 = System_Int32__ToString_482d750(&uStack_64,0);
          uVar11 = System_String__Concat_46c82e0(*(undefined8 *)puVar5,uVar11,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
                    /* try { // try from 0243d6d4 to 0253d6db has its CatchHandler @ 0243d758 */
          uVar13 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(uVar11,0);
          if ((uVar13 & 1) == 0) {
            uVar11 = System_Int32__ToString_482d750(&uStack_64,0);
            uVar11 = System_String__Concat_46c82e0(*(undefined8 *)puVar5,uVar11,0);
                    /* try { // try from 0243d704 to 0253d707 has its CatchHandler @ 0243d754 */
                    /* try { // try from 0243d708 to 0253d74b has its CatchHandler @ 0243d5dc */
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar11,1,0);
            uVar1 = uStack_64;
            if (*(int *)(*(long *)PTR_DAT_04cacb20 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            iVar9 = Dino_BusSand_App_UI_LevelEnterFlow__get_UnlockGiftCount_233cf40();
                    /* try { // try from 0243d74c to 0253d74f has its CatchHandler @ 0243d750 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243d74c with catch @ 0243d750
                       try { // try from 0243d750 to 0253d773 has its CatchHandler @ 0243d5dc */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243d704 with catch @ 0243d754
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243d6d4 with catch @ 0243d758
                        */
            Dino_BusSand_App_Meta_Profile__Add_2272578
                      (uVar1,(long)iVar9,*(undefined8 *)PTR_DAT_04caced0,0);
            if (lVar10 == 0) goto LAB_0243d8d0;
            lVar14 = *(long *)(lVar10 + 0x10);
                    /* try { // try from 0243d774 to 0253d777 has its CatchHandler @ 0243d790 */
                    /* try { // try from 0243d778 to 0253d793 has its CatchHandler @ 0243d5dc */
            lVar15 = *(long *)PTR_DAT_04caa160;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_0243d8d0;
            uVar2 = *(uint *)(lVar10 + 0x18);
                    /* catch() { ... } // from try @ 0243d774 with catch @ 0243d790 */
                    /* try { // try from 0243d794 to 0253d79b has its CatchHandler @ 0243d7a4 */
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                    /* try { // try from 0243d79c to 0253d7a7 has its CatchHandler @ 0243d5dc */
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0243d794 with catch @ 0243d7a4
                        */
              *(undefined4 *)(lVar14 + (long)(int)uVar2 * 4 + 0x20) = uStack_64;
                    /* try { // try from 0243d7a8 to 0253d903 has its CatchHandler @ 0243d7a8
                       catch() { ... } // from try @ 0243d7a8 with catch @ 0243d7a8
                       catch() { ... } // from try @ 0243d978 with catch @ 0243d7a8
                       catch() { ... } // from try @ 0243da44 with catch @ 0243d7a8
                       catch() { ... } // from try @ 0243da70 with catch @ 0243d7a8
                       catch() { ... } // from try @ 0243da94 with catch @ 0243d7a8 */
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,uStack_64,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        if (iVar8 < iVar7) {
          uVar11 = System_Int32__ToString_482d750(&uStack_64,0);
          uVar11 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar11,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
          uVar13 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(uVar11,0);
          if ((uVar13 & 1) == 0) {
            uVar11 = System_Int32__ToString_482d750(&uStack_64,0);
            uVar11 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar11,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar11,1,0);
          }
        }
        uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((long)uVar16 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar16 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
    if ((uVar16 & 1) != 0) {
      if (param_1 == 0) goto LAB_0243d8d0;
      Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(param_1,0);
    }
    return lVar10;
  }
LAB_0243d8d0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

