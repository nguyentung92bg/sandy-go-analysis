/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$OnDisable
void Dino_BusSand_App_UI_ScreenCover__OnDisable (Dino_BusSand_App_UI_ScreenCover_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$OnDisable
   void Dino_BusSand_App_UI_ScreenCover__OnDisable (Dino_BusSand_App_UI_ScreenCover_o* __this, const
   MethodInfo* method); */

uint Dino_BusSand_App_UI_ScreenCover__OnDisable_21fc914(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb19a8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc6ac with catch @ 022fc924
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc63c with catch @ 022fc928
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc598 with catch @ 022fc92c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc528 with catch @ 022fc930
                        */
  if ((bRam0000000004f9bc6d & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc690 with catch @ 022fc934
                        */
    FUN_02132f7c(PTR_DAT_04cb19e8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc620 with catch @ 022fc948
                        */
    FUN_02132f7c(PTR_DAT_04cb19a8);
    bRam0000000004f9bc6d = 1;
  }
  lVar3 = *(long *)puVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc57c with catch @ 022fc95c
                        */
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc50c with catch @ 022fc970
                        */
  if (lVar3 != 0) {
                    /* try { // try from 022fc984 to 023fc9b3 has its CatchHandler @ 022fc984
                       catch(type#1 @ 00000000) { ... } // from try @ 022fc984 with catch @ 022fc984
                       catch(type#1 @ 00000000) { ... } // from try @ 022fc9f4 with catch @ 022fc984
                        */
    uVar2 = System_Array__IndexOf_object__297e5c0
                      (*(undefined8 *)(lVar3 + 0x10),param_1,0,*(undefined4 *)(lVar3 + 0x18),
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04cb19e8
                                                                          + 0x20) + 0xc0) + 0xd0) +
                                            0x20) + 0xc0) + 0x150));
    if (-1 < (int)uVar2) {
      System_Collections_Generic_List_object___RemoveAt_3a833a0(lVar3,uVar2);
    }
    return ~uVar2 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

