/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<>c__DisplayClass166_0$$<CollectHallCommands>b__0
System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_PassportFeature___c__DisplayClass166_0___CollectHallCommands_b__0 (Dino_BusSand_App_Meta_PassportFeature___c__DisplayClass166_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<>c__DisplayClass166_0$$<CollectHallCommands>b__0
   System_Collections_IEnumerator_o*
   Dino_BusSand_App_Meta_PassportFeature___c__DisplayClass166_0___CollectHallCommands_b__0
   (Dino_BusSand_App_Meta_PassportFeature___c__DisplayClass166_0_o* __this, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_PassportFeature___c__DisplayClass166_0___CollectHallCommands_b__0_224ae18
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cb3a78;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
                    /* try { // try from 0234ae20 to 0244ae2f has its CatchHandler @ 0234ae30 */
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    if ((bRam0000000004f9bf93 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb3a78);
      bRam0000000004f9bf93 = 1;
    }
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Object___ctor_4870e5c(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = 0;
    *(long *)(lVar2 + 0x20) = lVar4;
    thunk_FUN_02134474((long *)(lVar2 + 0x20),lVar4);
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),uVar3);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0234adb8 with catch @ 0234ae30
                       catch() { ... } // from try @ 0234ae20 with catch @ 0234ae30 */
  FUN_02133224();
}

