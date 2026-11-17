/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature.<>c__DisplayClass97_1$$<CollectHallCommands>b__1
System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_GiftPackFeature___c__DisplayClass97_1___CollectHallCommands_b__1 (Dino_BusSand_App_Meta_GiftPackFeature___c__DisplayClass97_1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature.<>c__DisplayClass97_1$$<CollectHallCommands>b__1
   System_Collections_IEnumerator_o*
   Dino_BusSand_App_Meta_GiftPackFeature___c__DisplayClass97_1___CollectHallCommands_b__1
   (Dino_BusSand_App_Meta_GiftPackFeature___c__DisplayClass97_1_o* __this, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_GiftPackFeature___c__DisplayClass97_1___CollectHallCommands_b__1_223e03c
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cb3610;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    if ((bRam0000000004f9becd & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb3610);
      bRam0000000004f9becd = 1;
    }
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Object___ctor_4870e5c(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = 0;
    *(long *)(lVar2 + 0x28) = lVar4;
    thunk_FUN_02134474((long *)(lVar2 + 0x28),lVar4);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),uVar3);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

