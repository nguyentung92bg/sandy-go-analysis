/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Counter
int32_t Dino_BusSand_App_Meta_Profile__Counter (System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Counter
   int32_t Dino_BusSand_App_Meta_Profile__Counter (System_String_o* name, const MethodInfo* method);
    */

undefined4 Dino_BusSand_App_Meta_Profile__Counter_2273994(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02373840 with catch @ 02373994
                       catch(type#1 @ 049bb748) { ... } // from try @ 02373964 with catch @ 02373994
                        */
                    /* try { // try from 023739ac to 024739c3 has its CatchHandler @ 02373a68 */
  if ((bRam0000000004f9c10b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad218);
                    /* try { // try from 023739c4 to 02473a53 has its CatchHandler @ 023737b8 */
    FUN_02132f7c(PTR_DAT_04cad220);
    FUN_02132f7c(PTR_DAT_04cad228);
    FUN_02132f7c(PTR_DAT_04cad230);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c10b = 1;
  }
  puVar1 = PTR_DAT_04cabaf8;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_1 != (long *)0x0) {
    iVar3 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
                    /* try { // try from 02373a54 to 02473a63 has its CatchHandler @ 02373a68 */
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
                    /* try { // try from 02373a64 to 02473a6b has its CatchHandler @ 023737b8 */
      lVar4 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_04cad220;
    puVar1 = PTR_DAT_04cad218;
                    /* catch() { ... } // from try @ 023739ac with catch @ 02373a68
                       catch() { ... } // from try @ 02373a54 with catch @ 02373a68 */
                    /* try { // try from 02373a6c to 02473a6f has its CatchHandler @ 02373a78 */
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
                    /* try { // try from 02373a70 to 02473a7b has its CatchHandler @ 023737b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02373a6c with catch @ 02373a78
                        */
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x120), lVar4 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_48,lVar4,*(undefined8 *)PTR_DAT_04cad230);
      do {
        uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_48,*(undefined8 *)puVar2);
        if ((uVar5 & 1) == 0) {
          uVar6 = 0;
          goto LAB_02373ad8;
        }
        if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      } while (*(int *)(lStack_38 + 0x10) != iVar3);
      uVar6 = *(undefined4 *)(lStack_38 + 0x18);
LAB_02373ad8:
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_48,*(undefined8 *)puVar1);
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

