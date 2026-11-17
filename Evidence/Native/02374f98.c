/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$get_EventNames
System_Collections_Generic_IEnumerable_string__o* Dino_BusSand_App_Meta_TrackingPlan__get_EventNames (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$get_EventNames
   System_Collections_Generic_IEnumerable_string__o*
   Dino_BusSand_App_Meta_TrackingPlan__get_EventNames (const MethodInfo* method); */

long Dino_BusSand_App_Meta_TrackingPlan__get_EventNames_2274f98(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04cb2240;
  if ((bRam0000000004f9c118 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4868);
    FUN_02132f7c(PTR_DAT_04cb2240);
    bRam0000000004f9c118 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x68);
  if (lVar2 != 0) {
    lVar5 = *(long *)PTR_DAT_04cb4868;
    lVar3 = *(long *)(lVar2 + 0x38);
    if (lVar3 == 0) {
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0xd0) + 0x135) & 1) ==
          0) {
        FUN_0216b470();
      }
      uVar4 = thunk_FUN_0216e89c();
      System_Collections_Generic_Dictionary_KeyCollection_object__object____ctor_38f9e4c
                (uVar4,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0xd8));
      *(undefined8 *)(lVar2 + 0x38) = uVar4;
      thunk_FUN_02134474((long *)(lVar2 + 0x38),uVar4);
      lVar3 = *(long *)(lVar2 + 0x38);
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

