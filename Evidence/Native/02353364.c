/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$HasExternalIntro
bool Dino_BusSand_App_Meta_SystemOpenFeature__HasExternalIntro (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$HasExternalIntro
   bool Dino_BusSand_App_Meta_SystemOpenFeature__HasExternalIntro (int32_t id, const MethodInfo*
   method); */

bool Dino_BusSand_App_Meta_SystemOpenFeature__HasExternalIntro_2253364(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  
  puVar3 = PTR_DAT_04cb3d00;
  if ((bRam0000000004f9bfe2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3d30);
    FUN_02132f7c(PTR_DAT_04caf7b8);
    FUN_02132f7c(PTR_DAT_04caf788);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb3d00);
    bRam0000000004f9bfe2 = 1;
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey_3437520
                    (lVar5,param_1,*(undefined8 *)PTR_DAT_04cb3d30);
  if ((uVar6 & 1) == 0) {
    if (param_1 == 5) {
      iVar1 = *(int *)(*(long *)PTR_DAT_04cac668 + 0xe4);
      puVar2 = (undefined8 *)PTR_DAT_04caf788;
    }
    else {
      if (param_1 != 4) goto LAB_02353444;
      iVar1 = *(int *)(*(long *)PTR_DAT_04cac668 + 0xe4);
      puVar2 = (undefined8 *)PTR_DAT_04caf7b8;
    }
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*puVar2);
    bVar4 = lVar5 != 0;
  }
  else {
LAB_02353444:
    bVar4 = false;
  }
  return bVar4;
}

