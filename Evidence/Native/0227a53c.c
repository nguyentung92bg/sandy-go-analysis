/* IL2CPP: Dino.BusSand.App.Iap$$PurchasedCount
int32_t Dino_BusSand_App_Iap__PurchasedCount (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap$$PurchasedCount
   int32_t Dino_BusSand_App_Iap__PurchasedCount (int32_t storeItemId, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Iap__PurchasedCount_217a53c(int param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9b900 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad218);
    FUN_02132f7c(PTR_DAT_04cad220);
    FUN_02132f7c(PTR_DAT_04cad228);
    FUN_02132f7c(PTR_DAT_04cad230);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9b900 = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x148), lVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_38,lVar2,*(undefined8 *)PTR_DAT_04cad230);
    puVar1 = PTR_DAT_04cad220;
    do {
                    /* try { // try from 0227a62c to 0237a637 has its CatchHandler @ 0227a668 */
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_38,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        goto LAB_0227a660;
      }
                    /* try { // try from 0227a638 to 0237a683 has its CatchHandler @ 0227a530 */
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while (*(int *)(lStack_28 + 0x10) != param_1);
    uVar4 = *(undefined4 *)(lStack_28 + 0x18);
LAB_0227a660:
                    /* catch() { ... } // from try @ 0227a62c with catch @ 0227a668 */
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_38,*(undefined8 *)PTR_DAT_04cad218);
  }
                    /* try { // try from 0227a684 to 0237a6f7 has its CatchHandler @ 0227a684
                       catch() { ... } // from try @ 0227a684 with catch @ 0227a684
                       catch() { ... } // from try @ 0227a704 with catch @ 0227a684 */
  return uVar4;
}

