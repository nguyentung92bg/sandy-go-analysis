/* IL2CPP: Dino.BusSand.App.UI.KitPop$$OnDestroy
void Dino_BusSand_App_UI_KitPop__OnDestroy (Dino_BusSand_App_UI_KitPop_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPop$$OnDestroy
   void Dino_BusSand_App_UI_KitPop__OnDestroy (Dino_BusSand_App_UI_KitPop_o* __this, const
   MethodInfo* method); */

uint Dino_BusSand_App_UI_KitPop__OnDestroy_228f6a4(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb5110;
  if ((bRam0000000004f9c1af & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5110);
    FUN_02132f7c(PTR_DAT_04cb52e8);
    bRam0000000004f9c1af = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    uVar2 = System_Array__IndexOf_object__297e5c0
                      (*(undefined8 *)(lVar3 + 0x10),param_1,0,*(undefined4 *)(lVar3 + 0x18),
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04cb52e8
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

