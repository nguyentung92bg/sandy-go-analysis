/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro$$Level
int32_t Dino_BusSand_App_Meta_BoosterIntro__Level (int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro$$Level
   int32_t Dino_BusSand_App_Meta_BoosterIntro__Level (int32_t item, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_BoosterIntro__Level_2202754(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = PTR_DAT_04cac440;
  if ((bRam0000000004f9bcb2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cad218);
    FUN_02132f7c(PTR_DAT_04cad220);
    FUN_02132f7c(PTR_DAT_04cad228);
    FUN_02132f7c(PTR_DAT_04cad230);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bcb2 = 1;
  }
  puVar1 = PTR_DAT_04cab380;
  uStack_40 = 0;
                    /* try { // try from 023027f0 to 02402803 has its CatchHandler @ 0230281c */
  uStack_48 = 0;
  lStack_38 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 02302804 to 02402833 has its CatchHandler @ 023026f0 */
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_Economy__UnlockLevel_2202a00(param_1);
                    /* catch() { ... } // from try @ 023027f0 with catch @ 0230281c */
  if (*(char *)(*(long *)(*(long *)puVar1 + 0xb8) + 1) == '\0') {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cabaf8;
    if ((param_1 != 0x3eb) && (param_1 != 0x2711)) {
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04cb1c70 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_BoosterIntro__Migrate_2202ac4();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar2;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
        if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x1d0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
                    /* try { // try from 02302934 to 02402947 has its CatchHandler @ 02302960 */
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_48,lVar4,*(undefined8 *)PTR_DAT_04cad230);
        puVar2 = PTR_DAT_04cad220;
                    /* try { // try from 02302948 to 02402977 has its CatchHandler @ 02302834 */
        do {
          uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_48,*(undefined8 *)puVar2);
          if ((uVar5 & 1) == 0) {
            uVar6 = *(undefined8 *)PTR_DAT_04cad218;
            goto LAB_02302990;
          }
                    /* catch() { ... } // from try @ 02302934 with catch @ 02302960 */
          if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        } while (*(int *)(lStack_38 + 0x10) != param_1);
                    /* catch() { ... } // from try @ 02302a74 with catch @ 02302978 */
        uVar3 = *(undefined4 *)(lStack_38 + 0x18);
        uVar6 = *(undefined8 *)PTR_DAT_04cad218;
LAB_02302990:
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594(&uStack_48,uVar6);
      }
    }
  }
                    /* try { // try from 02302834 to 02402933 has its CatchHandler @ 02302834
                       catch() { ... } // from try @ 02302834 with catch @ 02302834
                       catch() { ... } // from try @ 02302948 with catch @ 02302834 */
  return uVar3;
}

