/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature.<>c__DisplayClass19_0$$<CollectHallCommands>b__0
System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_SystemOpenFeature___c__DisplayClass19_0___CollectHallCommands_b__0 (Dino_BusSand_App_Meta_SystemOpenFeature___c__DisplayClass19_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature.<>c__DisplayClass19_0$$<CollectHallCommands>b__0
   System_Collections_IEnumerator_o*
   Dino_BusSand_App_Meta_SystemOpenFeature___c__DisplayClass19_0___CollectHallCommands_b__0
   (Dino_BusSand_App_Meta_SystemOpenFeature___c__DisplayClass19_0_o* __this, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_SystemOpenFeature___c__DisplayClass19_0___CollectHallCommands_b__0_2253984
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_04cb3d00;
                    /* try { // try from 023539a0 to 024539c3 has its CatchHandler @ 02353e2c */
  if ((bRam0000000004f9bfe6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3d00);
    bRam0000000004f9bfe6 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
                    /* try { // try from 023539c4 to 02453a13 has its CatchHandler @ 023535a0 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb3d38;
  if ((bRam0000000004f9bfe3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3d38);
    bRam0000000004f9bfe3 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar3,0);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  return lVar3;
}

