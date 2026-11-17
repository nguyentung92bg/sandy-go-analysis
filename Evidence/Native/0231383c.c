/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$SandLeftPct
Il2CppObject* Dino_BusSand_App_Meta_GameTracking__SandLeftPct (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$SandLeftPct
   Il2CppObject* Dino_BusSand_App_Meta_GameTracking__SandLeftPct (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_GameTracking__SandLeftPct_221383c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_18;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd45 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bd45 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 02313920 with catch @ 02313884
                       catch() { ... } // from try @ 0231398c with catch @ 02313884 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_GameTracking__get_Gc_2210df0();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  uVar4 = 0;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_App_Meta_GameTracking__get_Gc_2210df0();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar6,0);
    uVar4 = 0;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x104) < 1) {
        uVar4 = 0;
      }
      else {
        uVar3 = Dino_BusSand_Core_StageEngine__get_SandLeftPermille_2426db8(lVar6,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
                    /* try { // try from 0231391c to 0241391f has its CatchHandler @ 0231398c */
        uStack_18 = Dino_BusSand_App_Meta_GameTracking__Tenths_2213950(uVar3);
                    /* try { // try from 02313920 to 02413987 has its CatchHandler @ 02313884 */
        uVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&uStack_18);
      }
    }
  }
  return uVar4;
}

