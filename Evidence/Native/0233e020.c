/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature.<>c__DisplayClass97_0$$<CollectHallCommands>b__0
System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_GiftPackFeature___c__DisplayClass97_0___CollectHallCommands_b__0 (Dino_BusSand_App_Meta_GiftPackFeature___c__DisplayClass97_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature.<>c__DisplayClass97_0$$<CollectHallCommands>b__0
   System_Collections_IEnumerator_o*
   Dino_BusSand_App_Meta_GiftPackFeature___c__DisplayClass97_0___CollectHallCommands_b__0
   (Dino_BusSand_App_Meta_GiftPackFeature___c__DisplayClass97_0_o* __this, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_GiftPackFeature___c__DisplayClass97_0___CollectHallCommands_b__0_223e020
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04cb3608;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    if ((bRam0000000004f9becc & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb3608);
      bRam0000000004f9becc = 1;
    }
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Object___ctor_4870e5c(lVar3,0);
    *(undefined4 *)(lVar3 + 0x10) = 0;
    *(long *)(lVar3 + 0x20) = lVar4;
    thunk_FUN_02134474((long *)(lVar3 + 0x20),lVar4);
    *(undefined4 *)(lVar3 + 0x28) = uVar1;
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

