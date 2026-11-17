/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$get_Gc
Dino_BusSand_App_Gameplay_GameplayController_o* Dino_BusSand_Cheat_AutoQa__get_Gc (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$get_Gc
   Dino_BusSand_App_Gameplay_GameplayController_o* Dino_BusSand_Cheat_AutoQa__get_Gc (const
   MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c686 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c686 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  uVar3 = 0;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = *(undefined8 *)(lVar5 + 0x20);
  }
  return uVar3;
}

