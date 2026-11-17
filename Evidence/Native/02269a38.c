/* IL2CPP: Dino.BusSand.App.GameApp$$get_Home
Dino_BusSand_App_UI_HomePanel_o* Dino_BusSand_App_GameApp__get_Home (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$get_Home
   Dino_BusSand_App_UI_HomePanel_o* Dino_BusSand_App_GameApp__get_Home (Dino_BusSand_App_GameApp_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_App_GameApp__get_Home_2169a38(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02269a40 to 02369a4b has its CatchHandler @ 02269a54 */
                    /* catch() { ... } // from try @ 02269958 with catch @ 02269a4c
                       try { // try from 02269a4c to 02369b33 has its CatchHandler @ 02269484 */
                    /* catch() { ... } // from try @ 0226991c with catch @ 02269a50 */
                    /* catch() { ... } // from try @ 02269a40 with catch @ 02269a54 */
  if ((bRam0000000004f9b877 & 1) == 0) {
                    /* catch() { ... } // from try @ 02269878 with catch @ 02269a58 */
                    /* catch() { ... } // from try @ 02269690 with catch @ 02269a5c */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac850);
                    /* catch() { ... } // from try @ 02269688 with catch @ 02269a74 */
    bRam0000000004f9b877 = 1;
  }
                    /* catch() { ... } // from try @ 0226962c with catch @ 02269a78 */
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* catch() { ... } // from try @ 02269860 with catch @ 02269a8c
                       catch() { ... } // from try @ 0226990c with catch @ 02269a8c
                       catch() { ... } // from try @ 02269a10 with catch @ 02269a8c */
                    /* catch() { ... } // from try @ 02269784 with catch @ 02269a90 */
                    /* catch() { ... } // from try @ 0226977c with catch @ 02269a94 */
                    /* catch() { ... } // from try @ 02269720 with catch @ 02269a98 */
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 022695bc with catch @ 02269ac8 */
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* catch() { ... } // from try @ 022696f4 with catch @ 02269aac */
                    /* catch() { ... } // from try @ 022695cc with catch @ 02269ab0 */
  lVar4 = *(long *)PTR_DAT_04cac850;
  if (*(long *)(lVar4 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b78);
    FUN_02132f7c(PTR_DAT_04cb1b80);
    if (*(long *)(lVar4 + 0x38) == 0) {
      FUN_0216b4cc(lVar4);
    }
  }
  puVar1 = PTR_DAT_04cb1b80;
  if (*(long *)(lVar3 + 0x38) != 0) {
    iVar7 = *(int *)(*(long *)(lVar3 + 0x38) + 0x18);
    if (-1 < iVar7 + -1) {
      do {
        if (*(long *)(lVar3 + 0x38) == 0) goto LAB_02a45294;
        iVar7 = iVar7 + -1;
        uVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                          (*(long *)(lVar3 + 0x38),iVar7,*(undefined8 *)puVar1);
        lVar5 = **(long **)(lVar4 + 0x38);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0216b470(lVar5);
        }
        lVar5 = thunk_FUN_0216e7a0(uVar6,lVar5);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x2c) == '\0')) {
          return lVar5;
        }
      } while (0 < iVar7);
    }
    return 0;
  }
LAB_02a45294:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

