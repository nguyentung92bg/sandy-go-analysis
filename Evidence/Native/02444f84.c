/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<LivesChecks>b__37_7
bool Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_7 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<LivesChecks>b__37_7
   bool Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_7 (Dino_BusSand_Cheat_AutoQa___c_o*
   __this, const MethodInfo* method); */

uint Dino_BusSand_Cheat_AutoQa___c___LivesChecks_b__37_7_2344f84(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_04cb9568;
                    /* try { // try from 02444f8c to 02544fbf has its CatchHandler @ 02444d0c */
  if ((bRam0000000004f9c6c1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cb97a8);
    bRam0000000004f9c6c1 = 1;
  }
                    /* try { // try from 02444fc0 to 02544fc3 has its CatchHandler @ 02444fd0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02444f80 with catch @ 02444fc4
                       try { // try from 02444fc4 to 02545003 has its CatchHandler @ 02444d0c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02444eec with catch @ 02444fc8
                        */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02444ee0 with catch @ 02444fcc
                        */
    thunk_FUN_0218fdac();
  }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02444fc0 with catch @ 02444fd0
                        */
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02444e84 with catch @ 02444fd4
                        */
  if (lVar3 != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02444e78 with catch @ 02444fd8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02444ea4 with catch @ 02444fdc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02444e98 with catch @ 02444fe0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02444e58 with catch @ 02444fe4
                        */
    lVar5 = *(long *)PTR_DAT_04cb97a8;
    puVar6 = *(undefined8 **)(lVar5 + 0x38);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02444e48 with catch @ 02444fe8
                        */
    if (puVar6 == (undefined8 *)0x0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      puVar6 = *(undefined8 **)(lVar5 + 0x38);
      if (puVar6 == (undefined8 *)0x0) {
        FUN_0216b4cc(lVar5);
        puVar6 = *(undefined8 **)(lVar5 + 0x38);
      }
    }
    uVar4 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8(lVar3,*puVar6);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    puVar1 = PTR_DAT_04ca9ae8;
    if ((bRam0000000004fa8638 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
      bRam0000000004fa8638 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar4,0);
    return (uVar2 ^ 0xffffffff) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

