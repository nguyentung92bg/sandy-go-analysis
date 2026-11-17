/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<Fresh>d__48$$MoveNext
bool Dino_BusSand_Cheat_AutoQa__Fresh_d__48__MoveNext (Dino_BusSand_Cheat_AutoQa__Fresh_d__48_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<Fresh>d__48$$MoveNext
   bool Dino_BusSand_Cheat_AutoQa__Fresh_d__48__MoveNext (Dino_BusSand_Cheat_AutoQa__Fresh_d__48_o*
   __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa__Fresh_d__48__MoveNext_234c970(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  
  if ((bRam0000000004f9c70a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacfe0);
    FUN_02132f7c(PTR_DAT_04cac870);
    bRam0000000004f9c70a = 1;
  }
  puVar3 = PTR_DAT_04cb9568;
  puVar2 = PTR_DAT_04cabaf8;
  iVar1 = *(int *)(param_1 + 0x10);
  uVar5 = 0;
  if (iVar1 == 2) {
    uVar7 = 0xffffffff;
LAB_0244cc2c:
    *(undefined4 *)(param_1 + 0x10) = uVar7;
                    /* try { // try from 0244cc3c to 0254cc3f has its CatchHandler @ 0244cc58 */
    return uVar5;
  }
                    /* try { // try from 0244c9f0 to 0254c9f7 has its CatchHandler @ 0244ca7c */
  if (iVar1 == 1) {
                    /* try { // try from 0244ca98 to 0254ca9b has its CatchHandler @ 0244cab4 */
                    /* try { // try from 0244ca9c to 0254cab7 has its CatchHandler @ 0244c938 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 0244ca98 with catch @ 0244cab4 */
                    /* try { // try from 0244cab8 to 0254cabf has its CatchHandler @ 0244cac8 */
    Dino_BusSand_App_Meta_Profile__DeleteSave_2271234(0);
                    /* try { // try from 0244cac0 to 0254cacb has its CatchHandler @ 0244c938 */
    Dino_BusSand_App_Meta_Profile__Load_226fa7c(0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0244cab8 with catch @ 0244cac8
                        */
                    /* try { // try from 0244cacc to 0254cb9f has its CatchHandler @ 0244cacc
                       catch() { ... } // from try @ 0244cacc with catch @ 0244cacc
                       catch() { ... } // from try @ 0244cba8 with catch @ 0244cacc
                       catch() { ... } // from try @ 0244cc10 with catch @ 0244cacc
                       catch() { ... } // from try @ 0244cc40 with catch @ 0244cacc
                       catch() { ... } // from try @ 0244cc64 with catch @ 0244cacc */
    Dino_BusSand_App_Meta_Profile__SetFlag_227375c(*(undefined8 *)PTR_DAT_04cac870,1,0);
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    cVar4 = cRam0000000004f9b894;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + 0x138) = 3;
      if (cVar4 == '\0') {
        FUN_02132f7c(puVar2);
        lVar6 = *(long *)puVar2;
        cRam0000000004f9b894 = '\x01';
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar2;
      }
      lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      lVar6 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
      if (lVar8 != 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x20);
        *(long *)(lVar8 + 0xa0) = lVar6 + -0xd2f00;
        Dino_BusSand_App_Meta_Profile__SetLevel_22735a8(uVar7,0);
        if (*(int *)(*(long *)PTR_DAT_04cac458 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_FeatureGate__ResetDefaults_220bbec(0);
                    /* try { // try from 0244cba0 to 0254cba7 has its CatchHandler @ 0244cc20 */
        Dino_BusSand_App_Meta_OfferScheduler__ResetForTests_220c814(0);
                    /* try { // try from 0244cba8 to 0254cc03 has its CatchHandler @ 0244cacc */
        if (*(int *)(*(long *)PTR_DAT_04cacfe0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Segments__Compute_220f784(0);
        if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Ads__OnColdStart_216a6d8(0);
        Dino_BusSand_App_Meta_Profile__Save_226c548(0);
        if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 0244cc04 to 0254cc07 has its CatchHandler @ 0244cc1c */
                    /* try { // try from 0244cc08 to 0254cc0b has its CatchHandler @ 0244cc18 */
        uVar5 = Dino_BusSand_Cheat_AutoQa__Frames_2342f28(3);
                    /* try { // try from 0244cc0c to 0254cc0f has its CatchHandler @ 0244cc14 */
                    /* try { // try from 0244cc10 to 0254cc3b has its CatchHandler @ 0244cacc */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244cc0c with catch @ 0244cc14
                        */
        *(undefined8 *)(param_1 + 0x18) = uVar5;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244cc08 with catch @ 0244cc18
                        */
        thunk_FUN_02134474();
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244cc04 with catch @ 0244cc1c
                        */
        uVar5 = 1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244cba0 with catch @ 0244cc20
                        */
        uVar7 = 2;
        goto LAB_0244cc2c;
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
                    /* try { // try from 0244c9f8 to 0254ca5f has its CatchHandler @ 0244c938 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0x38) != '\0') {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar6 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
        if (lVar6 == 0) goto LAB_0244cc40;
        Dino_BusSand_App_GameApp__GoHall_21678c4(lVar6,0,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Cheat_AutoQa__StopHomeQueue_2342264();
                    /* try { // try from 0244ca60 to 0254ca63 has its CatchHandler @ 0244ca78 */
      lVar6 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
                    /* try { // try from 0244ca64 to 0254ca67 has its CatchHandler @ 0244ca74 */
      if (lVar6 != 0) {
                    /* try { // try from 0244ca68 to 0254ca6b has its CatchHandler @ 0244ca70 */
                    /* try { // try from 0244ca6c to 0254ca97 has its CatchHandler @ 0244c938 */
        Dino_BusSand_App_UI_UIManager__CloseAllPopups_21feed4(lVar6,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244ca68 with catch @ 0244ca70
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244ca64 with catch @ 0244ca74
                        */
        uVar5 = Dino_BusSand_Cheat_AutoQa__Frames_2342f28(3);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244ca60 with catch @ 0244ca78
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244c9f0 with catch @ 0244ca7c
                        */
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_02134474();
        uVar7 = 1;
        uVar5 = 1;
        goto LAB_0244cc2c;
      }
    }
  }
LAB_0244cc40:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0244cc40 to 0254cc5b has its CatchHandler @ 0244cacc */
  FUN_02133224();
}

