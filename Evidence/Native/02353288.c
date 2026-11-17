/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$ExternalIntro
System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_SystemOpenFeature__ExternalIntro (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$ExternalIntro
   System_Collections_IEnumerator_o* Dino_BusSand_App_Meta_SystemOpenFeature__ExternalIntro (int32_t
   id, const MethodInfo* method); */

long Dino_BusSand_App_Meta_SystemOpenFeature__ExternalIntro_2253288(int param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000004f9bfe1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf7b8);
    FUN_02132f7c(PTR_DAT_04caf788);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bfe1 = 1;
  }
  if (param_1 == 5) {
    if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)PTR_DAT_04caf788);
    puVar1 = PTR_DAT_04cb4168;
    if (lVar3 != 0) {
      if ((bRam0000000004f9c015 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb4168,0);
        bRam0000000004f9c015 = 1;
      }
      lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Object___ctor_4870e5c(lVar2,0);
      *(undefined4 *)(lVar2 + 0x10) = 0;
      *(long *)(lVar2 + 0x20) = lVar3;
      thunk_FUN_02134474((long *)(lVar2 + 0x20),lVar3);
      return lVar2;
    }
  }
  else if (param_1 == 4) {
    if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)PTR_DAT_04caf7b8);
    puVar1 = PTR_DAT_04cb2ce8;
    if (lVar3 != 0) {
      if ((bRam0000000004f9bde4 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb2ce8,0);
        bRam0000000004f9bde4 = 1;
      }
      lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Object___ctor_4870e5c(lVar2,0);
      *(undefined4 *)(lVar2 + 0x10) = 0;
      *(long *)(lVar2 + 0x20) = lVar3;
      thunk_FUN_02134474((long *)(lVar2 + 0x20),lVar3);
      return lVar2;
    }
  }
  return 0;
}

