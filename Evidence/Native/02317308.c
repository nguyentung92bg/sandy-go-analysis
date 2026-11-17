/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapContext
Dino_BusSand_App_Meta_GameTracking_IapScreen_o* Dino_BusSand_App_Meta_GameTracking__IapContext (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapContext
   Dino_BusSand_App_Meta_GameTracking_IapScreen_o* Dino_BusSand_App_Meta_GameTracking__IapContext
   (const MethodInfo* method); */

long Dino_BusSand_App_Meta_GameTracking__IapContext_2217308(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd67 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb2628);
    FUN_02132f7c(PTR_DAT_04cb2630);
    FUN_02132f7c(PTR_DAT_04cb2638);
    FUN_02132f7c(PTR_DAT_04cb2640);
    FUN_02132f7c(PTR_DAT_04cae0f0);
    FUN_02132f7c(PTR_DAT_04ca9b60);
    FUN_02132f7c(PTR_DAT_04cb2648);
    FUN_02132f7c(PTR_DAT_04cb2650);
    bRam0000000004f9bd67 = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x68);
  if (lVar6 != 0) {
    if (0 < *(int *)(lVar6 + 0x18)) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
        if (lVar6 == 0) goto LAB_023174b8;
      }
      uVar2 = *(int *)(lVar6 + 0x18) - 1;
      if (*(uint *)(lVar6 + 0x18) <= uVar2) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_48509f0
                  (0,uVar2,*(undefined8 *)PTR_DAT_04cb2638);
      }
      lVar4 = *(long *)(lVar6 + 0x10);
      if (lVar4 != 0) {
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          return *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2628);
    System_Object___ctor_4870e5c(lVar4,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_App_Meta_GameTracking__get_InGameNow_2217614();
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)PTR_DAT_04cb2648;
      if ((uVar5 & 1) == 0) {
        puVar1 = (undefined8 *)PTR_DAT_04cb2640;
      }
      *(undefined8 *)(lVar4 + 0x10) = *puVar1;
      thunk_FUN_02134474();
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)PTR_DAT_04cb2650;
      thunk_FUN_02134474();
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_04cae0f0;
      thunk_FUN_02134474();
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_04ca9b60;
      thunk_FUN_02134474();
      return lVar4;
    }
  }
LAB_023174b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

