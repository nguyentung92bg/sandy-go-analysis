/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$get_Features
System_Collections_Generic_IReadOnlyList_ILiveFeature__o* Dino_BusSand_App_Meta_LiveOps__get_Features (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$get_Features
   System_Collections_Generic_IReadOnlyList_ILiveFeature__o*
   Dino_BusSand_App_Meta_LiveOps__get_Features (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_LiveOps__get_Features_2240e28(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bf01 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bf01 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}

