/* IL2CPP: Dino.BusSand.App.Iap$$DeliverRestored
void Dino_BusSand_App_Iap__DeliverRestored (int32_t storeItemId, System_Collections_Generic_Dictionary_string__object__o* row, System_String_o* pid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap$$DeliverRestored
   void Dino_BusSand_App_Iap__DeliverRestored (int32_t storeItemId,
   System_Collections_Generic_Dictionary_string__object__o* row, System_String_o* pid, const
   MethodInfo* method); */

void Dino_BusSand_App_Iap__DeliverRestored_217b758
               (undefined4 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar3 = PTR_DAT_04cabaf8;
                    /* try { // try from 0227b768 to 0237b783 has its CatchHandler @ 0227b9c8 */
  if ((bRam0000000004f9b905 & 1) == 0) {
                    /* try { // try from 0227b788 to 0237b78b has its CatchHandler @ 0227b9e4 */
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cad1f0);
                    /* try { // try from 0227b7b0 to 0237b7c7 has its CatchHandler @ 0227b9b8 */
    FUN_02132f7c(PTR_DAT_04cad240);
    FUN_02132f7c(PTR_DAT_04cad248);
    FUN_02132f7c(PTR_DAT_04cad258);
    FUN_02132f7c(PTR_DAT_04cad260);
    FUN_02132f7c(PTR_DAT_04ca9c20);
                    /* try { // try from 0227b7f0 to 0237b80b has its CatchHandler @ 0227b9cc */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad268);
    FUN_02132f7c(PTR_DAT_04cad2c8);
    FUN_02132f7c(PTR_DAT_04cad238);
    FUN_02132f7c(PTR_DAT_04cad2d0);
                    /* try { // try from 0227b828 to 0237b837 has its CatchHandler @ 0227b9a4 */
    bRam0000000004f9b905 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* try { // try from 0227b858 to 0237b85b has its CatchHandler @ 0227b9e4 */
    cRam0000000004f9b894 = '\x01';
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_04cad238;
  puVar4 = PTR_DAT_04cad1f0;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 == 0) goto LAB_0227bb00;
                    /* try { // try from 0227b880 to 0237b897 has its CatchHandler @ 0227b9b0 */
  *(undefined1 *)(lVar7 + 0xdc) = 1;
  uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(param_2,*(undefined8 *)puVar2,0);
                    /* try { // try from 0227b8ac to 0237b8af has its CatchHandler @ 0227b9e4 */
  iVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar8,0,0);
  if (0 < iVar6) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar6 = Dino_BusSand_App_Iap__PurchasedCount_217a53c(param_1);
    if (iVar6 == 0) {
                    /* try { // try from 0227b8d4 to 0237b8eb has its CatchHandler @ 0227b9b4 */
      lVar12 = *(long *)(lVar7 + 0x148);
      if (lVar12 == 0) {
        uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad260);
        System_Collections_Generic_List_object____ctor_3a8138c
                  (uVar8,*(undefined8 *)PTR_DAT_04cad258);
        *(undefined8 *)(lVar7 + 0x148) = uVar8;
        thunk_FUN_02134474(lVar7 + 0x148,uVar8);
        lVar12 = *(long *)(lVar7 + 0x148);
      }
                    /* try { // try from 0227b91c to 0237b91f has its CatchHandler @ 0227b9e4 */
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad240);
      Dino_BusSand_App_Meta_IntPair___ctor_226f05c(lVar7,0);
      if (lVar7 == 0) goto LAB_0227bb00;
      *(undefined4 *)(lVar7 + 0x10) = param_1;
      *(undefined8 *)(lVar7 + 0x18) = 1;
      if (lVar12 == 0) goto LAB_0227bb00;
                    /* try { // try from 0227b944 to 0237b963 has its CatchHandler @ 0227b9bc */
      lVar10 = *(long *)(lVar12 + 0x10);
      lVar11 = *(long *)PTR_DAT_04cad248;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_0227bb00;
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar9 = lVar7;
                    /* try { // try from 0227b988 to 0237b99f has its CatchHandler @ 0227b9ac */
        thunk_FUN_02134474(plVar9,lVar7);
      }
      else {
                    /* try { // try from 0227b9a0 to 0237ba1b has its CatchHandler @ 0227b2a0 */
                    /* catch() { ... } // from try @ 0227b828 with catch @ 0227b9a4 */
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar12,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  puVar5 = PTR_DAT_04cad2c8;
  puVar2 = PTR_DAT_04ca9af8;
                    /* catch() { ... } // from try @ 0227b70c with catch @ 0227b9a8 */
                    /* catch() { ... } // from try @ 0227b988 with catch @ 0227b9ac */
                    /* catch() { ... } // from try @ 0227b880 with catch @ 0227b9b0 */
                    /* catch() { ... } // from try @ 0227b8d4 with catch @ 0227b9b4 */
                    /* catch() { ... } // from try @ 0227b7b0 with catch @ 0227b9b8 */
                    /* catch() { ... } // from try @ 0227b944 with catch @ 0227b9bc */
                    /* catch() { ... } // from try @ 0227b56c with catch @ 0227b9c0 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0227b648 with catch @ 0227b9c4 */
    thunk_FUN_0218fdac();
  }
                    /* catch() { ... } // from try @ 0227b768 with catch @ 0227b9c8 */
  puVar3 = PTR_DAT_04ca9c20;
                    /* catch() { ... } // from try @ 0227b7f0 with catch @ 0227b9cc */
                    /* catch() { ... } // from try @ 0227b6d4 with catch @ 0227b9d0 */
                    /* catch() { ... } // from try @ 0227b690 with catch @ 0227b9d4 */
  Dino_BusSand_App_Meta_Profile__Save_226c548(0);
                    /* catch() { ... } // from try @ 0227b5d0 with catch @ 0227b9d8 */
                    /* catch() { ... } // from try @ 0227b4e4 with catch @ 0227b9dc */
                    /* catch() { ... } // from try @ 0227b398 with catch @ 0227b9e0 */
                    /* catch() { ... } // from try @ 0227b2c0 with catch @ 0227b9e4
                       catch() { ... } // from try @ 0227b620 with catch @ 0227b9e4
                       catch() { ... } // from try @ 0227b788 with catch @ 0227b9e4
                       catch() { ... } // from try @ 0227b858 with catch @ 0227b9e4
                       catch() { ... } // from try @ 0227b8ac with catch @ 0227b9e4
                       catch() { ... } // from try @ 0227b91c with catch @ 0227b9e4 */
  uVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar5,param_3,0);
                    /* catch() { ... } // from try @ 0227b3c4 with catch @ 0227b9e8 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
                    /* catch() { ... } // from try @ 0227b2d4 with catch @ 0227ba00
                       catch() { ... } // from try @ 0227b468 with catch @ 0227ba00 */
  UnityEngine_Debug__Log_4360fc8(uVar8,0);
  plVar9 = (long *)FUN_02133068(*(undefined8 *)puVar3,2);
  puVar3 = PTR_DAT_04cad268;
  if (plVar9 == (long *)0x0) {
LAB_0227bb00:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cad268 != 0) &&
     (lVar7 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad268,*(undefined8 *)(*plVar9 + 0x40)),
     lVar7 == 0)) {
LAB_0227bb08:
    uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar8,0);
  }
  if ((int)plVar9[3] != 0) {
    plVar9[4] = *(long *)puVar3;
    thunk_FUN_02134474();
    if ((param_3 != 0) &&
       (lVar7 = thunk_FUN_0216e7a0(param_3,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
    goto LAB_0227bb08;
    puVar2 = PTR_DAT_04cad2d0;
    puVar3 = PTR_DAT_04cac5c0;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
      plVar9[5] = param_3;
      thunk_FUN_02134474(plVar9 + 5,param_3);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar2,plVar9);
      lVar7 = *(long *)puVar4;
                    /* try { // try from 0227bac0 to 0237bb33 has its CatchHandler @ 0227bac0
                       catch() { ... } // from try @ 0227bac0 with catch @ 0227bac0
                       catch() { ... } // from try @ 0227bb48 with catch @ 0227bac0 */
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar4;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),param_1,*(undefined8 *)(lVar7 + 0x28));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

