/* IL2CPP: Dino.BusSand.App.Iap.<>c__DisplayClass26_0$$<BuyStoreItem>b__0
void Dino_BusSand_App_Iap___c__DisplayClass26_0___BuyStoreItem_b__0 (Dino_BusSand_App_Iap___c__DisplayClass26_0_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap.<>c__DisplayClass26_0$$<BuyStoreItem>b__0
   void Dino_BusSand_App_Iap___c__DisplayClass26_0___BuyStoreItem_b__0
   (Dino_BusSand_App_Iap___c__DisplayClass26_0_o* __this, bool ok, const MethodInfo* method); */

void Dino_BusSand_App_Iap___c__DisplayClass26_0___BuyStoreItem_b__0_217c714
               (long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar3 = PTR_DAT_04cac498;
                    /* try { // try from 0227c730 to 0237c747 has its CatchHandler @ 0227c7b4 */
  if ((bRam0000000004f9b909 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 0227c768 to 0237c777 has its CatchHandler @ 0227c7b0 */
    FUN_02132f7c(PTR_DAT_04cac498);
                    /* try { // try from 0227c778 to 0237c7d3 has its CatchHandler @ 0227c6b4 */
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad268);
    FUN_02132f7c(PTR_DAT_04cad310);
                    /* catch() { ... } // from try @ 0227c768 with catch @ 0227c7b0 */
                    /* catch() { ... } // from try @ 0227c730 with catch @ 0227c7b4 */
    FUN_02132f7c(PTR_DAT_04cad338);
                    /* catch() { ... } // from try @ 0227c6d0 with catch @ 0227c7b8 */
    FUN_02132f7c(PTR_DAT_04cad340);
    FUN_02132f7c(PTR_DAT_04cad2e0);
    FUN_02132f7c(PTR_DAT_04cad348);
    FUN_02132f7c(PTR_DAT_04cad2e8);
    FUN_02132f7c(PTR_DAT_04cad350);
    bRam0000000004f9b909 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cad1f0;
  Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(0,0);
  if ((param_2 & 1) != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Iap__Deliver_217a7d4(uVar2,uVar13,uVar1);
    goto LAB_0227cb98;
  }
  plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
  puVar5 = PTR_DAT_04cad268;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cad268 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad268,*(undefined8 *)(*plVar6 + 0x40)),
     lVar10 == 0)) {
LAB_0227cbdc:
    uVar13 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar13,0);
  }
  if ((int)plVar6[3] == 0) {
LAB_0227cbd8:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* try { // try from 0227c898 to 0237c8d3 has its CatchHandler @ 0227c898
                       catch() { ... } // from try @ 0227c898 with catch @ 0227c898
                       catch() { ... } // from try @ 0227c904 with catch @ 0227c898
                       catch() { ... } // from try @ 0227c954 with catch @ 0227c898 */
  plVar6[4] = *(long *)puVar5;
  thunk_FUN_02134474();
  lVar10 = *(long *)(param_1 + 0x20);
  if ((lVar10 != 0) &&
     (lVar7 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
  goto LAB_0227cbdc;
  if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_0227cbd8;
                    /* try { // try from 0227c8d4 to 0237c903 has its CatchHandler @ 0227c978 */
  plVar6[5] = lVar10;
  thunk_FUN_02134474(plVar6 + 5,lVar10);
  if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0227c904 to 0237c927 has its CatchHandler @ 0227c898 */
  Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cad310,plVar6);
  lVar10 = *(long *)puVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar4;
  }
  lVar7 = *(long *)puVar3;
                    /* try { // try from 0227c928 to 0237c953 has its CatchHandler @ 0227c974 */
  uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x28);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  Dino_BusSand_App_Meta_GameTracking__IapFailed_22189dc(uVar2,uVar13,uVar1,0);
                    /* try { // try from 0227c954 to 0237c98b has its CatchHandler @ 0227c898 */
  uVar8 = System_String__op_Equality_46d1108
                    (*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20),
                     *(undefined8 *)PTR_DAT_04cad2e0,0);
  puVar3 = PTR_DAT_04caba50;
  if ((uVar8 & 1) == 0) {
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar4;
    }
    uVar8 = System_String__op_Equality_46d1108
                      (*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x20),
                       *(undefined8 *)PTR_DAT_04cad2e8,0);
    puVar3 = PTR_DAT_04caba50;
    if ((uVar8 & 1) == 0) goto LAB_0227cb98;
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
    }
    lVar10 = **(long **)(lVar10 + 0xb8);
    if (lVar10 == 0) goto LAB_0227cb98;
    lVar12 = *(long *)PTR_DAT_04ca9d18;
    lVar7 = *(long *)(lVar12 + 0x38);
    if (lVar7 == 0) {
      FUN_0216b4cc(lVar12);
      lVar7 = *(long *)(lVar12 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    uVar13 = **(undefined8 **)(lVar7 + 0xb8);
    puVar9 = (undefined8 *)PTR_DAT_04cad340;
    puVar11 = (undefined8 *)PTR_DAT_04cad348;
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
      puVar9 = (undefined8 *)PTR_DAT_04cad340;
      puVar11 = (undefined8 *)PTR_DAT_04cad348;
    }
  }
  else {
                    /* catch() { ... } // from try @ 0227c928 with catch @ 0227c974 */
                    /* catch() { ... } // from try @ 0227c8d4 with catch @ 0227c978 */
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
                    /* try { // try from 0227c998 to 0237c9ab has its CatchHandler @ 0227c9b4 */
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar10 = *(long *)puVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227c998 with catch @ 0227c9b4
                        */
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
    }
    lVar10 = **(long **)(lVar10 + 0xb8);
    if (lVar10 == 0) goto LAB_0227cb98;
    lVar12 = *(long *)PTR_DAT_04ca9d18;
    lVar7 = *(long *)(lVar12 + 0x38);
    if (lVar7 == 0) {
      FUN_0216b4cc(lVar12);
      lVar7 = *(long *)(lVar12 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    uVar13 = **(undefined8 **)(lVar7 + 0xb8);
    puVar9 = (undefined8 *)PTR_DAT_04cad350;
    puVar11 = (undefined8 *)PTR_DAT_04cad338;
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
      puVar9 = (undefined8 *)PTR_DAT_04cad350;
      puVar11 = (undefined8 *)PTR_DAT_04cad338;
    }
  }
  uVar13 = Dino_BusSand_App_UI_UiKit__T_2285e1c(*puVar9,*puVar11,uVar13,0);
  Dino_BusSand_App_GameApp__Toast_2166a6c(lVar10,uVar13,0);
LAB_0227cb98:
  lVar10 = *(long *)(param_1 + 0x28);
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0227cbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 0x18))
            (*(undefined8 *)(lVar10 + 0x40),param_2 & 1,*(undefined8 *)(lVar10 + 0x28));
  return;
}

