/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$DeviceTier
System_String_o* Dino_BusSand_App_Meta_JourneyTracking__DeviceTier (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$DeviceTier
   System_String_o* Dino_BusSand_App_Meta_JourneyTracking__DeviceTier (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_JourneyTracking__DeviceTier_221afd4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9bd89 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cb2800);
    FUN_02132f7c(PTR_DAT_04cb2808);
    FUN_02132f7c(PTR_DAT_04cb2810);
    bRam0000000004f9bd89 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar4 = Dino_BusSand_RenderQuality__Detect_238a384(0);
  puVar1 = (undefined8 *)PTR_DAT_04cb2800;
  if (iVar4 != 1) {
    puVar1 = (undefined8 *)PTR_DAT_04cb2810;
  }
  puVar2 = (undefined8 *)PTR_DAT_04cb2808;
  if (iVar4 != 0) {
    puVar2 = puVar1;
  }
  return *puVar2;
}

